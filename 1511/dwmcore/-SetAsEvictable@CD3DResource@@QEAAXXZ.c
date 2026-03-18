/*
 * XREFs of ?SetAsEvictable@CD3DResource@@QEAAXXZ @ 0x180027BB0
 * Callers:
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x18002B2DC (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     ??1CHwTextureRenderTarget@@MEAA@XZ @ 0x18002CBD4 (--1CHwTextureRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z @ 0x18002823C (-Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z.c)
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
    ++*(_DWORD *)(*(_QWORD *)(v1 + 120) + 856LL);
    CD3DResourceManager::Use((CD3DResourceManager *)v1, this);
    v3 = *(__int64 **)(v2 + 936);
    v4 = (__int64 *)(v2 + 928);
    while ( v3 != v4 && *((_DWORD *)v3 + 8) == *(_DWORD *)(v2 + 856) )
    {
      *((_DWORD *)v3 + 8) = 0;
      v3 = (__int64 *)v3[1];
    }
    v5 = *v3;
    if ( (__int64 *)*v3 != v4 )
    {
      v6 = *(_QWORD **)(v2 + 936);
      *v3 = (__int64)v4;
      v7 = *(_QWORD **)(v2 + 920);
      *(_QWORD *)(v2 + 936) = v3;
      *v7 = v5;
      *(_QWORD *)(v5 + 8) = v7;
      *(_QWORD *)(v2 + 920) = v6;
      *v6 = v2 + 912;
    }
    --*(_DWORD *)(v2 + 856);
  }
}
