/*
 * XREFs of ?EmitDeletionCommand@CDuplicatedVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0013F10
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitRemoveAllChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0016C48 (-EmitRemoveAllChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDeletionCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00193C0 (-EmitDeletionCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CDuplicatedVisualMarshaler::EmitDeletionCommand(
        DirectComposition::CDuplicatedVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  if ( (*((_DWORD *)this + 4) & 0x4000000) == 0 )
    return DirectComposition::CResourceMarshaler::EmitDeletionCommand(this, a2);
  if ( DirectComposition::CVisualMarshaler::EmitRemoveAllChildren(this, a2) )
  {
    *((_DWORD *)this + 4) &= ~0x4000000u;
    return DirectComposition::CResourceMarshaler::EmitDeletionCommand(this, a2);
  }
  return 0;
}
