/*
 * XREFs of ?Flush@CD2DContext@@MEAAJPEBVID2DContextOwner@@@Z @ 0x180147610
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800207C0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DContext::Flush(struct ID2D1PrivateCompositorRenderer **this, const struct ID2DContextOwner *a2)
{
  unsigned int v3; // ebx
  int v4; // eax

  CD2DContext::FlushDrawList(this);
  v3 = 0;
  if ( *((_BYTE *)this + 376) && *((_BYTE *)this + 377) )
  {
    v4 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, _QWORD, _QWORD))(*(_QWORD *)this[5] + 336LL))(
           this[5],
           0LL,
           0LL);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x370u);
    *((_BYTE *)this + 377) = 0;
  }
  return v3;
}
