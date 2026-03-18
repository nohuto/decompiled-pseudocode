/*
 * XREFs of ?RenderComposition@CAnalogRenderTarget@@AEAAJPEA_N@Z @ 0x180126FA0
 * Callers:
 *     ?Render@CAnalogRenderTarget@@UEAAJ_NPEA_N@Z @ 0x180126F00 (-Render@CAnalogRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180090C28 (-GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U-$TMILFlagsEnum@W4F.c)
 *     ?EnsureAnalogDisplay@CAnalogRenderTarget@@AEAAJXZ @ 0x1801262F8 (-EnsureAnalogDisplay@CAnalogRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CAnalogRenderTarget::RenderComposition(CAnalogRenderTarget *this, bool *a2)
{
  __int64 v4; // r8
  struct _LUID *v5; // rax
  struct _GUID *v6; // rdx
  int D3DDeviceForRenderTarget; // eax
  __int64 result; // rax
  struct CD3DDeviceLevel1 *v9; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 12) && (int)CAnalogRenderTarget::EnsureAnalogDisplay((struct CVisualTree **)this) >= 0 )
  {
    v5 = (struct _LUID *)*((_QWORD *)this + 12);
    v6 = (struct _GUID *)(*((_QWORD *)this + 2) + 252LL);
    v9 = 0LL;
    D3DDeviceForRenderTarget = CD3DDeviceManager::GetD3DDeviceForRenderTarget(
                                 (CD3DDeviceManager *)&g_D3DDeviceManager,
                                 v6,
                                 v4,
                                 1048,
                                 v5[104],
                                 &v9);
    if ( D3DDeviceForRenderTarget >= 0 )
      CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v9 + 392));
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DDeviceForRenderTarget, 0x2DAu);
  }
  result = 0LL;
  *a2 = g_AnalogCompositor == 0;
  return result;
}
