/*
 * XREFs of SepAdtRegNotificationCallback @ 0x14055C038
 * Callers:
 *     <none>
 * Callees:
 *     NtNotifyChangeKey @ 0x14042C848 (NtNotifyChangeKey.c)
 *     SepAdtInitializeBounds @ 0x14055C094 (SepAdtInitializeBounds.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x14055C110 (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtInitializeCrashOnFail @ 0x14055C174 (SepAdtInitializeCrashOnFail.c)
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
