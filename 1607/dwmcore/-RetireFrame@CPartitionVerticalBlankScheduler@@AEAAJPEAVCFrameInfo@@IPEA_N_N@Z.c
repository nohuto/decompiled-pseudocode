/*
 * XREFs of ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x1800441D0
 * Callers:
 *     ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x1800448A0 (-RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x180045FB0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z @ 0x18001CA5C (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?DiscardFrame@CKernelTransport@@QEAAJ_K@Z @ 0x180036F54 (-DiscardFrame@CKernelTransport@@QEAAJ_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOccluded@CHwndRenderTarget@@UEAA_NXZ @ 0x180073BB0 (-IsOccluded@CHwndRenderTarget@@UEAA_NXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800A0628 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ?RecordGlitch@CTelemetryTouchLatencyAnalysis@@QEAAX_KI@Z @ 0x1800A1B60 (-RecordGlitch@CTelemetryTouchLatencyAnalysis@@QEAAX_KI@Z.c)
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K00I000@Z @ 0x1800A1CAC (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K00I000@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x1800AAB2C (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?TraceGlitch@@YAXIPEBVCFrameInfo@@AEB_K1@Z @ 0x1800B39F4 (-TraceGlitch@@YAXIPEBVCFrameInfo@@AEB_K1@Z.c)
 *     TemplateEventDescriptor @ 0x1800BCF6C (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_xqxxqq @ 0x1801142AC (Template_xqxxqq.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::RetireFrame(
        CPartitionVerticalBlankScheduler *this,
        struct CFrameInfo *a2,
        int a3,
        bool *a4,
        bool a5)
{
  int v5; // ebp
  CPartitionVerticalBlankScheduler *v7; // rdi
  char v8; // r12
  unsigned __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rax
  CHwndRenderTarget *v12; // rcx
  bool (__fastcall *v13)(CHwndRenderTarget *__hidden); // rax
  char IsOccluded; // al
  __int64 v15; // rdx
  char v16; // r13
  unsigned __int64 v17; // rdx
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
  __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // r14
  unsigned __int64 v37; // rax
  _QWORD *v38; // rcx
  int v39; // eax
  __int64 v40; // rsi
  __int64 m; // rdi
  __int64 v43; // r8
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // r15
  __int64 v49; // r14
  CTelemetryTouchLatencyAnalysis *v50; // rcx
  __int64 v51; // rdx
  unsigned __int64 i; // r9
  __int64 v53; // r8
  unsigned __int64 v54; // rax
  unsigned int v55; // eax
  int v56; // r8d
  unsigned int v57; // r8d
  __int64 v58; // r15
  int v59; // eax
  int v60; // eax
  __int64 v61; // rdx
  _DWORD *v62; // r8
  _QWORD *v63; // rcx
  signed int LastError; // eax
  char v65; // [rsp+40h] [rbp-88h]
  char v66; // [rsp+44h] [rbp-84h]
  int v67; // [rsp+44h] [rbp-84h]
  unsigned __int64 v69; // [rsp+50h] [rbp-78h] BYREF
  bool *v70; // [rsp+58h] [rbp-70h]
  int v71; // [rsp+60h] [rbp-68h] BYREF
  int v72; // [rsp+64h] [rbp-64h]
  unsigned __int64 v73; // [rsp+68h] [rbp-60h]
  __int64 v74; // [rsp+70h] [rbp-58h]
  __int64 v75; // [rsp+78h] [rbp-50h]

  v70 = a4;
  v5 = 0;
  v7 = this;
  v8 = 1;
  v66 = 0;
  if ( *((_BYTE *)a2 + 273) )
  {
    v9 = *((_QWORD *)a2 + 35) + 1LL;
    v10 = 0LL;
    do
    {
      if ( (unsigned int)v10 >= *((_DWORD *)a2 + 164)
        || (unsigned int)v10 >= *(_DWORD *)(*((_QWORD *)v7 + 2741) + 656LL) )
      {
        v18 = a5;
        goto LABEL_22;
      }
      v11 = *(_QWORD *)(*((_QWORD *)v7 + 23) + 32LL);
      if ( (unsigned int)v10 >= *(_DWORD *)(v11 + 56) )
      {
        v65 = 1;
        MilInstrumentationCheckHR(0x14u, (const int *const)"W", 1u, -2147024809, 0x483u);
        MilInstrumentationCheckHR(0x14u, (const int *const)"W", 1u, -2147024809, 0xEFDu);
      }
      else
      {
        v12 = *(CHwndRenderTarget **)(*(_QWORD *)(v11 + 24) + 8 * v10);
        v13 = *(bool (__fastcall **)(CHwndRenderTarget *__hidden))(*(_QWORD *)v12 + 184LL);
        if ( v13 == CHwndRenderTarget::IsOccluded )
          IsOccluded = CHwndRenderTarget::IsOccluded(v12);
        else
          IsOccluded = ((__int64 (__fastcall *)(CHwndRenderTarget *, bool (__fastcall *)(CHwndRenderTarget *__hidden)))v13)(
                         v12,
                         CHwndRenderTarget::IsOccluded);
        v65 = IsOccluded;
      }
      if ( !*((_BYTE *)a2 + v10 + 496) )
      {
        v15 = *((_QWORD *)v7 + 2741);
        v16 = *(_QWORD *)(v15 + 256) - *((_QWORD *)a2 + 33) > 0x989680uLL;
        LOBYTE(this) = v16 | (*((_DWORD *)a2 + v10 + 4) <= *(_DWORD *)(32LL * (unsigned int)v10 + v15 + 664));
        *((_BYTE *)a2 + v10 + 496) = (_BYTE)this;
        if ( (_BYTE)this )
        {
          v17 = *(_QWORD *)(32 * (v10 + 21) + *((_QWORD *)v7 + 2741));
          if ( v17 <= *((_QWORD *)a2 + 35) + 1LL )
            v17 = *((_QWORD *)a2 + 35) + 1LL;
          *((_QWORD *)a2 + v10 + 38) = v17;
          this = (CPartitionVerticalBlankScheduler *)*(unsigned int *)(*((_QWORD *)v7 + 2741)
                                                                     + 32LL * (unsigned int)v10
                                                                     + 668);
          *((_DWORD *)a2 + v10 + 108) = (_DWORD)this;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            Template_xqxxqq(
              (_DWORD)this,
              *((_DWORD *)v7 + 6391) != 0,
              *(_QWORD *)a2,
              v10,
              (char)this,
              *((_QWORD *)a2 + v10 + 38),
              v16,
              *((_DWORD *)v7 + 6391) != 0);
        }
        if ( !v65 || v16 )
        {
          v8 &= *((_BYTE *)a2 + v10 + 496);
          if ( *((_QWORD *)a2 + v10 + 38) > v9 )
            v9 = *((_QWORD *)a2 + v10 + 38);
        }
      }
      v10 = (unsigned int)(v10 + 1);
    }
    while ( v8 );
    v18 = a5;
    if ( !a5 )
      goto LABEL_48;
LABEL_22:
    *((_QWORD *)a2 + 37) = v9;
    *((_BYTE *)a2 + 288) = 1;
    if ( (*((_DWORD *)v7 + 6390))-- == 1 )
    {
      if ( *((_DWORD *)v7 + 6391) )
      {
        *((_DWORD *)v7 + 6391) = 0;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
          TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_EXIT_PARALLEL_MODE);
      }
    }
    if ( !*(_QWORD *)a2 )
      goto LABEL_33;
    v20 = *((unsigned int *)v7 + 5481);
    v21 = 0LL;
    if ( (_DWORD)v20 != -1 )
      v21 = (__int64)v7 + 1352 * v20 + 280;
    v22 = 0;
    v69 = *((_QWORD *)v7 + 27);
    v23 = *((_QWORD *)v7 + 2741);
    if ( *((_BYTE *)a2 + 648) && *(_BYTE *)(v23 + 648) )
    {
      v24 = *((_DWORD *)a2 + 108);
      v25 = 0;
      v26 = *((_DWORD *)a2 + 41);
      v66 = 0;
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
        v66 = 1;
      }
      v27 = *(_DWORD *)(v23 + 656);
      v28 = 1;
      if ( v27 > 1 )
      {
        v62 = (_DWORD *)((char *)a2 + 168);
        do
        {
          if ( v28 >= 0x10 )
            break;
          if ( v62[67] > *v62 )
            v25 = 1;
          ++v28;
          ++v62;
        }
        while ( v28 < v27 );
        v66 = v25;
      }
      if ( !v25 )
        goto LABEL_32;
      TraceGlitch(v27, a2, (const unsigned __int64 *)v7 + 10, &v69);
    }
    if ( v66 )
    {
      ++*((_QWORD *)v7 + 3196);
      v51 = 0LL;
      for ( i = *(_QWORD *)a2; (unsigned int)v51 < *((_DWORD *)v7 + 5578); v51 = (unsigned int)(v51 + 1) )
      {
        v53 = *(_QWORD *)(*((_QWORD *)v7 + 2786) + 8 * v51);
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
      CTelemetryTouchLatencyAnalysis::RecordGlitch(
        (CPartitionVerticalBlankScheduler *)((char *)v7 + 22872),
        *(_QWORD *)a2,
        v22);
    }
LABEL_32:
    v29 = *(_QWORD *)a2;
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)v7 + 5578); j = (unsigned int)(j + 1) )
    {
      v43 = *(_QWORD *)(*((_QWORD *)v7 + 2786) + 8 * j);
      v44 = *(_QWORD *)(v43 + 56);
      if ( v44 && v29 >= v44 )
      {
        ++*(_DWORD *)(v43 + 72);
        v45 = *(_QWORD *)(v43 + 88);
        if ( v45 )
        {
          v46 = v9 - v45;
          *(_QWORD *)(v43 + 80) += v9 - v45;
          if ( *(_QWORD *)(v43 + 96) > v9 - v45 )
            v46 = *(_QWORD *)(v43 + 96);
          *(_QWORD *)(v43 + 96) = v46;
        }
        else
        {
          *(_QWORD *)(v43 + 104) = v9;
        }
        *(_QWORD *)(v43 + 88) = v9;
      }
    }
LABEL_33:
    for ( k = 0LL; (unsigned int)k < *((_DWORD *)a2 + 318); k = (unsigned int)(k + 1) )
    {
      v48 = *(_QWORD *)a2;
      v49 = *(_QWORD *)(*((_QWORD *)a2 + 156) + 8 * k);
      v50 = *(CTelemetryTouchLatencyAnalysis **)(v49 + 32);
      if ( v50 )
      {
        CTelemetryTouchLatencyAnalysis::AnalyzeLatencyInformation(
          v50,
          *(_QWORD *)v49,
          *(_QWORD *)(v49 + 8),
          *(_QWORD *)(v49 + 16),
          *(_DWORD *)(v49 + 24),
          *(_QWORD *)((char *)v7 + 21972),
          *((_QWORD *)a2 + 38),
          *(_QWORD *)a2);
        CTelemetryTouchLatencyAnalysis::UnreferenceScenario(
          *(CTelemetryTouchLatencyAnalysis **)(v49 + 32),
          *(_QWORD *)v49,
          v48);
        *(_QWORD *)(v49 + 32) = 0LL;
      }
    }
    LOBYTE(v71) = *((_DWORD *)a2 + 164) == 1 && !*((_BYTE *)v7 + 25576) && !*((_BYTE *)v7 + 25577);
    v32 = *(_QWORD *)a2;
    v33 = 0LL;
    v34 = *((_QWORD *)v7 + 25);
    v73 = *(_QWORD *)a2;
    v74 = v34;
    while ( (unsigned int)v33 < *((_DWORD *)v7 + 5578) )
    {
      v47 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2786) + 8 * v33) + 64LL);
      if ( v47 && v32 >= v47 )
      {
        CAnimationTracking::StopAnalyzingAnimationScenario(
          (CPartitionVerticalBlankScheduler *)((char *)v7 + 22288),
          v33,
          (const struct CAnimationTracking::TelFrameInfo *)&v71);
        v32 = v73;
      }
      else
      {
        v33 = (unsigned int)(v33 + 1);
      }
    }
    if ( v18 )
    {
      v61 = *((_QWORD *)a2 + 1);
      if ( v61 )
        CKernelTransport::DiscardFrame(*((CKernelTransport **)v7 + 18), v61);
      goto LABEL_47;
    }
    v35 = *((_QWORD *)v7 + 23);
    v5 = 0;
    v36 = 0LL;
    if ( !*(_DWORD *)(v35 + 688) )
    {
LABEL_41:
      *(_DWORD *)(v35 + 688) = 0;
      DynArrayImpl<0>::ShrinkToSize(v35 + 664, 8LL);
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x814u);
        return (unsigned int)v5;
      }
      v71 = *((_DWORD *)a2 + 4);
      v72 = *((_DWORD *)a2 + 108);
      LODWORD(v73) = v72;
      v74 = *((_QWORD *)a2 + 38);
      v37 = *((_QWORD *)a2 + 1);
      v75 = 0LL;
      if ( v37 )
      {
        v38 = (_QWORD *)*((_QWORD *)v7 + 18);
        v69 = v37;
        v5 = 0;
        v39 = NtDCompositionRetireFrame(*v38, &v69, &v71);
        if ( v39 < 0 )
        {
          v5 = v39 | 0x10000000;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v39 | 0x10000000, 0x99u);
        }
        if ( v5 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x824u);
          return (unsigned int)v5;
        }
      }
      v40 = 0LL;
      if ( *((_DWORD *)a2 + 310) )
      {
        while ( 1 )
        {
          SetLastError(0);
          v63 = *(_QWORD **)(*((_QWORD *)a2 + 152) + 8 * v40);
          if ( !(unsigned int)DwmHLsurfSetUpdatedId(*v63, v63 + 1) )
            break;
          v40 = (unsigned int)(v40 + 1);
          if ( (unsigned int)v40 >= *((_DWORD *)a2 + 310) )
            goto LABEL_47;
        }
        LastError = GetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
        if ( LastError >= 0 )
          LastError = -2003304445;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, LastError, 0x73Bu);
      }
LABEL_47:
      *((_DWORD *)v7 + 5481) = a3;
LABEL_48:
      if ( !v8 && !v18 )
        goto LABEL_51;
      goto LABEL_49;
    }
    while ( 1 )
    {
      v67 = 0;
      v58 = *(_QWORD *)(*(_QWORD *)(v35 + 664) + 8 * v36);
      v59 = NtSetCompositionSurfaceBufferCompositionModeAndOrientation(
              *(_QWORD *)(v58 + 32),
              v58 + 56,
              *(unsigned int *)(v58 + 136),
              *(unsigned int *)(v58 + 140));
      if ( v59 >= 0 )
        goto LABEL_96;
      v67 = v59 | 0x10000000;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v59 | 0x10000000, 0xEFu);
      v60 = v67;
      if ( v67 < 0 )
        break;
LABEL_97:
      if ( !v5 || v5 >= 0 && v60 < 0 )
        v5 = v60;
      CMILCOMBase::InternalRelease((CMILCOMBase *)v58);
      v36 = (unsigned int)(v36 + 1);
      if ( (unsigned int)v36 >= *(_DWORD *)(v35 + 688) )
        goto LABEL_41;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v67, 0x44Eu);
LABEL_96:
    v60 = v67;
    goto LABEL_97;
  }
LABEL_49:
  for ( m = 0LL; (unsigned int)m < *((_DWORD *)a2 + 326); m = (unsigned int)(m + 1) )
    CResponseItem::ReleaseResponseRef(*(CResponseItem **)(*((_QWORD *)a2 + 160) + 8 * m));
  *((_DWORD *)a2 + 326) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)a2 + 1280, 8LL);
LABEL_51:
  *v70 = v8;
  return (unsigned int)v5;
}
