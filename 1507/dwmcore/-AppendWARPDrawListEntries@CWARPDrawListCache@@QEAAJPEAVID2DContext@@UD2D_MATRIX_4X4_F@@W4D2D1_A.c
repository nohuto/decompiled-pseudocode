/*
 * XREFs of ?AppendWARPDrawListEntries@CWARPDrawListCache@@QEAAJPEAVID2DContext@@UD2D_MATRIX_4X4_F@@W4D2D1_ANTIALIAS_MODE@@W4Enum@BlendMode@@W4D2D1_INTERPOLATION_MODE@@M@Z @ 0x1800FEB1C
 * Callers:
 *     ?DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBUD2D_RECT_F@@@Z @ 0x1800F294C (-DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBU.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?SetUncachedState@CWARPDrawListEntry@@QEAAXUD2D_MATRIX_4X4_F@@W4D2D1_ANTIALIAS_MODE@@W4Enum@BlendMode@@W4D2D1_INTERPOLATION_MODE@@M@Z @ 0x1800FF520 (-SetUncachedState@CWARPDrawListEntry@@QEAAXUD2D_MATRIX_4X4_F@@W4D2D1_ANTIALIAS_MODE@@W4Enum@Blen.c)
 *     ?AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z @ 0x180134F78 (-AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z.c)
 */

__int64 __fastcall CWARPDrawListCache::AppendWARPDrawListEntries(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7)
{
  unsigned int v7; // ebx
  __int64 v8; // rsi
  __int64 v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  struct CWARPDrawListEntry *v16; // rdi
  __int128 v17; // xmm1
  CD2DContext *v18; // rax
  int appended; // eax
  _OWORD v21[4]; // [rsp+30h] [rbp-78h] BYREF

  v7 = 0;
  v8 = 0LL;
  if ( *(_DWORD *)(a1 + 24) )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(a1 + 16);
      v14 = a3[1];
      v21[0] = *a3;
      v15 = a3[2];
      v16 = *(struct CWARPDrawListEntry **)(v13 + 8 * v8);
      v21[1] = v14;
      v17 = a3[3];
      v21[2] = v15;
      v21[3] = v17;
      ((void (__fastcall *)(struct CWARPDrawListEntry *, _OWORD *, _QWORD, _QWORD, int, int))CWARPDrawListEntry::SetUncachedState)(
        v16,
        v21,
        a4,
        a5,
        a6,
        a7);
      v18 = (CD2DContext *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 184LL))(a2);
      appended = CD2DContext::AppendWARPDrawListEntry(v18, v16);
      v7 = appended;
      if ( appended < 0 )
        break;
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= *(_DWORD *)(a1 + 24) )
        return v7;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x168u);
  }
  return v7;
}
