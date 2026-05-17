/*
 * XREFs of AVrfpLoadAndInitializeProvider @ 0x1800D6CF8
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800D5F68 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x180010440 (RtlAppendUnicodeStringToString.c)
 *     LdrpInitializeDllPath @ 0x1800121B8 (LdrpInitializeDllPath.c)
 *     RtlAppendUnicodeToString @ 0x180013C90 (RtlAppendUnicodeToString.c)
 *     LdrpLoadDll @ 0x1800153AC (LdrpLoadDll.c)
 *     LdrpCallInitRoutine @ 0x1800188C4 (LdrpCallInitRoutine.c)
 *     RtlImageNtHeader @ 0x180031C20 (RtlImageNtHeader.c)
 *     DbgPrint @ 0x18005C3E0 (DbgPrint.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 */

char __fastcall AVrfpLoadAndInitializeProvider(__int64 a1)
{
  char v2; // si
  unsigned int v3; // edx
  unsigned int v4; // ecx
  _WORD *v5; // rax
  void *v6; // rsi
  int Dll; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v14; // [rsp+48h] [rbp-C0h] BYREF
  void *v15; // [rsp+50h] [rbp-B8h]
  __int64 v16; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v17[16]; // [rsp+60h] [rbp-A8h] BYREF

  v2 = 0;
  if ( (AVrfpDebug & 1) != 0 )
    DbgPrint("AVRF: verifier dll `%ws' \n", *(_QWORD *)(a1 + 24));
  v3 = *(unsigned __int16 *)(a1 + 16) >> 1;
  v4 = 0;
  if ( v3 )
  {
    v5 = *(_WORD **)(a1 + 24);
    while ( *v5 != 92 && *v5 != 47 )
    {
      ++v4;
      ++v5;
      if ( v4 >= v3 )
        goto LABEL_10;
    }
    v2 = 1;
  }
LABEL_10:
  if ( v2 == 1 )
  {
    DbgPrint("AVRF: Cannot load %ws from arbitrary location\n", *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 24));
  }
  else
  {
    v15 = &unk_180154190;
    v14 = 34078720;
    RtlAppendUnicodeToString((unsigned __int16 *)&v14, (_WORD *)0x7FFE0030);
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v14, SlashSystem32SlashString);
    v6 = v15;
    LdrpInitializeDllPath(0LL, (__int64)v15, v17);
    Dll = LdrpLoadDll(a1 + 16, (int)v17, 0, 0, (__int64)&v16);
    if ( Dll >= 0 )
    {
      v8 = v16;
      *(_QWORD *)(a1 + 32) = v16;
      v9 = RtlImageNtHeader(*(_QWORD *)(v8 + 48));
      if ( v9 )
      {
        if ( (*(_WORD *)(v9 + 22) & 0x2000) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 32) + 104LL) |= 0x400u;
          v11 = *(_QWORD *)(a1 + 32);
          v12 = *(_QWORD *)(v11 + 56);
          if ( v12 )
          {
            LdrpCallInitRoutine(v12, *(_QWORD *)(v11 + 48), 4);
            DbgPrint("AVRF: provider %ws did not initialize correctly \n", *(_QWORD *)(a1 + 24));
          }
          else
          {
            DbgPrint("AVRF: cannot find an entry point for provider %ws \n", *(_QWORD *)(a1 + 24), v10);
          }
        }
        else
        {
          DbgPrint("AVRF: provider %ws is not a DLL image \n", *(_QWORD *)(a1 + 24));
        }
      }
    }
    else
    {
      DbgPrint(
        "AVRF: %ws: failed to load provider `%ws' (status %08X) from %ws\n",
        *(_QWORD *)(qword_1801523D0 + 96),
        *(_QWORD *)(a1 + 24),
        (unsigned int)Dll,
        v6);
    }
  }
  return 0;
}
