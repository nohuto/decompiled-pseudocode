/*
 * XREFs of ?SetAsEvictable@CD3DResource@@QEAAXXZ @ 0x18009EF28
 * Callers:
 *     ??1CHwTextureRenderTarget@@MEAA@XZ @ 0x18002D854 (--1CHwTextureRenderTarget@@MEAA@XZ.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_N1PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800A66D8 (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_N1PEAVCD3DDeviceLevel1@@PEAP.c)
 * Callees:
 *     ?Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z @ 0x18009F4FC (-Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z.c)
 */

void __fastcall CD3DResource::SetAsEvictable(CD3DResource *this)
{
  __int64 v1; // rax
  __int64 v2; // r9
  __int64 *v3; // rdx
  __int64 *v4; // r10
  __int64 v5; // r8
  _QWORD *v6; // rcx
  _QWORD *v7; // rax

  v1 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 68) = 1;
  if ( *(_DWORD *)(v1 + 8) )
  {
    CD3DResourceManager::Use((CD3DResourceManager *)v1, this);
  }
  else
  {
    ++*(_DWORD *)(*(_QWORD *)(v1 + 128) + 888LL);
    CD3DResourceManager::Use((CD3DResourceManager *)v1, this);
    v3 = *(__int64 **)(v2 + 968);
    v4 = (__int64 *)(v2 + 960);
    while ( v3 != v4 && *((_DWORD *)v3 + 8) == *(_DWORD *)(v2 + 888) )
    {
      *((_DWORD *)v3 + 8) = 0;
      v3 = (__int64 *)v3[1];
    }
    v5 = *v3;
    if ( (__int64 *)*v3 != v4 )
    {
      v6 = *(_QWORD **)(v2 + 968);
      *v3 = (__int64)v4;
      v7 = *(_QWORD **)(v2 + 952);
      *(_QWORD *)(v2 + 968) = v3;
      *v7 = v5;
      *(_QWORD *)(v5 + 8) = v7;
      *(_QWORD *)(v2 + 952) = v6;
      *v6 = v2 + 944;
    }
    --*(_DWORD *)(v2 + 888);
  }
}
