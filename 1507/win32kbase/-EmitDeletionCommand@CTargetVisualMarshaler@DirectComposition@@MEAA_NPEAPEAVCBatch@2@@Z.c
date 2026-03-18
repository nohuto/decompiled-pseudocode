/*
 * XREFs of ?EmitDeletionCommand@CTargetVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00133C0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitRoot@CTargetVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00132F4 (-EmitRoot@CTargetVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDeletionHelper@CResourceMarshaler@DirectComposition@@IEAA_NIPEAPEAVCBatch@2@@Z @ 0x1C002B9D4 (-EmitDeletionHelper@CResourceMarshaler@DirectComposition@@IEAA_NIPEAPEAVCBatch@2@@Z.c)
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
