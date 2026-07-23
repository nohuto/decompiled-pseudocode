/*
 * XREFs of SepAdtRegNotificationCallback @ 0x14056FE74
 * Callers:
 *     <none>
 * Callees:
 *     NtNotifyChangeKey @ 0x1403FF81C (NtNotifyChangeKey.c)
 *     SepAdtInitializeBounds @ 0x14056FED0 (SepAdtInitializeBounds.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x14056FF4C (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtInitializeCrashOnFail @ 0x14056FFA4 (SepAdtInitializeCrashOnFail.c)
 */

NTSTATUS SepAdtRegNotificationCallback()
{
  SepAdtInitializeCrashOnFail();
  SepAdtInitializePrivilegeAuditing();
  SepAdtInitializeBounds();
  return NtNotifyChangeKey(
           SepAdtRegNotifyHandle,
           0LL,
           SepAdtLsaRegWatchWorkItem,
           (PVOID)1,
           &SepAdtIoStatusBlock,
           5u,
           0,
           0LL,
           0,
           1u);
}
