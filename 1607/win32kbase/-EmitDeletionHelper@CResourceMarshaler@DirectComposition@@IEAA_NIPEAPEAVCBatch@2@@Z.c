/*
 * XREFs of ?EmitDeletionHelper@CResourceMarshaler@DirectComposition@@IEAA_NIPEAPEAVCBatch@2@@Z @ 0x1C00445A4
 * Callers:
 *     ?EmitDeletionCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0044570 (-EmitDeletionCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDeletionCommand@CTargetVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0077C20 (-EmitDeletionCommand@CTargetVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDeletionCommand@CSharedReadMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0077FD0 (-EmitDeletionCommand@CSharedReadMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CResourceMarshaler::EmitDeletionHelper(
        DirectComposition::CResourceMarshaler *this,
        int a2,
        struct DirectComposition::CBatch **a3)
{
  char *v5; // r8
  bool result; // al
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a3, 0x10uLL, &v7) )
    return 0;
  v5 = (char *)v7;
  *(_DWORD *)v7 = 16;
  *(_QWORD *)(v5 + 4) = 0LL;
  *((_DWORD *)v5 + 3) = 0;
  *((_DWORD *)v5 + 1) = 23;
  *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
  result = 1;
  *((_DWORD *)v5 + 3) = a2;
  return result;
}
