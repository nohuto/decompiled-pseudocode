/*
 * XREFs of ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1800F0518
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x180061DCC (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x18000575C (-GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180054C34 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800557B8 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CaptureBitsResponse::CreateRenderTargetBitmap(CaptureBitsResponse *this)
{
  __int64 v1; // xmm1_8
  int CurrentDisplaySet; // eax
  struct CDisplaySet *v4; // r13
  unsigned int v5; // ebx
  unsigned int v6; // eax
  unsigned int v7; // edi
  struct _LUID v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // r9d
  unsigned int v12; // r8d
  int ScratchRenderTargetBitmap; // eax
  __int64 v14; // r8
  unsigned int v15; // r10d
  unsigned int v16; // ecx
  __int64 v17; // rdx
  struct _LUID v18; // rbx
  __int64 v19; // rax
  unsigned int v20; // r9d
  unsigned int v21; // r8d
  int v22; // eax
  __int64 v24; // [rsp+38h] [rbp-41h]
  __int64 v25; // [rsp+38h] [rbp-41h]
  const char *v26; // [rsp+70h] [rbp-9h] BYREF
  int v27; // [rsp+78h] [rbp-1h]
  __int128 v28; // [rsp+80h] [rbp+7h] BYREF
  __int64 v29; // [rsp+90h] [rbp+17h]
  struct CDisplaySet *v30; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v31; // [rsp+E8h] [rbp+6Fh]

  v1 = *((_QWORD *)this + 15);
  v28 = *(_OWORD *)((char *)this + 104);
  LODWORD(v28) = 87;
  v30 = 0LL;
  v29 = v1;
  v31 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v30);
  v4 = v30;
  v5 = CurrentDisplaySet;
  if ( CurrentDisplaySet >= 0 )
  {
    v6 = *((_DWORD *)v30 + 10);
    v7 = DisplayId::All;
    v8 = g_luidZero;
    if ( v6 < *((_DWORD *)v30 + 18) )
      v8 = *(struct _LUID *)(*(_QWORD *)(*((_QWORD *)v30 + 6) + 8LL * v6) + 832LL);
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 8LL))(*((_QWORD *)this + 3) + 16LL);
    v10 = v31;
    v11 = *((_DWORD *)this + 23);
    v12 = *((_DWORD *)this + 22);
    v26 = "DWM Scratch Rendertarget (capturebits)";
    v27 = 38;
    ScratchRenderTargetBitmap = CD3DDeviceManager::GetScratchRenderTargetBitmap(
                                  (CD3DDeviceManager *)&g_D3DDeviceManager,
                                  (const struct CResourceTag *)&v26,
                                  v12,
                                  v11,
                                  v31,
                                  0,
                                  (struct PixelFormatInfo *)&v28,
                                  v24,
                                  (struct _GUID *)(v9 + 252),
                                  v8,
                                  v7,
                                  0,
                                  0,
                                  (void **)this + 9);
    v5 = ScratchRenderTargetBitmap;
    if ( ScratchRenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ScratchRenderTargetBitmap, 0x1A1u);
      v14 = *((_QWORD *)v4 + 2);
      v15 = 0;
      v16 = 0;
      if ( *(_DWORD *)(v14 + 88) )
      {
        while ( 1 )
        {
          v17 = *(_QWORD *)(*(_QWORD *)(v14 + 64) + 8LL * v16);
          if ( *(_DWORD *)(v17 + 296) == 5140 && *(_DWORD *)(v17 + 300) == 140 )
            break;
          if ( ++v16 >= *(_DWORD *)(v14 + 88) )
            goto LABEL_12;
        }
        v15 = v16;
      }
LABEL_12:
      v18 = *(struct _LUID *)(*(_QWORD *)(*(_QWORD *)(v14 + 64) + 8LL * v15) + 336LL);
      v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 8LL))(*((_QWORD *)this + 3) + 16LL);
      v20 = *((_DWORD *)this + 23);
      v21 = *((_DWORD *)this + 22);
      v26 = "DWM Scratch Rendertarget (capturebits)";
      v27 = 38;
      v22 = CD3DDeviceManager::GetScratchRenderTargetBitmap(
              (CD3DDeviceManager *)&g_D3DDeviceManager,
              (const struct CResourceTag *)&v26,
              v21,
              v20,
              v10,
              0,
              (struct PixelFormatInfo *)&v28,
              v25,
              (struct _GUID *)(v19 + 252),
              v18,
              v7,
              0,
              0,
              (void **)this + 9);
      v5 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x1B3u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0x18Cu);
  }
  if ( v4 )
    CDisplaySet::Release(v4);
  return v5;
}
