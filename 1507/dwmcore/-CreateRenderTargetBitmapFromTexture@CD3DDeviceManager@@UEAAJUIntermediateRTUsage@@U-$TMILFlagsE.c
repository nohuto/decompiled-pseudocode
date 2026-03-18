/*
 * XREFs of ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180132B30
 * Callers:
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800EDF48 (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x1800EEF9C (-GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJ_N@Z @ 0x18014EA00 (-EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180055818 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x180056088 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x180083270 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x18013AEC0 (-CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatI.c)
 */

__int64 __fastcall CD3DDeviceManager::CreateRenderTargetBitmapFromTexture(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct _GUID *a5,
        struct _LUID a6,
        unsigned int a7,
        __int64 a8,
        struct CD3DDeviceLevel1 *a9)
{
  struct CD3DDeviceLevel1 *v9; // r15
  CD3DDeviceManager *v10; // rbx
  int v11; // r8d
  __int64 v12; // rdx
  int v14; // eax
  int v15; // edi
  int D3DDevice; // eax
  struct CD3DDeviceLevel1 *v17; // rsi
  DWORD CurrentThreadId; // eax
  __int64 v19; // r9
  int v20; // eax
  __int64 (__fastcall ***v21)(_QWORD, GUID *, _QWORD *); // r14
  int v22; // eax
  __int64 (__fastcall ***v24)(_QWORD, GUID *, struct CD3DDeviceLevel1 *); // [rsp+30h] [rbp-10h] BYREF
  struct CD3DDeviceLevel1 *v25; // [rsp+70h] [rbp+30h] BYREF

  v9 = a9;
  v10 = (CD3DDeviceManager *)(a1 - 8);
  v11 = a7;
  v12 = (__int64)a6;
  v25 = 0LL;
  *(_QWORD *)a9 = 0LL;
  v24 = 0LL;
  v14 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId(a1 - 8, v12, v11);
  v15 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x69Fu);
  if ( v15 >= 0 )
  {
    D3DDevice = CD3DDeviceManager::GetD3DDevice(v10, a5, a6, &v25);
    v17 = v25;
    v15 = D3DDevice;
    if ( D3DDevice >= 0 )
    {
      ++*((_DWORD *)v25 + 128);
      a9 = v17;
      CurrentThreadId = GetCurrentThreadId();
      v19 = a8;
      *((_DWORD *)v17 + 129) = CurrentThreadId;
      v20 = CHwTextureRenderTarget::CreateFromTexture(v17, a7, a4, v19, &v24);
      v21 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v24;
      v15 = v20;
      if ( v20 >= 0 )
      {
        v22 = (**v24)(v24, &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3, v9);
        v15 = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR(0x14u, &dword_1801757BC, 1u, v22, 0x7D2u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, &dword_1801757BC, 1u, v20, 0x7CFu);
      }
      CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>((__int64 *)&a9);
      if ( v21 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v21)[2])(v21);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801757BC, 1u, D3DDevice, 0x7C3u);
    }
    if ( v17 )
      CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v17 + 392));
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801757BC, 1u, v15, 0x7C1u);
  }
  return (unsigned int)v15;
}
