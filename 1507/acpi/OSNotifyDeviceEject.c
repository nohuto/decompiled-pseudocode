/*
 * XREFs of OSNotifyDeviceEject @ 0x1C003DFA4
 * Callers:
 *     OSNotifyDeviceCheck @ 0x1C003DEA8 (OSNotifyDeviceCheck.c)
 *     NotifyHandler @ 0x1C00401E0 (NotifyHandler.c)
 * Callees:
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C0020B1C (ACPIBuildSynchronizationRequestInternal.c)
 */

__int64 __fastcall OSNotifyDeviceEject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
  if ( v4 )
    ACPIBuildSynchronizationRequestInternal(v4, (__int64)ACPIBuildIssueNotifyDeviceEject, v4, a4, 1);
  return 0LL;
}
