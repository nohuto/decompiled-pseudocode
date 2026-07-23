/*
 * XREFs of IopLoadCrashdumpDriver @ 0x1401320B8
 * Callers:
 *     PopAllocateHiberContext @ 0x14052FB04 (PopAllocateHiberContext.c)
 *     IopInitializeCrashDump @ 0x140569748 (IopInitializeCrashDump.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     IopGetPhysicalMemoryBlock @ 0x14014A114 (IopGetPhysicalMemoryBlock.c)
 *     HvlGetEncryptedDataDomains @ 0x14014CF58 (HvlGetEncryptedDataDomains.c)
 *     MmLoadSystemImage @ 0x140481880 (MmLoadSystemImage.c)
 */

__int64 IopLoadCrashdumpDriver()
{
  __int64 result; // rax
  char *v1; // rbx
  PIMAGE_NT_HEADERS v2; // rax
  __int64 AddressOfEntryPoint; // rdi
  char *v4; // rdi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING *v6; // [rsp+40h] [rbp-40h] BYREF
  __int64 (__fastcall *v8)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64); // [rsp+50h] [rbp-30h]
  __int64 (__fastcall *v9)(ULONG_PTR); // [rsp+58h] [rbp-28h]
  __int64 (__fastcall *v10)(int, int, int, int, __int64); // [rsp+60h] [rbp-20h]
  __int64 v11; // [rsp+68h] [rbp-18h]
  int EncryptedDataDomains; // [rsp+70h] [rbp-10h]
  PVOID BaseAddress; // [rsp+90h] [rbp+10h] BYREF
  __int64 v14; // [rsp+98h] [rbp+18h] BYREF

  if ( CrashdmpImageEntry )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\Drivers\\crashdmp.sys");
  result = MmLoadSystemImage((unsigned int)&DestinationString, 0, 0, 2, (__int64)&v14, (__int64)&BaseAddress);
  if ( (int)result >= 0 )
  {
    v1 = (char *)BaseAddress;
    v2 = RtlImageNtHeader(BaseAddress);
    if ( !v2 )
      return 3221225473LL;
    AddressOfEntryPoint = v2->OptionalHeader.AddressOfEntryPoint;
    v6 = &IoArcBootDeviceName;
    v4 = &v1[AddressOfEntryPoint];
    if ( !IopGetPhysicalMemoryBlock() )
      return 3221225626LL;
    v8 = MmLoadSystemImage;
    v9 = MmUnloadSystemImage;
    v11 = IopReportBugCheckProgress;
    v10 = HvlGetEncryptedData;
    EncryptedDataDomains = HvlGetEncryptedDataDomains();
    CrashdmpCallTable = 1;
    dword_140328A04 = 9;
    result = ((__int64 (__fastcall *)(UNICODE_STRING **, int *))v4)(&v6, &CrashdmpCallTable);
    if ( (int)result >= 0 )
    {
      CrashdmpImageEntry = v14;
      CrashdmpImageBase = v1;
      return 0LL;
    }
  }
  return result;
}
