/*
 * XREFs of MiUnmapImageInSystemSpace @ 0x1403C72A0
 * Callers:
 *     MiSetPagesModified @ 0x1401D4A14 (MiSetPagesModified.c)
 *     MiRelocateImage @ 0x1403C5E30 (MiRelocateImage.c)
 *     MiGetSystemAddressForImage @ 0x1403CC454 (MiGetSystemAddressForImage.c)
 *     MiValidateSectionCreate @ 0x1404AEAF4 (MiValidateSectionCreate.c)
 *     MiParseComImage @ 0x1404B536C (MiParseComImage.c)
 *     MiCreateSessionDriverProtos @ 0x140621578 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x14000B73C (MiRemoveFromSystemSpace.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     MiUnmapViewOfSection @ 0x14041BC60 (MiUnmapViewOfSection.c)
 */

void __fastcall MiUnmapImageInSystemSpace(__int64 a1)
{
  ULONG_PTR v1; // rdx

  v1 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 <= (unsigned __int64)MmHighestUserAddress )
  {
    MiUnmapViewOfSection(PsInitialSystemProcess, v1, 0LL);
    KiUnstackDetachProcess(($D4FCF91253F76F57393CBFE908971F67 *)(a1 + 24), 0LL);
  }
  else
  {
    MiRemoveFromSystemSpace((__int64)&unk_1402FE5C0, v1, 1);
  }
}
