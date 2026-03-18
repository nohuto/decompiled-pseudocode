/*
 * XREFs of ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x180120870
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ @ 0x1800099EC (-CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180009A48 (-MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x180009B4C (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VisualCaptureBitsResponse::OnPresentComplete(VisualCaptureBitsResponse *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int Bits; // eax

  v2 = CaptureBitsResponse::CalcSectionBitmapSize(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x2Eu);
  }
  else
  {
    v4 = CaptureBitsResponse::MapSectionBitmap(this);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x30u);
    }
    else
    {
      Bits = CaptureBitsResponse::GetBits(this);
      v3 = Bits;
      if ( Bits < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, Bits, 0x35u);
    }
  }
  (*(void (__fastcall **)(VisualCaptureBitsResponse *, _QWORD))(*(_QWORD *)this + 32LL))(this, v3);
  return v3;
}
