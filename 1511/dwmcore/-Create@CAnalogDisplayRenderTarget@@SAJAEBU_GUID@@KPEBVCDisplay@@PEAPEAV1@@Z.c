/*
 * XREFs of ?Create@CAnalogDisplayRenderTarget@@SAJAEBU_GUID@@KPEBVCDisplay@@PEAPEAV1@@Z @ 0x18013DACC
 * Callers:
 *     ?EnsureRenderTarget@CAnalogTextureTarget@@AEAAJXZ @ 0x18013C0F8 (-EnsureRenderTarget@CAnalogTextureTarget@@AEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?CheckRenderTargetFormat@CD3DDeviceLevel1@@QEAAJW4DXGI_FORMAT@@@Z @ 0x180022838 (-CheckRenderTargetFormat@CD3DDeviceLevel1@@QEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18002A9FC (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800712FC (-GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U-$TMILFlagsEnum@W4F.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CAnalogDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@@IVDisplayId@@@Z @ 0x18013D8A4 (--0CAnalogDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace.c)
 */

__int64 __fastcall CAnalogDisplayRenderTarget::Create(
        const struct _GUID *a1,
        int a2,
        const struct CDisplay *a3,
        struct CAnalogDisplayRenderTarget **a4)
{
  int v6; // r9d
  __int128 v7; // xmm0
  struct _LUID v9; // rax
  int D3DDeviceForRenderTarget; // eax
  CD3DDeviceLevel1 *v11; // r14
  unsigned int v12; // edi
  __int64 v13; // rax
  struct CAnalogDisplayRenderTarget *v14; // rsi
  int v15; // eax
  __int64 v17; // [rsp+20h] [rbp-59h]
  unsigned int v18; // [rsp+20h] [rbp-59h]
  enum DXGI_FORMAT v19[2]; // [rsp+40h] [rbp-39h]
  _BYTE v20[8]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v21; // [rsp+58h] [rbp-21h]
  __int64 v22; // [rsp+60h] [rbp-19h]
  int v23; // [rsp+68h] [rbp-11h]
  __int64 v24; // [rsp+6Ch] [rbp-Dh]
  int v25; // [rsp+74h] [rbp-5h]
  int v26; // [rsp+78h] [rbp-1h]
  __int64 v27; // [rsp+80h] [rbp+7h]
  __int64 v28; // [rsp+88h] [rbp+Fh]
  int v29; // [rsp+90h] [rbp+17h]
  CD3DDeviceLevel1 *v31; // [rsp+F0h] [rbp+77h] BYREF

  v24 = 1LL;
  v26 = 2;
  *a4 = 0LL;
  v6 = *((_DWORD *)a3 + 72);
  v7 = *(_OWORD *)((char *)a3 + 264);
  v28 = 0LL;
  *(_QWORD *)v19 = *((_QWORD *)a3 + 35);
  v27 = 0LL;
  v29 = 0;
  v31 = 0LL;
  v21 = *((_QWORD *)&v7 + 1);
  v9 = (struct _LUID)*((_QWORD *)a3 + 29);
  v23 = v6;
  v22 = *(_QWORD *)v19;
  v25 = 112;
  D3DDeviceForRenderTarget = CD3DDeviceManager::GetD3DDeviceForRenderTarget(
                               (CD3DDeviceManager *)&g_D3DDeviceManager,
                               a1,
                               (__int64)a3,
                               1048,
                               v9,
                               &v31);
  v11 = v31;
  v12 = D3DDeviceForRenderTarget;
  if ( D3DDeviceForRenderTarget < 0 )
  {
    v18 = 66;
LABEL_3:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DDeviceForRenderTarget, v18);
    goto LABEL_19;
  }
  D3DDeviceForRenderTarget = CD3DDeviceLevel1::CheckRenderTargetFormat(v31, v19[0]);
  v12 = D3DDeviceForRenderTarget;
  if ( D3DDeviceForRenderTarget < 0 )
  {
    v18 = 71;
    goto LABEL_3;
  }
  D3DDeviceForRenderTarget = GetPixelFormatColorSpace(v19[0], (enum ColorSpace *)&v31);
  v12 = D3DDeviceForRenderTarget;
  if ( D3DDeviceForRenderTarget < 0 )
  {
    v18 = 75;
    goto LABEL_3;
  }
  v13 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          352LL);
  if ( v13 )
    v14 = (struct CAnalogDisplayRenderTarget *)CAnalogDisplayRenderTarget::CAnalogDisplayRenderTarget(
                                                 v13,
                                                 (__int64)v11,
                                                 (__int64)v20,
                                                 (int)v31,
                                                 v17,
                                                 *(_DWORD *)(*((_QWORD *)a3 + 17) + 244LL));
  else
    v14 = 0LL;
  if ( v14 )
  {
    (*(void (__fastcall **)(struct CAnalogDisplayRenderTarget *))(*(_QWORD *)v14 + 8LL))(v14);
    *((_DWORD *)v14 + 86) = a2;
    v15 = (*(__int64 (__fastcall **)(struct CAnalogDisplayRenderTarget *, const struct _GUID *, _QWORD, const struct CDisplay *, int))(*(_QWORD *)v14 + 208LL))(
            v14,
            a1,
            0LL,
            a3,
            1048);
    v12 = v15;
    if ( v15 >= 0 )
    {
      *a4 = v14;
      v14 = 0LL;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x57u);
    }
    if ( v14 )
      (*(void (__fastcall **)(struct CAnalogDisplayRenderTarget *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x53u);
  }
LABEL_19:
  if ( v11 )
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v11 + 384));
  return v12;
}
