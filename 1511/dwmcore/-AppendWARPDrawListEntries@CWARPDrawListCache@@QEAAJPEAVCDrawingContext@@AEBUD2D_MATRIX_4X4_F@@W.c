/*
 * XREFs of ?AppendWARPDrawListEntries@CWARPDrawListCache@@QEAAJPEAVCDrawingContext@@AEBUD2D_MATRIX_4X4_F@@W4D2D1_ANTIALIAS_MODE@@W4Enum@BlendMode@@W4D2D1_INTERPOLATION_MODE@@M@Z @ 0x1801178FC
 * Callers:
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x18010C250 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IssueSurfaceNotifications@CWARPDrawListEntry@@QEAAXPEAVCDrawingContext@@@Z @ 0x180118220 (-IssueSurfaceNotifications@CWARPDrawListEntry@@QEAAXPEAVCDrawingContext@@@Z.c)
 *     ?SetUncachedState@CWARPDrawListEntry@@QEAAXAEBUD2D_MATRIX_4X4_F@@W4D2D1_ANTIALIAS_MODE@@W4Enum@BlendMode@@W4D2D1_INTERPOLATION_MODE@@M@Z @ 0x1801183A8 (-SetUncachedState@CWARPDrawListEntry@@QEAAXAEBUD2D_MATRIX_4X4_F@@W4D2D1_ANTIALIAS_MODE@@W4Enum@B.c)
 *     ?AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z @ 0x1801462B8 (-AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z.c)
 */

__int64 __fastcall CWARPDrawListCache::AppendWARPDrawListEntries(
        __int64 a1,
        struct CDrawingContext *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7)
{
  __int64 v7; // r15
  unsigned int v8; // ebx
  __int64 v9; // rsi
  __int64 v11; // r10
  CWARPDrawListEntry *v14; // rdi
  CD2DContext *v15; // rax
  int appended; // eax

  v7 = *((_QWORD *)a2 + 47);
  v8 = 0;
  v9 = 0LL;
  v11 = a3;
  if ( *(_DWORD *)(a1 + 24) )
  {
    while ( 1 )
    {
      v14 = *(CWARPDrawListEntry **)(*(_QWORD *)(a1 + 16) + 8 * v9);
      CWARPDrawListEntry::SetUncachedState(v14, v11, a4, a5, a6, a7);
      CWARPDrawListEntry::IssueSurfaceNotifications(v14, a2);
      v15 = (CD2DContext *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 184LL))(v7);
      appended = CD2DContext::AppendWARPDrawListEntry(v15, v14);
      v8 = appended;
      if ( appended < 0 )
        break;
      v11 = a3;
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= *(_DWORD *)(a1 + 24) )
        return v8;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x169u);
  }
  return v8;
}
