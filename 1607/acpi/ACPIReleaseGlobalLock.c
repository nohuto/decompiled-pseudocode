/*
 * XREFs of ACPIReleaseGlobalLock @ 0x1C00145BC
 * Callers:
 *     GlobalLockEventHandler @ 0x1C0014350 (GlobalLockEventHandler.c)
 *     ACPIIoctlReleaseGlobalLock @ 0x1C0050D48 (ACPIIoctlReleaseGlobalLock.c)
 * Callees:
 *     ACPIAcquireHardwareGlobalLock @ 0x1C00141C8 (ACPIAcquireHardwareGlobalLock.c)
 *     WPP_RECORDER_SF_q @ 0x1C0014508 (WPP_RECORDER_SF_q.c)
 *     ACPIReleaseHardwareGlobalLock @ 0x1C0014650 (ACPIReleaseHardwareGlobalLock.c)
 *     ACPIStartNextGlobalLockRequest @ 0x1C0027808 (ACPIStartNextGlobalLockRequest.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00278EC (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qd @ 0x1C004B650 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall ACPIReleaseGlobalLock(__int64 a1)
{
  __int64 v2; // rcx
  int v4; // edx

  v2 = *((_QWORD *)AcpiInformation + 9);
  if ( a1 == v2 )
  {
    if ( (*((_DWORD *)AcpiInformation + 20))-- == 1 )
    {
      *((_QWORD *)AcpiInformation + 9) = 0LL;
      ACPIReleaseHardwareGlobalLock();
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        3,
        17,
        (__int64)&WPP_c95983702d7738c6949a939adda35a2c_Traceguids,
        a1);
      if ( *((_UNKNOWN **)AcpiInformation + 6) != (_UNKNOWN *)((char *)AcpiInformation + 48)
        && ACPIAcquireHardwareGlobalLock(*((volatile signed __int32 **)AcpiInformation + 5)) )
      {
        ACPIStartNextGlobalLockRequest();
      }
    }
    else
    {
      WPP_RECORDER_SF_qd(
        WPP_GLOBAL_Control->DeviceExtension,
        4,
        3,
        16,
        (__int64)&WPP_c95983702d7738c6949a939adda35a2c_Traceguids,
        *((_QWORD *)AcpiInformation + 9),
        *((_DWORD *)AcpiInformation + 20));
    }
    return 0LL;
  }
  else
  {
    WPP_RECORDER_SF_qq(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      3,
      15,
      (__int64)&WPP_c95983702d7738c6949a939adda35a2c_Traceguids,
      v2,
      a1);
    return 3222536215LL;
  }
}
