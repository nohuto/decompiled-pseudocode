/*
 * XREFs of ?Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z @ 0x18002823C
 * Callers:
 *     ?SetAsEvictable@CD3DResource@@QEAAXXZ @ 0x180027BB0 (-SetAsEvictable@CD3DResource@@QEAAXXZ.c)
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x180029E6C (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x18002D478 (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x18002DAE0 (-InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z.c)
 *     ?Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x180072950 (-Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z.c)
 *     ??0CHwBitmapCache@@AEAA@PEAVIMILResourceCache@@PEAVCD3DDeviceLevel1@@@Z @ 0x18008B608 (--0CHwBitmapCache@@AEAA@PEAVIMILResourceCache@@PEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z @ 0x180149B38 (-Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CD3DResourceManager::Use(CD3DResourceManager *this, const struct CD3DResource *a2)
{
  CD3DResourceManager *v3; // rax
  CD3DResourceManager **v4; // rdx
  CD3DResourceManager **v5; // rcx
  CD3DResourceManager **v6; // rdx

  if ( *((_BYTE *)a2 + 68) && !*((_DWORD *)a2 + 16) )
  {
    *((_DWORD *)a2 + 16) = *((_DWORD *)this + 2);
    v3 = (const struct CD3DResource *)((char *)a2 + 32);
    v4 = (CD3DResourceManager **)*((_QWORD *)a2 + 4);
    v5 = (CD3DResourceManager **)*((_QWORD *)v3 + 1);
    if ( v4[1] != v3 || *v5 != v3 )
      __fastfail(3u);
    *v5 = (CD3DResourceManager *)v4;
    v4[1] = (CD3DResourceManager *)v5;
    v6 = (CD3DResourceManager **)*((_QWORD *)this + 11);
    *(_QWORD *)v3 = (char *)this + 80;
    *((_QWORD *)v3 + 1) = v6;
    if ( *v6 != (CD3DResourceManager *)((char *)this + 80) )
      __fastfail(3u);
    *v6 = v3;
    *((_QWORD *)this + 11) = v3;
  }
}
