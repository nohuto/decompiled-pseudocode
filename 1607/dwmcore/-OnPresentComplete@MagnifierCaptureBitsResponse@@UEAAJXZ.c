/*
 * XREFs of ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ @ 0x180121100
 * Callers:
 *     ?MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CAPTUREBITS@@@Z @ 0x18010F858 (-MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 * Callees:
 *     ?FlushAllDevices@CD3DDeviceManager@@QEAAXXZ @ 0x1800351A8 (-FlushAllDevices@CD3DDeviceManager@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x180121160 (-SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z.c)
 */

__int64 __fastcall MagnifierCaptureBitsResponse::OnPresentComplete(MagnifierCaptureBitsResponse *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  CD3DDeviceManager::FlushAllDevices((CD3DDeviceManager *)&g_D3DDeviceManager);
  *(_BYTE *)(*((_QWORD *)this + 20) + 328LL) = 0;
  v2 = MagnifierCaptureBitsResponse::SendResponse(this, 0);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x6Du);
  return v3;
}
