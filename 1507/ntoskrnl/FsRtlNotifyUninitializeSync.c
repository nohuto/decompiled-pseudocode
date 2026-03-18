/*
 * XREFs of FsRtlNotifyUninitializeSync @ 0x14055B258
 * Callers:
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1404A6118 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x1404A6B90 (FsRtlNotifyFilterReportChangeLite.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
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
