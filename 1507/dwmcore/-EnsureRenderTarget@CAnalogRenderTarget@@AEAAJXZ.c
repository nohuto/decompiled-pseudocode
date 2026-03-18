/*
 * XREFs of ?EnsureRenderTarget@CAnalogRenderTarget@@AEAAJXZ @ 0x180126408
 * Callers:
 *     ?CheckDeviceState@CAnalogRenderTarget@@UEAAJXZ @ 0x180126210 (-CheckDeviceState@CAnalogRenderTarget@@UEAAJXZ.c)
 *     ?RenderSlate@CAnalogRenderTarget@@AEAAJPEA_N@Z @ 0x1801272F4 (-RenderSlate@CAnalogRenderTarget@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?EnsureAnalogDisplay@CAnalogRenderTarget@@AEAAJXZ @ 0x1801262F8 (-EnsureAnalogDisplay@CAnalogRenderTarget@@AEAAJXZ.c)
 *     ?Create@CAnalogDisplayRenderTarget@@SAJAEBU_GUID@@KPEBVCDisplay@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x180127AA8 (-Create@CAnalogDisplayRenderTarget@@SAJAEBU_GUID@@KPEBVCDisplay@@PEAPEAVIRenderTargetDisplay@@@Z.c)
 */

__int64 __fastcall CAnalogRenderTarget::EnsureRenderTarget(CAnalogRenderTarget *this)
{
  unsigned int v1; // ebp
  struct IRenderTargetDisplay **v2; // r12
  int v4; // eax
  int v5; // eax

  v1 = 0;
  v2 = (struct IRenderTargetDisplay **)((char *)this + 200);
  if ( !*((_QWORD *)this + 25) )
  {
    v4 = CAnalogRenderTarget::EnsureAnalogDisplay((struct CVisualTree **)this);
    v1 = v4;
    if ( v4 >= 0 )
    {
      v5 = CAnalogDisplayRenderTarget::Create(
             (const struct _GUID *)(*((_QWORD *)this + 2) + 252LL),
             *((_DWORD *)this + 52),
             *((const struct CDisplay **)this + 12),
             v2);
      v1 = v5;
      if ( v5 >= 0 )
      {
        (*(void (__fastcall **)(struct IRenderTargetDisplay *, _QWORD, _QWORD))(*(_QWORD *)*v2 + 240LL))(
          *v2,
          (unsigned int)(*((_DWORD *)this + 28) - *((_DWORD *)this + 26)),
          (unsigned int)(*((_DWORD *)this + 29) - *((_DWORD *)this + 27)));
        (*(void (__fastcall **)(struct IRenderTargetDisplay *, _QWORD, _QWORD))(*(_QWORD *)*v2 + 248LL))(
          *v2,
          *((unsigned int *)this + 26),
          *((unsigned int *)this + 27));
        *((_BYTE *)this + 212) = 1;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x2AEu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2A9u);
    }
  }
  return v1;
}
