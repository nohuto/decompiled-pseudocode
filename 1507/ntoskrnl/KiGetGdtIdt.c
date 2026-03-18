/*
 * XREFs of KiGetGdtIdt @ 0x140286E30
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x140277000 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 * Callees:
 *     <none>
 */

void __fastcall KiGetGdtIdt(void *a1, void *a2)
{
  __sgdt(a1);
  __sidt(a2);
}
