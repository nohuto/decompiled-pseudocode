/*
 * XREFs of ?EnsureWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x18000C56C
 * Callers:
 *     ?EnsureParentWorldTransforms@CHitTestContext@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18000A934 (-EnsureParentWorldTransforms@CHitTestContext@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18000BEC8 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 * Callees:
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18000C434 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?GetParentTreeData@CVisual@@AEAAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x18000C5D0 (-GetParentTreeData@CVisual@@AEAAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisual::EnsureWorldTransform(CVisual *this, const struct CVisualTree *a2, struct CTreeData *a3)
{
  unsigned int v6; // ebx
  const struct CTreeData *ParentTreeData; // rax
  const struct CTreeData *v8; // r8
  unsigned __int64 v9; // rax
  int updated; // eax
  bool v12; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0;
  ParentTreeData = CVisual::GetParentTreeData(this, a2, a3, &v12);
  v8 = ParentTreeData;
  if ( ParentTreeData )
    v9 = *((_QWORD *)ParentTreeData + 15);
  else
    v9 = 1LL;
  if ( *((_QWORD *)a3 + 15) < v9 )
  {
    updated = CVisual::UpdateWorldTransform(this, (CVisual **)a2, a3, v12, v8);
    v6 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x596u);
  }
  return v6;
}
