/*
 * XREFs of ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18008DCB0
 * Callers:
 *     ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18008E3A0 (-RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x18008FC60 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z @ 0x1800029D8 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z.c)
 *     ?DiscardFrame@CKernelTransport@@QEAAJ_K@Z @ 0x18001DC98 (-DiscardFrame@CKernelTransport@@QEAAJ_K@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x180028FF8 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ?RecordOutOfFrameDirectFlipStats@CCompositionSurfaceInfo@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x18002F594 (-RecordOutOfFrameDirectFlipStats@CCompositionSurfaceInfo@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?IsOccluded@CHwndRenderTarget@@UEAA_NXZ @ 0x18007BAD0 (-IsOccluded@CHwndRenderTarget@@UEAA_NXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x1800A5448 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K00I000@Z @ 0x1800AFAA8 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K00I000@Z.c)
 *     ?TraceGlitch@@YAXIPEBVCFrameInfo@@AEB_K1@Z @ 0x1800B1010 (-TraceGlitch@@YAXIPEBVCFrameInfo@@AEB_K1@Z.c)
 *     TemplateEventDescriptor @ 0x1800BA27C (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     Template_xd @ 0x1800F310C (Template_xd.c)
 *     Template_xqxxqq @ 0x1801003B8 (Template_xqxxqq.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::RetireFrame(
        __int64 this,
        struct CFrameInfo *a2,
        int a3,
        bool *a4,
        bool a5)
{
  int v5; // r14d
  __int64 v7; // rdi
  char v8; // r12
  unsigned __int64 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rax
  CHwndRenderTarget *v12; // r15
  bool (__fastcall *v13)(CHwndRenderTarget *); // r13
  char IsOccluded; // al
  char v15; // r9
  char v16; // al
  unsigned __int64 v17; // r8
  bool v18; // al
  __int64 v20; // rax
  __int64 v21; // r8
  unsigned int v22; // esi
  __int64 v23; // rax
  unsigned int v24; // edx
  char v25; // r9
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // edx
  unsigned __int64 v29; // r9
  __int64 j; // rdx
  __int64 k; // rsi
  unsigned __int64 v32; // rdx
  __int64 v33; // r15
  LARGE_INTEGER v34; // rax
  __int64 v35; // rsi
  __int64 v36; // r15
  _QWORD *v37; // rcx
  int v38; // eax
  __int64 v39; // rsi
  __int64 m; // rdi
  __int64 v42; // r8
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  unsigned __int64 v46; // rax
  __int64 v47; // r8
  unsigned __int64 i; // r9
  __int64 v49; // rdx
  unsigned __int64 v50; // rax
  unsigned int v51; // eax
  unsigned __int64 v52; // r8
  _WORD *v53; // rdx
  char v54; // al
  __int64 v55; // r9
  int v56; // r8d
  unsigned int v57; // r8d
  unsigned __int64 v58; // r13
  __int64 v59; // r15
  CTelemetryTouchLatencyAnalysis *v60; // rcx
  __int64 v61; // r13
  int v62; // eax
  int v63; // eax
  __int64 v64; // rdx
  _DWORD *v65; // r8
  unsigned __int16 v66; // ax
  UINT v67; // eax
  __int64 v68; // rdx
  CCompositionSurfaceInfo *v69; // rcx
  int v70; // eax
  _QWORD *v71; // rcx
  signed int LastError; // eax
  char v73; // [rsp+40h] [rbp-51h]
  char v74; // [rsp+41h] [rbp-50h]
  char v75; // [rsp+44h] [rbp-4Dh]
  int v76; // [rsp+44h] [rbp-4Dh]
  unsigned __int64 v77; // [rsp+48h] [rbp-49h] BYREF
  int v78; // [rsp+50h] [rbp-41h]
  bool *v79; // [rsp+58h] [rbp-39h]
  struct DXGI_FRAME_STATISTICS v80; // [rsp+60h] [rbp-31h] BYREF
  struct DXGI_FRAME_STATISTICS v81; // [rsp+80h] [rbp-11h] BYREF

  v79 = a4;
  v5 = 0;
  v78 = a3;
  v7 = this;
  v8 = 1;
  v75 = 0;
  if ( !*((_BYTE *)a2 + 273) )
    goto LABEL_48;
  v9 = *((_QWORD *)a2 + 35) + 1LL;
  v77 = v9;
  v10 = 0LL;
  do
  {
    if ( (unsigned int)v10 >= *((_DWORD *)a2 + 164) || (unsigned int)v10 >= *(_DWORD *)(*(_QWORD *)(v7 + 22304) + 656LL) )
      goto LABEL_20;
    v11 = *(_QWORD *)(*(_QWORD *)(v7 + 176) + 32LL);
    if ( (unsigned int)v10 >= *(_DWORD *)(v11 + 56) )
    {
      v73 = 1;
      MilInstrumentationCheckHR(0x14u, (const int *const)"W", 1u, -2147024809, 0x494u);
      MilInstrumentationCheckHR(0x14u, (const int *const)"W", 1u, -2147024809, 0x1061u);
    }
    else
    {
      v12 = *(CHwndRenderTarget **)(*(_QWORD *)(v11 + 24) + 8 * v10);
      v13 = *(bool (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v12 + 176LL);
      if ( v13 == CHwndRenderTarget::IsOccluded )
        IsOccluded = CHwndRenderTarget::IsOccluded(v12);
      else
        IsOccluded = ((__int64 (__fastcall *)(CHwndRenderTarget *, bool (__fastcall *)(CHwndRenderTarget *)))v13)(
                       v12,
                       CHwndRenderTarget::IsOccluded);
      v9 = v77;
      v73 = IsOccluded;
    }
    if ( !*((_BYTE *)a2 + v10 + 496) )
    {
      this = *(_QWORD *)(v7 + 22304);
      v15 = *(_QWORD *)(this + 256) - *((_QWORD *)a2 + 33) > 0x989680uLL;
      v74 = v15;
      v16 = v15 | (*((_DWORD *)a2 + v10 + 4) <= *(_DWORD *)(32LL * (unsigned int)v10 + this + 664));
      *((_BYTE *)a2 + v10 + 496) = v16;
      if ( v16 )
      {
        v17 = *(_QWORD *)(32 * (v10 + 21) + *(_QWORD *)(v7 + 22304));
        if ( v17 <= *((_QWORD *)a2 + 35) + 1LL )
          v17 = *((_QWORD *)a2 + 35) + 1LL;
        *((_QWORD *)a2 + v10 + 38) = v17;
        this = *(unsigned int *)(*(_QWORD *)(v7 + 22304) + 32LL * (unsigned int)v10 + 668);
        *((_DWORD *)a2 + v10 + 108) = this;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        {
          Template_xqxxqq(
            this,
            *(_DWORD *)(v7 + 25396) != 0,
            *(_QWORD *)a2,
            v10,
            this,
            *((_QWORD *)a2 + v10 + 38),
            v15,
            *(_DWORD *)(v7 + 25396) != 0);
          v15 = v74;
        }
      }
      if ( !v73 || v15 )
      {
        v8 &= *((_BYTE *)a2 + v10 + 496);
        if ( *((_QWORD *)a2 + v10 + 38) > v9 )
        {
          v9 = *((_QWORD *)a2 + v10 + 38);
          v77 = v9;
        }
      }
    }
    v10 = (unsigned int)(v10 + 1);
  }
  while ( v8 );
  v18 = a5;
  if ( !a5 )
    goto LABEL_47;
LABEL_20:
  *((_QWORD *)a2 + 37) = v9;
  *((_BYTE *)a2 + 288) = 1;
  if ( (*(_DWORD *)(v7 + 25392))-- == 1 )
  {
    if ( *(_DWORD *)(v7 + 25396) )
    {
      *(_DWORD *)(v7 + 25396) = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_EXIT_PARALLEL_MODE);
    }
  }
  if ( *(_QWORD *)a2 )
  {
    v20 = *(unsigned int *)(v7 + 22300);
    v21 = 0LL;
    if ( (_DWORD)v20 != -1 )
    {
      this = 1376 * v20;
      v21 = 1376 * v20 + v7 + 272;
    }
    v22 = 0;
    v77 = *(_QWORD *)(v7 + 208);
    v23 = *(_QWORD *)(v7 + 22304);
    if ( *((_BYTE *)a2 + 648) && *(_BYTE *)(v23 + 648) )
    {
      v24 = *((_DWORD *)a2 + 108);
      v25 = 0;
      v26 = *((_DWORD *)a2 + 41);
      v75 = 0;
      if ( v24 > v26 )
      {
        if ( v21 )
        {
          v56 = *(_DWORD *)(v21 + 432);
          if ( v56 )
          {
            v57 = v56 + 1;
            if ( v26 <= v57 )
              v26 = v57;
            if ( v26 >= v24 )
              v26 = *((_DWORD *)a2 + 108);
          }
        }
        v25 = 1;
        v22 = v24 - v26;
        v75 = 1;
      }
      v27 = *(_DWORD *)(v23 + 656);
      v28 = 1;
      if ( v27 > 1 )
      {
        v65 = (_DWORD *)((char *)a2 + 168);
        do
        {
          if ( v28 >= 0x10 )
            break;
          if ( v65[67] > *v65 )
            v25 = 1;
          ++v28;
          ++v65;
        }
        while ( v28 < v27 );
        v75 = v25;
      }
      if ( !v25 )
        goto LABEL_30;
      TraceGlitch(v27, a2, (const unsigned __int64 *)(v7 + 80), &v77);
    }
    if ( v75 )
    {
      ++*(_QWORD *)(v7 + 25400);
      v47 = 0LL;
      for ( i = *(_QWORD *)a2; (unsigned int)v47 < *(_DWORD *)(v7 + 22688); v47 = (unsigned int)(v47 + 1) )
      {
        v49 = *(_QWORD *)(*(_QWORD *)(v7 + 22664) + 8 * v47);
        v50 = *(_QWORD *)(v49 + 56);
        if ( v50 && i > v50 )
        {
          ++*(_DWORD *)(v49 + 40);
          *(_DWORD *)(v49 + 32) += v22;
          v51 = *(_DWORD *)(v49 + 36);
          if ( v51 <= v22 )
            v51 = v22;
          *(_DWORD *)(v49 + 36) = v51;
        }
      }
      v52 = *(_QWORD *)a2;
      v53 = (_WORD *)(v7 + 23364);
      v54 = 0;
      v55 = 10LL;
      do
      {
        if ( *((_DWORD *)v53 - 17) && v52 >= *(_QWORD *)(v53 - 10) )
        {
          v66 = v53[1];
          this = (unsigned __int16)v22;
          ++*v53;
          v53[2] += v22;
          if ( v66 > (unsigned __int16)v22 )
            LOWORD(this) = v66;
          v54 = 1;
          v53[1] = this;
        }
        v53 += 84;
        --v55;
      }
      while ( v55 );
      if ( v54 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_xd(this, &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_RECORDGLITCH_EVENT, v52, v22);
    }
LABEL_30:
    v29 = *(_QWORD *)a2;
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v7 + 22688); j = (unsigned int)(j + 1) )
    {
      v42 = *(_QWORD *)(*(_QWORD *)(v7 + 22664) + 8 * j);
      v43 = *(_QWORD *)(v42 + 56);
      if ( v43 && v29 >= v43 )
      {
        ++*(_DWORD *)(v42 + 72);
        v44 = *(_QWORD *)(v42 + 80);
        if ( v44 )
        {
          v45 = v9 - v44;
          if ( *(_QWORD *)(v42 + 88) > v9 - v44 )
            v45 = *(_QWORD *)(v42 + 88);
          *(_QWORD *)(v42 + 88) = v45;
        }
        else
        {
          *(_QWORD *)(v42 + 96) = v9;
        }
        *(_QWORD *)(v42 + 80) = v9;
      }
    }
  }
  for ( k = 0LL; (unsigned int)k < *((_DWORD *)a2 + 318); k = (unsigned int)(k + 1) )
  {
    v58 = *(_QWORD *)a2;
    v59 = *(_QWORD *)(*((_QWORD *)a2 + 156) + 8 * k);
    v60 = *(CTelemetryTouchLatencyAnalysis **)(v59 + 32);
    if ( v60 )
    {
      CTelemetryTouchLatencyAnalysis::AnalyzeLatencyInformation(
        v60,
        *(_QWORD *)v59,
        *(_QWORD *)(v59 + 8),
        *(_QWORD *)(v59 + 16),
        *(_DWORD *)(v59 + 24),
        *(_QWORD *)(v7 + 22348),
        *((_QWORD *)a2 + 38),
        *(_QWORD *)a2);
      CTelemetryTouchLatencyAnalysis::UnreferenceScenario(
        *(CTelemetryTouchLatencyAnalysis **)(v59 + 32),
        *(_QWORD *)v59,
        v58);
      *(_QWORD *)(v59 + 32) = 0LL;
    }
  }
  LOBYTE(v80.PresentCount) = *((_DWORD *)a2 + 164) == 1 && !*(_BYTE *)(v7 + 25408) && !*(_BYTE *)(v7 + 25409);
  v32 = *(_QWORD *)a2;
  v33 = 0LL;
  v34 = *(LARGE_INTEGER *)(v7 + 192);
  *(_QWORD *)&v80.SyncRefreshCount = *(_QWORD *)a2;
  v80.SyncQPCTime = v34;
  while ( (unsigned int)v33 < *(_DWORD *)(v7 + 22688) )
  {
    v46 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 22664) + 8 * v33) + 64LL);
    if ( v46 && v32 >= v46 )
    {
      CAnimationTracking::StopAnalyzingAnimationScenario(
        (CAnimationTracking *)(v7 + 22664),
        v33,
        (const struct CAnimationTracking::TelFrameInfo *)&v80);
      v32 = *(_QWORD *)&v80.SyncRefreshCount;
    }
    else
    {
      v33 = (unsigned int)(v33 + 1);
    }
  }
  if ( !a5 )
  {
    v35 = *(_QWORD *)(v7 + 176);
    v5 = 0;
    v36 = 0LL;
    if ( !*(_DWORD *)(v35 + 680) )
    {
LABEL_39:
      *(_DWORD *)(v35 + 680) = 0;
      DynArrayImpl<0>::ShrinkToSize((_QWORD *)(v35 + 656), 8u);
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x8C1u);
        return (unsigned int)v5;
      }
      v80.PresentCount = *((_DWORD *)a2 + 4);
      v80.PresentRefreshCount = *((_DWORD *)a2 + 108);
      v80.SyncRefreshCount = v80.PresentRefreshCount;
      *(_OWORD *)&v80.SyncQPCTime.LowPart = *((unsigned __int64 *)a2 + 38);
      if ( *((_QWORD *)a2 + 1) )
      {
        v37 = *(_QWORD **)(v7 + 136);
        v77 = *((_QWORD *)a2 + 1);
        v5 = 0;
        v38 = NtDCompositionRetireFrame(*v37, &v77, &v80);
        if ( v38 < 0 )
        {
          v5 = v38 | 0x10000000;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v38 | 0x10000000, 0x99u);
        }
        if ( v5 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x8D1u);
          return (unsigned int)v5;
        }
      }
      if ( *((_QWORD *)a2 + 164) )
      {
        v67 = *((_DWORD *)a2 + 332);
        v68 = *((_QWORD *)a2 + 165);
        v69 = (CCompositionSurfaceInfo *)*((_QWORD *)a2 + 164);
        v81 = v80;
        v81.PresentCount = v67;
        v70 = CCompositionSurfaceInfo::RecordOutOfFrameDirectFlipStats(v69, v68, &v81);
        if ( v70 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v70, 0x2Du);
      }
      v39 = 0LL;
      if ( *((_DWORD *)a2 + 310) )
      {
        while ( 1 )
        {
          SetLastError(0);
          v71 = *(_QWORD **)(*((_QWORD *)a2 + 152) + 8 * v39);
          if ( !(unsigned int)DwmHLsurfSetUpdatedId(*v71, v71 + 1) )
            break;
          v39 = (unsigned int)(v39 + 1);
          if ( (unsigned int)v39 >= *((_DWORD *)a2 + 310) )
            goto LABEL_46;
        }
        LastError = GetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
        if ( LastError >= 0 )
          LastError = -2003304445;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, LastError, 0x7E8u);
      }
      goto LABEL_46;
    }
    while ( 1 )
    {
      v76 = 0;
      v61 = *(_QWORD *)(*(_QWORD *)(v35 + 656) + 8 * v36);
      v62 = NtSetCompositionSurfaceBufferCompositionModeAndOrientation(
              *(_QWORD *)(v61 + 32),
              v61 + 56,
              *(unsigned int *)(v61 + 136),
              *(unsigned int *)(v61 + 140));
      if ( v62 >= 0 )
        goto LABEL_99;
      v76 = v62 | 0x10000000;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v62 | 0x10000000, 0x145u);
      v63 = v76;
      if ( v76 < 0 )
        break;
LABEL_100:
      if ( !v5 || v5 >= 0 && v63 < 0 )
        v5 = v63;
      CMILCOMBase::InternalRelease((CMILCOMBase *)v61);
      v36 = (unsigned int)(v36 + 1);
      if ( (unsigned int)v36 >= *(_DWORD *)(v35 + 680) )
        goto LABEL_39;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v76, 0x564u);
LABEL_99:
    v63 = v76;
    goto LABEL_100;
  }
  v64 = *((_QWORD *)a2 + 1);
  if ( v64 )
    CKernelTransport::DiscardFrame(*(CKernelTransport **)(v7 + 136), v64);
LABEL_46:
  *(_DWORD *)(v7 + 22300) = v78;
  v18 = a5;
LABEL_47:
  if ( v8 || v18 )
  {
LABEL_48:
    for ( m = 0LL; (unsigned int)m < *((_DWORD *)a2 + 326); m = (unsigned int)(m + 1) )
      CResponseItem::ReleaseResponseRef(*(CResponseItem **)(*((_QWORD *)a2 + 160) + 8 * m));
    *((_DWORD *)a2 + 326) = 0;
    DynArrayImpl<0>::ShrinkToSize((_QWORD *)a2 + 160, 8u);
  }
  *v79 = v8;
  return (unsigned int)v5;
}
