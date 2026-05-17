/*
 * XREFs of LdrpSnapKernelBaseExtensions @ 0x1800155AC
 * Callers:
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitAnsiString @ 0x180011330 (RtlInitAnsiString.c)
 *     ApiSetResolveToHost @ 0x180015BFC (ApiSetResolveToHost.c)
 *     LdrpLogDllState @ 0x180015E20 (LdrpLogDllState.c)
 *     RtlAnsiStringToUnicodeString @ 0x1800182E0 (RtlAnsiStringToUnicodeString.c)
 *     NtdllpAllocateStringRoutine @ 0x180018BE8 (NtdllpAllocateStringRoutine.c)
 *     RtlCompareUnicodeStrings @ 0x1800195B0 (RtlCompareUnicodeStrings.c)
 *     LdrpResolveDelayLoadDescriptor @ 0x180031788 (LdrpResolveDelayLoadDescriptor.c)
 *     RtlImageDirectoryEntryToData @ 0x180031B00 (RtlImageDirectoryEntryToData.c)
 *     RtlFreeAnsiString @ 0x1800427E0 (RtlFreeAnsiString.c)
 *     LdrGetDllHandleByName @ 0x18007AEF0 (LdrGetDllHandleByName.c)
 *     RtlxOemStringToUnicodeSize @ 0x180088370 (RtlxOemStringToUnicodeSize.c)
 *     _strnicmp @ 0x180097ED0 (_strnicmp.c)
 */

__int64 LdrpSnapKernelBaseExtensions()
{
  __int64 v0; // rdx
  __int64 result; // rax
  __int64 v2; // r13
  wchar_t *Buffer; // rbx
  unsigned int v4; // edi
  unsigned int v5; // r15d
  unsigned int v6; // r14d
  __int64 v7; // r12
  const char *v8; // rsi
  unsigned int v9; // edi
  int v10; // eax
  unsigned __int16 v11; // si
  char v12; // bl
  __int64 v13; // r8
  int Descriptor; // eax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-38h] BYREF
  STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int16 v17; // [rsp+50h] [rbp-18h] BYREF
  __int64 v18; // [rsp+58h] [rbp-10h]
  char v19; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v20; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v21; // [rsp+C0h] [rbp+58h] BYREF
  void *ApiSetMap; // [rsp+C8h] [rbp+60h]

  v21 = 0LL;
  LdrGetDllHandleByName(&LdrpKernelbaseDllName, 0LL, &v21);
  LOBYTE(v0) = 1;
  result = RtlImageDirectoryEntryToData(v21, v0, 13LL, &v20);
  v2 = result;
  if ( result )
  {
    Buffer = 0LL;
    v4 = 0;
    v5 = v20 >> 5;
    v6 = 0;
    *(_DWORD *)&UnicodeString.Length = 0;
    ApiSetMap = NtCurrentPeb()->ApiSetMap;
    UnicodeString.Buffer = 0LL;
    if ( v20 >> 5 )
    {
      do
      {
        v7 = v2 + 32LL * v6;
        if ( !*(_DWORD *)(v7 + 4) )
          break;
        v8 = (const char *)(v21 + *(unsigned int *)(v7 + 4));
        if ( !strnicmp(v8, "EXT-", 4uLL) )
        {
          RtlInitAnsiString(&DestinationString, v8);
          if ( NlsMbCodePageTag )
            v9 = RtlxOemStringToUnicodeSize(&DestinationString);
          else
            v9 = 2 * DestinationString.Length + 2;
          if ( v9 > UnicodeString.MaximumLength )
          {
            if ( v9 >= 0xFFFE )
            {
              v4 = -1073741675;
              break;
            }
            if ( Buffer )
              RtlFreeAnsiString(&UnicodeString);
            UnicodeString.Buffer = (wchar_t *)NtdllpAllocateStringRoutine(v9);
            Buffer = UnicodeString.Buffer;
            if ( !UnicodeString.Buffer )
            {
              v4 = -1073741670;
              break;
            }
            UnicodeString.MaximumLength = v9;
          }
          else
          {
            UnicodeString.Length = 0;
          }
          RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 0);
          LdrpLogDllState(0LL, &UnicodeString, 5328LL);
          v10 = ApiSetResolveToHost(
                  (_DWORD)ApiSetMap,
                  (unsigned int)&UnicodeString,
                  0,
                  (unsigned int)&v19,
                  (__int64)&v17);
          v11 = v17;
          v4 = v10;
          v12 = v19;
          if ( v10 >= 0 && v19 )
          {
            if ( v17 )
              v13 = 5329LL;
            else
              v13 = 5330LL;
          }
          else
          {
            v13 = 5331LL;
          }
          LdrpLogDllState(0LL, &UnicodeString, v13);
          if ( v12
            && !(unsigned int)RtlCompareUnicodeStrings(
                                (unsigned int)L"KERNEL32.DLL",
                                12,
                                v18,
                                (unsigned __int64)v11 >> 1,
                                1) )
          {
            Descriptor = LdrpResolveDelayLoadDescriptor(v21, v2 + 32LL * v6);
            Buffer = UnicodeString.Buffer;
            v4 = Descriptor;
            if ( Descriptor < 0 )
              break;
            v4 = 0;
          }
          else
          {
            Buffer = UnicodeString.Buffer;
          }
        }
        ++v6;
      }
      while ( v6 < v5 );
      if ( Buffer )
        RtlFreeAnsiString(&UnicodeString);
    }
    return v4;
  }
  return result;
}
