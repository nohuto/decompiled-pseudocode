/*
 * XREFs of ?PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000AE20
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18000A804 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 * Callees:
 *     ?GetPointInLocalSpace@CHitTestContext@@AEAA_NAEBVCMILMatrix@@PEAUD2D_POINT_2F@@@Z @ 0x18000AA40 (-GetPointInLocalSpace@CHitTestContext@@AEAA_NAEBVCMILMatrix@@PEAUD2D_POINT_2F@@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18000BEC8 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x18000C018 (-IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?HitTestContent@CVisual@@QEAAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18000C2B4 (-HitTestContent@CVisual@@QEAAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?Pop@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAHPEAW4Enum@MilBackfaceVisibility@@@Z @ 0x18000D248 (-Pop@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAHPEAW4Enum@MilBackfaceVisi.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180023F98 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004EE84 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x180051324 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x1800A5C6C (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x180110A70 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 */

__int64 __fastcall CHitTestContext::PostSubgraph(CHitTestContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 v4; // rdi
  unsigned int v7; // esi
  struct CTreeData *TreeData; // r15
  int WorldTransform; // eax
  int v11; // eax
  CTransform3D *Transform3DEffectNoRef; // rax
  CMILMatrix *Matrix; // rax
  int v14; // eax
  _BYTE v15[64]; // [rsp+30h] [rbp-78h] BYREF
  int v16; // [rsp+70h] [rbp-38h]
  bool v17; // [rsp+B0h] [rbp+8h] BYREF
  struct D2D_POINT_2F v18; // [rsp+C0h] [rbp+18h] BYREF

  *a3 = 1;
  v4 = *((_QWORD *)this + 3);
  v7 = 0;
  TreeData = CVisual::FindTreeData((CVisual *)v4, a2);
  if ( !*((_QWORD *)this + 14)
    && !CVisual::IsPreserve3DRoot((CVisual *)v4, *((const struct CVisual **)this + 4))
    && (*(_BYTE *)(v4 + 153) & 0x10) != 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 184LL))(v4) )
    {
      if ( *(_DWORD *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((char *)this + 120) != 1
        || (Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef((CVisual *)v4)) == 0LL
        || (Matrix = CTransform3D::GetMatrix(Transform3DEffectNoRef, (const struct D2D_SIZE_F *)(v4 + 192)),
            CMILMatrix::IsFacingUser(Matrix)) )
      {
        v16 = 0;
        WorldTransform = CVisual::GetWorldTransform(v4, a2, 4LL, v15, 0LL, 0LL);
        v7 = WorldTransform;
        if ( WorldTransform < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, WorldTransform, 0xE5u);
          return v7;
        }
        if ( CHitTestContext::GetPointInLocalSpace(this, (const struct CMILMatrix *)v15, &v18) )
        {
          v17 = 0;
          v11 = CVisual::HitTestContent((CVisual *)v4, &v18, &v17);
          v7 = v11;
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xEAu);
            return v7;
          }
          if ( v17 )
            *((_QWORD *)this + 14) = v4;
        }
      }
    }
  }
  if ( *(_DWORD *)(v4 + 260) != -1 )
    CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Pop((char *)this + 120);
  if ( (*((_BYTE *)TreeData + 224) & 8) != 0 )
  {
    v14 = *((_DWORD *)this + 38);
    if ( v14 )
      *((_DWORD *)this + 38) = v14 - 1;
  }
  if ( *((_QWORD *)this + 14) )
    *a3 = 0;
  return v7;
}
