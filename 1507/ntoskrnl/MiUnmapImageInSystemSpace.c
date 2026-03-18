/*
 * XREFs of MiUnmapImageInSystemSpace @ 0x14051BE94
 * Callers:
 *     MiSetPagesModified @ 0x1402165B0 (MiSetPagesModified.c)
 *     MiParseComImage @ 0x14046E4A4 (MiParseComImage.c)
 *     MiRelocateImage @ 0x14046E680 (MiRelocateImage.c)
 *     MiValidateSectionCreate @ 0x14051B38C (MiValidateSectionCreate.c)
 *     MiGetSystemAddressForImage @ 0x140576AF0 (MiGetSystemAddressForImage.c)
 *     MiCreateSessionDriverProtos @ 0x1406A0C0C (MiCreateSessionDriverProtos.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     MiRemoveFromSystemSpace @ 0x1400FA0D0 (MiRemoveFromSystemSpace.c)
 *     MiUnmapViewOfSection @ 0x1404B72D0 (MiUnmapViewOfSection.c)
 */

void __fastcall MiUnmapImageInSystemSpace(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rdx

  v4 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 <= (unsigned __int64)MmHighestUserAddress )
  {
    MiUnmapViewOfSection(PsInitialSystemProcess, v4, 0);
    KiUnstackDetachProcess((struct _KTHREAD *)(a1 + 24), 0);
  }
  else
  {
    MiRemoveFromSystemSpace((__int64)&unk_14034EA70, v4, 1, a4);
  }
}
