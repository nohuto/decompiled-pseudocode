/*
 * XREFs of FsRtlNotifyUninitializeSync @ 0x14052DCD4
 * Callers:
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1404BEE44 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x1404BFD2C (FsRtlNotifyFilterReportChangeLite.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlNotifyUninitializeSync(PNOTIFY_SYNC *NotifySync)
{
  PNOTIFY_SYNC v2; // rcx

  v2 = *NotifySync;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *NotifySync = 0LL;
  }
}
