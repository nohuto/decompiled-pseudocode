/*
 * XREFs of ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x180044A60
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x180045FB0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800395C4 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x18003AE80 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x18003C450 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x180043C7C (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180073B70 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z @ 0x1800747B0 (-GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800A3618 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     TemplateEventDescriptor @ 0x1800BCF6C (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1FRAME_TIME_INFO@@QEAA@XZ @ 0x180111888 (--1FRAME_TIME_INFO@@QEAA@XZ.c)
 *     ?UpdateFrameTimeInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAVCFrameInfo@@_NPEAUFRAME_TIME_INFO@@@Z @ 0x180111A6C (-UpdateFrameTimeInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAVCFrameInfo@@_NPEAUFRAME_TIME_INF.c)
 *     Template_qN16 @ 0x180114048 (Template_qN16.c)
 *     Template_qNR0 @ 0x1801140C8 (Template_qNR0.c)
 *     Template_qqqq @ 0x180114140 (Template_qqqq.c)
 *     Template_x @ 0x1801141C0 (Template_x.c)
 *     Template_xqqq @ 0x180114220 (Template_xqqq.c)
 *     Template_xxxxq @ 0x1801143E0 (Template_xxxxq.c)
 *     Template_xxxxx @ 0x18011448C (Template_xxxxx.c)
 *     ?PresentFollowUp@CComposition@@QEAAJAEBUFRAME_TIME_INFO@@@Z @ 0x180116DF0 (-PresentFollowUp@CComposition@@QEAAJAEBUFRAME_TIME_INFO@@@Z.c)
 *     Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx @ 0x1801174B8 (Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx.c)
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x180119AB0 (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18011FA60 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     Template_q @ 0x180129F68 (Template_q.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::ProcessFrame(unsigned __int64 this, unsigned int a2)
{
  unsigned __int64 v2; // rbp
  unsigned int v3; // eax
  int v4; // esi
  unsigned __int64 v5; // rbx
  signed int v6; // r14d
  unsigned __int8 v7; // r13
  unsigned __int8 v8; // di
  bool v9; // zf
  int v10; // r8d
  _QWORD *v11; // rcx
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r12
  _QWORD *v14; // rcx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rax
  __int64 v17; // r11
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // r8d
  __int64 v24; // rdi
  unsigned int v25; // r14d
  unsigned __int64 v26; // rcx
  unsigned int v27; // edx
  __int64 *v28; // r10
  int *v29; // r9
  int v30; // eax
  __int64 v31; // rax
  char v32; // al
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 v35; // r8
  __int64 v36; // rax
  unsigned __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  char v42; // al
  __int64 v43; // r15
  __int64 v44; // r12
  int v45; // eax
  struct CVisual *v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // r15
  __int64 v51; // rax
  bool v52; // al
  signed int v53; // r14d
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // r8
  unsigned __int64 v57; // r9
  unsigned __int64 v58; // r11
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rdx
  int v64; // eax
  int v65; // eax
  char v66; // al
  __int64 v67; // r15
  void *v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rcx
  unsigned __int64 v74; // rdx
  __int64 v75; // r15
  unsigned int j; // edi
  __int64 v77; // rax
  int v78; // edx
  CComposition *v80; // rcx
  int v81; // eax
  __int64 v82; // r8
  char v83; // dl
  __int64 v84; // rcx
  __int64 v85; // rax
  unsigned int v86; // r12d
  unsigned int v87; // edi
  __int64 v88; // rsi
  _QWORD *v89; // r12
  __int64 (__fastcall *v90)(_QWORD *, __int64); // rax
  char v91; // al
  CHwndRenderTarget *v92; // rcx
  unsigned int *v93; // rdx
  __int64 (__fastcall *v94)(CHwndRenderTarget *__hidden, unsigned int *); // rax
  int LastPresentCount; // eax
  int v96; // edx
  int v97; // r9d
  __int64 v98; // r15
  unsigned int i; // r15d
  __int64 v100; // rax
  __int64 v101; // r12
  __int64 v102; // r13
  __int64 v103; // rax
  CConnection **v104; // rax
  int v105; // eax
  unsigned __int64 v106; // rcx
  unsigned __int64 v107; // rcx
  __int64 v108; // r12
  __int64 v109; // r13
  __int64 v110; // rax
  CConnection **v111; // rax
  int v112; // eax
  unsigned int v113; // r8d
  unsigned int v114; // ecx
  __int64 v115; // r9
  __int64 v116; // r10
  __int64 v117; // rax
  unsigned __int64 v118; // rdi
  int v119; // r11d
  unsigned __int64 v120; // rcx
  unsigned __int64 v121; // rax
  struct IRenderTargetDesktop *PrimaryDesktopRenderTargetNoRef; // rax
  char *v123; // rax
  signed int LastError; // eax
  char v125; // r8
  int v126; // eax
  signed int v127; // eax
  signed int v128; // eax
  unsigned __int64 v129; // rtt
  __int64 v130; // rdx
  unsigned int lpArgToCompletionRoutine; // [rsp+20h] [rbp-130h]
  char v132; // [rsp+150h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL;
  v3 = *(_DWORD *)(this + 25564);
  v4 = 0;
  v5 = this;
  *(_QWORD *)(v2 + 40) = this;
  v6 = 0;
  *(_DWORD *)(v2 + 28) = 0;
  v7 = 1;
  if ( *(_DWORD *)(this + 25560) > v3 )
  {
    v100 = *(_QWORD *)(this + 21928);
    v8 = 0;
    *(_BYTE *)v2 = 0;
    if ( !*(_BYTE *)(v100 + 1312) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80u) != 0 )
        TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_GLITCH_DETECTED);
      if ( *(_BYTE *)(v5 + 25608) )
      {
        if ( *(_DWORD *)(v5 + 29744) == -1 )
          *(_QWORD *)(v5 + 29744) = 0LL;
        *(_QWORD *)(v5 + 25584 + 8LL * *(unsigned int *)(v5 + 29748) + 4168) = CDebugFrameCounter::CurrentTime((CDebugFrameCounter *)(v5 + 25584));
        v113 = *(_DWORD *)(v5 + 29748) + 1;
        a2 = v113 / 0x3C;
        v113 %= 0x3Cu;
        this = *(unsigned int *)(v5 + 29744);
        *(_DWORD *)(v5 + 29748) = v113;
        if ( (_DWORD)this == v113 )
        {
          v114 = this + 1;
          a2 = v114 / 0x3C;
          this = v114 % 0x3C;
          *(_DWORD *)(v5 + 29744) = this;
        }
      }
      if ( *(_DWORD *)(v5 + 25564) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_x(this, &EVTDESC_SCHEDULE_GLITCH_RECOVERY_ATTEMPT, *(_QWORD *)(*(_QWORD *)(v5 + 21928) + 88LL));
        v8 = 0;
      }
      else
      {
        *(_DWORD *)(v5 + 25564) = 1;
        v8 = 1;
        v9 = (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) == 0;
        *(_BYTE *)v2 = 1;
        if ( !v9 )
          TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_ENTER_PARALLEL_MODE);
      }
    }
  }
  else
  {
    v8 = 1;
    *(_BYTE *)v2 = 1;
  }
  *(_BYTE *)(*(_QWORD *)(v5 + 21928) + 1312LL) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    Template_xqqq(this, a2, *(_QWORD *)(v5 + 21928), v8, *(_DWORD *)(v5 + 25560), *(_DWORD *)(v5 + 25564));
  v9 = (Microsoft_Windows_Dwm_CoreEnableBits & 8) == 0;
  v10 = *(_DWORD *)(v5 + 25560);
  *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v10;
  if ( !v9 )
  {
    TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_PROCESS_FRAME_Start);
    v10 = *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  }
  if ( !v8 )
    goto LABEL_91;
  v11 = *(_QWORD **)(v5 + 21928);
  v12 = v11[165];
  v13 = v11[166];
  v11[10] = v11[11] + *(unsigned int *)(v5 + 224);
  v14 = *(_QWORD **)(v5 + 21928);
  v15 = *(unsigned int *)(v5 + 224);
  v16 = v14[10];
  if ( v15 != 1 )
    v16 /= v15;
  *v14 = v16;
  *(_QWORD *)(*(_QWORD *)(v5 + 21928) + 1328LL) = *(_QWORD *)(v5 + 240) + *(_QWORD *)(*(_QWORD *)(v5 + 21928) + 240LL);
  v17 = *(_QWORD *)(v5 + 21928);
  v18 = *(_QWORD *)(v17 + 1328) - *(_QWORD *)(v5 + 24);
  v19 = *(_QWORD *)(v5 + 80) * (v18 % 0x989680) / 0x989680 + *(_QWORD *)(v5 + 80) * (v18 / 0x989680);
  *(_QWORD *)(v17 + 1320) = v19;
  *(_QWORD *)(v17 + 1320) = *(_QWORD *)(v5 + 56) + v19;
  v20 = *(_QWORD *)(v5 + 21928);
  if ( *(_DWORD *)(v5 + 25560) )
  {
    *(_QWORD *)(v20 + 1328) += *(_QWORD *)(v5 + 200);
    *(_QWORD *)(*(_QWORD *)(v5 + 21928) + 1320LL) += *(_QWORD *)(v5 + 216);
    *(_BYTE *)(*(_QWORD *)(v5 + 21928) + 1336LL) = 1;
    v20 = *(_QWORD *)(v5 + 21928);
    if ( !*(_BYTE *)(v20 + 648) )
      goto LABEL_14;
    v21 = *(_DWORD *)(v20 + 100) + 2;
    goto LABEL_13;
  }
  if ( *(_BYTE *)(v20 + 648) )
  {
    v21 = *(_DWORD *)(v20 + 100) + 1;
LABEL_13:
    *(_DWORD *)(v20 + 164) = v21;
  }
LABEL_14:
  v22 = *(_QWORD *)(v5 + 21928);
  if ( *(_BYTE *)(v22 + 648) )
  {
    v23 = 1;
    if ( *(_DWORD *)(v22 + 656) > 1u )
    {
      do
      {
        v115 = *(_QWORD *)(v5 + 21928);
        v116 = v23;
        v117 = 32LL * v23;
        *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = 0;
        v118 = *(_QWORD *)(v115 + 8LL * v23 + 520);
        v119 = *(_DWORD *)(v117 + v115 + 680);
        *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v119;
        if ( v118 )
        {
          v120 = *(_QWORD *)(v117 + v115 + 688);
          v121 = *(_QWORD *)(v115 + 1320);
          if ( v121 > v120 )
          {
            *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 8) += (v121 - v120) / v118;
            v119 = *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
          }
        }
        if ( (v118 + (*(_QWORD *)(v115 + 520) >> 1)) / *(_QWORD *)(v115 + 520) < 2 )
          *(_DWORD *)(v115 + 4LL * v23 + 164) = v119;
        else
          *(_DWORD *)(v115 + 4LL * v23 + 164) = v119 + 1;
        ++v23;
        *(_DWORD *)(*(_QWORD *)(v5 + 21928) + 4 * v116 + 100) = v119 + 1;
      }
      while ( v23 < *(_DWORD *)(*(_QWORD *)(v5 + 21928) + 656LL) );
    }
  }
  v24 = *(_QWORD *)(v5 + 21928);
  v25 = *(_DWORD *)(v24 + 96);
  memset_0((void *)(v2 + 304), 0, 0x100uLL);
  v27 = 0;
  if ( v25 )
  {
    v26 = v2 + 308;
    v28 = (__int64 *)(v24 + 520);
    v29 = (int *)(v24 + 164);
    do
    {
      if ( v27 >= 0x10 )
        break;
      ++v27;
      *(_DWORD *)(v26 - 4) = *(v29 - 16);
      v30 = *v29++;
      *(_DWORD *)v26 = v30;
      v31 = *v28++;
      *(_QWORD *)(v26 + 4) = v31;
      v26 += 16LL;
    }
    while ( v27 < v25 );
  }
  v32 = Microsoft_Windows_Dwm_CoreEnableBits;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    Template_qNR0(v26, (unsigned int)&EVTDESC_SCHEDULE_FRAME_VSYNCDEADLINES, v25, 16, v2 + 304);
    v32 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  v33 = *(_QWORD *)(*(_QWORD *)(v5 + 21928) + 1320LL);
  v34 = *(_QWORD *)(v5 + 21936);
  v35 = *(_QWORD *)(v34 + 1320);
  if ( v33 < v12 || v33 < v35 )
  {
    if ( v33 >= v12 )
    {
      if ( (v32 & 0x10) == 0 )
        goto LABEL_165;
    }
    else
    {
      if ( (v32 & 0x10) == 0 )
      {
LABEL_165:
        v106 = *(_QWORD *)(*(_QWORD *)(v5 + 21936) + 1320LL);
        if ( v106 <= v12 )
          v106 = v12;
        *(_QWORD *)(*(_QWORD *)(v5 + 21928) + 1320LL) = v106;
        v107 = *(_QWORD *)(*(_QWORD *)(v5 + 21936) + 1328LL);
        if ( v107 <= v13 )
          v107 = v13;
        *(_QWORD *)(*(_QWORD *)(v5 + 21928) + 1328LL) = v107;
        goto LABEL_24;
      }
      v35 = v12;
    }
    Template_x(v34, &EVTDESC_SCHEDULE_TIMEADJUSTED_BETWEENFRAMES, v35 - v33);
    goto LABEL_165;
  }
LABEL_24:
  v36 = *(_QWORD *)(v5 + 21928);
  v37 = v5 + 21960;
  *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v5 + 21960;
  *(_QWORD *)(v5 + 22008) = *(_QWORD *)(v36 + 248);
  *(_QWORD *)(v5 + 21988) = *(_QWORD *)(*(_QWORD *)(v5 + 21928) + 232LL);
  *(_QWORD *)(v5 + 21996) = *(_QWORD *)(*(_QWORD *)(v5 + 21928) + 88LL);
  *(_DWORD *)(v5 + 22024) = *(_DWORD *)(*(_QWORD *)(v5 + 21928) + 16LL);
  *(_DWORD *)(v5 + 22004) = *(_DWORD *)(*(_QWORD *)(v5 + 21928) + 100LL);
  *(_QWORD *)(v5 + 22028) = *(_QWORD *)(*(_QWORD *)(v5 + 21928) + 80LL);
  *(_QWORD *)(v5 + 22016) = **(_QWORD **)(v5 + 21928);
  *(_QWORD *)(v5 + 21964) = *(_QWORD *)(v5 + 192);
  *(_QWORD *)(v5 + 21972) = *(_QWORD *)(v5 + 216);
  *(_QWORD *)(v5 + 21980) = *(_QWORD *)(v5 + 228);
  *(_QWORD *)(v5 + 22072) = *(_QWORD *)(v5 + 25568);
  *(_DWORD *)(v5 + 22080) = *(_DWORD *)(v5 + 25560);
  v38 = *(unsigned int *)(v5 + 21920);
  if ( (_DWORD)v38 != -1 )
  {
    *(_QWORD *)(v5 + 22036) = *(_QWORD *)(1352 * v38 + v5 + 280);
    *(_DWORD *)(v5 + 22044) = *(_DWORD *)(1352LL * *(unsigned int *)(v5 + 21920) + v5 + 296);
  }
  v39 = *(unsigned int *)(v5 + 21924);
  if ( (_DWORD)v39 != -1 )
  {
    *(_QWORD *)(v5 + 22048) = *(_QWORD *)(1352 * v39 + v5 + 280);
    *(_QWORD *)(v5 + 22060) = *(_QWORD *)(1352LL * *(unsigned int *)(v5 + 21924) + v5 + 360);
  }
  *(_DWORD *)(v5 + 22056) = *(_DWORD *)(*(_QWORD *)(v5 + 21928) + 664LL);
  v40 = *(unsigned int *)(*(_QWORD *)(v5 + 21928) + 668LL);
  *(_DWORD *)(v5 + 22068) = v40;
  *(_QWORD *)(v5 + 22260) = *(_QWORD *)(v5 + 22252);
  *(_QWORD *)(v5 + 22252) = *(unsigned int *)(v5 + 22056);
  v41 = *(_QWORD *)(v5 + 21928);
  *(_OWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = 0;
  if ( *(_BYTE *)(v5 + 22280) )
    *(_DWORD *)(v41 + 96) = 0;
  *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v41;
  *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = *(_DWORD *)(v5 + 224);
  *(_BYTE *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C) = *(_BYTE *)(v5 + 22280);
  v42 = *(_BYTE *)(v5 + 22282);
  *(_BYTE *)(v5 + 22282) = 0;
  v9 = (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0;
  *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v5 + 192;
  *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v37;
  *(_BYTE *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5D) = v42;
  if ( !v9 )
    TemplateEventDescriptor(v40, &EVTDESC_SCHEDULE_RENDER_Start);
  v43 = *(_QWORD *)(v5 + 184);
  v44 = *(_QWORD *)(v5 + 21928);
  *(_BYTE *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 0;
  *(_QWORD *)(v43 + 344) = v2 + 64;
  *(_DWORD *)(v43 + 1112) = 0;
  if ( *(_DWORD *)(v43 + 336) == 1 )
    *(_BYTE *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C) = 1;
  v45 = CComposition::ProcessComposition((CComposition *)v43, (bool *)(v2 + 1));
  v6 = v45;
  if ( v45 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v45, 0x49Fu);
  }
  else
  {
    if ( CDebugVisualRenderer::s_fEnableDebug )
    {
      CDebugVisualRenderer::s_fEnableDebug = 0;
      if ( !CDebugVisualRenderer::s_pVisual )
      {
        PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef((CComposition *)v43);
        if ( PrimaryDesktopRenderTargetNoRef )
          v123 = (char *)PrimaryDesktopRenderTargetNoRef - 152;
        else
          v123 = 0LL;
        CDebugVisualRenderer::s_pVisual = *(CVisual **)(*((_QWORD *)v123 + 16) + 24LL);
      }
      CDebugVisualRenderer::RenderVisual((struct CComposition *)v43, v46);
    }
    *(_BYTE *)(v44 + 272) = *(_BYTE *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 1);
  }
  *(_QWORD *)(v43 + 344) = 0LL;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x489u);
  }
  else if ( v6 != 142213121 )
  {
    v6 = 0;
  }
  *(_BYTE *)(v5 + 22280) |= *(_BYTE *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C);
  if ( v6 == 142213121 )
  {
    v6 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      TemplateEventDescriptor(v47, &EVTDESC_SCHEDULE_DXGI_STATUS_OCCLUDED);
  }
  if ( *(_BYTE *)(v5 + 22280) )
  {
    LOBYTE(v47) = *(_DWORD *)(*(_QWORD *)(v5 + 184) + 336LL) == 0;
    *(_BYTE *)(v5 + 22281) = v47;
  }
  if ( v6 >= 0 )
  {
    v49 = *(_QWORD *)(v5 + 21928);
    if ( !*(_BYTE *)(v49 + 272) || *(_BYTE *)(v49 + 273) )
    {
      v50 = *(_QWORD *)(v5 + 184);
      if ( !*(_QWORD *)(*(_QWORD *)(v50 + 40) + 376LL) )
      {
        if ( *(_DWORD *)(v50 + 400) )
        {
          v101 = 0LL;
          v102 = *(unsigned int *)(v50 + 400);
          do
          {
            v103 = *(_QWORD *)(v50 + 376);
            *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = 1;
            *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x84) = 0LL;
            *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x8C) = 0LL;
            v104 = *(CConnection ***)(v101 + v103);
            *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x94) = 0LL;
            *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v104;
            v105 = CChannelContext::PostMessageToChannel(v104, (const struct MIL_MESSAGE *)(v2 + 128), v48);
            if ( v105 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v105, 0x67u);
            CMILRefCountBase::Release(*(CMILRefCountBase **)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
            v101 += 8LL;
            --v102;
          }
          while ( v102 );
          v37 = v5 + 21960;
        }
        *(_DWORD *)(v50 + 400) = 0;
        DynArrayImpl<1>::ShrinkToSize(v50 + 376);
      }
    }
    v51 = *(_QWORD *)(v5 + 21928);
    v52 = *(_BYTE *)(v51 + 272) && !*(_BYTE *)(v51 + 273);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_q(v47, &EVTDESC_SCHEDULE_RENDER_Stop, v52);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x420u);
    goto LABEL_71;
  }
  v53 = 0;
  SetLastError(0);
  if ( !QueryPerformanceCounter((LARGE_INTEGER *)(v2 + 8)) )
  {
    LastError = GetLastError();
    v53 = LastError;
    if ( LastError > 0 )
      v53 = (unsigned __int16)LastError | 0x80070000;
    if ( v53 >= 0 )
      v53 = -2003304445;
    MilInstrumentationCheckHR(0x14u, &dword_1801B083C, 1u, v53, 0xA6u);
    goto LABEL_210;
  }
  v54 = *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  v55 = *(_QWORD *)(v5 + 64);
  if ( v54 < v55 )
  {
    ++*(_DWORD *)(v5 + 88);
    v53 = -2003304293;
    MilInstrumentationCheckHR(0x14u, &dword_1801B083C, 1u, -2003304293, 0xB0u);
LABEL_210:
    MilInstrumentationCheckHR(0x14u, &dword_1801B083C, 1u, v53, 0x59u);
    goto LABEL_56;
  }
  *(_QWORD *)(v5 + 72) = v55;
  *(_QWORD *)(v5 + 64) = v54;
LABEL_56:
  v56 = *(_QWORD *)(v5 + 64) - *(_QWORD *)(v5 + 56);
  v57 = *(_QWORD *)(v5 + 80);
  if ( v57 == 3312656 )
    v58 = v56 / 0x328C10;
  else
    v58 = v56 / v57;
  v59 = 10000000 * (v56 - v57 * v58);
  if ( v57 == 3312656 )
    v60 = v59 / 0x328C10;
  else
    v60 = v59 / v57;
  if ( v53 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801B083C, 1u, v53, 0x89u);
  }
  else
  {
    *(_QWORD *)(v5 + 32) = *(_QWORD *)(v5 + 24) + v60 + 10000000 * v58;
    v61 = v60 + 10000000 * v58;
    *(_QWORD *)(v5 + 40) = v61;
  }
  *(_DWORD *)(v5 + 25296) = v53;
  if ( v53 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v53, 0x42Du);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xxxxx(
      v61,
      (unsigned int)&EVTDESC_SCHEDULE_TIME,
      *(_QWORD *)(v5 + 32),
      *(_QWORD *)(v5 + 40),
      *(_QWORD *)(v5 + 64),
      *(_QWORD *)(v5 + 72),
      *(_QWORD *)(v5 + 48));
  *(_QWORD *)(*(_QWORD *)(v5 + 21928) + 264LL) = *(_QWORD *)(v5 + 32);
  v62 = *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
  v63 = *(_QWORD *)(v5 + 21928) + 1216LL;
  *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = *(_QWORD *)v63;
  v64 = *(_DWORD *)(v63 + 20);
  *(_QWORD *)v63 = v62;
  LODWORD(v62) = *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x74);
  *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x74) = v64;
  v65 = *(_DWORD *)(v63 + 24);
  *(_DWORD *)(v63 + 20) = v62;
  LODWORD(v62) = *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
  *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = v65;
  *(_DWORD *)(v63 + 24) = v62;
  v66 = *(int *)(v5 + 25296) < 0;
  v67 = *(_QWORD *)(v5 + 21928);
  v6 = 0;
  *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *(_DWORD *)(v5 + 21912);
  if ( *(_BYTE *)(v67 + 272) && !*(_BYTE *)(v67 + 273) || v66 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_xxxxq(
        *(_DWORD *)(v67 + 80) - 1,
        v63,
        *(_QWORD *)(v5 + 32),
        *(_DWORD *)(v67 + 1328) - *(_DWORD *)(v5 + 200),
        *(_QWORD *)(v67 + 88),
        *(_BYTE *)(v67 + 80) - 1,
        v66);
    *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = 0LL;
    *(_OWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = 0LL;
    *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = 0;
    if ( *(_BYTE *)(v5 + 22280) )
      *(_DWORD *)(v67 + 96) = 0;
    v80 = *(CComposition **)(v5 + 184);
    *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = v5 + 192;
    *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = *(_DWORD *)(v5 + 224);
    *(_BYTE *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0xBC) = *(_BYTE *)(v5 + 22280);
    *(_BYTE *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0xBD) = *(_BYTE *)(v5 + 22282);
    *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = v67;
    *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v37;
    v81 = CComposition::Present(v80, (struct FRAME_TIME_INFO *)(v2 + 160));
    *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v81;
    v6 = v81;
    if ( v81 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v81, 0x2F9u);
    if ( v6 == 142213130 )
    {
      v6 = 0;
      *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0;
      *(_BYTE *)(v5 + 22283) = 1;
    }
    else
    {
      *(_BYTE *)(v5 + 22283) = 0;
    }
    v83 = *(_BYTE *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0xBC);
    *(_BYTE *)(v67 + 1180) = v83;
    *(_DWORD *)(v67 + 1176) = v6;
    v84 = *(unsigned int *)(*(_QWORD *)(v5 + 184) + 336LL);
    *(_DWORD *)(v67 + 1184) = v84;
    *(_BYTE *)(v5 + 22280) |= v83;
    if ( v6 >= 0 )
    {
      *(_BYTE *)(v67 + 273) = 1;
      ++*(_DWORD *)(v5 + 25560);
      if ( *(_BYTE *)(v67 + 273) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          TemplateEventDescriptor(v84, &EVTDESC_SCHEDULE_GETPRESENTCOUNT_Start);
        v85 = *(_QWORD *)(v5 + 184);
        v86 = 0;
        *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = 0;
        if ( *(_DWORD *)(*(_QWORD *)(v85 + 32) + 48LL) )
        {
          v87 = 0;
          v88 = *(_QWORD *)(v85 + 32);
          do
          {
            if ( v86 >= 0x10 )
              break;
            v89 = *(_QWORD **)(*(_QWORD *)(v88 + 24) + 8LL * v87);
            v90 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*v89 + 48LL);
            v91 = (char *)v90 == (char *)CHwndRenderTarget::IsOfType
                ? CHwndRenderTarget::IsOfType(v89, 38LL)
                : v90(v89, 38LL);
            if ( !v91 || (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v89 + 144LL))(v89) )
            {
              v86 = *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
            }
            else
            {
              v92 = (CHwndRenderTarget *)(v89 + 14);
              v93 = (unsigned int *)(v67
                                   + 4
                                   * (*(unsigned int *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) + 4LL));
              v94 = *(__int64 (__fastcall **)(CHwndRenderTarget *__hidden, unsigned int *))(v89[14] + 112LL);
              if ( v94 == CHwndRenderTarget::GetLastPresentCount )
                LastPresentCount = CHwndRenderTarget::GetLastPresentCount(v92, v93);
              else
                LastPresentCount = v94(v92, v93);
              if ( LastPresentCount < 0 )
                MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, LastPresentCount, 0x467u);
              v86 = *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) + 1;
              *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = v86;
            }
            ++v87;
          }
          while ( v87 < *(_DWORD *)(v88 + 48) );
          v5 = *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
          v4 = 0;
          v6 = *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          v37 = v5 + 21960;
        }
        MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, -2003304307, 0xEC5u);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_qN16(v84, v96, v86, v97, v67 + 16);
      }
      *(_DWORD *)(v5 + 21920) = *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      *(_QWORD *)(v67 + 280) = *(_QWORD *)(v5 + 64);
      v98 = *(_QWORD *)(v5 + 184);
      if ( !*(_QWORD *)(*(_QWORD *)(v98 + 40) + 376LL) )
      {
        if ( *(_DWORD *)(v98 + 400) )
        {
          v108 = 0LL;
          v109 = *(unsigned int *)(v98 + 400);
          do
          {
            v110 = *(_QWORD *)(v98 + 376);
            *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = 1;
            *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x84) = 0LL;
            *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x8C) = 0LL;
            v111 = *(CConnection ***)(v108 + v110);
            *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x94) = 0LL;
            *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v111;
            v112 = CChannelContext::PostMessageToChannel(v111, (const struct MIL_MESSAGE *)(v2 + 128), v82);
            if ( v112 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v112, 0x67u);
            CMILRefCountBase::Release(*(CMILRefCountBase **)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28));
            v108 += 8LL;
            --v109;
          }
          while ( v109 );
          v37 = *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
        }
        *(_DWORD *)(v98 + 400) = 0;
        DynArrayImpl<1>::ShrinkToSize(v98 + 376);
      }
      ++*(_QWORD *)(v5 + 48);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        TemplateEventDescriptor(v84, &EVTDESC_SCHEDULE_PRESENT_Stop);
    }
    for ( i = 0; i < *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8); ++i )
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) + 8LL * i));
    *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = 0;
    DynArrayImpl<0>::ShrinkToSize(v2 + 192, 8LL);
    if ( *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) != *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                            + 0xC8) )
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  }
  else if ( *(_BYTE *)(v5 + 22283) )
  {
    v125 = *(_BYTE *)(v5 + 22280);
    *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x120) = 0LL;
    *(_OWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x110) = 0LL;
    *(_OWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0) = 0LL;
    *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x128) = 0;
    *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100) = 0LL;
    *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108) = 0;
    *(_WORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10C) = 0;
    CPartitionVerticalBlankScheduler::UpdateFrameTimeInfo(
      (CPartitionVerticalBlankScheduler *)v5,
      (struct CFrameInfo *)v67,
      v125,
      (struct FRAME_TIME_INFO *)(v2 + 240));
    v126 = CComposition::PresentFollowUp(*(CComposition **)(v5 + 184), (const struct FRAME_TIME_INFO *)(v2 + 240));
    v6 = v126;
    if ( v126 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v126, 0x343u);
    if ( v6 == 142213130 )
    {
      v6 = 0;
      *(_BYTE *)(v5 + 22283) = 1;
    }
    else
    {
      *(_BYTE *)(v5 + 22283) = 0;
    }
    FRAME_TIME_INFO::~FRAME_TIME_INFO((FRAME_TIME_INFO *)(v2 + 240));
  }
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x43Du);
LABEL_71:
  v68 = *(void **)(*(_QWORD *)(v5 + 152) + 184LL);
  if ( v68 )
    PulseEvent(v68);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x447u);
    goto LABEL_237;
  }
  v69 = *(_QWORD *)(v5 + 21928);
  if ( *(_BYTE *)(v69 + 272) && !*(_BYTE *)(v69 + 273) )
    SetEvent(*(HANDLE *)(v5 + 96));
  v70 = *(unsigned int *)(v5 + 25580);
  v6 = 0;
  *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0;
  if ( (_DWORD)v70 )
  {
    *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = -10000 * v70;
    SetLastError(0);
    if ( SetWaitableTimer(*(HANDLE *)(v5 + 112), (const LARGE_INTEGER *)(v2 + 48), 0, 0LL, 0LL, 0) )
      goto LABEL_77;
    v127 = GetLastError();
    v6 = v127;
    if ( v127 > 0 )
      v6 = (unsigned __int16)v127 | 0x80070000;
    lpArgToCompletionRoutine = 2648;
  }
  else
  {
    SetLastError(0);
    if ( CancelWaitableTimer(*(HANDLE *)(v5 + 112)) )
    {
LABEL_77:
      *(_DWORD *)(v5 + 25580) = 0;
      goto LABEL_78;
    }
    v128 = GetLastError();
    v6 = v128;
    if ( v128 > 0 )
      v6 = (unsigned __int16)v128 | 0x80070000;
    lpArgToCompletionRoutine = 2652;
  }
  if ( v6 >= 0 )
    v6 = -2003304445;
  *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v6;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, lpArgToCompletionRoutine);
LABEL_78:
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x451u);
LABEL_237:
    FRAME_TIME_INFO::~FRAME_TIME_INFO((FRAME_TIME_INFO *)(v2 + 64));
    v78 = *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C);
    v10 = *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    goto LABEL_95;
  }
  *(_QWORD *)(v37 + 48) = *(_QWORD *)(*(_QWORD *)(v5 + 21928) + 248LL);
  *(_QWORD *)(v37 + 28) = *(_QWORD *)(*(_QWORD *)(v5 + 21928) + 232LL);
  *(_QWORD *)(v37 + 36) = *(_QWORD *)(*(_QWORD *)(v5 + 21928) + 88LL);
  *(_DWORD *)(v37 + 64) = *(_DWORD *)(*(_QWORD *)(v5 + 21928) + 16LL);
  *(_DWORD *)(v37 + 44) = *(_DWORD *)(*(_QWORD *)(v5 + 21928) + 100LL);
  *(_QWORD *)(v37 + 68) = *(_QWORD *)(*(_QWORD *)(v5 + 21928) + 80LL);
  *(_QWORD *)(v37 + 56) = **(_QWORD **)(v5 + 21928);
  *(_QWORD *)(v37 + 4) = *(_QWORD *)(v5 + 192);
  *(_QWORD *)(v37 + 12) = *(_QWORD *)(v5 + 216);
  *(_QWORD *)(v37 + 20) = *(_QWORD *)(v5 + 228);
  *(_QWORD *)(v37 + 112) = *(_QWORD *)(v5 + 25568);
  *(_DWORD *)(v37 + 120) = *(_DWORD *)(v5 + 25560);
  v71 = *(unsigned int *)(v5 + 21920);
  if ( (_DWORD)v71 != -1 )
  {
    *(_QWORD *)(v37 + 76) = *(_QWORD *)(1352 * v71 + v5 + 280);
    *(_DWORD *)(v37 + 84) = *(_DWORD *)(1352LL * *(unsigned int *)(v5 + 21920) + v5 + 296);
  }
  v72 = *(unsigned int *)(v5 + 21924);
  if ( (_DWORD)v72 != -1 )
  {
    *(_QWORD *)(v37 + 88) = *(_QWORD *)(1352 * v72 + v5 + 280);
    *(_QWORD *)(v37 + 100) = *(_QWORD *)(1352LL * *(unsigned int *)(v5 + 21924) + v5 + 360);
  }
  *(_DWORD *)(v37 + 96) = *(_DWORD *)(*(_QWORD *)(v5 + 21928) + 664LL);
  *(_DWORD *)(v37 + 108) = *(_DWORD *)(*(_QWORD *)(v5 + 21928) + 668LL);
  *(_QWORD *)(v5 + 22260) = *(_QWORD *)(v5 + 22252);
  *(_QWORD *)(v5 + 22252) = *(unsigned int *)(v37 + 96);
  v73 = *(_QWORD *)(*(_QWORD *)(v5 + 21936) + 240LL);
  if ( v73 )
  {
    v74 = *(_QWORD *)(*(_QWORD *)(v5 + 21928) + 240LL) - v73;
  }
  else
  {
    v129 = *(_QWORD *)(v5 + 216) - *(_QWORD *)(v5 + 56);
    v74 = *(_QWORD *)(v5 + 24)
        + 10000000 * (v129 / *(_QWORD *)(v5 + 80))
        + 10000000 * (v129 % *(_QWORD *)(v5 + 80)) / *(_QWORD *)(v5 + 80);
  }
  v9 = (Microsoft_Windows_Dwm_CoreEnableBits & 1) == 0;
  v75 = *(_QWORD *)(v5 + 21928);
  *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v74;
  if ( !v9 )
  {
    v130 = *(_QWORD *)(v5 + 21928);
    Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx(
      *(_DWORD *)(v75 + 264) - *(_QWORD *)(v75 + 256),
      v130,
      *(_DWORD *)(v5 + 21912),
      *(_QWORD *)v130,
      *(_DWORD *)(v130 + 16),
      *(_QWORD *)(v130 + 1328),
      *(_QWORD *)(v130 + 1320),
      *(_DWORD *)(v75 + 164));
    v6 = *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  }
  for ( j = 0; j < *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78); ++j )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) + 8LL * j));
  *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = 0;
  DynArrayImpl<0>::ShrinkToSize(v2 + 96, 8LL);
  if ( *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) != *(_QWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x68) )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  v8 = *(_BYTE *)v2;
  v7 = 1;
  v10 = *(_DWORD *)(((unsigned __int64)&v132 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
LABEL_91:
  v77 = *(_QWORD *)(v5 + 21936);
  v78 = v8;
  if ( !*(_BYTE *)(v77 + 272) || *(_BYTE *)(v77 + 273) )
    v7 = 0;
  v4 = v7;
LABEL_95:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qqqq(
      *(_DWORD *)(v5 + 25564),
      (unsigned int)&EVTDESC_SCHEDULE_PROCESS_FRAME,
      v78,
      v4,
      v10,
      *(_DWORD *)(v5 + 25564));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
    TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_PROCESS_FRAME_Stop);
  return (unsigned int)v6;
}
