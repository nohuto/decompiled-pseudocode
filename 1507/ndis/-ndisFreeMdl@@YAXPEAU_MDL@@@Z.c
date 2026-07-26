/*
 * XREFs of ?ndisFreeMdl@@YAXPEAU_MDL@@@Z @ 0x1C0021610
 * Callers:
 *     NdisFreeFragmentNetBufferList @ 0x1C00212C0 (NdisFreeFragmentNetBufferList.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisFreeMdl(PMDL Mdl)
{
  if ( (Mdl->MdlFlags & 0x20) != 0 )
    MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
  ExFreePoolWithTag(Mdl, 0);
}
