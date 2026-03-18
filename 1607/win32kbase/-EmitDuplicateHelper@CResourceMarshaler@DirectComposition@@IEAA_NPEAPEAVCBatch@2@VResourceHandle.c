/*
 * XREFs of ?EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle@@@Z @ 0x1C00444E4
 * Callers:
 *     ?EmitCreationCommand@CHostVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00042A0 (-EmitCreationCommand@CHostVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreationCommand@CSharedManipulationTransformMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0048350 (-EmitCreationCommand@CSharedManipulationTransformMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatc.c)
 *     ?EmitCreationCommand@CSharedInteractionMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004E930 (-EmitCreationCommand@CSharedInteractionMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreationCommand@CSharedReadMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0078060 (-EmitCreationCommand@CSharedReadMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreationCommand@CSharedWriteDesktopTargetMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007BC20 (-EmitCreationCommand@CSharedWriteDesktopTargetMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitCreationCommand@CCrossChannelParentVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007F060 (-EmitCreationCommand@CCrossChannelParentVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitCreationCommand@CCrossChannelChildVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007F440 (-EmitCreationCommand@CCrossChannelChildVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitCreationCommand@CSharedMatrixTransform3DMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00F1B90 (-EmitCreationCommand@CSharedMatrixTransform3DMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitCreationCommand@CSharedMatrixTransformMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00F1BA0 (-EmitCreationCommand@CSharedMatrixTransformMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreationCommand@CSharedWritePrimitiveColorMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00F1E50 (-EmitCreationCommand@CSharedWritePrimitiveColorMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@.c)
 *     ?EmitCreationCommand@CSharedWriteAnimationTriggerMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00F22C0 (-EmitCreationCommand@CSharedWriteAnimationTriggerMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatc.c)
 * Callees:
 *     ?AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z @ 0x1C001ADD4 (-AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitDuplicateHelper(__int64 a1, __int64 *a2, int a3)
{
  char *v5; // rdx
  __int64 v6; // rax
  void *v9; // [rsp+48h] [rbp+20h] BYREF

  if ( (int)DirectComposition::CBatch::AddSystemResourceRef(*a2, a3) < 0
    || !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x14uLL, &v9) )
  {
    return 0;
  }
  v5 = (char *)v9;
  v6 = *(_QWORD *)(*(_QWORD *)(*a2 + 8) + 40LL);
  *(_DWORD *)v9 = 20;
  *(_QWORD *)(v5 + 4) = 0LL;
  *(_QWORD *)(v5 + 12) = 0LL;
  *((_DWORD *)v5 + 1) = 25;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(*(_QWORD *)(v6 + 152) + 28LL);
  *((_DWORD *)v5 + 3) = a3;
  *((_DWORD *)v5 + 4) = *(_DWORD *)(a1 + 24);
  return 1;
}
