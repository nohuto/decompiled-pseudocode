/*
 * XREFs of KiGetGdtIdt @ 0x140253480
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x140242000 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 * Callees:
 *     <none>
 */

void __fastcall KiGetGdtIdt(void *a1, void *a2)
{
  __sgdt(a1);
  __sidt(a2);
}
