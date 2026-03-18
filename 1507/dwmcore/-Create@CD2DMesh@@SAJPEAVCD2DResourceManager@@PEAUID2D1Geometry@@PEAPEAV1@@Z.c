/*
 * XREFs of ?Create@CD2DMesh@@SAJPEAVCD2DResourceManager@@PEAUID2D1Geometry@@PEAPEAV1@@Z @ 0x18013EA28
 * Callers:
 *     ?CreateMeshFromRects@CD2DContext@@MEAAJPEBUMilRectU@@IPEAPEAVCD2DMesh@@@Z @ 0x1801354A0 (-CreateMeshFromRects@CD2DContext@@MEAAJPEBUMilRectU@@IPEAPEAVCD2DMesh@@@Z.c)
 * Callees:
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x180015F88 (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD2DMesh::Create(struct CD2DResourceManager *a1, struct ID2D1Geometry *a2, struct CD2DMesh **a3)
{
  unsigned int v3; // esi
  CD2DResource *v7; // rax
  struct CD2DMesh *v8; // rdi

  v3 = 0;
  *a3 = 0LL;
  v7 = (CD2DResource *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         112LL);
  v8 = v7;
  if ( v7 )
  {
    CD2DResource::CD2DResource(v7, a1);
    *((_QWORD *)v8 + 13) = 0LL;
    *((_QWORD *)v8 + 2) = &CSecondaryD2DBitmap::`vftable'{for `IDeviceResource'};
    *(_QWORD *)v8 = &CD2DMesh::`vftable'{for `CMILCOMBase'};
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    (*(void (__fastcall **)(struct CD2DMesh *))(*(_QWORD *)v8 + 8LL))(v8);
    *((_QWORD *)v8 + 13) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)a2 + 8LL))(a2);
    *a3 = v8;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x13u);
  }
  return v3;
}
