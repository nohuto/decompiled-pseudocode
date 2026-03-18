/*
 * XREFs of ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x18008E710
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x18008FC60 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     ?ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x1800067F4 (-ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?FindOutOfFrameDirectFlipInfo@CRenderTargetManager@@QEAAPEAVCOutOfFrameDirectFlipInfo@@XZ @ 0x18007B894 (-FindOutOfFrameDirectFlipInfo@CRenderTargetManager@@QEAAPEAVCOutOfFrameDirectFlipInfo@@XZ.c)
 *     ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z @ 0x18008F880 (-PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x180094744 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x180095C70 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800A1918 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800A41C0 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     TemplateEventDescriptor @ 0x1800BA27C (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ??1FRAME_TIME_INFO@@QEAA@XZ @ 0x1800FC7E8 (--1FRAME_TIME_INFO@@QEAA@XZ.c)
 *     Template_qNR0 @ 0x1801001C0 (Template_qNR0.c)
 *     Template_qqqq @ 0x1801002AC (Template_qqqq.c)
 *     Template_xqqq @ 0x18010032C (Template_xqqq.c)
 *     Template_xxxxx @ 0x180100598 (Template_xxxxx.c)
 *     Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx @ 0x180101BEC (Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx.c)
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x180103938 (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x180109210 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     Template_q @ 0x180111C90 (Template_q.c)
 *     Template_x @ 0x180127D74 (Template_x.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::ProcessFrame(unsigned __int64 this, unsigned int a2)
{
  unsigned __int64 v2; // rbp
  int v3; // r15d
  unsigned __int64 v4; // rbx
  int v5; // esi
  unsigned __int8 v6; // r13
  unsigned __int8 v7; // di
  bool v8; // zf
  int v9; // edx
  _QWORD *v10; // rcx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r12
  _QWORD *v13; // rcx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rax
  __int64 v16; // r11
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  unsigned int v22; // r8d
  __int64 v23; // rdi
  unsigned int v24; // esi
  unsigned __int64 v25; // rcx
  unsigned int v26; // edx
  __int64 *v27; // r10
  int *v28; // r9
  int v29; // eax
  __int64 v30; // rax
  char v31; // al
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rdi
  _QWORD *v36; // r12
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  CRenderTargetManager *v41; // rcx
  struct COutOfFrameDirectFlipInfo *OutOfFrameDirectFlipInfo; // rax
  __int64 v43; // rcx
  __int64 v44; // r14
  __int64 v45; // r12
  int v46; // eax
  struct CVisual *v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // r14
  __int64 v51; // rax
  bool v52; // al
  char v53; // r14
  signed int v54; // esi
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rcx
  __int64 v57; // r11
  unsigned __int64 v58; // rtt
  unsigned __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rdx
  int v63; // eax
  int v64; // eax
  int v65; // eax
  void *v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rcx
  unsigned __int64 v71; // rax
  __int64 v72; // rcx
  unsigned int v73; // r12d
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // r12
  __int64 v80; // r13
  __int64 v81; // rax
  CChannelContext *v82; // rax
  int v83; // eax
  unsigned __int64 v84; // rcx
  unsigned __int64 v85; // rcx
  unsigned int v86; // r8d
  unsigned int v87; // ecx
  __int64 v88; // r9
  __int64 v89; // r10
  __int64 v90; // rax
  unsigned __int64 v91; // rdi
  int v92; // r11d
  unsigned __int64 v93; // rcx
  unsigned __int64 v94; // rax
  struct IRenderTargetDesktop *PrimaryDesktopRenderTargetNoRef; // rax
  char *v96; // rax
  signed int LastError; // eax
  unsigned __int64 v98; // rtt
  __int64 v99; // rdx
  bool v100; // [rsp+150h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL;
  v3 = 0;
  v4 = this;
  v5 = 0;
  v6 = 1;
  if ( *(_DWORD *)(this + 25392) > *(_DWORD *)(this + 25396) )
  {
    v78 = *(_QWORD *)(this + 22304);
    v7 = 0;
    *(_BYTE *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 0;
    if ( !*(_BYTE *)(v78 + 1336) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80u) != 0 )
        TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_GLITCH_DETECTED);
      if ( *(_BYTE *)(v4 + 25440) )
      {
        if ( *(_DWORD *)(v4 + 29576) == -1 )
          *(_QWORD *)(v4 + 29576) = 0LL;
        *(_QWORD *)(v4 + 25416 + 8LL * *(unsigned int *)(v4 + 29580) + 4168) = CDebugFrameCounter::CurrentTime((CDebugFrameCounter *)(v4 + 25416));
        v86 = *(_DWORD *)(v4 + 29580) + 1;
        a2 = v86 / 0x3C;
        v86 %= 0x3Cu;
        this = *(unsigned int *)(v4 + 29576);
        *(_DWORD *)(v4 + 29580) = v86;
        if ( (_DWORD)this == v86 )
        {
          v87 = this + 1;
          a2 = v87 / 0x3C;
          this = v87 % 0x3C;
          *(_DWORD *)(v4 + 29576) = this;
        }
      }
      if ( *(_DWORD *)(v4 + 25396) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_x(this, &EVTDESC_SCHEDULE_GLITCH_RECOVERY_ATTEMPT, *(_QWORD *)(*(_QWORD *)(v4 + 22304) + 88LL));
        v7 = 0;
      }
      else
      {
        *(_DWORD *)(v4 + 25396) = 1;
        v7 = 1;
        v8 = (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) == 0;
        *(_BYTE *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 1;
        if ( !v8 )
          TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_ENTER_PARALLEL_MODE);
      }
    }
  }
  else
  {
    v7 = 1;
    *(_BYTE *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 1;
  }
  *(_BYTE *)(*(_QWORD *)(v4 + 22304) + 1336LL) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    Template_xqqq(this, a2, *(_QWORD *)(v4 + 22304), v7, *(_DWORD *)(v4 + 25392), *(_DWORD *)(v4 + 25396));
  v8 = (Microsoft_Windows_Dwm_CoreEnableBits & 8) == 0;
  v9 = *(_DWORD *)(v4 + 25392);
  *(_DWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v9;
  if ( !v8 )
  {
    TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_PROCESS_FRAME_Start);
    v9 = *(_DWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  }
  if ( !v7 )
    goto LABEL_81;
  v10 = *(_QWORD **)(v4 + 22304);
  v11 = v10[168];
  v12 = v10[169];
  v10[10] = v10[11] + *(unsigned int *)(v4 + 216);
  v13 = *(_QWORD **)(v4 + 22304);
  v14 = *(unsigned int *)(v4 + 216);
  v15 = v13[10];
  if ( v14 != 1 )
    v15 /= v14;
  *v13 = v15;
  *(_QWORD *)(*(_QWORD *)(v4 + 22304) + 1352LL) = *(_QWORD *)(v4 + 232) + *(_QWORD *)(*(_QWORD *)(v4 + 22304) + 240LL);
  v16 = *(_QWORD *)(v4 + 22304);
  v17 = *(_QWORD *)(v16 + 1352) - *(_QWORD *)(v4 + 24);
  v18 = *(_QWORD *)(v4 + 80) * (v17 % 0x989680) / 0x989680 + *(_QWORD *)(v4 + 80) * (v17 / 0x989680);
  *(_QWORD *)(v16 + 1344) = v18;
  *(_QWORD *)(v16 + 1344) = *(_QWORD *)(v4 + 56) + v18;
  v19 = *(_QWORD *)(v4 + 22304);
  if ( *(_DWORD *)(v4 + 25392) )
  {
    *(_QWORD *)(v19 + 1352) += *(_QWORD *)(v4 + 192);
    *(_QWORD *)(*(_QWORD *)(v4 + 22304) + 1344LL) += *(_QWORD *)(v4 + 208);
    *(_BYTE *)(*(_QWORD *)(v4 + 22304) + 1360LL) = 1;
    v19 = *(_QWORD *)(v4 + 22304);
    if ( !*(_BYTE *)(v19 + 648) )
      goto LABEL_14;
    v20 = *(_DWORD *)(v19 + 100) + 2;
    goto LABEL_13;
  }
  if ( *(_BYTE *)(v19 + 648) )
  {
    v20 = *(_DWORD *)(v19 + 100) + 1;
LABEL_13:
    *(_DWORD *)(v19 + 164) = v20;
  }
LABEL_14:
  v21 = *(_QWORD *)(v4 + 22304);
  if ( *(_BYTE *)(v21 + 648) )
  {
    v22 = 1;
    if ( *(_DWORD *)(v21 + 656) > 1u )
    {
      do
      {
        v88 = *(_QWORD *)(v4 + 22304);
        v89 = v22;
        v90 = 32LL * v22;
        *(_DWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = 0;
        v91 = *(_QWORD *)(v88 + 8LL * v22 + 520);
        v92 = *(_DWORD *)(v90 + v88 + 680);
        *(_DWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v92;
        if ( v91 )
        {
          v93 = *(_QWORD *)(v90 + v88 + 688);
          v94 = *(_QWORD *)(v88 + 1344);
          if ( v94 > v93 )
          {
            *(_QWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 8) += (v94 - v93) / v91;
            v92 = *(_DWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
          }
        }
        if ( (v91 + (*(_QWORD *)(v88 + 520) >> 1)) / *(_QWORD *)(v88 + 520) < 2 )
          *(_DWORD *)(v88 + 4LL * v22 + 164) = v92;
        else
          *(_DWORD *)(v88 + 4LL * v22 + 164) = v92 + 1;
        ++v22;
        *(_DWORD *)(*(_QWORD *)(v4 + 22304) + 4 * v89 + 100) = v92 + 1;
      }
      while ( v22 < *(_DWORD *)(*(_QWORD *)(v4 + 22304) + 656LL) );
    }
  }
  v23 = *(_QWORD *)(v4 + 22304);
  *(_DWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = 0;
  v24 = *(_DWORD *)(v23 + 96);
  memset_0((void *)(v2 + 148), 0, 0xFCuLL);
  v26 = 0;
  if ( v24 )
  {
    v25 = v2 + 148;
    v27 = (__int64 *)(v23 + 520);
    v28 = (int *)(v23 + 164);
    do
    {
      if ( v26 >= 0x10 )
        break;
      ++v26;
      *(_DWORD *)(v25 - 4) = *(v28 - 16);
      v29 = *v28++;
      *(_DWORD *)v25 = v29;
      v30 = *v27++;
      *(_QWORD *)(v25 + 4) = v30;
      v25 += 16LL;
    }
    while ( v26 < v24 );
  }
  v31 = Microsoft_Windows_Dwm_CoreEnableBits;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    Template_qNR0(v25, (unsigned int)&EVTDESC_SCHEDULE_FRAME_VSYNCDEADLINES, v24, 16, v2 + 144);
    v31 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  v32 = *(_QWORD *)(*(_QWORD *)(v4 + 22304) + 1344LL);
  v33 = *(_QWORD *)(v4 + 22312);
  v34 = *(_QWORD *)(v33 + 1344);
  if ( v32 < v11 || v32 < v34 )
  {
    if ( v32 >= v11 )
    {
      if ( (v31 & 0x10) == 0 )
        goto LABEL_117;
    }
    else
    {
      if ( (v31 & 0x10) == 0 )
      {
LABEL_117:
        v84 = *(_QWORD *)(*(_QWORD *)(v4 + 22312) + 1344LL);
        if ( v84 <= v11 )
          v84 = v11;
        *(_QWORD *)(*(_QWORD *)(v4 + 22304) + 1344LL) = v84;
        v85 = *(_QWORD *)(*(_QWORD *)(v4 + 22312) + 1352LL);
        if ( v85 <= v12 )
          v85 = v12;
        *(_QWORD *)(*(_QWORD *)(v4 + 22304) + 1352LL) = v85;
        goto LABEL_24;
      }
      v34 = v11;
    }
    Template_x(v33, &EVTDESC_SCHEDULE_TIMEADJUSTED_BETWEENFRAMES, v34 - v32);
    goto LABEL_117;
  }
LABEL_24:
  v35 = v4 + 22336;
  v36 = (_QWORD *)(v4 + 184);
  *(_QWORD *)(v4 + 22384) = *(_QWORD *)(*(_QWORD *)(v4 + 22304) + 248LL);
  *(_QWORD *)(v4 + 22364) = *(_QWORD *)(*(_QWORD *)(v4 + 22304) + 232LL);
  *(_QWORD *)(v4 + 22372) = *(_QWORD *)(*(_QWORD *)(v4 + 22304) + 88LL);
  *(_DWORD *)(v4 + 22400) = *(_DWORD *)(*(_QWORD *)(v4 + 22304) + 16LL);
  *(_DWORD *)(v4 + 22380) = *(_DWORD *)(*(_QWORD *)(v4 + 22304) + 100LL);
  *(_QWORD *)(v4 + 22404) = *(_QWORD *)(*(_QWORD *)(v4 + 22304) + 80LL);
  *(_QWORD *)(v4 + 22392) = **(_QWORD **)(v4 + 22304);
  *(_QWORD *)(v4 + 22340) = *(_QWORD *)(v4 + 184);
  *(_QWORD *)(v4 + 22348) = *(_QWORD *)(v4 + 208);
  *(_QWORD *)(v4 + 22356) = *(_QWORD *)(v4 + 220);
  *(_QWORD *)(v4 + 22448) = *(_QWORD *)(v4 + 25400);
  *(_DWORD *)(v4 + 22456) = *(_DWORD *)(v4 + 25392);
  v37 = *(unsigned int *)(v4 + 22296);
  if ( (_DWORD)v37 != -1 )
  {
    *(_QWORD *)(v4 + 22412) = *(_QWORD *)(1376 * v37 + v4 + 272);
    *(_DWORD *)(v4 + 22420) = *(_DWORD *)(1376LL * *(unsigned int *)(v4 + 22296) + v4 + 288);
  }
  v38 = *(unsigned int *)(v4 + 22300);
  if ( (_DWORD)v38 != -1 )
  {
    *(_QWORD *)(v4 + 22424) = *(_QWORD *)(1376 * v38 + v4 + 272);
    *(_QWORD *)(v4 + 22436) = *(_QWORD *)(1376LL * *(unsigned int *)(v4 + 22300) + v4 + 352);
  }
  *(_DWORD *)(v4 + 22432) = *(_DWORD *)(*(_QWORD *)(v4 + 22304) + 664LL);
  *(_DWORD *)(v4 + 22444) = *(_DWORD *)(*(_QWORD *)(v4 + 22304) + 668LL);
  *(_QWORD *)(v4 + 22636) = *(_QWORD *)(v4 + 22628);
  *(_QWORD *)(v4 + 22628) = *(unsigned int *)(v4 + 22432);
  v39 = *(_QWORD *)(v4 + 22304);
  *(_OWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = 0;
  if ( *(_BYTE *)(v4 + 22656) )
    *(_DWORD *)(v39 + 96) = 0;
  v40 = *(_QWORD *)(v4 + 176);
  *(_QWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v39;
  *(_DWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = *(_DWORD *)(v4 + 216);
  *(_BYTE *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C) = *(_BYTE *)(v4 + 22656);
  *(_BYTE *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3D) = *(_BYTE *)(v4 + 22658);
  *(_QWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v36;
  *(_QWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v35;
  *(_BYTE *)(v4 + 22658) = 0;
  v41 = *(CRenderTargetManager **)(v40 + 32);
  *(_BYTE *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 2) = 0;
  *(_BYTE *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 3) = 0;
  OutOfFrameDirectFlipInfo = CRenderTargetManager::FindOutOfFrameDirectFlipInfo(v41);
  if ( OutOfFrameDirectFlipInfo && *((int *)OutOfFrameDirectFlipInfo + 14) >= 4 )
  {
    v77 = *(_QWORD *)(v4 + 22304);
    *(_BYTE *)v2 = 0;
    if ( (int)CComposition::ProcessOutOfFrameDirectFlipLight(
                *(CComposition **)(v4 + 176),
                *(_DWORD *)(v77 + 100),
                (bool *)(v2 + 3),
                (bool *)((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL),
                (struct COutOfFrameDirectFlipStats *)(v77 + 1312)) < 0 )
    {
      *(_BYTE *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 2) = 0;
    }
    else
    {
      v53 = *(_BYTE *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 3);
      *(_BYTE *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 2) = v53;
      if ( v53 )
      {
        if ( *(_BYTE *)v2 )
          *(_BYTE *)(*(_QWORD *)(v4 + 22304) + 272LL) = 1;
        goto LABEL_54;
      }
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v43, &EVTDESC_SCHEDULE_RENDER_Start);
  v44 = *(_QWORD *)(v4 + 176);
  v45 = *(_QWORD *)(v4 + 22304);
  *(_BYTE *)v2 = 0;
  *(_QWORD *)(v44 + 344) = v2 + 32;
  *(_DWORD *)(v44 + 1008) = 0;
  if ( *(_DWORD *)(v44 + 336) == 1 )
    *(_BYTE *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C) = 1;
  v46 = CComposition::ProcessComposition((CComposition *)v44, (bool *)((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL));
  *(_DWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v46;
  v5 = v46;
  if ( v46 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v46, 0x5D4u);
  }
  else
  {
    if ( CDebugVisualRenderer::s_fEnableDebug )
    {
      CDebugVisualRenderer::s_fEnableDebug = 0;
      if ( !CDebugVisualRenderer::s_pVisual )
      {
        PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef((CComposition *)v44);
        if ( PrimaryDesktopRenderTargetNoRef )
          v96 = (char *)PrimaryDesktopRenderTargetNoRef - 80;
        else
          v96 = 0LL;
        CDebugVisualRenderer::s_pVisual = *(CVisual **)(*((_QWORD *)v96 + 7) + 24LL);
      }
      CDebugVisualRenderer::RenderVisual((struct CComposition *)v44, v47);
    }
    *(_BYTE *)(v45 + 272) = *(_BYTE *)v2;
  }
  *(_QWORD *)(v44 + 344) = 0LL;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x4E4u);
  }
  else if ( v5 != 142213121 )
  {
    v5 = 0;
    *(_DWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
  }
  *(_BYTE *)(v4 + 22656) |= *(_BYTE *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C);
  if ( v5 == 142213121 )
  {
    v8 = (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0;
    v5 = 0;
    *(_DWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
    if ( !v8 )
      TemplateEventDescriptor(v48, &EVTDESC_SCHEDULE_DXGI_STATUS_OCCLUDED);
  }
  if ( *(_BYTE *)(v4 + 22656) )
  {
    LOBYTE(v48) = *(_DWORD *)(*(_QWORD *)(v4 + 176) + 336LL) == 0;
    *(_BYTE *)(v4 + 22657) = v48;
  }
  if ( v5 >= 0 )
  {
    v49 = *(_QWORD *)(v4 + 22304);
    if ( !*(_BYTE *)(v49 + 272) || *(_BYTE *)(v49 + 273) )
    {
      v50 = *(_QWORD *)(v4 + 176);
      if ( !*(_QWORD *)(*(_QWORD *)(v50 + 40) + 376LL) )
      {
        if ( *(_DWORD *)(v50 + 400) )
        {
          v79 = 0LL;
          v80 = *(unsigned int *)(v50 + 400);
          do
          {
            v81 = *(_QWORD *)(v50 + 376);
            *(_DWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = 1;
            *(_QWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x6C) = 0LL;
            *(_QWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x74) = 0LL;
            v82 = *(CChannelContext **)(v79 + v81);
            *(_QWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x7C) = 0LL;
            *(_QWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v82;
            v83 = CChannelContext::PostMessageToChannel(v82, (const struct MIL_MESSAGE *)(v2 + 104));
            if ( v83 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v83, 0x61u);
            CMILRefCountBase::Release(*(CMILRefCountBase **)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60));
            v79 += 8LL;
            --v80;
          }
          while ( v80 );
          v35 = v4 + 22336;
          v6 = 1;
        }
        *(_DWORD *)(v50 + 400) = 0;
        DynArrayImpl<1>::ShrinkToSize();
      }
    }
    v51 = *(_QWORD *)(v4 + 22304);
    v52 = *(_BYTE *)(v51 + 272) && !*(_BYTE *)(v51 + 273);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_q(v48, &EVTDESC_SCHEDULE_RENDER_Stop, v52);
    v53 = *(_BYTE *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 2);
    v36 = (_QWORD *)(v4 + 184);
LABEL_54:
    v54 = 0;
    SetLastError(0);
    if ( QueryPerformanceCounter((LARGE_INTEGER *)(v2 + 8)) )
    {
      v55 = *(_QWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      v56 = *(_QWORD *)(v4 + 64);
      if ( v55 >= v56 )
      {
        *(_QWORD *)(v4 + 72) = v56;
        *(_QWORD *)(v4 + 64) = v55;
LABEL_57:
        v57 = *(_QWORD *)(v4 + 24);
        v58 = *(_QWORD *)(v4 + 64) - *(_QWORD *)(v4 + 56);
        v59 = v57
            + 10000000 * (v58 % *(_QWORD *)(v4 + 80)) / *(_QWORD *)(v4 + 80)
            + 10000000 * (v58 / *(_QWORD *)(v4 + 80));
        if ( v54 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &dword_180178D28, 1u, v54, 0x89u);
        }
        else
        {
          *(_QWORD *)(v4 + 32) = v59;
          v60 = v59 - v57;
          *(_QWORD *)(v4 + 40) = v60;
        }
        *(_DWORD *)(v4 + 25128) = v54;
        if ( v54 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v54, 0x48Bu);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_xxxxx(
            v60,
            (unsigned int)&EVTDESC_SCHEDULE_TIME,
            *(_QWORD *)(v4 + 32),
            *(_QWORD *)(v4 + 40),
            *(_QWORD *)(v4 + 64),
            *(_QWORD *)(v4 + 72),
            *(_QWORD *)(v4 + 48));
        *(_QWORD *)(*(_QWORD *)(v4 + 22304) + 264LL) = *(_QWORD *)(v4 + 32);
        v61 = *(_QWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
        v62 = *(_QWORD *)(v4 + 22304) + 1216LL;
        *(_QWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_QWORD *)v62;
        v63 = *(_DWORD *)(v62 + 20);
        *(_QWORD *)v62 = v61;
        LODWORD(v61) = *(_DWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54);
        *(_DWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54) = v63;
        v64 = *(_DWORD *)(v62 + 24);
        *(_DWORD *)(v62 + 20) = v61;
        LODWORD(v61) = *(_DWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
        *(_DWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v64;
        *(_DWORD *)(v62 + 24) = v61;
        v65 = CPartitionVerticalBlankScheduler::PresentFrame(
                (CPartitionVerticalBlankScheduler *)v4,
                *(struct CFrameInfo **)(v4 + 22304),
                *(_DWORD *)(v4 + 22288),
                v53,
                *(int *)(v4 + 25128) < 0);
        *(_DWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v65;
        v5 = v65;
        if ( v65 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v65, 0x49Bu);
        goto LABEL_65;
      }
      ++*(_DWORD *)(v4 + 88);
      v54 = -2003304293;
      MilInstrumentationCheckHR(0x14u, &dword_180178D28, 1u, -2003304293, 0xB0u);
    }
    else
    {
      LastError = GetLastError();
      v54 = LastError;
      if ( LastError > 0 )
        v54 = (unsigned __int16)LastError | 0x80070000;
      if ( v54 >= 0 )
        v54 = -2003304445;
      MilInstrumentationCheckHR(0x14u, &dword_180178D28, 1u, v54, 0xA6u);
    }
    MilInstrumentationCheckHR(0x14u, &dword_180178D28, 1u, v54, 0x59u);
    goto LABEL_57;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x47Bu);
  v36 = (_QWORD *)(v4 + 184);
LABEL_65:
  v66 = *(void **)(*(_QWORD *)(v4 + 144) + 192LL);
  if ( v66 )
    PulseEvent(v66);
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x4A5u);
    FRAME_TIME_INFO::~FRAME_TIME_INFO((FRAME_TIME_INFO *)(v2 + 32));
    v9 = *(_DWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    v75 = 0LL;
    goto LABEL_85;
  }
  v67 = *(_QWORD *)(v4 + 22304);
  if ( *(_BYTE *)(v67 + 272) && !*(_BYTE *)(v67 + 273) )
    SetEvent(*(HANDLE *)(v4 + 96));
  *(_QWORD *)(v35 + 48) = *(_QWORD *)(*(_QWORD *)(v4 + 22304) + 248LL);
  *(_QWORD *)(v35 + 28) = *(_QWORD *)(*(_QWORD *)(v4 + 22304) + 232LL);
  *(_QWORD *)(v35 + 36) = *(_QWORD *)(*(_QWORD *)(v4 + 22304) + 88LL);
  *(_DWORD *)(v35 + 64) = *(_DWORD *)(*(_QWORD *)(v4 + 22304) + 16LL);
  *(_DWORD *)(v35 + 44) = *(_DWORD *)(*(_QWORD *)(v4 + 22304) + 100LL);
  *(_QWORD *)(v35 + 68) = *(_QWORD *)(*(_QWORD *)(v4 + 22304) + 80LL);
  *(_QWORD *)(v35 + 56) = **(_QWORD **)(v4 + 22304);
  *(_QWORD *)(v35 + 4) = *v36;
  *(_QWORD *)(v35 + 12) = *(_QWORD *)(v4 + 208);
  *(_QWORD *)(v35 + 20) = *(_QWORD *)(v4 + 220);
  *(_QWORD *)(v35 + 112) = *(_QWORD *)(v4 + 25400);
  *(_DWORD *)(v35 + 120) = *(_DWORD *)(v4 + 25392);
  v68 = *(unsigned int *)(v4 + 22296);
  if ( (_DWORD)v68 != -1 )
  {
    *(_QWORD *)(v35 + 76) = *(_QWORD *)(1376 * v68 + v4 + 272);
    *(_DWORD *)(v35 + 84) = *(_DWORD *)(1376LL * *(unsigned int *)(v4 + 22296) + v4 + 288);
  }
  v69 = *(unsigned int *)(v4 + 22300);
  if ( (_DWORD)v69 != -1 )
  {
    *(_QWORD *)(v35 + 88) = *(_QWORD *)(1376 * v69 + v4 + 272);
    *(_QWORD *)(v35 + 100) = *(_QWORD *)(1376LL * *(unsigned int *)(v4 + 22300) + v4 + 352);
  }
  *(_DWORD *)(v35 + 96) = *(_DWORD *)(*(_QWORD *)(v4 + 22304) + 664LL);
  *(_DWORD *)(v35 + 108) = *(_DWORD *)(*(_QWORD *)(v4 + 22304) + 668LL);
  *(_QWORD *)(v4 + 22636) = *(_QWORD *)(v4 + 22628);
  *(_QWORD *)(v4 + 22628) = *(unsigned int *)(v35 + 96);
  v70 = *(_QWORD *)(*(_QWORD *)(v4 + 22312) + 240LL);
  if ( v70 )
  {
    v71 = *(_QWORD *)(*(_QWORD *)(v4 + 22304) + 240LL) - v70;
  }
  else
  {
    v98 = *(_QWORD *)(v4 + 208) - *(_QWORD *)(v4 + 56);
    v71 = *(_QWORD *)(v4 + 24)
        + 10000000 * (v98 / *(_QWORD *)(v4 + 80))
        + 10000000 * (v98 % *(_QWORD *)(v4 + 80)) / *(_QWORD *)(v4 + 80);
  }
  v8 = (Microsoft_Windows_Dwm_CoreEnableBits & 1) == 0;
  v72 = *(_QWORD *)(v4 + 22304);
  *(_QWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v71;
  if ( !v8 )
  {
    v99 = *(_QWORD *)(v4 + 22304);
    Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx(
      *(_DWORD *)(v72 + 264) - *(_QWORD *)(v72 + 256),
      v99,
      *(_DWORD *)(v4 + 22288),
      *(_QWORD *)v99,
      *(_DWORD *)(v99 + 16),
      *(_QWORD *)(v99 + 1352),
      *(_QWORD *)(v99 + 1344),
      *(_DWORD *)(v99 + 164));
    v5 = *(_DWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v6 = 1;
  }
  v73 = 0;
  if ( *(_DWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) )
  {
    do
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) + 8LL * v73++));
    while ( v73 < *(_DWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) );
    v5 = *(_DWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  }
  *(_DWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)(v2 + 64), 8u);
  if ( *(_QWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) != *(_QWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x48) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *(_QWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40));
    v5 = *(_DWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  }
  v9 = *(_DWORD *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  v7 = *(_BYTE *)(((unsigned __int64)&v100 & 0xFFFFFFFFFFFFFFC0uLL) + 1);
LABEL_81:
  v74 = *(_QWORD *)(v4 + 22312);
  v75 = v7;
  if ( !*(_BYTE *)(v74 + 272) || *(_BYTE *)(v74 + 273) )
    v6 = 0;
  v3 = v6;
LABEL_85:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qqqq(v75, (unsigned int)&EVTDESC_SCHEDULE_PROCESS_FRAME, v75, v3, v9, *(_DWORD *)(v4 + 25396));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
    TemplateEventDescriptor(v75, &EVTDESC_SCHEDULE_PROCESS_FRAME_Stop);
  return (unsigned int)v5;
}
