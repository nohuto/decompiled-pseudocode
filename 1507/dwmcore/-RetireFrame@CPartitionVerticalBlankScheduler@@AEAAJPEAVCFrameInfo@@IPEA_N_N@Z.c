/*
 * XREFs of ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x1800655A0
 * Callers:
 *     ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x180065C70 (-RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180065E90 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?IsOccluded@CHwndRenderTarget@@UEAA_NXZ @ 0x18004A580 (-IsOccluded@CHwndRenderTarget@@UEAA_NXZ.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x180061F8C (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?DiscardFrame@CKernelTransport@@QEAAJ_K@Z @ 0x1800633AC (-DiscardFrame@CKernelTransport@@QEAAJ_K@Z.c)
 *     ?TraceGlitch@@YAXIPEBVCFrameInfo@@AEB_K1@Z @ 0x180063744 (-TraceGlitch@@YAXIPEBVCFrameInfo@@AEB_K1@Z.c)
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x180064118 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     TemplateEventDescriptor @ 0x1800E1E38 (TemplateEventDescriptor.c)
 *     Template_xqxxqq @ 0x1800E20CC (Template_xqxxqq.c)
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0I000@Z @ 0x1800E4870 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0I000@Z.c)
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z @ 0x1800E5BC0 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z.c)
 *     Template_xd @ 0x1800EDCB0 (Template_xd.c)
 *     ?RecordOutOfFrameDirectFlipStats@CCompositionSurfaceInfo@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x180119548 (-RecordOutOfFrameDirectFlipStats@CCompositionSurfaceInfo@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z.c)
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
  __int64 v9; // r10
  __int64 v10; // rsi
  __int64 v11; // rax
  CHwndRenderTarget *v12; // r15
  bool (__fastcall *v13)(CHwndRenderTarget *); // r13
  char IsOccluded; // al
  char v15; // r13
  char v16; // al
  unsigned __int64 v17; // r8
  bool v18; // r13
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
  __int64 v47; // rdx
  unsigned __int64 i; // r9
  unsigned __int64 v49; // r8
  char v50; // al
  int v51; // r8d
  unsigned int v52; // r8d
  __int64 v53; // r8
  unsigned __int64 v54; // rax
  unsigned int v55; // eax
  int v56; // eax
  int v57; // eax
  __int64 v58; // rdx
  _DWORD *v59; // r8
  __int64 v60; // rax
  unsigned __int64 v61; // rdx
  __int64 v62; // r15
  CTelemetryTouchLatencyAnalysis *v63; // rcx
  UINT v64; // eax
  unsigned __int64 v65; // rdx
  CCompositionSurfaceInfo *v66; // rcx
  int v67; // eax
  _QWORD *v68; // rcx
  signed int LastError; // eax
  char v70; // [rsp+40h] [rbp-51h]
  char v71; // [rsp+44h] [rbp-4Dh]
  int v72; // [rsp+44h] [rbp-4Dh]
  unsigned __int64 v73; // [rsp+48h] [rbp-49h]
  CMILCOMBase *v74; // [rsp+50h] [rbp-41h] BYREF
  int v75; // [rsp+58h] [rbp-39h]
  bool *v76; // [rsp+60h] [rbp-31h]
  DXGI_FRAME_STATISTICS v77; // [rsp+68h] [rbp-29h] BYREF
  DXGI_FRAME_STATISTICS v78; // [rsp+88h] [rbp-9h] BYREF

  v76 = a4;
  v5 = 0;
  v75 = a3;
  v7 = this;
  v8 = 1;
  v71 = 0;
  if ( *((_BYTE *)a2 + 273) )
  {
    v9 = *((_QWORD *)a2 + 35) + 1LL;
    v73 = v9;
    v10 = 0LL;
    do
    {
      if ( (unsigned int)v10 >= *((_DWORD *)a2 + 164)
        || (unsigned int)v10 >= *(_DWORD *)(*(_QWORD *)(v7 + 22296) + 656LL) )
      {
        v18 = a5;
        goto LABEL_22;
      }
      v11 = *(_QWORD *)(*(_QWORD *)(v7 + 168) + 32LL);
      if ( (unsigned int)v10 >= *(_DWORD *)(v11 + 56) )
      {
        v70 = 1;
        MilInstrumentationCheckHR(0x14u, &dword_18016A938, 1u, -2147024809, 0x498u);
        MilInstrumentationCheckHR(0x14u, &dword_18016A938, 1u, -2147024809, 0x103Bu);
      }
      else
      {
        v12 = *(CHwndRenderTarget **)(*(_QWORD *)(v11 + 24) + 8 * v10);
        v13 = *(bool (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v12 + 168LL);
        if ( v13 == CHwndRenderTarget::IsOccluded )
          IsOccluded = CHwndRenderTarget::IsOccluded(v12);
        else
          IsOccluded = ((__int64 (__fastcall *)(CHwndRenderTarget *, bool (__fastcall *)(CHwndRenderTarget *)))v13)(
                         v12,
                         CHwndRenderTarget::IsOccluded);
        v70 = IsOccluded;
      }
      if ( *((_BYTE *)a2 + v10 + 496) )
        goto LABEL_113;
      this = *(_QWORD *)(v7 + 22296);
      v15 = *(_QWORD *)(this + 256) - *((_QWORD *)a2 + 33) > 0x989680uLL;
      v16 = v15 | (*((_DWORD *)a2 + v10 + 4) <= *(_DWORD *)(32LL * (unsigned int)v10 + this + 664));
      *((_BYTE *)a2 + v10 + 496) = v16;
      if ( v16 )
      {
        v17 = *(_QWORD *)(32 * (v10 + 21) + *(_QWORD *)(v7 + 22296));
        if ( v17 <= *((_QWORD *)a2 + 35) + 1LL )
          v17 = *((_QWORD *)a2 + 35) + 1LL;
        *((_QWORD *)a2 + v10 + 38) = v17;
        this = *(unsigned int *)(*(_QWORD *)(v7 + 22296) + 32LL * (unsigned int)v10 + 668);
        *((_DWORD *)a2 + v10 + 108) = this;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_xqxxqq(
            this,
            *(_DWORD *)(v7 + 25268) != 0,
            *(_QWORD *)a2,
            v10,
            this,
            *((_QWORD *)a2 + v10 + 38),
            v15,
            *(_DWORD *)(v7 + 25268) != 0);
      }
      if ( v70 && !v15 )
      {
LABEL_113:
        v9 = v73;
      }
      else
      {
        v8 &= *((_BYTE *)a2 + v10 + 496);
        v9 = v73;
        if ( *((_QWORD *)a2 + v10 + 38) > v73 )
        {
          v9 = *((_QWORD *)a2 + v10 + 38);
          v73 = v9;
        }
      }
      v10 = (unsigned int)(v10 + 1);
    }
    while ( v8 );
    v18 = a5;
    if ( !a5 )
      goto LABEL_49;
LABEL_22:
    *((_QWORD *)a2 + 37) = v9;
    *((_BYTE *)a2 + 288) = 1;
    if ( (*(_DWORD *)(v7 + 25264))-- == 1 )
    {
      if ( *(_DWORD *)(v7 + 25268) )
      {
        *(_DWORD *)(v7 + 25268) = 0;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        {
          TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_EXIT_PARALLEL_MODE);
          v9 = v73;
        }
      }
    }
    if ( !*(_QWORD *)a2 )
      goto LABEL_33;
    v20 = *(unsigned int *)(v7 + 22292);
    v21 = 0LL;
    if ( (_DWORD)v20 != -1 )
    {
      this = 1376 * v20;
      v21 = 1376 * v20 + v7 + 264;
    }
    v22 = 0;
    v74 = *(CMILCOMBase **)(v7 + 200);
    v23 = *(_QWORD *)(v7 + 22296);
    if ( *((_BYTE *)a2 + 648) && *(_BYTE *)(v23 + 648) )
    {
      v24 = *((_DWORD *)a2 + 108);
      v25 = 0;
      v26 = *((_DWORD *)a2 + 41);
      v71 = 0;
      if ( v24 > v26 )
      {
        if ( v21 )
        {
          v51 = *(_DWORD *)(v21 + 432);
          if ( v51 )
          {
            v52 = v51 + 1;
            if ( v26 <= v52 )
              v26 = v52;
            if ( v26 >= v24 )
              v26 = *((_DWORD *)a2 + 108);
          }
        }
        v25 = 1;
        v22 = v24 - v26;
        v71 = 1;
      }
      v27 = *(_DWORD *)(v23 + 656);
      v28 = 1;
      if ( v27 > 1 )
      {
        v59 = (_DWORD *)((char *)a2 + 168);
        do
        {
          if ( v28 >= 0x10 )
            break;
          if ( v59[67] > *v59 )
            v25 = 1;
          ++v28;
          ++v59;
        }
        while ( v28 < v27 );
        v71 = v25;
      }
      if ( !v25 )
        goto LABEL_32;
      TraceGlitch(v27, a2, (const unsigned __int64 *)(v7 + 72), (const unsigned __int64 *)&v74);
      v9 = v73;
    }
    if ( v71 )
    {
      ++*(_QWORD *)(v7 + 25272);
      v47 = 0LL;
      for ( i = *(_QWORD *)a2; (unsigned int)v47 < *(_DWORD *)(v7 + 22680); v47 = (unsigned int)(v47 + 1) )
      {
        v53 = *(_QWORD *)(*(_QWORD *)(v7 + 22656) + 8 * v47);
        v54 = *(_QWORD *)(v53 + 56);
        if ( v54 && i > v54 )
        {
          ++*(_DWORD *)(v53 + 40);
          *(_DWORD *)(v53 + 32) += v22;
          v55 = *(_DWORD *)(v53 + 36);
          if ( v55 <= v22 )
            v55 = v22;
          *(_DWORD *)(v53 + 36) = v55;
        }
      }
      v49 = *(_QWORD *)a2;
      v50 = 0;
      if ( *(_DWORD *)(v7 + 23288) && v49 >= *(_QWORD *)(v7 + 23336) )
      {
        ++*(_WORD *)(v7 + 23356);
        v50 = 1;
        *(_WORD *)(v7 + 23358) += v22;
      }
      if ( *(_DWORD *)(v7 + 23448) && v49 >= *(_QWORD *)(v7 + 23496) )
      {
        ++*(_WORD *)(v7 + 23516);
        v50 = 1;
        *(_WORD *)(v7 + 23518) += v22;
      }
      if ( *(_DWORD *)(v7 + 23608) && v49 >= *(_QWORD *)(v7 + 23656) )
      {
        ++*(_WORD *)(v7 + 23676);
        v50 = 1;
        *(_WORD *)(v7 + 23678) += v22;
      }
      if ( *(_DWORD *)(v7 + 23768) && v49 >= *(_QWORD *)(v7 + 23816) )
      {
        ++*(_WORD *)(v7 + 23836);
        v50 = 1;
        *(_WORD *)(v7 + 23838) += v22;
      }
      if ( *(_DWORD *)(v7 + 23928) && v49 >= *(_QWORD *)(v7 + 23976) )
      {
        ++*(_WORD *)(v7 + 23996);
        v50 = 1;
        *(_WORD *)(v7 + 23998) += v22;
      }
      if ( *(_DWORD *)(v7 + 24088) && v49 >= *(_QWORD *)(v7 + 24136) )
      {
        ++*(_WORD *)(v7 + 24156);
        v50 = 1;
        *(_WORD *)(v7 + 24158) += v22;
      }
      if ( *(_DWORD *)(v7 + 24248) && v49 >= *(_QWORD *)(v7 + 24296) )
      {
        ++*(_WORD *)(v7 + 24316);
        v50 = 1;
        *(_WORD *)(v7 + 24318) += v22;
      }
      if ( *(_DWORD *)(v7 + 24408) && v49 >= *(_QWORD *)(v7 + 24456) )
      {
        ++*(_WORD *)(v7 + 24476);
        v50 = 1;
        *(_WORD *)(v7 + 24478) += v22;
      }
      if ( *(_DWORD *)(v7 + 24568) && v49 >= *(_QWORD *)(v7 + 24616) )
      {
        ++*(_WORD *)(v7 + 24636);
        v50 = 1;
        *(_WORD *)(v7 + 24638) += v22;
      }
      if ( *(_DWORD *)(v7 + 24728) && v49 >= *(_QWORD *)(v7 + 24776) )
      {
        ++*(_WORD *)(v7 + 24796);
        *(_WORD *)(v7 + 24798) += v22;
        goto LABEL_145;
      }
      if ( v50 )
      {
LABEL_145:
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          Template_xd(this, &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_RECORDGLITCH_EVENT, v49, v22);
          v9 = v73;
        }
      }
    }
LABEL_32:
    v29 = *(_QWORD *)a2;
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v7 + 22680); j = (unsigned int)(j + 1) )
    {
      v42 = *(_QWORD *)(*(_QWORD *)(v7 + 22656) + 8 * j);
      v43 = *(_QWORD *)(v42 + 56);
      if ( v43 && v29 >= v43 )
      {
        ++*(_DWORD *)(v42 + 72);
        v44 = *(_QWORD *)(v42 + 80);
        if ( v44 )
        {
          v45 = v9 - v44;
          if ( *(_QWORD *)(v42 + 88) > (unsigned __int64)(v9 - v44) )
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
LABEL_33:
    for ( k = 0LL; (unsigned int)k < *((_DWORD *)a2 + 318); k = (unsigned int)(k + 1) )
    {
      v60 = *((_QWORD *)a2 + 156);
      v61 = *(_QWORD *)a2;
      v74 = *(CMILCOMBase **)a2;
      v62 = *(_QWORD *)(v60 + 8 * k);
      v63 = *(CTelemetryTouchLatencyAnalysis **)(v62 + 24);
      if ( v63 )
      {
        CTelemetryTouchLatencyAnalysis::AnalyzeLatencyInformation(
          v63,
          *(_QWORD *)v62,
          *(_QWORD *)(v62 + 8),
          *(_DWORD *)(v62 + 16),
          *(_QWORD *)(v7 + 22340),
          *((_QWORD *)a2 + 38),
          v61);
        CTelemetryTouchLatencyAnalysis::UnreferenceScenario(
          *(CTelemetryTouchLatencyAnalysis **)(v62 + 24),
          *(_QWORD *)v62,
          (unsigned __int64)v74);
        *(_QWORD *)(v62 + 24) = 0LL;
      }
    }
    LOBYTE(v77.PresentCount) = *((_DWORD *)a2 + 164) == 1 && !*(_BYTE *)(v7 + 25280) && !*(_BYTE *)(v7 + 25281);
    v32 = *(_QWORD *)a2;
    v33 = 0LL;
    v34 = *(LARGE_INTEGER *)(v7 + 184);
    *(_QWORD *)&v77.SyncRefreshCount = *(_QWORD *)a2;
    v77.SyncQPCTime = v34;
    while ( (unsigned int)v33 < *(_DWORD *)(v7 + 22680) )
    {
      v46 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 22656) + 8 * v33) + 64LL);
      if ( v46 && v32 >= v46 )
      {
        CAnimationTracking::StopAnalyzingAnimationScenario(
          (CAnimationTracking *)(v7 + 22656),
          v33,
          (const struct CAnimationTracking::TelFrameInfo *)&v77);
        v32 = *(_QWORD *)&v77.SyncRefreshCount;
      }
      else
      {
        v33 = (unsigned int)(v33 + 1);
      }
    }
    if ( v18 )
    {
      v58 = *((_QWORD *)a2 + 1);
      if ( v58 )
        CKernelTransport::DiscardFrame(*(CKernelTransport **)(v7 + 128), v58);
      goto LABEL_48;
    }
    v35 = *(_QWORD *)(v7 + 168);
    v5 = 0;
    v36 = 0LL;
    if ( !*(_DWORD *)(v35 + 680) )
    {
LABEL_41:
      *(_DWORD *)(v35 + 680) = 0;
      DynArrayImpl<0>::ShrinkToSize((_QWORD *)(v35 + 656), 8u);
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x8B1u);
        return (unsigned int)v5;
      }
      v77.PresentCount = *((_DWORD *)a2 + 4);
      v77.PresentRefreshCount = *((_DWORD *)a2 + 108);
      v77.SyncRefreshCount = v77.PresentRefreshCount;
      *(_OWORD *)&v77.SyncQPCTime.LowPart = *((unsigned __int64 *)a2 + 38);
      if ( *((_QWORD *)a2 + 1) )
      {
        v37 = *(_QWORD **)(v7 + 128);
        v74 = (CMILCOMBase *)*((_QWORD *)a2 + 1);
        v5 = 0;
        v38 = NtDCompositionRetireFrame(*v37, &v74, &v77);
        if ( v38 < 0 )
        {
          v5 = v38 | 0x10000000;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v38 | 0x10000000, 0x99u);
        }
        if ( v5 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x8C1u);
          return (unsigned int)v5;
        }
      }
      if ( *((_QWORD *)a2 + 164) )
      {
        v64 = *((_DWORD *)a2 + 332);
        v65 = *((_QWORD *)a2 + 165);
        v66 = (CCompositionSurfaceInfo *)*((_QWORD *)a2 + 164);
        v78 = v77;
        v78.PresentCount = v64;
        v67 = CCompositionSurfaceInfo::RecordOutOfFrameDirectFlipStats(v66, v65, &v78);
        if ( v67 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v67, 0x2Du);
      }
      v39 = 0LL;
      if ( *((_DWORD *)a2 + 310) )
      {
        while ( 1 )
        {
          SetLastError(0);
          v68 = *(_QWORD **)(*((_QWORD *)a2 + 152) + 8 * v39);
          if ( !(unsigned int)DwmHLsurfSetUpdatedId(*v68, v68 + 1) )
            break;
          v39 = (unsigned int)(v39 + 1);
          if ( (unsigned int)v39 >= *((_DWORD *)a2 + 310) )
            goto LABEL_48;
        }
        LastError = GetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
        if ( LastError >= 0 )
          LastError = -2003304445;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, LastError, 0x7D8u);
      }
LABEL_48:
      *(_DWORD *)(v7 + 22292) = v75;
LABEL_49:
      if ( !v8 && !v18 )
        goto LABEL_52;
      goto LABEL_50;
    }
    while ( 1 )
    {
      v72 = 0;
      v74 = *(CMILCOMBase **)(*(_QWORD *)(v35 + 656) + 8 * v36);
      v56 = NtSetCompositionSurfaceBufferCompositionMode(
              *((_QWORD *)v74 + 4),
              (char *)v74 + 56,
              *((unsigned int *)v74 + 36));
      if ( v56 >= 0 )
        goto LABEL_104;
      v72 = v56 | 0x10000000;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v56 | 0x10000000, 0x148u);
      v57 = v72;
      if ( v72 < 0 )
        break;
LABEL_105:
      if ( !v5 || v5 >= 0 && v57 < 0 )
        v5 = v57;
      CMILCOMBase::InternalRelease(v74);
      v36 = (unsigned int)(v36 + 1);
      if ( (unsigned int)v36 >= *(_DWORD *)(v35 + 680) )
        goto LABEL_41;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v72, 0x55Bu);
LABEL_104:
    v57 = v72;
    goto LABEL_105;
  }
LABEL_50:
  for ( m = 0LL; (unsigned int)m < *((_DWORD *)a2 + 326); m = (unsigned int)(m + 1) )
    CResponseItem::ReleaseResponseRef(*(CResponseItem **)(*((_QWORD *)a2 + 160) + 8 * m));
  *((_DWORD *)a2 + 326) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)a2 + 160, 8u);
LABEL_52:
  *v76 = v8;
  return (unsigned int)v5;
}
