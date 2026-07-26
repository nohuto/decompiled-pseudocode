/*
 * XREFs of ?ndisFreeMdl@@YAXPEAU_MDL@@@Z @ 0x1C0021120
 * Callers:
 *     NdisFreeFragmentNetBufferList @ 0x1C0020E90 (NdisFreeFragmentNetBufferList.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisFreeMdl(PMDL Mdl)
{
  if ( (Mdl->MdlFlags & 0x20) != 0 )
    MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
  ExFreePoolWithTag(Mdl, 0);
}
