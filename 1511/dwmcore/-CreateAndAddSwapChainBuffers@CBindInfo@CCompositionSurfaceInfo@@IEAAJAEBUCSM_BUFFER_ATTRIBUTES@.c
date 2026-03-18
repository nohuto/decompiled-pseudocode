/*
 * XREFs of ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x18006C508
 * Callers:
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18006C780 (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ?IsWarpAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z @ 0x1800111D4 (-IsWarpAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z.c)
 *     ?OpenFence@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAXPEAPEAXI3@Z @ 0x1800112A4 (-OpenFence@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAXPEAPEAXI3@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z @ 0x18006C23C (-AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z.c)
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18006C384 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUC.c)
 *     ?GetAdapterLuid@CBitmapRealization@@QEBA?AU_LUID@@XZ @ 0x180083204 (-GetAdapterLuid@CBitmapRealization@@QEBA-AU_LUID@@XZ.c)
 *     ?Release@CBitmapRealization@@UEAAKXZ @ 0x180083380 (-Release@CBitmapRealization@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::CreateAndAddSwapChainBuffers(
        CCompositionSurfaceInfo::CBindInfo *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_SWAPCHAIN_BUFFER_INFO *a3)
{
  int v6; // eax
  int v7; // edi
  unsigned int v8; // ebx
  char v9; // dl
  __int64 v10; // xmm1_8
  HANDLE v11; // rax
  int v12; // eax
  struct CBitmapRealization *v13; // rdx
  unsigned int (__fastcall *v14)(CBitmapRealization *__hidden); // r12
  HANDLE v15; // rsi
  unsigned int v16; // edx
  unsigned int i; // ebx
  HANDLE v18; // rcx
  __int64 v20; // rax
  int v21; // eax
  struct _LUID *AdapterLuid; // rax
  int v23; // r9d
  void **v24; // [rsp+20h] [rbp-E0h]
  unsigned int v25; // [rsp+20h] [rbp-E0h]
  unsigned int v26; // [rsp+28h] [rbp-D8h]
  _QWORD v27[4]; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE hObject; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v29; // [rsp+68h] [rbp-98h]
  HANDLE v30[38]; // [rsp+70h] [rbp-90h]
  struct CBitmapRealization *v31; // [rsp+1C0h] [rbp+C0h] BYREF

  v31 = 0LL;
  memset_0(&hObject, 0, 0x108uLL);
  LODWORD(v27[0]) = 2;
  memset((char *)v27 + 4, 0, 28);
  if ( (unsigned int)(*((_DWORD *)a3 + 7) - 1) > 0x1E )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR(0x14u, &dword_180179148, 3u, -2147024809, 0x526u);
    goto LABEL_19;
  }
  v6 = OpenCompositionSurfaceSwapChainHandleInfo(*(_QWORD *)(*(_QWORD *)this + 32LL), *((_QWORD *)this + 1), &hObject);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180179148, 3u, v6, 0x531u);
    goto LABEL_19;
  }
  v8 = 0;
  if ( *((_DWORD *)a3 + 7) )
  {
    while ( 1 )
    {
      v9 = *((_DWORD *)a3 + 6) != 0;
      HIDWORD(v27[0]) = v8;
      v10 = *((_QWORD *)a3 + 3 * v8 + 6);
      v11 = v30[v8];
      v27[2] = *((_QWORD *)a3 + 3 * v8 + 5);
      v27[1] = v11;
      v27[3] = v10;
      v12 = CCompositionSurfaceInfo::CBindInfo::CreateNewRealization(
              (struct _LUID **)this,
              v9,
              a2,
              (const struct CSM_REALIZATION_INFO *)v27,
              &v31);
      v7 = v12;
      if ( v12 < 0 )
        break;
      v13 = v31;
      v30[v8] = 0LL;
      v12 = CCompositionSurfaceInfo::CBindInfo::AddRealization(this, v13);
      v7 = v12;
      if ( v12 < 0 )
      {
        v25 = 1362;
        goto LABEL_33;
      }
      if ( v31 )
      {
        v14 = *(unsigned int (__fastcall **)(CBitmapRealization *__hidden))(*(_QWORD *)v31 + 16LL);
        if ( v14 == CBitmapRealization::Release )
          CBitmapRealization::Release(v31);
        else
          v14(v31);
        v31 = 0LL;
      }
      if ( ++v8 >= *((_DWORD *)a3 + 7) )
        goto LABEL_11;
    }
    v25 = 1351;
LABEL_33:
    v23 = v12;
  }
  else
  {
LABEL_11:
    v15 = hObject;
    if ( !hObject )
      goto LABEL_37;
    v20 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)this + 24LL) + 8LL))(*(_QWORD *)(*(_QWORD *)this + 24LL));
    v21 = CD3DDeviceManager::OpenFence(
            (CD3DDeviceManager *)&g_D3DDeviceManager,
            (const struct _GUID *)(v20 + 252),
            *(struct _LUID *)((char *)this + 96),
            v15,
            v24,
            v26,
            (void **)this + 13);
    v7 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x66Cu);
    if ( v7 >= 0 )
    {
LABEL_37:
      if ( *((_DWORD *)this + 14) == 2 )
      {
        AdapterLuid = (struct _LUID *)CBitmapRealization::GetAdapterLuid(**((CBitmapRealization ***)this + 4));
        if ( !CD3DDeviceManager::IsWarpAdapterLuid((CD3DDeviceManager *)&g_D3DDeviceManager, *AdapterLuid) )
          *((_BYTE *)this + 20) = 0;
      }
      goto LABEL_13;
    }
    v25 = 1371;
    v23 = v7;
  }
  MilInstrumentationCheckHR(0x14u, &dword_180179148, 3u, v23, v25);
LABEL_13:
  if ( hObject )
    CloseHandle(hObject);
  v16 = v29;
  for ( i = 0; i < v16; ++i )
  {
    v18 = v30[i];
    if ( v18 )
    {
      CloseHandle(v18);
      v16 = v29;
    }
  }
LABEL_19:
  if ( v31 )
    (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v31 + 16LL))(v31);
  return (unsigned int)v7;
}
