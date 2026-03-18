/*
 * XREFs of ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x180066480
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x1800945D0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     ?ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x180005C34 (-ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?FindOutOfFrameDirectFlipInfo@CRenderTargetManager@@QEAAPEAVCOutOfFrameDirectFlipInfo@@XZ @ 0x180049D04 (-FindOutOfFrameDirectFlipInfo@CRenderTargetManager@@QEAAPEAVCOutOfFrameDirectFlipInfo@@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800519D4 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x180062E60 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?UpdateDwmTimingInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180065D00 (-UpdateDwmTimingInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z @ 0x180067390 (-PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z.c)
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x180067F00 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800694E0 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ??1FRAME_TIME_INFO@@QEAA@XZ @ 0x1800DF37C (--1FRAME_TIME_INFO@@QEAA@XZ.c)
 *     TemplateEventDescriptor @ 0x1800E1E38 (TemplateEventDescriptor.c)
 *     Template_qNR0 @ 0x1800E1ED4 (Template_qNR0.c)
 *     Template_qqqq @ 0x1800E1FC0 (Template_qqqq.c)
 *     Template_xqqq @ 0x1800E2040 (Template_xqqq.c)
 *     Template_xxxxx @ 0x1800E22AC (Template_xxxxx.c)
 *     Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx @ 0x1800E41BC (Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx.c)
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x1800E78A0 (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x1800EF214 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     Template_q @ 0x1800F7910 (Template_q.c)
 *     Template_x @ 0x18010D3A4 (Template_x.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::ProcessFrame(unsigned __int64 this, unsigned int a2)
{
  unsigned __int64 v2; // rbp
  int v3; // r15d
  unsigned __int64 v4; // rbx
  int v5; // edi
  unsigned __int8 v6; // r13
  unsigned __int8 v7; // si
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
  __int64 v35; // rax
  __int64 v36; // rcx
  CRenderTargetManager *v37; // rcx
  struct COutOfFrameDirectFlipInfo *OutOfFrameDirectFlipInfo; // rax
  __int64 v39; // rcx
  __int64 v40; // rsi
  __int64 v41; // r14
  int v42; // eax
  struct CVisual *v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  bool v47; // al
  unsigned __int8 v48; // si
  signed int v49; // edi
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // r8
  unsigned __int64 v53; // r9
  unsigned __int64 v54; // r11
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rdx
  int v60; // eax
  int v61; // eax
  int v62; // eax
  void *v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rdx
  unsigned __int64 v66; // rax
  __int64 v67; // rcx
  unsigned int v68; // r12d
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v72; // rsi
  __int64 v73; // rax
  __int64 v74; // rcx
  unsigned __int64 v75; // rcx
  unsigned __int64 v76; // rcx
  __int64 v77; // r14
  __int64 v78; // r12
  __int64 v79; // rax
  CChannelContext *v80; // r13
  int v81; // eax
  unsigned int v82; // r8d
  unsigned int v83; // ecx
  __int64 v84; // r9
  __int64 v85; // r10
  __int64 v86; // rax
  unsigned __int64 v87; // r11
  int v88; // ecx
  unsigned __int64 v89; // rdx
  unsigned __int64 v90; // rax
  int v91; // ecx
  struct IRenderTargetDesktop *PrimaryDesktopRenderTargetNoRef; // rax
  char *v93; // rax
  signed int LastError; // eax
  unsigned __int64 v95; // rtt
  __int64 v96; // rdx
  bool v97; // [rsp+150h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL;
  v3 = 0;
  v4 = this;
  v5 = 0;
  v6 = 1;
  if ( *(_DWORD *)(this + 25264) > *(_DWORD *)(this + 25268) )
  {
    v73 = *(_QWORD *)(this + 22296);
    v7 = 0;
    *(_BYTE *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 0;
    if ( !*(_BYTE *)(v73 + 1336) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80u) != 0 )
        TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_GLITCH_DETECTED);
      if ( *(_BYTE *)(v4 + 25312) )
      {
        if ( *(_DWORD *)(v4 + 29448) == -1 )
          *(_QWORD *)(v4 + 29448) = 0LL;
        *(_QWORD *)(v4 + 25288 + 8LL * *(unsigned int *)(v4 + 29452) + 4168) = CDebugFrameCounter::CurrentTime((CDebugFrameCounter *)(v4 + 25288));
        v82 = *(_DWORD *)(v4 + 29452) + 1;
        a2 = v82 / 0x3C;
        v82 %= 0x3Cu;
        this = *(unsigned int *)(v4 + 29448);
        *(_DWORD *)(v4 + 29452) = v82;
        if ( (_DWORD)this == v82 )
        {
          v83 = this + 1;
          a2 = v83 / 0x3C;
          this = v83 % 0x3C;
          *(_DWORD *)(v4 + 29448) = this;
        }
      }
      if ( *(_DWORD *)(v4 + 25268) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_x(this, &EVTDESC_SCHEDULE_GLITCH_RECOVERY_ATTEMPT, *(_QWORD *)(*(_QWORD *)(v4 + 22296) + 88LL));
        v7 = 0;
      }
      else
      {
        *(_DWORD *)(v4 + 25268) = 1;
        v7 = 1;
        v8 = (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) == 0;
        *(_BYTE *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 1;
        if ( !v8 )
          TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_ENTER_PARALLEL_MODE);
      }
    }
  }
  else
  {
    v7 = 1;
    *(_BYTE *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 1;
  }
  *(_BYTE *)(*(_QWORD *)(v4 + 22296) + 1336LL) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    Template_xqqq(this, a2, *(_QWORD *)(v4 + 22296), v7, *(_DWORD *)(v4 + 25264), *(_DWORD *)(v4 + 25268));
  v8 = (Microsoft_Windows_Dwm_CoreEnableBits & 8) == 0;
  v9 = *(_DWORD *)(v4 + 25264);
  *(_DWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v9;
  if ( !v8 )
  {
    TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_PROCESS_FRAME_Start);
    v9 = *(_DWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  }
  if ( !v7 )
    goto LABEL_79;
  v10 = *(_QWORD **)(v4 + 22296);
  v11 = v10[168];
  v12 = v10[169];
  v10[10] = v10[11] + *(unsigned int *)(v4 + 208);
  v13 = *(_QWORD **)(v4 + 22296);
  v14 = *(unsigned int *)(v4 + 208);
  v15 = v13[10];
  if ( v14 != 1 )
    v15 /= v14;
  *v13 = v15;
  *(_QWORD *)(*(_QWORD *)(v4 + 22296) + 1352LL) = *(_QWORD *)(v4 + 224) + *(_QWORD *)(*(_QWORD *)(v4 + 22296) + 240LL);
  v16 = *(_QWORD *)(v4 + 22296);
  v17 = *(_QWORD *)(v16 + 1352) - *(_QWORD *)(v4 + 16);
  v18 = *(_QWORD *)(v4 + 72) * (v17 % 0x989680) / 0x989680 + *(_QWORD *)(v4 + 72) * (v17 / 0x989680);
  *(_QWORD *)(v16 + 1344) = v18;
  *(_QWORD *)(v16 + 1344) = *(_QWORD *)(v4 + 48) + v18;
  v19 = *(_QWORD *)(v4 + 22296);
  if ( *(_DWORD *)(v4 + 25264) )
  {
    *(_QWORD *)(v19 + 1352) += *(_QWORD *)(v4 + 184);
    *(_QWORD *)(*(_QWORD *)(v4 + 22296) + 1344LL) += *(_QWORD *)(v4 + 200);
    *(_BYTE *)(*(_QWORD *)(v4 + 22296) + 1360LL) = 1;
    v19 = *(_QWORD *)(v4 + 22296);
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
  v21 = *(_QWORD *)(v4 + 22296);
  if ( *(_BYTE *)(v21 + 648) )
  {
    v22 = 1;
    if ( *(_DWORD *)(v21 + 656) > 1u )
    {
      do
      {
        v84 = *(_QWORD *)(v4 + 22296);
        v85 = v22;
        v86 = 32LL * v22;
        *(_DWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = 0;
        v87 = *(_QWORD *)(v84 + 8LL * v22 + 520);
        v88 = *(_DWORD *)(v86 + v84 + 680);
        *(_DWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v88;
        if ( v87 )
        {
          v89 = *(_QWORD *)(v86 + v84 + 688);
          v90 = *(_QWORD *)(v84 + 1344);
          if ( v90 > v89 )
          {
            *(_QWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 8) += (v90 - v89) / v87;
            v88 = *(_DWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
          }
        }
        v91 = v88 + 1;
        ++v22;
        *(_DWORD *)(v84 + 4 * v85 + 164) = v91;
        *(_DWORD *)(*(_QWORD *)(v4 + 22296) + 4 * v85 + 100) = v91;
      }
      while ( v22 < *(_DWORD *)(*(_QWORD *)(v4 + 22296) + 656LL) );
    }
  }
  v23 = *(_QWORD *)(v4 + 22296);
  *(_DWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = 0;
  v24 = *(_DWORD *)(v23 + 96);
  memset_0((void *)(v2 + 132), 0, 0xFCuLL);
  v26 = 0;
  if ( v24 )
  {
    v25 = v2 + 132;
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
    Template_qNR0(v25, (unsigned int)&EVTDESC_SCHEDULE_FRAME_VSYNCDEADLINES, v24, 16, v2 + 128);
    v31 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  v32 = *(_QWORD *)(*(_QWORD *)(v4 + 22296) + 1344LL);
  v33 = *(_QWORD *)(v4 + 22304);
  v34 = *(_QWORD *)(v33 + 1344);
  if ( v32 < v11 || v32 < v34 )
  {
    if ( v32 >= v11 )
    {
      if ( (v31 & 0x10) == 0 )
        goto LABEL_111;
    }
    else
    {
      if ( (v31 & 0x10) == 0 )
      {
LABEL_111:
        v75 = *(_QWORD *)(*(_QWORD *)(v4 + 22304) + 1344LL);
        if ( v75 <= v11 )
          v75 = v11;
        *(_QWORD *)(*(_QWORD *)(v4 + 22296) + 1344LL) = v75;
        v76 = *(_QWORD *)(*(_QWORD *)(v4 + 22304) + 1352LL);
        if ( v76 <= v12 )
          v76 = v12;
        *(_QWORD *)(*(_QWORD *)(v4 + 22296) + 1352LL) = v76;
        goto LABEL_24;
      }
      v34 = v11;
    }
    Template_x(v33, &EVTDESC_SCHEDULE_TIMEADJUSTED_BETWEENFRAMES, v34 - v32);
    goto LABEL_111;
  }
LABEL_24:
  CPartitionVerticalBlankScheduler::UpdateDwmTimingInfo((CPartitionVerticalBlankScheduler *)v4);
  v35 = *(_QWORD *)(v4 + 22296);
  *(_OWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = 0;
  if ( *(_BYTE *)(v4 + 22648) )
    *(_DWORD *)(v35 + 96) = 0;
  v36 = *(_QWORD *)(v4 + 168);
  *(_QWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v35;
  *(_QWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v4 + 176;
  *(_DWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = *(_DWORD *)(v4 + 208);
  *(_QWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v4 + 22328;
  *(_BYTE *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C) = *(_BYTE *)(v4 + 22648);
  *(_BYTE *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3D) = *(_BYTE *)(v4 + 22650);
  *(_BYTE *)(v4 + 22650) = 0;
  v37 = *(CRenderTargetManager **)(v36 + 32);
  *(_BYTE *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 2) = 0;
  *(_BYTE *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 3) = 0;
  OutOfFrameDirectFlipInfo = CRenderTargetManager::FindOutOfFrameDirectFlipInfo(v37);
  if ( OutOfFrameDirectFlipInfo && *((int *)OutOfFrameDirectFlipInfo + 14) >= 4 )
  {
    v74 = *(_QWORD *)(v4 + 22296);
    *(_BYTE *)v2 = 0;
    if ( (int)CComposition::ProcessOutOfFrameDirectFlipLight(
                *(CComposition **)(v4 + 168),
                *(_DWORD *)(v74 + 100),
                (bool *)(v2 + 3),
                (bool *)((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL),
                (struct COutOfFrameDirectFlipStats *)(v74 + 1312)) < 0 )
    {
      *(_BYTE *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 2) = 0;
    }
    else
    {
      v48 = *(_BYTE *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 3);
      *(_BYTE *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 2) = v48;
      if ( (v48 & *(_BYTE *)v2) != 0 )
        *(_BYTE *)(*(_QWORD *)(v4 + 22296) + 272LL) = 1;
      if ( v48 )
      {
LABEL_50:
        v49 = 0;
        SetLastError(0);
        if ( QueryPerformanceCounter((LARGE_INTEGER *)(v2 + 8)) )
        {
          v50 = *(_QWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
          v51 = *(_QWORD *)(v4 + 56);
          if ( v50 >= v51 )
          {
            *(_QWORD *)(v4 + 64) = v51;
            *(_QWORD *)(v4 + 56) = v50;
LABEL_53:
            v52 = *(_QWORD *)(v4 + 56) - *(_QWORD *)(v4 + 48);
            v53 = *(_QWORD *)(v4 + 72);
            if ( v53 == 3312659 )
              v54 = v52 / 0x328C13;
            else
              v54 = v52 / v53;
            v55 = 10000000 * (v52 - v53 * v54);
            if ( v53 == 3312659 )
              v56 = v55 / 0x328C13;
            else
              v56 = v55 / v53;
            if ( v49 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, &dword_18016A93C, 1u, v49, 0x89u);
            }
            else
            {
              *(_QWORD *)(v4 + 24) = *(_QWORD *)(v4 + 16) + v56 + 10000000 * v54;
              v57 = v56 + 10000000 * v54;
              *(_QWORD *)(v4 + 32) = v57;
            }
            *(_DWORD *)(v4 + 25000) = v49;
            if ( v49 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0x48Bu);
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
              Template_xxxxx(
                v57,
                (unsigned int)&EVTDESC_SCHEDULE_TIME,
                *(_QWORD *)(v4 + 24),
                *(_QWORD *)(v4 + 32),
                *(_QWORD *)(v4 + 56),
                *(_QWORD *)(v4 + 64),
                *(_QWORD *)(v4 + 40));
            *(_QWORD *)(*(_QWORD *)(v4 + 22296) + 264LL) = *(_QWORD *)(v4 + 24);
            v58 = *(_QWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
            v59 = *(_QWORD *)(v4 + 22296) + 1216LL;
            *(_QWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_QWORD *)v59;
            v60 = *(_DWORD *)(v59 + 20);
            *(_QWORD *)v59 = v58;
            LODWORD(v58) = *(_DWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54);
            *(_DWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54) = v60;
            v61 = *(_DWORD *)(v59 + 24);
            *(_DWORD *)(v59 + 20) = v58;
            LODWORD(v58) = *(_DWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
            *(_DWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v61;
            *(_DWORD *)(v59 + 24) = v58;
            v62 = CPartitionVerticalBlankScheduler::PresentFrame(
                    (CPartitionVerticalBlankScheduler *)v4,
                    *(struct CFrameInfo **)(v4 + 22296),
                    *(_DWORD *)(v4 + 22280),
                    v48,
                    *(int *)(v4 + 25000) < 0);
            *(_DWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v62;
            v5 = v62;
            if ( v62 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v62, 0x49Bu);
            goto LABEL_65;
          }
          ++*(_DWORD *)(v4 + 80);
          v49 = -2003304293;
          MilInstrumentationCheckHR(0x14u, &dword_18016A93C, 1u, -2003304293, 0xB0u);
        }
        else
        {
          LastError = GetLastError();
          v49 = LastError;
          if ( LastError > 0 )
            v49 = (unsigned __int16)LastError | 0x80070000;
          if ( v49 >= 0 )
            v49 = -2003304445;
          MilInstrumentationCheckHR(0x14u, &dword_18016A93C, 1u, v49, 0xA6u);
        }
        MilInstrumentationCheckHR(0x14u, &dword_18016A93C, 1u, v49, 0x59u);
        goto LABEL_53;
      }
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v39, &EVTDESC_SCHEDULE_RENDER_Start);
  v40 = *(_QWORD *)(v4 + 168);
  v41 = *(_QWORD *)(v4 + 22296);
  *(_BYTE *)v2 = 0;
  *(_QWORD *)(v40 + 344) = v2 + 32;
  *(_DWORD *)(v40 + 1040) = 0;
  if ( *(_DWORD *)(v40 + 336) == 1 )
    *(_BYTE *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C) = 1;
  v42 = CComposition::ProcessComposition((CComposition *)v40, (bool *)((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL));
  *(_DWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v42;
  v5 = v42;
  if ( v42 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v42, 0x5CBu);
  }
  else
  {
    if ( CDebugVisualRenderer::s_fEnableDebug )
    {
      CDebugVisualRenderer::s_fEnableDebug = 0;
      if ( !CDebugVisualRenderer::s_pVisual )
      {
        PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef((CComposition *)v40);
        if ( PrimaryDesktopRenderTargetNoRef )
          v93 = (char *)PrimaryDesktopRenderTargetNoRef - 80;
        else
          v93 = 0LL;
        CDebugVisualRenderer::s_pVisual = *(CVisual **)(*((_QWORD *)v93 + 7) + 24LL);
      }
      CDebugVisualRenderer::RenderVisual((struct CComposition *)v40, v43);
    }
    *(_BYTE *)(v41 + 272) = *(_BYTE *)v2;
  }
  *(_QWORD *)(v40 + 344) = 0LL;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x4E4u);
  }
  else if ( v5 != 142213121 )
  {
    v5 = 0;
    *(_DWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
  }
  *(_BYTE *)(v4 + 22648) |= *(_BYTE *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C);
  if ( v5 == 142213121 )
  {
    v8 = (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0;
    v5 = 0;
    *(_DWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
    if ( !v8 )
      TemplateEventDescriptor(v44, &EVTDESC_SCHEDULE_DXGI_STATUS_OCCLUDED);
  }
  if ( *(_BYTE *)(v4 + 22648) )
  {
    LOBYTE(v44) = *(_DWORD *)(*(_QWORD *)(v4 + 168) + 336LL) == 0;
    *(_BYTE *)(v4 + 22649) = v44;
  }
  if ( v5 >= 0 )
  {
    v45 = *(_QWORD *)(v4 + 22296);
    if ( !*(_BYTE *)(v45 + 272) || *(_BYTE *)(v45 + 273) )
    {
      v72 = *(_QWORD *)(v4 + 168);
      if ( !*(_QWORD *)(*(_QWORD *)(v72 + 40) + 376LL) )
      {
        if ( *(_DWORD *)(v72 + 400) )
        {
          v77 = 0LL;
          v78 = *(unsigned int *)(v72 + 400);
          do
          {
            v79 = *(_QWORD *)(v72 + 376);
            *(_DWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 1;
            v80 = *(CChannelContext **)(v77 + v79);
            *(_QWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x64) = 0LL;
            *(_QWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x6C) = 0LL;
            *(_QWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x74) = 0LL;
            v81 = CChannelContext::PostMessageToChannel(v80, (const struct MIL_MESSAGE *)(v2 + 96));
            if ( v81 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v81, 0x61u);
            CMILRefCountBase::Release(v80);
            v77 += 8LL;
            --v78;
          }
          while ( v78 );
          v5 = *(_DWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
          v6 = 1;
        }
        *(_DWORD *)(v72 + 400) = 0;
        DynArrayImpl<1>::ShrinkToSize((__int64 *)(v72 + 376));
      }
    }
    v46 = *(_QWORD *)(v4 + 22296);
    v47 = *(_BYTE *)(v46 + 272) && !*(_BYTE *)(v46 + 273);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_q(v44, &EVTDESC_SCHEDULE_RENDER_Stop, v47);
    if ( v5 >= 0 )
    {
      v48 = *(_BYTE *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 2);
      goto LABEL_50;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x47Bu);
LABEL_65:
  v63 = *(void **)(*(_QWORD *)(v4 + 136) + 192LL);
  if ( v63 )
    PulseEvent(v63);
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x4A5u);
    FRAME_TIME_INFO::~FRAME_TIME_INFO((FRAME_TIME_INFO *)(v2 + 32));
    v9 = *(_DWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    v70 = 0LL;
    goto LABEL_83;
  }
  v64 = *(_QWORD *)(v4 + 22296);
  if ( *(_BYTE *)(v64 + 272) && !*(_BYTE *)(v64 + 273) )
    SetEvent(*(HANDLE *)(v4 + 88));
  CPartitionVerticalBlankScheduler::UpdateDwmTimingInfo((CPartitionVerticalBlankScheduler *)v4);
  v65 = *(_QWORD *)(*(_QWORD *)(v4 + 22304) + 240LL);
  if ( v65 )
  {
    v66 = *(_QWORD *)(*(_QWORD *)(v4 + 22296) + 240LL) - v65;
  }
  else
  {
    v95 = *(_QWORD *)(v4 + 200) - *(_QWORD *)(v4 + 48);
    v66 = *(_QWORD *)(v4 + 16)
        + 10000000 * (v95 / *(_QWORD *)(v4 + 72))
        + 10000000 * (v95 % *(_QWORD *)(v4 + 72)) / *(_QWORD *)(v4 + 72);
  }
  v8 = (Microsoft_Windows_Dwm_CoreEnableBits & 1) == 0;
  v67 = *(_QWORD *)(v4 + 22296);
  *(_QWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v66;
  if ( !v8 )
  {
    v96 = *(_QWORD *)(v4 + 22296);
    Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx(
      *(_QWORD *)(v67 + 264) - *(_QWORD *)(v67 + 256),
      v96,
      *(_DWORD *)(v4 + 22280),
      *(_QWORD *)v96,
      *(_DWORD *)(v96 + 16),
      *(_QWORD *)(v96 + 1352),
      *(_QWORD *)(v96 + 1344),
      *(_DWORD *)(v96 + 164));
    v5 = *(_DWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v6 = 1;
  }
  v68 = 0;
  if ( *(_DWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) )
  {
    do
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) + 8LL * v68++));
    while ( v68 < *(_DWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) );
    v5 = *(_DWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  }
  *(_DWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)(v2 + 64), 8u);
  if ( *(_QWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) != *(_QWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0x48) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *(_QWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40));
    v5 = *(_DWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  }
  v9 = *(_DWORD *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  v7 = *(_BYTE *)(((unsigned __int64)&v97 & 0xFFFFFFFFFFFFFFC0uLL) + 1);
LABEL_79:
  v69 = *(_QWORD *)(v4 + 22304);
  v70 = v7;
  if ( !*(_BYTE *)(v69 + 272) || *(_BYTE *)(v69 + 273) )
    v6 = 0;
  v3 = v6;
LABEL_83:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qqqq(v70, (unsigned int)&EVTDESC_SCHEDULE_PROCESS_FRAME, v70, v3, v9, *(_DWORD *)(v4 + 25268));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
    TemplateEventDescriptor(v70, &EVTDESC_SCHEDULE_PROCESS_FRAME_Stop);
  return (unsigned int)v5;
}
