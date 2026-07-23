/*
 * XREFs of _ResMapViewOfFile @ 0x180104AF4
 * Callers:
 *     _ResCCreateMappingExclusive @ 0x1801034B8 (_ResCCreateMappingExclusive.c)
 *     _ResCOpenMapping @ 0x180103978 (_ResCOpenMapping.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005A460 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     ZwMapViewOfSection @ 0x1800A6920 (ZwMapViewOfSection.c)
 */

PVOID __fastcall ResMapViewOfFile(void *a1, int a2, __int64 a3, __int64 a4, ULONG_PTR ViewSize)
{
  ULONG Win32Protect; // eax
  int v6; // eax
  LONG v7; // eax
  LARGE_INTEGER SectionOffset; // [rsp+50h] [rbp-18h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp-10h] BYREF

  BaseAddress = 0LL;
  SectionOffset.QuadPart = 0LL;
  if ( a2 == 1 )
  {
    Win32Protect = 8;
  }
  else if ( (a2 & 2) != 0 )
  {
    Win32Protect = (a2 & 0x20) != 0 ? 64 : 4;
  }
  else if ( (a2 & 4) != 0 )
  {
    Win32Protect = (a2 & 0x20) != 0 ? 32 : 2;
  }
  else
  {
    Win32Protect = 1;
  }
  v6 = ZwMapViewOfSection(
         a1,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0LL,
         &SectionOffset,
         &ViewSize,
         ViewShare,
         0,
         Win32Protect);
  if ( v6 >= 0 )
    return BaseAddress;
  v7 = RtlNtStatusToDosError(v6);
  RtlSetLastWin32Error(v7);
  return 0LL;
}
