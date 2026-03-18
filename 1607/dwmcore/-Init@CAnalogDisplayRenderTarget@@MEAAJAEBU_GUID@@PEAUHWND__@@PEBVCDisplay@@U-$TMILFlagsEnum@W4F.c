/*
 * XREFs of ?Init@CAnalogDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180167D20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Init@CHwDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18008E90C (-Init@CHwDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Flags.c)
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x1800B428C (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     ?UpdateFlippingChain@CAnalogDisplayRenderTarget@@AEAAJII@Z @ 0x180167E50 (-UpdateFlippingChain@CAnalogDisplayRenderTarget@@AEAAJII@Z.c)
 */

__int64 __fastcall CAnalogDisplayRenderTarget::Init(
        CAnalogDisplayRenderTarget *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  int v6; // eax
  unsigned int v7; // ebx
  int updated; // eax
  int v9; // eax

  v6 = CHwDisplayRenderTarget::Init((__int64)this, a2, a3, a4, a5);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xADu);
  }
  else
  {
    updated = CAnalogDisplayRenderTarget::UpdateFlippingChain(this, 0, 0);
    v7 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0xB1u);
    }
    else
    {
      v9 = CBaseRenderTarget::Init(this);
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xB4u);
    }
  }
  return v7;
}
