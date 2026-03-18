/*
 * XREFs of ?Create@CAnalogDisplayRenderTarget@@SAJAEBU_GUID@@KPEBVCDisplay@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x180127AA8
 * Callers:
 *     ?EnsureRenderTarget@CAnalogRenderTarget@@AEAAJXZ @ 0x180126408 (-EnsureRenderTarget@CAnalogRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x180014754 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?CheckRenderTargetFormat@CD3DDeviceLevel1@@QEAAJW4DXGI_FORMAT@@@Z @ 0x1800195E4 (-CheckRenderTargetFormat@CD3DDeviceLevel1@@QEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180090C28 (-GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U-$TMILFlagsEnum@W4F.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??0CAnalogDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@@IVDisplayId@@@Z @ 0x1801279DC (--0CAnalogDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace.c)
 */

__int64 __fastcall CAnalogDisplayRenderTarget::Create(
        struct _GUID *a1,
        int a2,
        const struct CDisplay *a3,
        struct IRenderTargetDisplay **a4)
{
  int v6; // r9d
  __int128 v7; // xmm0
  struct _LUID v9; // rax
  int D3DDeviceForRenderTarget; // eax
  CD3DDeviceLevel1 *v11; // r14
  unsigned int v12; // edi
  __int64 v13; // rax
  _DWORD *v14; // rsi
  int v15; // eax
  int v16; // eax
  __int64 v18; // [rsp+20h] [rbp-59h]
  unsigned int v19; // [rsp+20h] [rbp-59h]
  enum DXGI_FORMAT v20[2]; // [rsp+40h] [rbp-39h]
  _BYTE v21[8]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v22; // [rsp+58h] [rbp-21h]
  __int64 v23; // [rsp+60h] [rbp-19h]
  int v24; // [rsp+68h] [rbp-11h]
  __int64 v25; // [rsp+6Ch] [rbp-Dh]
  int v26; // [rsp+74h] [rbp-5h]
  int v27; // [rsp+78h] [rbp-1h]
  __int64 v28; // [rsp+80h] [rbp+7h]
  __int64 v29; // [rsp+88h] [rbp+Fh]
  int v30; // [rsp+90h] [rbp+17h]
  CD3DDeviceLevel1 *v32; // [rsp+F0h] [rbp+77h] BYREF

  v25 = 1LL;
  v27 = 2;
  *a4 = 0LL;
  v6 = *((_DWORD *)a3 + 223);
  v7 = *(_OWORD *)((char *)a3 + 868);
  v29 = 0LL;
  *(_QWORD *)v20 = *(_QWORD *)((char *)a3 + 884);
  v28 = 0LL;
  v30 = 0;
  v32 = 0LL;
  v22 = *((_QWORD *)&v7 + 1);
  v9 = (struct _LUID)*((_QWORD *)a3 + 104);
  v24 = v6;
  v23 = *(_QWORD *)v20;
  v26 = 112;
  D3DDeviceForRenderTarget = CD3DDeviceManager::GetD3DDeviceForRenderTarget(
                               (CD3DDeviceManager *)&g_D3DDeviceManager,
                               a1,
                               (__int64)a3,
                               1048,
                               v9,
                               &v32);
  v11 = v32;
  v12 = D3DDeviceForRenderTarget;
  if ( D3DDeviceForRenderTarget < 0 )
  {
    v19 = 66;
LABEL_3:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DDeviceForRenderTarget, v19);
    goto LABEL_19;
  }
  D3DDeviceForRenderTarget = CD3DDeviceLevel1::CheckRenderTargetFormat(v32, v20[0]);
  v12 = D3DDeviceForRenderTarget;
  if ( D3DDeviceForRenderTarget < 0 )
  {
    v19 = 71;
    goto LABEL_3;
  }
  D3DDeviceForRenderTarget = GetPixelFormatColorSpace(v20[0], (enum ColorSpace *)&v32);
  v12 = D3DDeviceForRenderTarget;
  if ( D3DDeviceForRenderTarget < 0 )
  {
    v19 = 75;
    goto LABEL_3;
  }
  v13 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          344LL);
  if ( v13 )
    v14 = (_DWORD *)CAnalogDisplayRenderTarget::CAnalogDisplayRenderTarget(
                      v13,
                      (__int64)v11,
                      (__int64)v21,
                      (int)v32,
                      v18,
                      *(_DWORD *)(*((_QWORD *)a3 + 19) + 852LL));
  else
    v14 = 0LL;
  if ( v14 )
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 8LL))(v14);
    v14[84] = a2;
    v15 = (*(__int64 (__fastcall **)(_DWORD *, struct _GUID *, _QWORD, const struct CDisplay *, int))(*(_QWORD *)v14 + 208LL))(
            v14,
            a1,
            0LL,
            a3,
            1048);
    v12 = v15;
    if ( v15 >= 0 )
    {
      v16 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, struct IRenderTargetDisplay **))v14)(
              v14,
              &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
              a4);
      v12 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x5Au);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x57u);
    }
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x53u);
  }
LABEL_19:
  if ( v11 )
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v11 + 392));
  return v12;
}
