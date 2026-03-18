/*
 * XREFs of ?Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800B23F8
 * Callers:
 *     ?CreateDisplayRenderTarget@CMILFactory@@QEAAJAEBU_GUID@@PEAUHWND__@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x1800B2304 (-CreateDisplayRenderTarget@CMILFactory@@QEAAJAEBU_GUID@@PEAUHWND__@@U-$TMILFlagsEnum@W4FlagsEnum.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?CheckRenderTargetFormat@CD3DDeviceLevel1@@QEAAJW4DXGI_FORMAT@@@Z @ 0x180022838 (-CheckRenderTargetFormat@CD3DDeviceLevel1@@QEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18002A9FC (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUHWND__@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAIPEA_N@Z @ 0x1800705AC (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAU.c)
 *     ?GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800712FC (-GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U-$TMILFlagsEnum@W4F.c)
 *     ??0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@@IVDisplayId@@@Z @ 0x180074800 (--0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CHwStereoFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@@IVDisplayId@@@Z @ 0x180149C84 (--0CHwStereoFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4Color.c)
 *     ??0CHwHwndRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@@IVDisplayId@@@Z @ 0x18014FBF4 (--0CHwHwndRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@@IVDis.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::Create(const struct _GUID *a1, __int64 a2, CDisplay *a3, int a4, __int64 a5)
{
  struct _LUID v5; // rax
  _QWORD *v6; // rsi
  int D3DDeviceForRenderTarget; // eax
  __int64 v9; // r8
  CD3DDeviceLevel1 *v10; // r13
  unsigned int v11; // edi
  int v12; // eax
  int v13; // eax
  int PixelFormatColorSpace; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  CD3DDeviceLevel1 *v21; // [rsp+48h] [rbp-41h] BYREF
  __int64 v22[2]; // [rsp+58h] [rbp-31h] BYREF
  enum DXGI_FORMAT v23; // [rsp+68h] [rbp-21h]
  __int64 v25; // [rsp+F0h] [rbp+67h] BYREF
  CDisplay *v26; // [rsp+F8h] [rbp+6Fh]
  int v27; // [rsp+100h] [rbp+77h]

  v27 = a4;
  v26 = a3;
  v25 = a2;
  v5 = (struct _LUID)*((_QWORD *)a3 + 29);
  v6 = (_QWORD *)a5;
  v21 = 0LL;
  LOBYTE(v25) = 0;
  *(_QWORD *)a5 = 0LL;
  D3DDeviceForRenderTarget = CD3DDeviceManager::GetD3DDeviceForRenderTarget(
                               (CD3DDeviceManager *)&g_D3DDeviceManager,
                               a1,
                               (__int64)a3,
                               a4,
                               v5,
                               &v21);
  v10 = v21;
  v11 = D3DDeviceForRenderTarget;
  if ( D3DDeviceForRenderTarget < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, D3DDeviceForRenderTarget, 0x3Fu);
    goto LABEL_28;
  }
  v12 = CDisplay::CalcSwapChainParameters(a3, v27, v9, (__int64)v21, (__int64)v22, (int *)&a5, (bool *)&v25);
  if ( v12 < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, v12, 0x46u);
  if ( (v27 & 0x2000) != 0 && !(_BYTE)v25 )
    v27 &= ~0x2000u;
  v13 = CD3DDeviceLevel1::CheckRenderTargetFormat(v10, v23);
  v11 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, v13, 0x54u);
    goto LABEL_28;
  }
  PixelFormatColorSpace = GetPixelFormatColorSpace(v23, (enum ColorSpace *)&v25);
  v11 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, PixelFormatColorSpace, 0x5Bu);
    goto LABEL_28;
  }
  if ( (v27 & 0x10) != 0 )
  {
    if ( (v27 & 0x2000) != 0 )
    {
      v19 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
              WPF::g_pProcessHeap,
              416LL);
      if ( v19 )
      {
        v16 = CHwStereoFullScreenRenderTarget::CHwStereoFullScreenRenderTarget(
                v19,
                v10,
                v22,
                (unsigned int)v25,
                a5,
                *(_DWORD *)(*((_QWORD *)v26 + 17) + 244LL));
        goto LABEL_11;
      }
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
              WPF::g_pProcessHeap,
              368LL);
      if ( v15 )
      {
        v16 = CHwFullScreenRenderTarget::CHwFullScreenRenderTarget(
                v15,
                (__int64)v10,
                (__int64)v22,
                v25,
                a5,
                *(_DWORD *)(*((_QWORD *)v26 + 17) + 244LL));
        goto LABEL_11;
      }
    }
  }
  else
  {
    v20 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            336LL);
    if ( v20 )
    {
      v16 = CHwHwndRenderTarget::CHwHwndRenderTarget(
              v20,
              v10,
              v22,
              (unsigned int)v25,
              a5,
              *(_DWORD *)(*((_QWORD *)v26 + 17) + 244LL));
      goto LABEL_11;
    }
  }
  v16 = 0LL;
LABEL_11:
  *v6 = v16;
  if ( v16 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    v17 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, _QWORD, CDisplay *, int))(*(_QWORD *)*v6 + 208LL))(
            *v6,
            a1,
            0LL,
            v26,
            v27);
    v11 = v17;
    if ( v17 >= 0 )
      goto LABEL_13;
    MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, v17, 0x7Fu);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, -2147024882, 0x79u);
  }
LABEL_28:
  if ( *v6 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 16LL))(*v6);
    *v6 = 0LL;
  }
LABEL_13:
  if ( v10 )
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v10 + 384));
  return v11;
}
