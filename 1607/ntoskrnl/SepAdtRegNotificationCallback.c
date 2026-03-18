/*
 * XREFs of SepAdtRegNotificationCallback @ 0x14056F934
 * Callers:
 *     <none>
 * Callees:
 *     NtNotifyChangeKey @ 0x14040095C (NtNotifyChangeKey.c)
 *     SepAdtInitializeBounds @ 0x14056F990 (SepAdtInitializeBounds.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x14056FA0C (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtInitializeCrashOnFail @ 0x14056FA64 (SepAdtInitializeCrashOnFail.c)
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
