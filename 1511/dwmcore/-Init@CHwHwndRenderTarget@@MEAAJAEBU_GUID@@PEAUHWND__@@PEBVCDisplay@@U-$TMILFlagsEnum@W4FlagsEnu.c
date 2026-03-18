/*
 * XREFs of ?Init@CHwHwndRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18014FCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x18002C5B8 (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     ?Init@CHwDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18007FF9C (-Init@CHwDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Flags.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateFlippingChain@CHwHwndRenderTarget@@AEAAJII@Z @ 0x18014FDCC (-UpdateFlippingChain@CHwHwndRenderTarget@@AEAAJII@Z.c)
 */

__int64 __fastcall CHwHwndRenderTarget::Init(CBaseRenderTarget *this, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v6; // eax
  unsigned int v7; // ebx
  int updated; // eax
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v6 = CHwDisplayRenderTarget::Init((__int64)this, a2, a3, a4, a5);
  v7 = v6;
  if ( v6 >= 0 )
  {
    updated = CHwHwndRenderTarget::UpdateFlippingChain(this, 0, 0);
    v7 = updated;
    if ( updated >= 0 )
    {
      updated = CBaseRenderTarget::Init(this);
      v7 = updated;
      if ( updated >= 0 )
        return v7;
      v10 = 99;
    }
    else
    {
      v10 = 96;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, v10);
    return v7;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x5Au);
  return v7;
}
