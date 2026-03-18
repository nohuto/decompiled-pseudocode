/*
 * XREFs of ?Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800B6074
 * Callers:
 *     ?CreateDisplayRenderTarget@CMILFactory@@QEAAJAEBU_GUID@@PEAUHWND__@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x1800B5F7C (-CreateDisplayRenderTarget@CMILFactory@@QEAAJAEBU_GUID@@PEAUHWND__@@U-$TMILFlagsEnum@W4FlagsEnum.c)
 * Callees:
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUHWND__@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAIPEA_N@Z @ 0x180034420 (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAU.c)
 *     ?GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180034E44 (-GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U-$TMILFlagsEnum@W4F.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@@IVDisplayId@@@Z @ 0x18007BB34 (--0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18009FF0C (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??0CHwStereoFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@@IVDisplayId@@@Z @ 0x18017A340 (--0CHwStereoFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4Color.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::Create(
        const struct _GUID *a1,
        __int64 a2,
        CDisplay *a3,
        int a4,
        __int64 *a5)
{
  struct _LUID v5; // rax
  __int64 *v6; // rdi
  int D3DDeviceForRenderTarget; // eax
  __int64 v9; // r8
  __int64 v10; // r13
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // r9d
  int v14; // r10d
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v18; // rax
  unsigned int v19; // [rsp+28h] [rbp-41h]
  int v20; // [rsp+30h] [rbp-39h]
  int v21[4]; // [rsp+48h] [rbp-21h] BYREF
  enum DXGI_FORMAT v22; // [rsp+58h] [rbp-11h]
  __int64 v24; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v25; // [rsp+D8h] [rbp+6Fh] BYREF
  int v26; // [rsp+E0h] [rbp+77h]

  v26 = a4;
  v24 = a2;
  v5 = (struct _LUID)*((_QWORD *)a3 + 29);
  v6 = a5;
  v25 = 0LL;
  LOBYTE(v24) = 0;
  *a5 = 0LL;
  D3DDeviceForRenderTarget = CD3DDeviceManager::GetD3DDeviceForRenderTarget(
                               (CD3DDeviceManager *)&g_D3DDeviceManager,
                               a1,
                               (__int64)a3,
                               a4,
                               v5,
                               (struct CD3DDeviceLevel1 **)&v25);
  v10 = v25;
  v11 = D3DDeviceForRenderTarget;
  if ( D3DDeviceForRenderTarget < 0 )
  {
    v19 = 61;
    goto LABEL_23;
  }
  v12 = CDisplay::CalcSwapChainParameters(a3, v26, v9, v25, v21, (int *)&a5, (bool *)&v24);
  if ( v12 < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, v12, 0x44u);
  if ( (v26 & 0x2000) != 0 && !(_BYTE)v24 )
    v26 &= ~0x2000u;
  D3DDeviceForRenderTarget = GetPixelFormatColorSpace(v22, (enum ColorSpace *)&v24);
  v11 = D3DDeviceForRenderTarget;
  if ( D3DDeviceForRenderTarget < 0 )
  {
    v19 = 84;
    goto LABEL_23;
  }
  if ( (v13 & v14) != 0 )
  {
    v18 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            432LL);
    if ( v18 )
    {
      v16 = CHwStereoFullScreenRenderTarget::CHwStereoFullScreenRenderTarget(
              v18,
              v10,
              v21,
              (unsigned int)v24,
              (_DWORD)a5,
              *(_DWORD *)(*((_QWORD *)a3 + 17) + 244LL));
      goto LABEL_9;
    }
    goto LABEL_14;
  }
  v15 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          384LL);
  if ( !v15 )
  {
LABEL_14:
    v16 = 0LL;
    goto LABEL_9;
  }
  v20 = *(_DWORD *)(*((_QWORD *)a3 + 17) + 244LL);
  v16 = CHwFullScreenRenderTarget::CHwFullScreenRenderTarget(v15, v10, (__int64)v21);
LABEL_9:
  *v6 = v16;
  if ( !v16 )
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, -2147024882, 0x69u);
    goto LABEL_24;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  D3DDeviceForRenderTarget = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, _QWORD, CDisplay *, int, int))(*(_QWORD *)*v6 + 224LL))(
                               *v6,
                               a1,
                               0LL,
                               a3,
                               v26,
                               v20);
  v11 = D3DDeviceForRenderTarget;
  if ( D3DDeviceForRenderTarget >= 0 )
    goto LABEL_11;
  v19 = 111;
LABEL_23:
  MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, D3DDeviceForRenderTarget, v19);
LABEL_24:
  if ( *v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v6 + 16LL))(*v6);
    *v6 = 0LL;
  }
LABEL_11:
  if ( v10 )
    CMILPoolResource::Release((CMILPoolResource *)(v10 + 408));
  return v11;
}
