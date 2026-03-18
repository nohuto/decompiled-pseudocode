/*
 * XREFs of ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x1800F0440
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ @ 0x180061C60 (-CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180061CBC (-MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x180061DCC (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall VisualCaptureBitsResponse::OnPresentComplete(VisualCaptureBitsResponse *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v4; // eax
  int Bits; // eax

  v2 = CaptureBitsResponse::CalcSectionBitmapSize(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = CaptureBitsResponse::MapSectionBitmap(this);
    v3 = v4;
    if ( v4 >= 0 )
    {
      Bits = CaptureBitsResponse::GetBits(this);
      v3 = Bits;
      if ( Bits < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, Bits, 0x35u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x30u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x2Eu);
  }
  (*(void (__fastcall **)(VisualCaptureBitsResponse *, _QWORD))(*(_QWORD *)this + 32LL))(this, v3);
  return v3;
}
