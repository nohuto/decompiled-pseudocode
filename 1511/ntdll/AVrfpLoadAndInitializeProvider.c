/*
 * XREFs of AVrfpLoadAndInitializeProvider @ 0x1800CED88
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800CDFDC (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x18000E310 (RtlAppendUnicodeStringToString.c)
 *     LdrpInitializeDllPath @ 0x1800110C8 (LdrpInitializeDllPath.c)
 *     LdrpLoadDll @ 0x18001190C (LdrpLoadDll.c)
 *     LdrpCallInitRoutine @ 0x18001527C (LdrpCallInitRoutine.c)
 *     RtlAppendUnicodeToString @ 0x180019AF0 (RtlAppendUnicodeToString.c)
 *     RtlImageNtHeader @ 0x180032600 (RtlImageNtHeader.c)
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 */

char __fastcall AVrfpLoadAndInitializeProvider(__int64 a1)
{
  char v2; // di
  char v3; // si
  char v4; // r14
  unsigned int v5; // edx
  unsigned int v6; // ecx
  _WORD *v7; // rax
  unsigned __int16 *Buffer; // rsi
  int Dll; // eax
  __int64 v10; // rcx
  PIMAGE_NT_HEADERS v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  _RTL_DYNAMIC_HASH_TABLE *v14; // rcx
  _DWORD *v15; // rsi
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD *v18; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v20[16]; // [rsp+60h] [rbp-A8h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = 1;
  if ( (AVrfpDebug & 1) != 0 )
    DbgPrint("AVRF: verifier dll `%ws' \n", *(_QWORD *)(a1 + 24));
  v5 = *(unsigned __int16 *)(a1 + 16) >> 1;
  v6 = 0;
  if ( v5 )
  {
    v7 = *(_WORD **)(a1 + 24);
    while ( *v7 != 92 && *v7 != 47 )
    {
      ++v6;
      ++v7;
      if ( v6 >= v5 )
        goto LABEL_10;
    }
    v3 = 1;
  }
LABEL_10:
  if ( v3 == 1 )
  {
    DbgPrint("AVRF: Cannot load %ws from arbitrary location\n", *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 24));
    return 0;
  }
  Destination.Buffer = (unsigned __int16 *)&unk_180147060;
  *(_DWORD *)&Destination.Length = 34078720;
  RtlAppendUnicodeToString(&Destination, (PCWSTR)0x7FFE0030);
  RtlAppendUnicodeStringToString(&Destination, &SlashSystem32SlashString);
  Buffer = Destination.Buffer;
  LdrpInitializeDllPath(0LL, (__int64)Destination.Buffer, v20);
  Dll = LdrpLoadDll(a1 + 16, (__int64)v20, 0, 0LL, (__int64)&v19);
  if ( Dll < 0 )
  {
    DbgPrint(
      "AVRF: %ws: failed to load provider `%ws' (status %08X) from %ws\n",
      *(_QWORD *)(qword_180145210 + 96),
      *(_QWORD *)(a1 + 24),
      (unsigned int)Dll,
      Buffer);
    return 0;
  }
  v10 = v19;
  *(_QWORD *)(a1 + 32) = v19;
  v11 = RtlImageNtHeader(*(PVOID *)(v10 + 48));
  if ( v11 )
  {
    if ( (v11->FileHeader.Characteristics & 0x2000) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 104LL) |= 0x400u;
      v13 = *(_QWORD *)(a1 + 32);
      v14 = *(_RTL_DYNAMIC_HASH_TABLE **)(v13 + 56);
      if ( !v14 )
      {
        DbgPrint("AVRF: cannot find an entry point for provider %ws \n", *(_QWORD *)(a1 + 24), v12);
        return 0;
      }
      v18 = 0LL;
      if ( LdrpCallInitRoutine(v14, *(_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR **)(v13 + 48), 4u, (__int64)&v18)
        && (v15 = v18) != 0LL )
      {
        if ( *v18 == 80 )
        {
          if ( (AVrfpDebug & 8) != 0 )
            DbgPrint("AVRF: initialized provider %ws (descriptor @ %p) \n", *(_QWORD *)(a1 + 24), v18);
          *(_QWORD *)(a1 + 40) = *((_QWORD *)v15 + 1);
          *(_QWORD *)(a1 + 48) = *((_QWORD *)v15 + 2);
          *(_QWORD *)(a1 + 56) = *((_QWORD *)v15 + 3);
          *(_QWORD *)(a1 + 64) = *((_QWORD *)v15 + 9);
          *((_QWORD *)v15 + 4) = *(_QWORD *)(qword_180145210 + 96);
          v15[10] = AVrfpVerifierFlags;
          v15[11] = AVrfpDebug;
          *((_QWORD *)v15 + 6) = RtlpGetStackTraceAddress;
          *((_QWORD *)v15 + 7) = RtlpDebugPageHeapCreate;
          *((_QWORD *)v15 + 8) = RtlpDebugPageHeapDestroy;
          if ( AVrfpEnabledSystemWide )
            v15[10] |= 0x20000u;
        }
        else
        {
          v2 = 1;
          DbgPrint("AVRF: provider %ws passed an invalid descriptor @ %p \n", *(_QWORD *)(a1 + 24), v18);
        }
      }
      else
      {
        v2 = 1;
        DbgPrint("AVRF: provider %ws did not initialize correctly \n", *(_QWORD *)(a1 + 24));
      }
    }
    else
    {
      DbgPrint("AVRF: provider %ws is not a DLL image \n", *(_QWORD *)(a1 + 24));
      v2 = 1;
    }
  }
  else
  {
    v2 = 1;
  }
  if ( v2 )
    return 0;
  return v4;
}
