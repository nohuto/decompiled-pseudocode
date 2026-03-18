/*
 * XREFs of ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180120938
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x180009B4C (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x180013FD4 (-GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180038AF8 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CaptureBitsResponse::CreateRenderTargetBitmap(CaptureBitsResponse *this)
{
  __int128 v1; // xmm0
  __int64 v2; // xmm1_8
  int CurrentDisplaySet; // eax
  CDisplaySet *v5; // r14
  unsigned int v6; // ebx
  unsigned int v7; // eax
  unsigned int v8; // edi
  struct _LUID v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned int v12; // r9d
  unsigned int v13; // r8d
  int ScratchRenderTargetBitmap; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r8
  unsigned int v18; // r10d
  __int64 v19; // rcx
  __int64 v20; // rdx
  struct _LUID v21; // rbx
  __int64 v22; // rax
  unsigned int v23; // r9d
  unsigned int v24; // r8d
  int v25; // eax
  __int64 v27; // [rsp+38h] [rbp-31h]
  __int64 v28; // [rsp+38h] [rbp-31h]
  const char *v29; // [rsp+70h] [rbp+7h] BYREF
  int v30; // [rsp+78h] [rbp+Fh]
  __int128 v31; // [rsp+80h] [rbp+17h] BYREF
  __int64 v32; // [rsp+90h] [rbp+27h]
  CDisplaySet *v33; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v34; // [rsp+D8h] [rbp+6Fh]

  v1 = *(_OWORD *)((char *)this + 104);
  v33 = 0LL;
  v2 = *((_QWORD *)this + 15);
  v34 = 0LL;
  v31 = v1;
  LODWORD(v31) = 87;
  v32 = v2;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v33);
  v5 = v33;
  v6 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0x1ADu);
  }
  else
  {
    v7 = *((_DWORD *)v33 + 10);
    v8 = DisplayId::All;
    v9 = (struct _LUID)g_luidZero;
    if ( v7 < *((_DWORD *)v33 + 18) )
      v9 = *(struct _LUID *)(*(_QWORD *)(*((_QWORD *)v33 + 6) + 8LL * v7) + 232LL);
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 8LL))(*((_QWORD *)this + 3) + 16LL);
    v11 = v34;
    v12 = *((_DWORD *)this + 23);
    v13 = *((_DWORD *)this + 22);
    v29 = "DWM Scratch Rendertarget (capturebits)";
    v30 = 38;
    ScratchRenderTargetBitmap = CD3DDeviceManager::GetScratchRenderTargetBitmap(
                                  (CD3DDeviceManager *)&g_D3DDeviceManager,
                                  (__int64)&v29,
                                  v13,
                                  v12,
                                  v34,
                                  0,
                                  (struct PixelFormatInfo *)&v31,
                                  v27,
                                  (struct _GUID *)(v10 + 252),
                                  v9,
                                  v8,
                                  0,
                                  0,
                                  (void **)this + 9);
    v6 = ScratchRenderTargetBitmap;
    if ( ScratchRenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ScratchRenderTargetBitmap, 0x1C2u);
      v17 = *((_QWORD *)v5 + 2);
      v18 = 0;
      v19 = 0LL;
      if ( *(_DWORD *)(v17 + 88) )
      {
        while ( 1 )
        {
          v20 = *(_QWORD *)(*(_QWORD *)(v17 + 64) + 8 * v19);
          if ( *(_DWORD *)(v20 + 296) == 5140 && *(_DWORD *)(v20 + 300) == 140 )
            break;
          v19 = (unsigned int)(v19 + 1);
          if ( (unsigned int)v19 >= *(_DWORD *)(v17 + 88) )
            goto LABEL_11;
        }
        v18 = v19;
      }
LABEL_11:
      v21 = *(struct _LUID *)(*(_QWORD *)(*(_QWORD *)(v17 + 64) + 8LL * v18) + 336LL);
      v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 8LL))(*((_QWORD *)this + 3) + 16LL);
      v23 = *((_DWORD *)this + 23);
      v24 = *((_DWORD *)this + 22);
      v29 = "DWM Scratch Rendertarget (capturebits)";
      v30 = 38;
      v25 = CD3DDeviceManager::GetScratchRenderTargetBitmap(
              (CD3DDeviceManager *)&g_D3DDeviceManager,
              (__int64)&v29,
              v24,
              v23,
              v11,
              0,
              (struct PixelFormatInfo *)&v31,
              v28,
              (struct _GUID *)(v22 + 252),
              v21,
              v8,
              0,
              0,
              (void **)this + 9);
      v6 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x1D4u);
    }
  }
  if ( v5 )
    CDisplaySet::Release(v5, v15, v16);
  return v6;
}
