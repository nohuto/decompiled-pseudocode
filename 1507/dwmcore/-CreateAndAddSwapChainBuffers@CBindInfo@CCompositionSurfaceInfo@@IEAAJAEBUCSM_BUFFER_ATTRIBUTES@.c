/*
 * XREFs of ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x180089BA0
 * Callers:
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180089DB4 (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ?OpenGPUFence@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAX@Z @ 0x180004F98 (-OpenGPUFence@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAX@Z.c)
 *     ?IsWarpAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z @ 0x180005564 (-IsWarpAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z.c)
 *     ?Release@CBitmapRealization@@UEAAKXZ @ 0x1800468D0 (-Release@CBitmapRealization@@UEAAKXZ.c)
 *     ?GetAdapterLuid@CBitmapRealization@@QEBA?AU_LUID@@XZ @ 0x180046CB4 (-GetAdapterLuid@CBitmapRealization@@QEBA-AU_LUID@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z @ 0x18008991C (-AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z.c)
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180089A38 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUC.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::CreateAndAddSwapChainBuffers(
        CCompositionSurfaceInfo::CBindInfo *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_SWAPCHAIN_BUFFER_INFO *a3)
{
  int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // r14d
  char v9; // dl
  __int64 v10; // xmm1_8
  HANDLE v11; // rax
  int v12; // eax
  struct CBitmapRealization *v13; // rdx
  int v14; // eax
  __int64 (__fastcall *v15)(CBitmapRealization *); // r12
  unsigned int v16; // edx
  unsigned int i; // ebx
  HANDLE v18; // rcx
  int v20; // eax
  struct _LUID *AdapterLuid; // rax
  _QWORD v22[4]; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE hObject; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v24; // [rsp+58h] [rbp-A8h]
  HANDLE v25[38]; // [rsp+60h] [rbp-A0h]
  CBitmapRealization *v26; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _LUID v27; // [rsp+1B8h] [rbp+B8h] BYREF

  v26 = 0LL;
  memset_0(&hObject, 0, 0x108uLL);
  LODWORD(v22[0]) = 2;
  memset((char *)v22 + 4, 0, 28);
  if ( (unsigned int)(*((_DWORD *)a3 + 7) - 1) > 0x1E )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR(0x14u, &dword_18016AE00, 3u, -2147024809, 0x4F3u);
  }
  else
  {
    v6 = OpenCompositionSurfaceSwapChainHandleInfo(*(_QWORD *)(*(_QWORD *)this + 32LL), *((_QWORD *)this + 1), &hObject);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_18016AE00, 3u, v6, 0x4FEu);
    }
    else
    {
      v8 = 0;
      if ( *((_DWORD *)a3 + 7) )
      {
        while ( 1 )
        {
          v9 = *((_DWORD *)a3 + 6) != 0;
          HIDWORD(v22[0]) = v8;
          v10 = *((_QWORD *)a3 + 3 * v8 + 6);
          v11 = v25[v8];
          v22[2] = *((_QWORD *)a3 + 3 * v8 + 5);
          v22[1] = v11;
          v22[3] = v10;
          v12 = CCompositionSurfaceInfo::CBindInfo::CreateNewRealization(
                  (struct _LUID **)this,
                  v9,
                  a2,
                  (const struct CSM_REALIZATION_INFO *)v22,
                  &v26);
          v7 = v12;
          if ( v12 < 0 )
            break;
          v13 = v26;
          v25[v8] = 0LL;
          v14 = CCompositionSurfaceInfo::CBindInfo::AddRealization(this, v13);
          v7 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &dword_18016AE00, 3u, v14, 0x51Fu);
            goto LABEL_13;
          }
          if ( v26 )
          {
            v15 = *(__int64 (__fastcall **)(CBitmapRealization *))(*(_QWORD *)v26 + 16LL);
            if ( v15 == CBitmapRealization::Release )
              CBitmapRealization::Release(v26);
            else
              v15(v26);
            v26 = 0LL;
          }
          if ( ++v8 >= *((_DWORD *)a3 + 7) )
            goto LABEL_11;
        }
        MilInstrumentationCheckHR(0x14u, &dword_18016AE00, 3u, v12, 0x514u);
      }
      else
      {
LABEL_11:
        if ( hObject
          && (v20 = CCompositionSurfaceInfo::CBindInfo::OpenGPUFence((void **)this, hObject), v7 = v20, v20 < 0) )
        {
          MilInstrumentationCheckHR(0x14u, &dword_18016AE00, 3u, v20, 0x528u);
        }
        else if ( *((_DWORD *)this + 16) == 2 )
        {
          AdapterLuid = (struct _LUID *)CBitmapRealization::GetAdapterLuid(**((CBitmapRealization ***)this + 5), &v27);
          if ( !CD3DDeviceManager::IsWarpAdapterLuid((CD3DDeviceManager *)&g_D3DDeviceManager, *AdapterLuid) )
            *((_BYTE *)this + 20) = 0;
        }
      }
LABEL_13:
      if ( hObject )
        CloseHandle(hObject);
      v16 = v24;
      for ( i = 0; i < v16; ++i )
      {
        v18 = v25[i];
        if ( v18 )
        {
          CloseHandle(v18);
          v16 = v24;
        }
      }
    }
  }
  if ( v26 )
    (*(void (__fastcall **)(CBitmapRealization *))(*(_QWORD *)v26 + 16LL))(v26);
  return v7;
}
