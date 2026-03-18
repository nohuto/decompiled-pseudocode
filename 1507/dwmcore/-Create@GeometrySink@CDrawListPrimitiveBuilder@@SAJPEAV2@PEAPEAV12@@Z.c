/*
 * XREFs of ?Create@GeometrySink@CDrawListPrimitiveBuilder@@SAJPEAV2@PEAPEAV12@@Z @ 0x180008FF0
 * Callers:
 *     ?AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLAGS@@W4D2D1_ANTIALIAS_MODE@@_N4PEBUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@PEAVCShape@@4@Z @ 0x180076F50 (-AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDrawListPrimitiveBuilder::GeometrySink::Create(
        struct CDrawListPrimitiveBuilder *a1,
        struct CDrawListPrimitiveBuilder::GeometrySink **a2)
{
  unsigned int v4; // esi
  __int64 v5; // rax
  struct CDrawListPrimitiveBuilder::GeometrySink *v6; // rdi

  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         240LL);
  v6 = (struct CDrawListPrimitiveBuilder::GeometrySink *)v5;
  if ( v5 )
  {
    *(_DWORD *)(v5 + 8) = 0;
    *(_QWORD *)(v5 + 24) = a1;
    *(_QWORD *)v5 = &CDrawListPrimitiveBuilder::GeometrySink::`vftable'{for `CMILCOMBase'};
    *(_QWORD *)(v5 + 16) = &CDrawListPrimitiveBuilder::GeometrySink::`vftable'{for `ID2D1SimplifiedGeometrySink'};
    *(_DWORD *)(v5 + 32) = 0;
    *(_QWORD *)(v5 + 40) = v5 + 72;
    *(_QWORD *)(v5 + 48) = v5 + 72;
    *(_DWORD *)(v5 + 56) = 8;
    *(_QWORD *)(v5 + 60) = 8LL;
    *(_QWORD *)(v5 + 136) = v5 + 168;
    *(_QWORD *)(v5 + 144) = v5 + 168;
    *(_DWORD *)(v5 + 152) = 8;
    *(_QWORD *)(v5 + 156) = 8LL;
    *(_QWORD *)(v5 + 200) = 0LL;
    *(_DWORD *)(v5 + 208) = 1;
    *(_WORD *)(v5 + 232) = 0;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    (*(void (__fastcall **)(struct CDrawListPrimitiveBuilder::GeometrySink *))(*(_QWORD *)v6 + 8LL))(v6);
    *a2 = v6;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2E6u);
  }
  return v4;
}
