/*
 * XREFs of ?CheckD3DResidencyAndDestroy@CD3DTexture@@MEAAXXZ @ 0x1800846C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x180015B8C (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ?Invalidate@CD3DResource@@IEAAXXZ @ 0x180015CC8 (-Invalidate@CD3DResource@@IEAAXXZ.c)
 *     ?QueryResourceResidency@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEAW4DXGI_RESIDENCY@@@Z @ 0x180019170 (-QueryResourceResidency@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEAW4DXGI_RESIDENCY@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CD3DTexture::CheckD3DResidencyAndDestroy(CD3DTexture *this)
{
  int v2; // eax
  DXGI_RESIDENCY v3; // [rsp+40h] [rbp+8h] BYREF

  v2 = CD3DDeviceLevel1::QueryResourceResidency(
         *(CD3DDeviceLevel1 **)(*((_QWORD *)this + 2) + 120LL),
         *((struct ID3D11Resource **)this + 16),
         &v3);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x269u);
  }
  else if ( (unsigned int)(v3 - 2) <= 1 )
  {
    CD3DResource::Invalidate(this);
    CD3DResourceManager::DestroyResource(*((CD3DResourceManager **)this + 2), (struct CD3DResource ***)this);
  }
}
