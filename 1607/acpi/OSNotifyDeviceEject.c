/*
 * XREFs of OSNotifyDeviceEject @ 0x1C0051438
 * Callers:
 *     OSNotifyDeviceCheck @ 0x1C00512D0 (OSNotifyDeviceCheck.c)
 *     NotifyHandler @ 0x1C0054C30 (NotifyHandler.c)
 * Callees:
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C0028220 (ACPIBuildSynchronizationRequestInternal.c)
 *     WPP_RECORDER_SF_qs @ 0x1C0045AA8 (WPP_RECORDER_SF_qs.c)
 */

__int64 __fastcall OSNotifyDeviceEject(__int64 a1)
{
  int v2; // edx
  __int64 v3; // r9
  __int64 v4; // rcx

  dword_1C0074514 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
  v2 = dword_1C0074514;
  LOBYTE(v2) = 4;
  byte_1C0074518 = 0;
  WPP_RECORDER_SF_qs(
    WPP_GLOBAL_Control->DeviceExtension,
    v2,
    12,
    25,
    (__int64)&WPP_d1586059086e37ef10da2d60ebfd83de_Traceguids,
    a1,
    (__int64)&dword_1C0074514);
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
  if ( v4 )
    ACPIBuildSynchronizationRequestInternal(
      v4,
      (__int64)ACPIBuildIssueNotifyDeviceEject,
      *(_QWORD *)(*(_QWORD *)a1 + 104LL),
      v3,
      1);
  return 0LL;
}
