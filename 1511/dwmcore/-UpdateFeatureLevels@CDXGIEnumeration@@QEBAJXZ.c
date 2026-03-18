/*
 * XREFs of ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ @ 0x18006BFB4
 * Callers:
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180075A2C (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetD3DDeviceForAdapter@CD3DDeviceTable@@QEAAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEAW4D3D_FEATURE_LEVEL@@@Z @ 0x18006ADE4 (-GetD3DDeviceForAdapter@CD3DDeviceTable@@QEAAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEA.c)
 *     ?IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ @ 0x18006C0F0 (-IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDXGIEnumeration::UpdateFeatureLevels(CDXGIEnumeration *this)
{
  int v1; // r13d
  enum D3D_FEATURE_LEVEL v2; // esi
  int v3; // r14d
  __int64 v4; // r12
  enum D3D_FEATURE_LEVEL v5; // ebp
  CDXGIEnumeration *v6; // rbp
  __int64 v7; // rdi
  unsigned int v8; // r8d
  int v9; // r8d
  unsigned int v10; // r9d
  int D3DDeviceForAdapter; // eax
  int v12; // ebx
  __int64 result; // rax
  CDXGIEnumeration *v14; // [rsp+70h] [rbp+8h] BYREF
  struct ID3D11Device1 *v15; // [rsp+78h] [rbp+10h] BYREF

  v14 = this;
  v1 = 0;
  v2 = 0;
  v3 = 0;
  v4 = 0LL;
  v5 = D3D_FEATURE_LEVEL_9_1;
  if ( !*((_DWORD *)this + 22) )
    goto LABEL_21;
  v6 = v14;
  do
  {
    v7 = *(_QWORD *)(*((_QWORD *)v6 + 8) + 8 * v4);
    if ( v7 )
    {
      v8 = 0;
      if ( *(_DWORD *)(v7 + 376) )
      {
        while ( !DXGIOutputInfo::IsAttachedToDesktop((DXGIOutputInfo *)(*(_QWORD *)(v7 + 352) + 264LL * v8)) )
        {
          v8 = v9 + 1;
          if ( v8 >= v10 )
            goto LABEL_14;
        }
        v15 = 0LL;
        D3DDeviceForAdapter = CD3DDeviceTable::GetD3DDeviceForAdapter(
                                (CD3DDeviceTable *)&g_deviceTable,
                                (struct IDXGIAdapter **)v7,
                                &v15,
                                (enum D3D_FEATURE_LEVEL *)&v14);
        v12 = D3DDeviceForAdapter;
        if ( D3DDeviceForAdapter < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DDeviceForAdapter, 0x1C1u);
          if ( v1 >= 0 )
            v1 = v12;
        }
        else
        {
          if ( v15 )
            ((void (__fastcall *)(struct ID3D11Device1 *))v15->lpVtbl->Release)(v15);
          if ( !v2 || (int)v14 < v2 )
            v2 = (int)v14;
          if ( (int)v14 > v3 && (*(_DWORD *)(v7 + 296) != 5140 || *(_DWORD *)(v7 + 300) != 140) )
            v3 = (int)v14;
        }
      }
    }
LABEL_14:
    v4 = (unsigned int)(v4 + 1);
  }
  while ( (unsigned int)v4 < *((_DWORD *)v6 + 22) );
  g_minSafeFeatureLevel = v2;
  v5 = D3D_FEATURE_LEVEL_9_1;
  if ( !v2 )
LABEL_21:
    g_minSafeFeatureLevel = D3D_FEATURE_LEVEL_9_1;
  result = (unsigned int)v1;
  if ( v3 )
    v5 = v3;
  g_maxHardwareFeatureLevel = v5;
  return result;
}
