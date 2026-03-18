/*
 * XREFs of ?PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800089E0
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800061B4 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 * Callees:
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x1800062E4 (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?Pop@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAHPEAW4Enum@MilBackfaceVisibility@@@Z @ 0x180006300 (-Pop@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAHPEAW4Enum@MilBackfaceVisi.c)
 *     ?GetPointInLocalSpace@CHitTestContext@@AEAA_NAEBVCMILMatrix@@PEAUD2D_POINT_2F@@@Z @ 0x18000801C (-GetPointInLocalSpace@CHitTestContext@@AEAA_NAEBVCMILMatrix@@PEAUD2D_POINT_2F@@@Z.c)
 *     ?HitTestContent@CVisual@@QEAAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180009204 (-HitTestContent@CVisual@@QEAAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetWorldTransform@CVisual@@IEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800094A4 (-GetWorldTransform@CVisual@@IEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x1800095FC (-IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x180048F10 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004DB1C (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x180059984 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800677D4 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CHitTestContext::PostSubgraph(CHitTestContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 v4; // rsi
  unsigned int v7; // ebp
  struct CTreeData *TreeData; // r12
  int WorldTransform; // eax
  int v11; // eax
  CTransform3D *Transform3DEffectNoRef; // rax
  CMILMatrix *Matrix; // rax
  int v14; // eax
  bool v15; // [rsp+30h] [rbp-98h] BYREF
  struct D2D_POINT_2F v16; // [rsp+38h] [rbp-90h] BYREF
  _BYTE v17[64]; // [rsp+40h] [rbp-88h] BYREF

  *a3 = 1;
  v4 = *((_QWORD *)this + 3);
  v7 = 0;
  TreeData = CVisual::FindTreeData((CVisual *)v4, a2);
  if ( !*((_QWORD *)this + 14)
    && !CVisual::IsPreserve3DRoot((CVisual *)v4, *((const struct CVisual **)this + 4))
    && (*(_BYTE *)(v4 + 73) & 0x10) != 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 176LL))(v4) )
    {
      if ( *(_DWORD *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((__int64)this + 120) != 1
        || (Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef((CVisual *)v4)) == 0LL
        || (Matrix = CTransform3D::GetMatrix(Transform3DEffectNoRef, (const struct D2D_SIZE_F *)(v4 + 132)),
            CMILMatrix::IsFacingUser(Matrix)) )
      {
        WorldTransform = CVisual::GetWorldTransform(v4, a2, 4LL, v17, 0LL, 0LL);
        v7 = WorldTransform;
        if ( WorldTransform < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, WorldTransform, 0xE4u);
          return v7;
        }
        if ( CHitTestContext::GetPointInLocalSpace(this, (const struct CMILMatrix *)v17, &v16) )
        {
          v15 = 0;
          v11 = CVisual::HitTestContent((CVisual *)v4, &v16, &v15);
          v7 = v11;
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xE9u);
            return v7;
          }
          if ( v15 )
            *((_QWORD *)this + 14) = v4;
        }
      }
    }
  }
  if ( *(_DWORD *)(v4 + 200) != -1 )
    CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Pop((_DWORD *)this + 30);
  if ( (*((_BYTE *)TreeData + 264) & 8) != 0 )
  {
    v14 = *((_DWORD *)this + 38);
    if ( v14 )
      *((_DWORD *)this + 38) = v14 - 1;
  }
  if ( *((_QWORD *)this + 14) )
    *a3 = 0;
  return v7;
}
