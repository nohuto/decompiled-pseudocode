/*
 * XREFs of ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x180015F88
 * Callers:
 *     ?Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z @ 0x18000FAD0 (-Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z.c)
 *     ?Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAPEAV1@@Z @ 0x18001554C (-Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAP.c)
 *     ??0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x18001B7C4 (--0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@@Z.c)
 *     ?Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z @ 0x18013DD98 (-Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z.c)
 *     ?Create@CD2DMesh@@SAJPEAVCD2DResourceManager@@PEAUID2D1Geometry@@PEAPEAV1@@Z @ 0x18013EA28 (-Create@CD2DMesh@@SAJPEAVCD2DResourceManager@@PEAUID2D1Geometry@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CD2DResource *__fastcall CD2DResource::CD2DResource(CD2DResource *this, struct CD2DResourceManager *a2)
{
  char *v2; // rax
  __int64 *v3; // rdx
  __int64 v4; // r8
  CD2DResource *result; // rax

  *((_QWORD *)this + 3) = a2;
  *(_QWORD *)this = &CD2DResource::`vftable'{for `CMILCOMBase'};
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = &CD2DBitmap::`vftable'{for `IDeviceResource'};
  *((_BYTE *)this + 32) = 0;
  *((_QWORD *)this + 7) = (char *)this + 88;
  *((_QWORD *)this + 8) = (char *)this + 88;
  *((_DWORD *)this + 18) = 2;
  *(_QWORD *)((char *)this + 76) = 2LL;
  v2 = (char *)this + 40;
  v3 = (__int64 *)*((_QWORD *)this + 3);
  v4 = *v3;
  *((_QWORD *)this + 5) = *v3;
  *((_QWORD *)this + 6) = v3;
  if ( *(__int64 **)(v4 + 8) != v3 )
    __fastfail(3u);
  *(_QWORD *)(v4 + 8) = v2;
  *v3 = (__int64)v2;
  result = this;
  *((_BYTE *)this + 32) = 1;
  return result;
}
