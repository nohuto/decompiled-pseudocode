/*
 * XREFs of ?Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x180121AE0
 * Callers:
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x180067CD4 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x180124874 (-RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x180124B50 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MoveOptimizationInfo::Create(
        __int64 a1,
        float a2,
        float a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  unsigned int v7; // ebx
  __int64 v10; // rax
  __int128 v11; // xmm0

  v7 = 0;
  *a7 = 0LL;
  v10 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          64LL);
  if ( v10 )
  {
    *(_DWORD *)(v10 + 8) = 0;
    *(_QWORD *)v10 = &MoveOptimizationInfo::`vftable';
    *(_QWORD *)(v10 + 16) = 0LL;
    *(_QWORD *)(v10 + 48) = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    *(float *)(v10 + 24) = a2;
    *(float *)(v10 + 28) = a3;
    *(_QWORD *)(v10 + 16) = a1;
    v11 = *a4;
    *(_QWORD *)(v10 + 48) = a5;
    *(_OWORD *)(v10 + 32) = v11;
    *(_QWORD *)(v10 + 56) = a6;
    *a7 = v10;
    CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)v10);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x59u);
  }
  return v7;
}
