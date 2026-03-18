/*
 * XREFs of ?EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEBVCSharedSystemResource@2@PEAPEAVCBatch@2@@Z @ 0x1C002B910
 * Callers:
 *     ?EmitCreationCommand@CHostVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00033B0 (-EmitCreationCommand@CHostVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreationCommand@CSharedMatrixTransformMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0003EA0 (-EmitCreationCommand@CSharedMatrixTransformMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreationCommand@CSharedReadMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0024050 (-EmitCreationCommand@CSharedReadMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreationCommand@CSharedManipulationTransformMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0025020 (-EmitCreationCommand@CSharedManipulationTransformMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatc.c)
 *     ?EmitCreationCommand@CSharedWriteDesktopTargetMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0083980 (-EmitCreationCommand@CSharedWriteDesktopTargetMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitCreationCommand@CSharedMatrixTransform3DMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DDCF0 (-EmitCreationCommand@CSharedMatrixTransform3DMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitCreationCommand@CSharedWritePrimitiveColorMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DDEC0 (-EmitCreationCommand@CSharedWritePrimitiveColorMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@.c)
 *     ?EmitCreationCommand@CSharedWriteAnimationTriggerMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DE150 (-EmitCreationCommand@CSharedWriteAnimationTriggerMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatc.c)
 *     ?EmitCreationCommand@CSharedInteractionMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DE560 (-EmitCreationCommand@CSharedInteractionMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AddSystemResourceRef@CBatch@DirectComposition@@QEAAJI@Z @ 0x1C00206E0 (-AddSystemResourceRef@CBatch@DirectComposition@@QEAAJI@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BAC0 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitDuplicateHelper(
        DirectComposition::CResourceMarshaler *this,
        const struct DirectComposition::CSharedSystemResource *a2,
        struct DirectComposition::CBatch **a3)
{
  unsigned int v3; // esi
  char *v7; // rcx
  void *v9; // [rsp+38h] [rbp+10h] BYREF

  v3 = *((_DWORD *)a2 + 5);
  if ( (int)DirectComposition::CBatch::AddSystemResourceRef(*a3, v3) < 0
    || !DirectComposition::CBatch::EnsureBatchBuffer(a3, 0x14uLL, &v9) )
  {
    return 0;
  }
  v7 = (char *)v9;
  *(_DWORD *)v9 = 20;
  *(_QWORD *)(v7 + 4) = 0LL;
  *(_QWORD *)(v7 + 12) = 0LL;
  *((_DWORD *)v7 + 1) = 21;
  *((_DWORD *)v7 + 2) = *((_DWORD *)a2 + 4);
  *((_DWORD *)v7 + 3) = v3;
  *((_DWORD *)v7 + 4) = *((_DWORD *)this + 6);
  return 1;
}
