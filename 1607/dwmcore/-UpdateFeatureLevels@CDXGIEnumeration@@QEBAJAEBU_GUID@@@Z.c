/*
 * XREFs of ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJAEBU_GUID@@@Z @ 0x18003667C
 * Callers:
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180077178 (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800350D0 (-GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ @ 0x1800B3674 (-IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ.c)
 */

__int64 __fastcall CDXGIEnumeration::UpdateFeatureLevels(CDXGIEnumeration *this, const struct _GUID *a2)
{
  enum D3D_FEATURE_LEVEL v2; // ebx
  enum D3D_FEATURE_LEVEL v3; // ebp
  __int64 v4; // r14
  enum D3D_FEATURE_LEVEL v7; // esi
  __int64 v8; // rdi
  unsigned int v9; // r8d
  int v10; // r8d
  unsigned int v11; // r9d
  struct _LUID v12; // r8
  enum D3D_FEATURE_LEVEL v13; // eax
  struct CD3DDeviceLevel1 *v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = 0LL;
  v7 = D3D_FEATURE_LEVEL_9_1;
  if ( !*((_DWORD *)this + 22) )
    goto LABEL_19;
  do
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v4);
    if ( v8 )
    {
      v9 = 0;
      if ( *(_DWORD *)(v8 + 392) )
      {
        while ( !DXGIOutputInfo::IsAttachedToDesktop((DXGIOutputInfo *)(*(_QWORD *)(v8 + 368) + 272LL * v9)) )
        {
          v9 = v10 + 1;
          if ( v9 >= v11 )
            goto LABEL_12;
        }
        v12 = *(struct _LUID *)(v8 + 336);
        v15 = 0LL;
        if ( (int)CD3DDeviceManager::GetExistingDevice((CD3DDeviceManager *)&g_D3DDeviceManager, a2, v12, &v15) >= 0 )
        {
          v13 = *((_DWORD *)v15 + 169);
          if ( !v2 || v13 < v2 )
            v2 = *((_DWORD *)v15 + 169);
          if ( v13 > v3 && (*(_DWORD *)(v8 + 296) != 5140 || *(_DWORD *)(v8 + 300) != 140) )
            v3 = *((_DWORD *)v15 + 169);
          CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v15 + 408));
        }
      }
    }
LABEL_12:
    v4 = (unsigned int)(v4 + 1);
  }
  while ( (unsigned int)v4 < *((_DWORD *)this + 22) );
  g_minSafeFeatureLevel = v2;
  if ( !v2 )
LABEL_19:
    g_minSafeFeatureLevel = D3D_FEATURE_LEVEL_9_1;
  if ( v3 )
    v7 = v3;
  g_maxHardwareFeatureLevel = v7;
  return 0LL;
}
