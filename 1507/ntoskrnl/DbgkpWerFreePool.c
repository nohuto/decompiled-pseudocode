/*
 * XREFs of DbgkpWerFreePool @ 0x14066AD80
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1401E16B0 (DbgkCaptureLiveKernelDump.c)
 *     DbgkWerAddSecondaryData @ 0x14066A3E8 (DbgkWerAddSecondaryData.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14066A574 (DbgkWerCaptureLiveKernelDump.c)
 *     DbgkpWerCleanupContext @ 0x14066AABC (DbgkpWerCleanupContext.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpWerFreePool(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x57676244u);
}
