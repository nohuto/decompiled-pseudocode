/*
 * XREFs of ?EmitDeletionCommand@CTargetVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0073CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitDeletionHelper@CResourceMarshaler@DirectComposition@@IEAA_NIPEAPEAVCBatch@2@@Z @ 0x1C00193F4 (-EmitDeletionHelper@CResourceMarshaler@DirectComposition@@IEAA_NIPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRoot@CTargetVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0073C04 (-EmitRoot@CTargetVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CTargetVisualMarshaler::EmitDeletionCommand(
        DirectComposition::CTargetVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char result; // al

  result = DirectComposition::CTargetVisualMarshaler::EmitRoot(this, a2);
  if ( result )
    return DirectComposition::CResourceMarshaler::EmitDeletionHelper(this, *((_DWORD *)this + 12), a2);
  return result;
}
