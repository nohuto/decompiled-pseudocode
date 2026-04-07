/*
 * XREFs of ?_UpdateAddedImmersiveBackground@CLivePreview@@AEAAJXZ @ 0x180073004
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x180071684 (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180022540 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?_ShouldAddImmersiveChrome@CLivePreview@@AEAA_NXZ @ 0x180072C74 (-_ShouldAddImmersiveChrome@CLivePreview@@AEAA_NXZ.c)
 *     ?s_GetCoverageStateOfTwoRects@CLivePreview@@CA?AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z @ 0x180073A00 (-s_GetCoverageStateOfTwoRects@CLivePreview@@CA-AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z.c)
 */

__int64 __fastcall CLivePreview::_UpdateAddedImmersiveBackground(CLivePreview *this)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rsi
  bool v5; // zf
  __int64 v6; // rax
  double v7; // xmm1_8
  CVisual *v8; // rcx
  __int64 v9; // rdx

  if ( CLivePreview::_ShouldAddImmersiveChrome(this) )
  {
    v2 = 0;
    if ( *((_DWORD *)this + 110) )
    {
      while ( 1 )
      {
        v3 = *((_QWORD *)this + 65);
        if ( !v3 || *(_DWORD *)(v3 + 112) == 1 )
          break;
        v4 = 32LL * v2;
        v5 = (unsigned int)CLivePreview::s_GetCoverageStateOfTwoRects(v4 + *((_QWORD *)this + 52) + 8LL, v3 + 48, 0LL) == 1;
        v6 = *((_QWORD *)this + 52);
        if ( v5 )
        {
          *(_BYTE *)(v4 + v6 + 24) = 0;
          v8 = *(CVisual **)(v4 + *((_QWORD *)this + 52));
LABEL_9:
          v7 = 0.0;
          goto LABEL_10;
        }
        v7 = DOUBLE_1_0;
        *(_BYTE *)(v4 + v6 + 24) = 1;
        v8 = *(CVisual **)(v4 + *((_QWORD *)this + 52));
LABEL_10:
        CVisual::SetOpacity(v8, v7);
        if ( ++v2 >= *((_DWORD *)this + 110) )
          return 0LL;
      }
      v9 = 32LL * v2;
      *(_BYTE *)(v9 + *((_QWORD *)this + 52) + 24) = 0;
      v8 = *(CVisual **)(v9 + *((_QWORD *)this + 52));
      goto LABEL_9;
    }
  }
  return 0LL;
}
