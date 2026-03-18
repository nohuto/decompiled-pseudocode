/*
 * XREFs of ?Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x18008E50C
 * Callers:
 *     ?CreateDisplayRenderTarget@CMILFactory@@QEAAJAEBU_GUID@@PEAUHWND__@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x18008E418 (-CreateDisplayRenderTarget@CMILFactory@@QEAAJAEBU_GUID@@PEAUHWND__@@U-$TMILFlagsEnum@W4FlagsEnum.c)
 * Callees:
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x180014754 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?CheckRenderTargetFormat@CD3DDeviceLevel1@@QEAAJW4DXGI_FORMAT@@@Z @ 0x1800195E4 (-CheckRenderTargetFormat@CD3DDeviceLevel1@@QEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@@IVDisplayId@@@Z @ 0x18008E8E0 (--0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@.c)
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUHWND__@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAIPEA_N@Z @ 0x180090A30 (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAU.c)
 *     ?GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180090C28 (-GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U-$TMILFlagsEnum@W4F.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??0CHwStereoFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@@IVDisplayId@@@Z @ 0x180139014 (--0CHwStereoFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4Color.c)
 *     ??0CHwHwndRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@@IVDisplayId@@@Z @ 0x1801407B4 (--0CHwHwndRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@@IVDis.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::Create(struct _GUID *a1, __int64 a2, struct _LUID *a3, int a4, __int64 *a5)
{
  struct _LUID v5; // rax
  __int64 *v6; // rsi
  int v7; // ebx
  int D3DDeviceForRenderTarget; // eax
  int v9; // r8d
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
  CD3DDeviceLevel1 *v21; // [rsp+38h] [rbp-41h] BYREF
  _BYTE v22[16]; // [rsp+48h] [rbp-31h] BYREF
  enum DXGI_FORMAT v23; // [rsp+58h] [rbp-21h]
  __int64 v25; // [rsp+E0h] [rbp+67h] BYREF
  struct _LUID *v26; // [rsp+E8h] [rbp+6Fh]
  int v27; // [rsp+F0h] [rbp+77h]

  v27 = a4;
  v26 = a3;
  v25 = a2;
  v5 = a3[104];
  v6 = a5;
  v7 = (int)a3;
  v21 = 0LL;
  LOBYTE(v25) = 0;
  *a5 = 0LL;
  D3DDeviceForRenderTarget = CD3DDeviceManager::GetD3DDeviceForRenderTarget(
                               (CD3DDeviceManager *)&g_D3DDeviceManager,
                               a1,
                               v5,
                               &v21);
  v10 = v21;
  v11 = D3DDeviceForRenderTarget;
  if ( D3DDeviceForRenderTarget < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, D3DDeviceForRenderTarget, 0x3Fu);
    goto LABEL_28;
  }
  v12 = CDisplay::CalcSwapChainParameters(v7, v27, v9, (unsigned int)v22, (__int64)&a5, (__int64)&v25);
  if ( v12 < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v12, 0x45u);
  if ( (v27 & 0x2000) != 0 && !(_BYTE)v25 )
    v27 &= ~0x2000u;
  v13 = CD3DDeviceLevel1::CheckRenderTargetFormat(v10, v23);
  v11 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v13, 0x53u);
    goto LABEL_28;
  }
  PixelFormatColorSpace = GetPixelFormatColorSpace(v23, (enum ColorSpace *)&v25);
  v11 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, PixelFormatColorSpace, 0x5Au);
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
                (_DWORD)a5,
                *(_DWORD *)(*(_QWORD *)&v26[19] + 852LL));
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
                v10,
                v22,
                (unsigned int)v25,
                (_DWORD)a5,
                *(_DWORD *)(*(_QWORD *)&v26[19] + 852LL));
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
              (_DWORD)a5,
              *(_DWORD *)(*(_QWORD *)&v26[19] + 852LL));
      goto LABEL_11;
    }
  }
  v16 = 0LL;
LABEL_11:
  *v6 = v16;
  if ( v16 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    v17 = (*(__int64 (__fastcall **)(__int64, struct _GUID *, _QWORD, struct _LUID *, int))(*(_QWORD *)*v6 + 208LL))(
            *v6,
            a1,
            0LL,
            v26,
            v27);
    v11 = v17;
    if ( v17 >= 0 )
      goto LABEL_13;
    MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v17, 0x7Eu);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, -2147024882, 0x78u);
  }
LABEL_28:
  if ( *v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v6 + 16LL))(*v6);
    *v6 = 0LL;
  }
LABEL_13:
  if ( v10 )
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v10 + 392));
  return v11;
}
