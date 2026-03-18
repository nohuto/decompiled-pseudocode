/*
 * XREFs of ?Render@CAnalogCompositorTarget@@UEAAJ_NPEA_N@Z @ 0x180167280
 * Callers:
 *     <none>
 * Callees:
 *     ?GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180034E44 (-GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U-$TMILFlagsEnum@W4F.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?EnsureAnalogDisplay@CAnalogCompositorTarget@@AEAAJXZ @ 0x180166F3C (-EnsureAnalogDisplay@CAnalogCompositorTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CAnalogCompositorTarget::Render(CAnalogCompositorTarget *this, __int64 a2, bool *a3)
{
  unsigned int v3; // ebx
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // rcx
  int D3DDeviceForRenderTarget; // eax

  v3 = 0;
  *a3 = *((_BYTE *)this + 40) == 0;
  if ( !*((_QWORD *)this + 6) )
  {
    v5 = CAnalogCompositorTarget::EnsureAnalogDisplay((CAnalogCompositorTarget *)((char *)this - 112));
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x75u);
    }
    else
    {
      v7 = *((_QWORD *)this + 7);
      if ( v7 )
      {
        CMILPoolResource::Release((CMILPoolResource *)(v7 + 408));
        *((_QWORD *)this + 7) = 0LL;
      }
      D3DDeviceForRenderTarget = CD3DDeviceManager::GetD3DDeviceForRenderTarget(
                                   (CD3DDeviceManager *)&g_D3DDeviceManager,
                                   (const struct _GUID *)(*((_QWORD *)this - 12) + 252LL),
                                   v6,
                                   1048,
                                   *(struct _LUID *)(*((_QWORD *)this + 6) + 232LL),
                                   (struct CD3DDeviceLevel1 **)this + 7);
      v3 = D3DDeviceForRenderTarget;
      if ( D3DDeviceForRenderTarget < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DDeviceForRenderTarget, 0x89u);
    }
  }
  return v3;
}
