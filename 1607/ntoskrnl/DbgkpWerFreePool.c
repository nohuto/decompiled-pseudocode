/*
 * XREFs of DbgkpWerFreePool @ 0x14061C2B4
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1401B7A80 (DbgkCaptureLiveKernelDump.c)
 *     DbgkWerAddSecondaryData @ 0x14061B9B0 (DbgkWerAddSecondaryData.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14061BB3C (DbgkWerCaptureLiveKernelDump.c)
 *     DbgkpWerCleanupContext @ 0x14061C01C (DbgkpWerCleanupContext.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpWerFreePool(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x57676244u);
}
