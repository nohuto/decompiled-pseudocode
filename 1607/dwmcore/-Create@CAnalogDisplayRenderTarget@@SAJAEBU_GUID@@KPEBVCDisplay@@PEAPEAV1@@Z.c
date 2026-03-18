/*
 * XREFs of ?Create@CAnalogDisplayRenderTarget@@SAJAEBU_GUID@@KPEBVCDisplay@@PEAPEAV1@@Z @ 0x1801679C4
 * Callers:
 *     ?EnsureRenderTarget@CAnalogTextureTarget@@AEAAJXZ @ 0x18016624C (-EnsureRenderTarget@CAnalogTextureTarget@@AEAAJXZ.c)
 * Callees:
 *     ?GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180034E44 (-GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U-$TMILFlagsEnum@W4F.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18009FF0C (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??0CAnalogDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@@IVDisplayId@@@Z @ 0x180167894 (--0CAnalogDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace.c)
 */

__int64 __fastcall CAnalogDisplayRenderTarget::Create(
        const struct _GUID *a1,
        int a2,
        const struct CDisplay *a3,
        struct CAnalogDisplayRenderTarget **a4)
{
  __int128 v5; // xmm0
  struct CAnalogDisplayRenderTarget *v6; // rsi
  __int64 v7; // xmm1_8
  __int64 v9; // r8
  int D3DDeviceForRenderTarget; // eax
  __int64 v11; // r14
  unsigned int v12; // edi
  int PixelFormatColorSpace; // eax
  __int64 v14; // rcx
  int v15; // eax
  struct _LUID v17; // [rsp+20h] [rbp-59h]
  __int64 v18; // [rsp+20h] [rbp-59h]
  _BYTE v19[8]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v20; // [rsp+58h] [rbp-21h]
  __int64 v21; // [rsp+60h] [rbp-19h]
  int v22; // [rsp+68h] [rbp-11h]
  __int64 v23; // [rsp+6Ch] [rbp-Dh]
  int v24; // [rsp+74h] [rbp-5h]
  int v25; // [rsp+78h] [rbp-1h]
  __int64 v26; // [rsp+80h] [rbp+7h]
  __int64 v27; // [rsp+88h] [rbp+Fh]
  int v28; // [rsp+90h] [rbp+17h]
  __int64 v31; // [rsp+F0h] [rbp+77h] BYREF

  v23 = 1LL;
  *a4 = 0LL;
  v5 = *(_OWORD *)((char *)a3 + 264);
  v6 = 0LL;
  v27 = 0LL;
  v7 = *((_QWORD *)a3 + 35);
  v9 = *((unsigned int *)a3 + 72);
  v26 = 0LL;
  v28 = 0;
  v31 = 0LL;
  v20 = *((_QWORD *)&v5 + 1);
  v17 = (struct _LUID)*((_QWORD *)a3 + 29);
  v22 = v9;
  v21 = v7;
  v25 = 2;
  v24 = 112;
  D3DDeviceForRenderTarget = CD3DDeviceManager::GetD3DDeviceForRenderTarget(
                               (CD3DDeviceManager *)&g_D3DDeviceManager,
                               a1,
                               v9,
                               1048,
                               v17,
                               (struct CD3DDeviceLevel1 **)&v31);
  v11 = v31;
  v12 = D3DDeviceForRenderTarget;
  if ( D3DDeviceForRenderTarget < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DDeviceForRenderTarget, 0x42u);
  }
  else
  {
    PixelFormatColorSpace = GetPixelFormatColorSpace(v7, (enum ColorSpace *)&v31);
    v12 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormatColorSpace, 0x46u);
      goto LABEL_15;
    }
    v14 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            360LL);
    if ( v14 )
      v6 = (struct CAnalogDisplayRenderTarget *)CAnalogDisplayRenderTarget::CAnalogDisplayRenderTarget(
                                                  v14,
                                                  v11,
                                                  (__int64)v19,
                                                  (unsigned int)v31,
                                                  v18,
                                                  *(_DWORD *)(*((_QWORD *)a3 + 17) + 244LL));
    if ( !v6 )
    {
      v12 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x4Eu);
      goto LABEL_15;
    }
    (*(void (__fastcall **)(struct CAnalogDisplayRenderTarget *))(*(_QWORD *)v6 + 8LL))(v6);
    *((_DWORD *)v6 + 88) = a2;
    v15 = (*(__int64 (__fastcall **)(struct CAnalogDisplayRenderTarget *, const struct _GUID *, _QWORD, const struct CDisplay *, int))(*(_QWORD *)v6 + 224LL))(
            v6,
            a1,
            0LL,
            a3,
            1048);
    v12 = v15;
    if ( v15 >= 0 )
    {
      *a4 = v6;
      goto LABEL_15;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x52u);
  }
  if ( v6 )
    (*(void (__fastcall **)(struct CAnalogDisplayRenderTarget *))(*(_QWORD *)v6 + 16LL))(v6);
LABEL_15:
  if ( v11 )
    CMILPoolResource::Release((CMILPoolResource *)(v11 + 408));
  return v12;
}
