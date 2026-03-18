/*
 * XREFs of MiUnmapImageInSystemSpace @ 0x140525DFC
 * Callers:
 *     MiSetPagesModified @ 0x1401E5664 (MiSetPagesModified.c)
 *     MiGetSystemAddressForImage @ 0x1404CCEDC (MiGetSystemAddressForImage.c)
 *     MiRelocateImage @ 0x140524330 (MiRelocateImage.c)
 *     MiParseComImage @ 0x1405250A8 (MiParseComImage.c)
 *     MiValidateSectionCreate @ 0x140526D8C (MiValidateSectionCreate.c)
 *     MiCreateSessionDriverProtos @ 0x1406645B4 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400CE820 (KiUnstackDetachProcess.c)
 *     MiRemoveFromSystemSpace @ 0x140100090 (MiRemoveFromSystemSpace.c)
 *     MiUnmapViewOfSection @ 0x14042E400 (MiUnmapViewOfSection.c)
 */

void __fastcall MiUnmapImageInSystemSpace(__int64 a1)
{
  ULONG_PTR v1; // rdx

  v1 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 <= 0x7FFFFFFEFFFFuLL )
  {
    MiUnmapViewOfSection(PsInitialSystemProcess, v1, 0);
    KiUnstackDetachProcess((struct _KTHREAD *)(a1 + 24), 0);
  }
  else
  {
    MiRemoveFromSystemSpace((__int64)&unk_140326880, v1, 1);
  }
}
