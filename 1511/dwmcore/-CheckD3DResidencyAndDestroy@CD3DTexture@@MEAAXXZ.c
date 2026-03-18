/*
 * XREFs of ?CheckD3DResidencyAndDestroy@CD3DTexture@@MEAAXXZ @ 0x18002D430
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryResourceResidency@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEAW4DXGI_RESIDENCY@@@Z @ 0x18002433C (-QueryResourceResidency@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEAW4DXGI_RESIDENCY@@@Z.c)
 *     ?Invalidate@CD3DResource@@IEAAXXZ @ 0x180027B5C (-Invalidate@CD3DResource@@IEAAXXZ.c)
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x180027F80 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
