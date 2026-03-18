/*
 * XREFs of SepAdtRegNotificationCallback @ 0x140497FF8
 * Callers:
 *     <none>
 * Callees:
 *     NtNotifyChangeKey @ 0x140499C68 (NtNotifyChangeKey.c)
 *     SepAdtInitializeBounds @ 0x14049B55C (SepAdtInitializeBounds.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x14049B5D8 (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtInitializeCrashOnFail @ 0x14049B63C (SepAdtInitializeCrashOnFail.c)
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
