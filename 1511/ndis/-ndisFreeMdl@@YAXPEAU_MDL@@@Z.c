/*
 * XREFs of ?ndisFreeMdl@@YAXPEAU_MDL@@@Z @ 0x1C0015510
 * Callers:
 *     NdisFreeFragmentNetBufferList @ 0x1C0014FA0 (NdisFreeFragmentNetBufferList.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisFreeMdl(PMDL Mdl)
{
  if ( (Mdl->MdlFlags & 0x20) != 0 )
    MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
  ExFreePoolWithTag(Mdl, 0);
}
