/*
 * XREFs of AVrfpLoadAndInitializeProvider @ 0x1800D6DB8
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800D6028 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x180010430 (RtlAppendUnicodeStringToString.c)
 *     LdrpInitializeDllPath @ 0x1800121A8 (LdrpInitializeDllPath.c)
 *     RtlAppendUnicodeToString @ 0x180013C80 (RtlAppendUnicodeToString.c)
 *     LdrpLoadDll @ 0x18001539C (LdrpLoadDll.c)
 *     LdrpCallInitRoutine @ 0x1800188B4 (LdrpCallInitRoutine.c)
 *     RtlImageNtHeader @ 0x180031C10 (RtlImageNtHeader.c)
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 */

char __fastcall AVrfpLoadAndInitializeProvider(__int64 a1)
{
  char v2; // si
  unsigned int v3; // edx
  unsigned int v4; // ecx
  _WORD *v5; // rax
  wchar_t *Buffer; // rsi
  int Dll; // eax
  __int64 v8; // rcx
  PIMAGE_NT_HEADERS v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+58h] [rbp-B0h] BYREF
  const WCHAR *v16[16]; // [rsp+60h] [rbp-A8h] BYREF

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
    Destination.Buffer = (wchar_t *)&unk_180154190;
    *(_DWORD *)&Destination.Length = 34078720;
    RtlAppendUnicodeToString(&Destination, (PCWSTR)0x7FFE0030);
    RtlAppendUnicodeStringToString(&Destination, &SlashSystem32SlashString);
    Buffer = Destination.Buffer;
    LdrpInitializeDllPath(0LL, Destination.Buffer, v16);
    Dll = LdrpLoadDll(a1 + 16, (__int64)v16, 0, 0LL, (__int64)&v15);
    if ( Dll >= 0 )
    {
      v8 = v15;
      *(_QWORD *)(a1 + 32) = v15;
      v9 = RtlImageNtHeader(*(PVOID *)(v8 + 48));
      if ( v9 )
      {
        if ( (v9->FileHeader.Characteristics & 0x2000) != 0 )
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
        Buffer);
    }
  }
  return 0;
}
