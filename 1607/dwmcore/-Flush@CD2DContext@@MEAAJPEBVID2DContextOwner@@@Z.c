/*
 * XREFs of ?Flush@CD2DContext@@MEAAJPEBVID2DContextOwner@@@Z @ 0x1801772D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007CA60 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::Flush(struct ID2D1PrivateCompositorRenderer **this, const struct ID2DContextOwner *a2)
{
  unsigned int v3; // edi
  int v4; // eax

  CD2DContext::FlushDrawList(this);
  v3 = 0;
  if ( *((_BYTE *)this + 400) && *((_BYTE *)this + 401) )
  {
    v4 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, _QWORD, _QWORD))(*(_QWORD *)this[5] + 336LL))(
           this[5],
           0LL,
           0LL);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x4DBu);
    *((_BYTE *)this + 401) = 0;
  }
  return v3;
}
