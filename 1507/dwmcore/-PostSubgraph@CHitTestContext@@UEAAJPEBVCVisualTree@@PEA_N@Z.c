/*
 * XREFs of ?PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000A900
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18000A73C (--$WalkSubtree@VCHitTestContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTes.c)
 * Callees:
 *     ?GetPointInVisualSpace@CHitTestContext@@AEAAJPEAVCVisual@@PEAVCDesktopTreeData@@PEAUD2D_POINT_2F@@PEA_N_N@Z @ 0x18000B80C (-GetPointInVisualSpace@CHitTestContext@@AEAAJPEAVCVisual@@PEAVCDesktopTreeData@@PEAUD2D_POINT_2F.c)
 *     ?HitTestContent@CVisual@@QEAAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18000BB10 (-HitTestContent@CVisual@@QEAAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x18000BED0 (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?Pop@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAHPEAW4Enum@MilBackfaceVisibility@@@Z @ 0x18000BEEC (-Pop@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAHPEAW4Enum@MilBackfaceVisi.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18003553C (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?IsBackfaced@CVisual@@IEBA_NXZ @ 0x18010432C (-IsBackfaced@CVisual@@IEBA_NXZ.c)
 */

__int64 __fastcall CHitTestContext::PostSubgraph(CHitTestContext *this, const struct CVisualTree *a2, bool *a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rsi
  struct CTreeData *TreeData; // r14
  int PointInVisualSpace; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  bool v14; // [rsp+60h] [rbp+8h] BYREF
  struct D2D_POINT_2F v15; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 1;
  v3 = 0;
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
    v4 -= 64LL;
  TreeData = CVisual::FindTreeData((CVisual *)v4, a2);
  if ( !*((_QWORD *)this + 14)
    && *(_DWORD *)(v4 + 100) != 2
    && (*(_BYTE *)(v4 + 89) & 0x40) != 0
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 176LL))(v4)
    && (*(_DWORD *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((char *)this + 184) != 1
     || !CVisual::IsBackfaced((CVisual *)v4)) )
  {
    v14 = 0;
    PointInVisualSpace = CHitTestContext::GetPointInVisualSpace(this, (struct CVisual *)v4, TreeData, &v15, &v14, 0);
    v3 = PointInVisualSpace;
    if ( PointInVisualSpace < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, PointInVisualSpace, 0xE2u);
      return v3;
    }
    if ( v14 )
    {
      v14 = 0;
      v10 = CVisual::HitTestContent((CVisual *)v4, &v15, &v14);
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xE7u);
        return v3;
      }
      if ( v14 )
        *((_QWORD *)this + 14) = v4;
    }
  }
  if ( (*((_BYTE *)TreeData + 264) & 0x10) != 0 )
  {
    v11 = *((_DWORD *)this + 38);
    if ( v11 )
      *((_DWORD *)this + 38) = v11 - 1;
  }
  if ( (*((_BYTE *)TreeData + 264) & 8) != 0 )
  {
    v12 = *((_DWORD *)this + 30);
    if ( v12 )
      *((_DWORD *)this + 30) = v12 - 1;
  }
  if ( *(_DWORD *)(v4 + 216) != -1 )
    CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Pop((char *)this + 184);
  if ( (*((_BYTE *)TreeData + 264) & 0x20) != 0 )
  {
    v13 = *((_DWORD *)this + 54);
    if ( v13 )
      *((_DWORD *)this + 54) = v13 - 1;
  }
  if ( *((_QWORD *)this + 14) )
    *a3 = 0;
  return v3;
}
