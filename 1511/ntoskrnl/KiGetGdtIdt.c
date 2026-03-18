/*
 * XREFs of KiGetGdtIdt @ 0x140237BC0
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x140228000 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_14072EAFC @ 0x14072EAFC (sub_14072EAFC.c)
 * Callees:
 *     <none>
 */

void __fastcall KiGetGdtIdt(void *a1, void *a2)
{
  __sgdt(a1);
  __sidt(a2);
}
