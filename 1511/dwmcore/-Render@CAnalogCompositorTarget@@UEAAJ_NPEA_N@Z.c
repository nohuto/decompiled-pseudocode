/*
 * XREFs of ?Render@CAnalogCompositorTarget@@UEAAJ_NPEA_N@Z @ 0x18013D2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800712FC (-GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U-$TMILFlagsEnum@W4F.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureAnalogDisplay@CAnalogCompositorTarget@@AEAAJXZ @ 0x18013CF58 (-EnsureAnalogDisplay@CAnalogCompositorTarget@@AEAAJXZ.c)
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
    v5 = CAnalogCompositorTarget::EnsureAnalogDisplay((CAnalogCompositorTarget *)((char *)this - 40));
    v3 = v5;
    if ( v5 >= 0 )
    {
      v7 = *((_QWORD *)this + 7);
      if ( v7 )
      {
        CMILPoolResource::Release((CMILPoolResource *)(v7 + 384));
        *((_QWORD *)this + 7) = 0LL;
      }
      D3DDeviceForRenderTarget = CD3DDeviceManager::GetD3DDeviceForRenderTarget(
                                   (CD3DDeviceManager *)&g_D3DDeviceManager,
                                   (const struct _GUID *)(*((_QWORD *)this - 3) + 252LL),
                                   v6,
                                   1048,
                                   *(struct _LUID *)(*((_QWORD *)this + 6) + 232LL),
                                   (struct CD3DDeviceLevel1 **)this + 7);
      v3 = D3DDeviceForRenderTarget;
      if ( D3DDeviceForRenderTarget < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DDeviceForRenderTarget, 0x89u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x75u);
    }
  }
  return v3;
}
