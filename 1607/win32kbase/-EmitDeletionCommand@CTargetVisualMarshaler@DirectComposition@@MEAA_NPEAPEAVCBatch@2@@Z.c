/*
 * XREFs of ?EmitDeletionCommand@CTargetVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0077C20
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitDeletionHelper@CResourceMarshaler@DirectComposition@@IEAA_NIPEAPEAVCBatch@2@@Z @ 0x1C00445A4 (-EmitDeletionHelper@CResourceMarshaler@DirectComposition@@IEAA_NIPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRoot@CTargetVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0077D44 (-EmitRoot@CTargetVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CTargetVisualMarshaler::EmitDeletionCommand(
        DirectComposition::CTargetVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  bool result; // al

  result = DirectComposition::CTargetVisualMarshaler::EmitRoot(this, a2);
  if ( result )
    return DirectComposition::CResourceMarshaler::EmitDeletionHelper(this, *((_DWORD *)this + 12), a2);
  return result;
}
