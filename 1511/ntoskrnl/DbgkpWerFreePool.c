/*
 * XREFs of DbgkpWerFreePool @ 0x1405F2054
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1401ABBD4 (DbgkCaptureLiveKernelDump.c)
 *     DbgkWerAddSecondaryData @ 0x1405F1758 (DbgkWerAddSecondaryData.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1405F18E4 (DbgkWerCaptureLiveKernelDump.c)
 *     DbgkpWerCleanupContext @ 0x1405F1DC4 (DbgkpWerCleanupContext.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpWerFreePool(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x57676244u);
}
