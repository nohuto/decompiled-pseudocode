/*
 * XREFs of ?Create@CSwRenderTargetGetBounds@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18005F838
 * Callers:
 *     ?EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ @ 0x180050584 (-EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::Create(struct CComposition *a1, struct CSwRenderTargetGetBounds **a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned int v6; // edi
  int v7; // eax

  v4 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         72LL);
  v5 = v4;
  v6 = 0;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 0;
    *(_DWORD *)(v4 + 32) = 1;
    *(_QWORD *)v4 = &CSwRenderTargetGetBounds::`vftable'{for `CMILCOMBase'};
    *(_QWORD *)(v4 + 16) = &CSwRenderTargetGetBounds::`vftable'{for `IRenderTargetBounds'};
    *(_QWORD *)(v4 + 24) = &CSwRenderTargetGetBounds::`vftable'{for `ID2DContext'};
    *(_QWORD *)(v4 + 40) = a1;
    *(_DWORD *)(v4 + 48) = 0;
    *(_OWORD *)(v4 + 52) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)v5);
    v7 = *(_DWORD *)(v5 + 32) + 1;
    if ( *(_DWORD *)(v5 + 32) == -1 )
      v7 = 1;
    *(_DWORD *)(v5 + 32) = v7;
    *(_OWORD *)(v5 + 52) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    *a2 = (struct CSwRenderTargetGetBounds *)v5;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x32u);
  }
  return v6;
}
