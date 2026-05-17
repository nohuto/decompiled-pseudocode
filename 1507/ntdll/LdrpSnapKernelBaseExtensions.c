/*
 * XREFs of LdrpSnapKernelBaseExtensions @ 0x1800205B8
 * Callers:
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180016860 (RtlImageDirectoryEntryToData.c)
 *     LdrpResolveDelayLoadDescriptor @ 0x180017030 (LdrpResolveDelayLoadDescriptor.c)
 *     LdrpLogDllState @ 0x180021298 (LdrpLogDllState.c)
 *     ApiSetResolveToHost @ 0x180021380 (ApiSetResolveToHost.c)
 *     RtlAnsiStringToUnicodeString @ 0x1800239A0 (RtlAnsiStringToUnicodeString.c)
 *     NtdllpAllocateStringRoutine @ 0x180024358 (NtdllpAllocateStringRoutine.c)
 *     RtlFreeAnsiString @ 0x180027410 (RtlFreeAnsiString.c)
 *     RtlCompareUnicodeStrings @ 0x180035820 (RtlCompareUnicodeStrings.c)
 *     RtlInitAnsiString @ 0x18006A7B0 (RtlInitAnsiString.c)
 *     LdrGetDllHandleByName @ 0x18006CF40 (LdrGetDllHandleByName.c)
 *     _strnicmp @ 0x180085310 (_strnicmp.c)
 *     RtlxOemStringToUnicodeSize @ 0x1800D2480 (RtlxOemStringToUnicodeSize.c)
 */

__int64 LdrpSnapKernelBaseExtensions()
{
  __int64 result; // rax
  __int64 v1; // r13
  unsigned __int16 *Buffer; // rbx
  unsigned int v3; // edi
  unsigned int v4; // r15d
  unsigned int v5; // r14d
  __int64 v6; // r12
  const char *v7; // rsi
  __int64 v8; // rdx
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
  char *v21; // [rsp+C0h] [rbp+58h] BYREF
  void *ApiSetMap; // [rsp+C8h] [rbp+60h]

  v21 = 0LL;
  LdrGetDllHandleByName(&LdrpKernelbaseDllName, 0LL, &v21);
  result = RtlImageDirectoryEntryToData((unsigned __int64)v21, 1, 0xDu, &v20);
  v1 = result;
  if ( result )
  {
    Buffer = 0LL;
    v3 = 0;
    v4 = v20 >> 5;
    v5 = 0;
    *(_DWORD *)&UnicodeString.Length = 0;
    ApiSetMap = NtCurrentPeb()->ApiSetMap;
    UnicodeString.Buffer = 0LL;
    if ( v20 >> 5 )
    {
      do
      {
        v6 = v1 + 32LL * v5;
        if ( !*(_DWORD *)(v6 + 4) )
          break;
        v7 = &v21[*(unsigned int *)(v6 + 4)];
        if ( !strnicmp(v7, "EXT-", 4uLL) )
        {
          RtlInitAnsiString(&DestinationString, v7);
          if ( NlsMbCodePageTag )
            v9 = RtlxOemStringToUnicodeSize(&DestinationString);
          else
            v9 = 2 * DestinationString.Length + 2;
          if ( v9 > UnicodeString.MaximumLength )
          {
            if ( v9 >= 0xFFFE )
            {
              v3 = -1073741675;
              break;
            }
            if ( Buffer )
              RtlFreeAnsiString(&UnicodeString);
            UnicodeString.Buffer = (unsigned __int16 *)NtdllpAllocateStringRoutine(v9, v8);
            Buffer = UnicodeString.Buffer;
            if ( !UnicodeString.Buffer )
            {
              v3 = -1073741670;
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
          v3 = v10;
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
            Descriptor = LdrpResolveDelayLoadDescriptor(v21, v1 + 32LL * v5);
            Buffer = UnicodeString.Buffer;
            v3 = Descriptor;
            if ( Descriptor < 0 )
              break;
            v3 = 0;
          }
          else
          {
            Buffer = UnicodeString.Buffer;
          }
        }
        ++v5;
      }
      while ( v5 < v4 );
      if ( Buffer )
        RtlFreeAnsiString(&UnicodeString);
    }
    return v3;
  }
  return result;
}
