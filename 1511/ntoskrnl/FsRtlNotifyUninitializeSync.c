/*
 * XREFs of FsRtlNotifyUninitializeSync @ 0x1404C412C
 * Callers:
 *     FsRtlNotifyFilterReportChangeLite @ 0x14048D904 (FsRtlNotifyFilterReportChangeLite.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x14048E028 (FsRtlNotifyFilterChangeDirectoryLite.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
