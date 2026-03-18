/*
 * XREFs of ACPIReleaseGlobalLock @ 0x1C001B190
 * Callers:
 *     GlobalLockEventHandler @ 0x1C001B070 (GlobalLockEventHandler.c)
 *     ACPIIoctlReleaseGlobalLock @ 0x1C003D990 (ACPIIoctlReleaseGlobalLock.c)
 * Callees:
 *     ACPIReleaseHardwareGlobalLock @ 0x1C001B1EC (ACPIReleaseHardwareGlobalLock.c)
 *     ACPIAcquireHardwareGlobalLock @ 0x1C001B224 (ACPIAcquireHardwareGlobalLock.c)
 *     ACPIStartNextGlobalLockRequest @ 0x1C001B25C (ACPIStartNextGlobalLockRequest.c)
 */

__int64 __fastcall ACPIReleaseGlobalLock(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  if ( a1 != *((_QWORD *)AcpiInformation + 9) )
    return 3222536215LL;
  if ( (*((_DWORD *)AcpiInformation + 20))-- == 1 )
  {
    *((_QWORD *)AcpiInformation + 9) = 0LL;
    ACPIReleaseHardwareGlobalLock();
    if ( *((_UNKNOWN **)AcpiInformation + 6) != (_UNKNOWN *)((char *)AcpiInformation + 48) )
    {
      if ( (unsigned __int8)ACPIAcquireHardwareGlobalLock(*((_QWORD *)AcpiInformation + 5), v2, v3, v4) )
        ACPIStartNextGlobalLockRequest();
    }
  }
  return 0LL;
}
