/*
 * XREFs of MiUnmapImageInSystemSpace @ 0x140508E5C
 * Callers:
 *     MiSetPagesModified @ 0x1401E5490 (MiSetPagesModified.c)
 *     MiGetSystemAddressForImage @ 0x1404B2908 (MiGetSystemAddressForImage.c)
 *     MiRelocateImage @ 0x140507390 (MiRelocateImage.c)
 *     MiParseComImage @ 0x140508108 (MiParseComImage.c)
 *     MiValidateSectionCreate @ 0x140509DEC (MiValidateSectionCreate.c)
 *     MiCreateSessionDriverProtos @ 0x140664698 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     MiRemoveFromSystemSpace @ 0x1400FDE10 (MiRemoveFromSystemSpace.c)
 *     MiUnmapViewOfSection @ 0x14042D2D0 (MiUnmapViewOfSection.c)
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
    MiRemoveFromSystemSpace((__int64)&unk_1403268C0, v1, 1);
  }
}
