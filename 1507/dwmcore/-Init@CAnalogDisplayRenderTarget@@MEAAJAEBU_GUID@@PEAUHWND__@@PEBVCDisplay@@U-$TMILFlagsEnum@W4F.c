/*
 * XREFs of ?Init@CAnalogDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180127E80
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x1800850B8 (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     ?Init@CHwDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18008E960 (-Init@CHwDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Flags.c)
 *     ?UpdateFlippingChain@CAnalogDisplayRenderTarget@@AEAAJII@Z @ 0x180127F8C (-UpdateFlippingChain@CAnalogDisplayRenderTarget@@AEAAJII@Z.c)
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
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v6 = CHwDisplayRenderTarget::Init((__int64)this, a2, a3, a4, a5);
  v7 = v6;
  if ( v6 >= 0 )
  {
    updated = CAnalogDisplayRenderTarget::UpdateFlippingChain(this, 0, 0);
    v7 = updated;
    if ( updated >= 0 )
    {
      updated = CBaseRenderTarget::Init(this);
      v7 = updated;
      if ( updated >= 0 )
        return v7;
      v10 = 161;
    }
    else
    {
      v10 = 158;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, v10);
    return v7;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x9Au);
  return v7;
}
