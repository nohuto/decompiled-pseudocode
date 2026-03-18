/*
 * XREFs of ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0086EC0
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C00881A0 (-DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C012AD88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkRender @ 0x1C014F530 (DxgkRender.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0003424 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?DisableDdiRenderAllocationList@DXGCONTEXT@@QEAAEXZ @ 0x1C000354C (-DisableDdiRenderAllocationList@DXGCONTEXT@@QEAAEXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 *     DxgkSqmCreateDwordStreamEntry @ 0x1C0010120 (DxgkSqmCreateDwordStreamEntry.c)
 *     Template_p @ 0x1C0010C14 (Template_p.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     TraceDxgkPatchLocationList @ 0x1C001E100 (TraceDxgkPatchLocationList.c)
 *     ?VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C001EFB4 (-VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     Template_ppxppttqddddddddq @ 0x1C001F398 (Template_ppxppttqddddddddq.c)
 *     DxgkSqmCreateStringStreamEntry @ 0x1C001F830 (DxgkSqmCreateStringStreamEntry.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C005BE80 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0085F40 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 *     DxgkSqmAddToStream @ 0x1C00E7550 (DxgkSqmAddToStream.c)
 *     ?DdiRender@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1C0127C58 (-DdiRender@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z.c)
 *     ?DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1C0127EC4 (-DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::Render(
        DXGCONTEXT *this,
        struct _D3DKMT_RENDER *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGCONTEXT **a4,
        struct DXGALLOCATION **a5)
{
  struct COREDEVICEACCESS *v5; // r12
  struct _D3DKMT_RENDER *v6; // r13
  signed int v7; // esi
  D3DKMT_RENDERFLAGS Flags; // eax
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  __int64 v17; // rax
  char *pNewCommandBuffer; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // r15d
  int v23; // r14d
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rsi
  int v39; // eax
  __int64 v40; // r14
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rax
  D3DKMT_RENDERFLAGS v44; // eax
  int v45; // r12d
  const EVENT_DESCRIPTOR *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // r14
  __int64 v49; // rdx
  __int64 v50; // rcx
  PSLIST_ENTRY v51; // rsi
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  int v55; // ecx
  unsigned int v56; // eax
  __int64 v57; // rcx
  int v58; // eax
  int v59; // edx
  bool v60; // al
  __int64 v61; // r8
  int v62; // eax
  __int64 *v63; // r15
  D3DDDI_ALLOCATIONLIST *pNewAllocationList; // r12
  __int64 v65; // r13
  struct DXGPROCESS *Current; // rax
  char *v67; // r14
  __int64 v68; // rcx
  __int64 v69; // r8
  int v70; // r9d
  __int64 v71; // r15
  char *v72; // rcx
  __int64 v73; // rax
  void *v74; // rdx
  __int64 v75; // r8
  __int64 v76; // rcx
  int v77; // eax
  __int64 v78; // rax
  __int64 v79; // r15
  __int64 CurrentProcess; // r14
  __int64 ProcessWin32Process; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // r14
  __int64 v87; // r13
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // r8
  int v92; // r9d
  __int64 v93; // rcx
  __int64 v94; // r14
  struct _KTHREAD *CurrentThread; // r14
  __int64 v96; // rax
  int CurrentProcessSessionId; // r15d
  __int64 ThreadWin32Thread; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  _QWORD *v103; // rax
  unsigned __int8 v104; // cl
  _QWORD *v105; // rax
  _QWORD *v106; // rax
  struct _VIDMM_DMA_BUFFER *v107; // rcx
  __int64 v108; // rcx
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // rdx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // rcx
  __int64 v116; // r14
  int v117; // eax
  int v118; // r12d
  int v119; // r13d
  __int64 v120; // rax
  __int64 v121; // r8
  __int64 v122; // rax
  __int64 v123; // r9
  int v124; // r12d
  __int64 v125; // r14
  struct _KTHREAD *v126; // rcx
  struct DXGCONTEXT **v127; // r13
  __int64 v128; // rax
  int v129; // eax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r13
  PSLIST_HEADER v133; // r14
  union _SLIST_HEADER *v134; // rcx
  __int64 v135; // rbx
  __int64 v136; // rax
  char v137; // bl
  __int64 v138; // rcx
  const char *v139; // rax
  __int64 v140; // rbx
  struct DXGCONTEXT **v141; // rsi
  __int64 v142; // rbx
  __int64 v143; // rax
  UINT64 PresentHistoryToken; // rax
  int v145; // eax
  __int64 v146; // rdx
  __int64 v147; // r8
  __int64 v148; // r9
  __int64 v149; // rax
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 v154; // rax
  char v155; // bl
  __int64 v156; // rcx
  const char *ProcessImageFileName; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  int v160; // [rsp+20h] [rbp-100h]
  struct DXGK_PRESENT_PARAMS *v161; // [rsp+30h] [rbp-F0h]
  struct VIDSCH_SUBMIT_DATA_BASE *v162; // [rsp+38h] [rbp-E8h]
  struct _VIDMM_DMA_BUFFER *v163; // [rsp+A0h] [rbp-80h] BYREF
  unsigned __int8 v164; // [rsp+A8h] [rbp-78h]
  unsigned int AllocationCount; // [rsp+ACh] [rbp-74h]
  int v166; // [rsp+B0h] [rbp-70h]
  struct _D3DKMT_RENDER *v167; // [rsp+B8h] [rbp-68h]
  struct _VIDMM_DMA_BUFFER *v168; // [rsp+C0h] [rbp-60h]
  __int64 v169; // [rsp+C8h] [rbp-58h]
  void *v170; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v171; // [rsp+D8h] [rbp-48h] BYREF
  UINT v172; // [rsp+E0h] [rbp-40h] BYREF
  struct DXGPROCESS *v173; // [rsp+E8h] [rbp-38h] BYREF
  struct DXGCONTEXT **v174; // [rsp+F0h] [rbp-30h]
  struct _UNICODE_STRING v175; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v176; // [rsp+108h] [rbp-18h] BYREF
  struct COREDEVICEACCESS *v177; // [rsp+110h] [rbp-10h]
  __int64 CurrentIrql; // [rsp+118h] [rbp-8h]
  __int64 v179; // [rsp+120h] [rbp+0h]
  struct _UNICODE_STRING UnicodeString; // [rsp+128h] [rbp+8h] BYREF
  char *v181; // [rsp+140h] [rbp+20h] BYREF
  UINT CommandLength; // [rsp+148h] [rbp+28h]
  void *pDmaBuffer; // [rsp+150h] [rbp+30h]
  __int64 v184; // [rsp+158h] [rbp+38h]
  __int64 DmaSize; // [rsp+160h] [rbp+40h]
  void *v186; // [rsp+168h] [rbp+48h]
  __int64 v187; // [rsp+170h] [rbp+50h]
  DXGK_ALLOCATIONLIST *pAllocationList; // [rsp+178h] [rbp+58h]
  UINT AllocationListSize; // [rsp+180h] [rbp+60h]
  UINT MultipassOffset; // [rsp+184h] [rbp+64h]
  _DXGKARG_RENDER v191; // [rsp+190h] [rbp+70h] BYREF
  PSLIST_HEADER SListHead; // [rsp+200h] [rbp+E0h]
  LARGE_INTEGER v193; // [rsp+208h] [rbp+E8h] BYREF
  struct DXGALLOCATION **v194; // [rsp+210h] [rbp+F0h]
  struct _SLIST_ENTRY *v195[2]; // [rsp+218h] [rbp+F8h] BYREF
  struct _STRING DestinationString; // [rsp+228h] [rbp+108h] BYREF
  struct _STRING SourceString; // [rsp+238h] [rbp+118h] BYREF
  _BYTE v198[16]; // [rsp+248h] [rbp+128h] BYREF
  int v199[4]; // [rsp+258h] [rbp+138h] BYREF
  _BYTE v200[16]; // [rsp+268h] [rbp+148h] BYREF
  int v201[6]; // [rsp+278h] [rbp+158h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN v202; // [rsp+290h] [rbp+170h] BYREF

  v5 = a3;
  v6 = a2;
  v7 = a2->BroadcastContextCount + 1;
  v194 = a5;
  Flags = a2->Flags;
  v174 = a4;
  v177 = a3;
  v10 = ((*(_BYTE *)&Flags & 8) << 12) | 0x100;
  v167 = a2;
  v164 = 1;
  v166 = v7;
  if ( (*(_BYTE *)&Flags & 0x10) != 0 )
  {
    v10 = ((*(_BYTE *)&Flags & 8) << 12) | 0x1A0;
    v11 = DXGCONTEXT::WaitForQueuedPresentLimit(this, 0, 1, a3);
    v16 = v11;
    if ( v11 < 0 )
    {
      v17 = WdLogNewEntry5_WdEvent(v13, v12, v14, v15);
      *(_QWORD *)(v17 + 24) = this;
      *(_QWORD *)(v17 + 32) = v16;
      WdLogEvent5_WdEvent(v17);
      return (unsigned int)v16;
    }
    v7 = v166;
  }
  if ( (*(_DWORD *)&v6->Flags & 0x20) != 0 )
    pNewCommandBuffer = (char *)v6->pNewCommandBuffer;
  else
    pNewCommandBuffer = (char *)*((_QWORD *)this + 7);
  v191.pCommand = &pNewCommandBuffer[v6->CommandOffset];
  v191.CommandLength = v6->CommandLength;
  memset(&v191.pDmaBuffer, 0, 0x60uLL);
  v179 = v7;
  while ( 1 )
  {
    v20 = *((_QWORD *)this + 2);
    v163 = 0LL;
    ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v20 + 80));
    v22 = *((_DWORD *)this + 24);
    v23 = 3;
    if ( *((_DWORD *)this + 16) > 3u )
      v23 = *((_DWORD *)this + 16);
    if ( !*((_QWORD *)this + 26) )
    {
      LODWORD(v162) = *((_DWORD *)this + 24);
      LODWORD(v161) = v23;
      LOBYTE(v160) = 1;
      v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, int, _DWORD, struct DXGK_PRESENT_PARAMS *, struct VIDSCH_SUBMIT_DATA_BASE *, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL) + 8LL) + 416LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
              *((unsigned int *)this + 82),
              *(_QWORD *)(*((_QWORD *)this + 2) + 536LL),
              this,
              v160,
              *((_DWORD *)this + 44),
              v161,
              v162,
              *((_DWORD *)this + 45),
              *((_DWORD *)this + 46));
      *((_QWORD *)this + 26) = v24;
      if ( !v24 )
      {
        v28 = WdLogNewEntry5_WdWarning(0LL, v25, v26, v27);
        *(_QWORD *)(v28 + 24) = this;
        *(_QWORD *)(v28 + 32) = -1073741801LL;
        WdLogEvent5_WdWarning(v28);
        LODWORD(v32) = -1073741801;
LABEL_14:
        v33 = WdLogNewEntry5_WdWarning(v29, v21, v30, v31);
        *(_QWORD *)(v33 + 24) = this;
        WdLogEvent5_WdWarning(v33);
        goto LABEL_26;
      }
      LODWORD(v32) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                            + 16LL)
                                                                                + 424LL)
                                                                    + 8LL)
                                                        + 424LL))(v24);
      if ( (int)v32 < 0 )
        goto LABEL_14;
      *((_DWORD *)this + 47) = v23;
      *((_DWORD *)this + 48) = v22;
    }
    v38 = *((_QWORD *)this + 26);
    LOBYTE(v21) = 1;
    v39 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL) + 8LL)
                                                                                           + 472LL))(
            v38,
            v21,
            0LL,
            &v163);
    v40 = v39;
    if ( v39 == -1071775486 )
    {
      if ( v5 )
      {
        if ( *((_BYTE *)v5 + 64) )
          COREACCESS::Release((struct COREDEVICEACCESS *)((char *)v5 + 32));
        COREACCESS::Release((struct COREDEVICEACCESS *)((char *)v5 + 8));
        LODWORD(v40) = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL) + 8LL) + 472LL))(
                         v38,
                         0LL,
                         0LL,
                         &v163);
        v41 = COREDEVICEACCESS::AcquireShared(v5);
        v32 = v41;
        if ( v41 < 0 )
        {
          v42 = WdLogNewEntry5_WdEvent(v35, v34, v36, v37);
          *(_QWORD *)(v42 + 24) = this;
          *(_QWORD *)(v42 + 32) = v32;
          WdLogEvent5_WdEvent(v42);
          goto LABEL_26;
        }
      }
    }
    else if ( v39 < 0 )
    {
      v43 = WdLogNewEntry5_WdEvent(v35, v34, v36, v37);
      *(_QWORD *)(v43 + 24) = this;
      *(_QWORD *)(v43 + 32) = v40;
      WdLogEvent5_WdEvent(v43);
    }
    LODWORD(v32) = v40;
LABEL_26:
    if ( (int)v32 < 0 )
    {
      v159 = WdLogNewEntry5_WdEvent(v35, v34, v36, v37);
      *(_QWORD *)(v159 + 32) = (int)v32;
      *(_QWORD *)(v159 + 24) = this;
      WdLogEvent5_WdEvent(v159);
      return (unsigned int)v32;
    }
    if ( !bTracingEnabled )
      goto LABEL_37;
    v44 = v6->Flags;
    if ( (*(_BYTE *)&v44 & 0x10) == 0 )
    {
      if ( (*(_BYTE *)&v44 & 0x20) != 0 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          v46 = (const EVENT_DESCRIPTOR *)&EventRenderKm;
          goto LABEL_36;
        }
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      {
        v46 = &EventRender;
LABEL_36:
        Template_p(v35, v46, v36, v163);
      }
LABEL_37:
      v45 = 0;
      goto LABEL_38;
    }
    v45 = 0;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      HIDWORD(v162) = 0;
      HIDWORD(v161) = 0;
      Template_ppxppttqddddddddq(v35, v34, v36, 0LL, v163);
    }
LABEL_38:
    v47 = *((_QWORD *)this + 2);
    v171 = 0LL;
    v48 = *(_QWORD *)(v47 + 16);
    v195[1] = (struct _SLIST_ENTRY *)v48;
    ++*(_DWORD *)(v48 + 1044);
    SListHead = (PSLIST_HEADER)(v48 + 1024);
    v51 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v48 + 1024));
    if ( !v51 )
    {
      ++*(_DWORD *)(v48 + 1048);
      v51 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v48 + 1072))(
                            *(unsigned int *)(v48 + 1060),
                            *(unsigned int *)(v48 + 1068),
                            *(unsigned int *)(v48 + 1064),
                            v48 + 1024);
    }
    v195[0] = v51;
    if ( !v51 )
    {
      v158 = WdLogNewEntry5_WdLowResource(v50, v49, v52, v53);
      *(_QWORD *)(v158 + 24) = 528LL;
      WdLogEvent5_WdLowResource(v158);
      LODWORD(v71) = -1073741801;
LABEL_193:
      CVidSchSubmitData::~CVidSchSubmitData(v195);
      return (unsigned int)v71;
    }
    v54 = *(_QWORD *)(v48 + 16);
    if ( *(int *)(v54 + 1656) < 0x2000 )
      v55 = 1;
    else
      v55 = *(_DWORD *)(v54 + 232);
    if ( *(int *)(v54 + 1656) >= 0x2000 || *(_BYTE *)(v54 + 1940) )
      v56 = v55 * ((*(_DWORD *)(v54 + 1864) << 6) + 8) + 376;
    else
      v56 = 872;
    memset(v51, 0, v56);
    v57 = *(_QWORD *)(v48 + 16);
    v58 = *(_DWORD *)(v57 + 1656);
    if ( v58 < 0x2000 )
      v59 = 1;
    else
      v59 = *(_DWORD *)(v57 + 232);
    v60 = v58 >= 0x2000 || *(_BYTE *)(v57 + 1940);
    v61 = *(unsigned int *)(v57 + 1864);
    *((_BYTE *)&v51[21].Next + 12) = v60;
    if ( v60 )
    {
      *((_DWORD *)&v51[22].Next + 3) = v61;
      LODWORD(v51[23].Next) = v59;
      HIDWORD(v51[23].Next) = (((_DWORD)v61 * v59) << 6) + 16;
      v62 = (((_DWORD)v61 * v59) << 6) + 376;
      LODWORD(v51[22].Next) = v62;
      HIDWORD(v51[22].Next) = v62 + 8 * v59;
    }
    if ( (*((_DWORD *)this + 50) & 1) == 0
      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 1936LL) & 2) == 0
      || (*(_DWORD *)&v6->Flags & 0x20) != 0 )
    {
      v63 = &v176;
      if ( !*((_BYTE *)this + 350) )
        v63 = 0LL;
      if ( (*(_DWORD *)&v6->Flags & 0x20) != 0 )
        pNewAllocationList = v6->pNewAllocationList;
      else
        pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)*((_QWORD *)this + 10);
      v65 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL);
      AllocationCount = v167->AllocationCount;
      v168 = v163;
      Current = DXGPROCESS::GetCurrent();
      v173 = Current;
      if ( Current )
      {
        v67 = (char *)Current + 120;
        if ( *((struct _KTHREAD **)Current + 16) == KeGetCurrentThread() )
        {
          v173 = 0LL;
        }
        else
        {
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v67, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v70 = *((_DWORD *)v67 + 4);
              if ( v70 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                Template_q(v68, &EventBlockThread, v69, v70);
            }
            ExAcquirePushLockExclusiveEx(v67, 0LL);
          }
          *((_QWORD *)v67 + 1) = KeGetCurrentThread();
        }
      }
      v71 = (*(int (__fastcall **)(struct _VIDMM_DMA_BUFFER *, D3DDDI_ALLOCATIONLIST *, _QWORD, _QWORD, int, UINT *, LARGE_INTEGER *, __int64 *, struct DXGPROCESS **, __int64 *, PSLIST_ENTRY, struct DXGALLOCATION **))(*(_QWORD *)(v65 + 8) + 552LL))(
              v168,
              pNewAllocationList,
              AllocationCount,
              v164,
              v166,
              &v172,
              &v193,
              v63,
              &v173,
              &v171,
              v51 + 12,
              v194);
      v45 = 0;
      if ( v173 )
      {
        v72 = (char *)v173 + 120;
        *((_QWORD *)v173 + 16) = 0LL;
        ExReleasePushLockExclusiveEx(v72, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( (int)v71 < 0 )
      {
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 424LL)
                                                                               + 8LL)
                                                                   + 480LL))(
          v163,
          0LL);
        v163 = 0LL;
        v154 = WdLogNewEntry5_WdWarning(v151, v150, v152, v153);
        *(_QWORD *)(v154 + 24) = this;
        *(_QWORD *)(v154 + 32) = v71;
        WdLogEvent5_WdWarning(v154);
        v155 = 0;
        *(_QWORD *)&v175.Length = 0LL;
        v175.Buffer = 0LL;
        v156 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 56LL);
        if ( v156
          && (ProcessImageFileName = (const char *)PsGetProcessImageFileName(v156),
              RtlInitAnsiString(&SourceString, ProcessImageFileName),
              RtlAnsiStringToUnicodeString(&v175, &SourceString, 1u) >= 0) )
        {
          v155 = 1;
        }
        else
        {
          RtlInitUnicodeString(&v175, L"<Unknown>");
        }
        DxgkSqmCreateStringStreamEntry((__int64)v200, v175.Buffer);
        DxgkSqmCreateDwordStreamEntry(v201, 32);
        DxgkSqmAddToStream(4783LL, 2LL, v200);
        if ( v155 )
        {
          RtlFreeUnicodeString(&v175);
          CVidSchSubmitData::~CVidSchSubmitData(v195);
          return (unsigned int)v71;
        }
        goto LABEL_193;
      }
      v6 = v167;
    }
    v73 = *((_QWORD *)this + 2);
    v170 = 0LL;
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, void **, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v73 + 16)
                                                                                                 + 424LL)
                                                                                     + 8LL)
                                                                         + 488LL))(
      v163,
      &v170,
      v61);
    v191.pDmaBuffer = v170;
    v191.DmaSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                 + 424LL)
                                                                                     + 8LL)
                                                                         + 512LL))(v163);
    if ( !DXGCONTEXT::DisableDdiRenderAllocationList(this) || (*(_DWORD *)&v6->Flags & 0x20) != 0 )
    {
      v191.pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL) + 8LL) + 536LL))(v163);
      v191.AllocationListSize = v6->AllocationCount;
      v191.pPatchLocationListIn = (D3DDDI_PATCHLOCATIONLIST *)*((_QWORD *)this + 14);
      v191.PatchLocationListInSize = v6->PatchLocationCount;
      v191.pPatchLocationListOut = (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL) + 8LL) + 528LL))(v163);
      v191.PatchLocationListOutSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL) + 8LL)
                                                                                            + 520LL))(v163);
    }
    else
    {
      v191.pAllocationList = 0LL;
      v191.AllocationListSize = 0;
      v191.pPatchLocationListIn = 0LL;
      v191.PatchLocationListInSize = 0;
      v191.pPatchLocationListOut = 0LL;
      v191.PatchLocationListOutSize = 0;
    }
    v74 = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 424LL)
                                                                                    + 8LL)
                                                                        + 544LL))(v163);
    v75 = *((unsigned int *)this + 46);
    v191.DmaBufferSegmentId = v172;
    v191.DmaBufferPhysicalAddress = v193;
    v76 = (unsigned int)v6->Flags;
    v191.pDmaBufferPrivateData = v74;
    v191.DmaBufferPrivateDataSize = v75;
    if ( (v76 & 0x20) == 0 )
    {
      if ( (*((_DWORD *)this + 50) & 1) != 0
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 1936LL) & 4) != 0 )
      {
        LODWORD(v71) = 0;
        goto LABEL_141;
      }
      v77 = ADAPTER_RENDER::DdiRender(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), *((void **)this + 21), &v191);
LABEL_140:
      LODWORD(v71) = v77;
      goto LABEL_141;
    }
    if ( !*((_BYTE *)this + 350) )
    {
      v77 = ADAPTER_RENDER::DdiRenderKm(
              *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
              *((void **)this + 21),
              &v191);
      goto LABEL_140;
    }
    v181 = (char *)v6->pNewCommandBuffer + v6->CommandOffset;
    CommandLength = v6->CommandLength;
    v187 = 0LL;
    pDmaBuffer = v191.pDmaBuffer;
    v184 = v176;
    DmaSize = v191.DmaSize;
    pAllocationList = v191.pAllocationList;
    AllocationListSize = v191.AllocationListSize;
    MultipassOffset = v191.MultipassOffset;
    v168 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + 21);
    v78 = *((_QWORD *)this + 2);
    v186 = v74;
    LODWORD(v187) = v75;
    v79 = *(_QWORD *)(v78 + 16);
    v169 = v79;
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v76, &EventProfilerEnter, v75, 5066);
    CurrentProcess = PsGetCurrentProcess();
    ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
    if ( !ProcessWin32Process )
    {
      v88 = WdLogNewEntry5_WdEvent(v83, v82, v84, v85);
      *(_QWORD *)(v88 + 24) = CurrentProcess;
      WdLogEvent5_WdEvent(v88);
      v86 = 0LL;
LABEL_96:
      v87 = 0LL;
      goto LABEL_97;
    }
    v86 = *(_QWORD *)(ProcessWin32Process + 248);
    if ( !v86 )
      goto LABEL_96;
    v87 = v86 + 96;
LABEL_97:
    AllocationCount = 0;
    if ( v87 && *(struct _KTHREAD **)(v87 + 8) == KeGetCurrentThread() )
    {
      v89 = WdLogNewEntry5_WdAssertion(v83);
      *(_QWORD *)(v89 + 24) = 1155LL;
      WdLogEvent5_WdAssertion(v89);
    }
    if ( v86 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v87, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v92 = *(_DWORD *)(v87 + 16);
          if ( v92 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_q(v90, &EventBlockThread, v91, v92);
        }
        ExAcquirePushLockExclusiveEx(v87, 0LL);
      }
      *(_QWORD *)(v87 + 8) = KeGetCurrentThread();
      AllocationCount = 2;
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v79 + 16), 1);
    CurrentIrql = KeGetCurrentIrql();
    v94 = 0LL;
    if ( (unsigned __int8)CurrentIrql < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v96 = WdLogNewEntry5_WdAssertion(v93);
        *(_QWORD *)(v96 + 24) = 92LL;
        WdLogEvent5_WdAssertion(v96);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      if ( CurrentProcessSessionId
        && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
        && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
        && *(_QWORD *)ThreadWin32Thread )
      {
        v94 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
        if ( v94 )
          v45 = *(_DWORD *)(v94 + 136);
      }
      else
      {
        v94 = 0LL;
      }
    }
    v71 = (*(int (__fastcall **)(struct _VIDMM_DMA_BUFFER *, char **))(*(_QWORD *)(v169 + 16) + 784LL))(v168, &v181);
    if ( (_BYTE)CurrentIrql != KeGetCurrentIrql() )
    {
      v103 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v100, v99, v101);
      v103[5] = v169;
      v103[6] = (unsigned __int8)CurrentIrql;
      v103[3] = 275LL;
      v103[4] = 16LL;
      v104 = KeGetCurrentIrql();
      v103[7] = v104;
      WdLogEvent5_WdCriticalError(v103);
    }
    if ( v94 && *(_DWORD *)(v94 + 136) != v45 )
    {
      v105 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v100, v99, v101);
      v105[3] = 275LL;
      v105[4] = 25LL;
      v105[5] = *(int *)(v94 + 136);
      v105[6] = v45;
      v105[7] = 0LL;
      WdLogEvent5_WdCriticalError(v105);
    }
    v106 = (_QWORD *)WdLogNewEntry5_WdTrace(v100, v99, v101, v102);
    v107 = v168;
    v106[3] = v71;
    v106[4] = v107;
    v106[5] = pDmaBuffer;
    v106[6] = (unsigned int)DmaSize;
    v108 = (__int64)pAllocationList;
    v106[7] = pAllocationList;
    if ( (unsigned int)(v71 + 1073741816) > 0xF || (v108 = 32801LL, !_bittest((const int *)&v108, v71 + 1073741816)) )
    {
      if ( (_DWORD)v71 != -1073741592 && (_DWORD)v71 != -1071775743 && (_DWORD)v71 != -1071775232 && (_DWORD)v71 )
      {
        v109 = WdLogNewEntry5_WdError(v108);
        *(_QWORD *)(v109 + 24) = v71;
        WdLogEvent5_WdError(v109);
      }
    }
    DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v169 + 16));
    if ( AllocationCount == 1 )
    {
      ExReleasePushLockSharedEx(v87, 0LL);
    }
    else
    {
      if ( AllocationCount != 2 )
        goto LABEL_135;
      *(_QWORD *)(v87 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v87, 0LL);
    }
    KeLeaveCriticalRegion();
LABEL_135:
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v110, &EventProfilerExit, v111, 5066);
    v191.pDmaBuffer = pDmaBuffer;
    v191.pDmaBufferPrivateData = v186;
    v191.MultipassOffset = MultipassOffset;
LABEL_141:
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, void *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 424LL)
                                                                           + 8LL)
                                                               + 496LL))(
      v163,
      v74);
    v115 = 0x80000000LL;
    if ( (int)(v71 + 0x80000000) >= 0 && (_DWORD)v71 != -1071775743 )
    {
      if ( v166 > 0 )
      {
        v135 = (unsigned int)v166;
        do
        {
          VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL),
            v163);
          (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 424LL)
                                                                                 + 8LL)
                                                                     + 480LL))(
            v163,
            0LL);
          --v135;
        }
        while ( v135 );
      }
      v163 = 0LL;
      v136 = WdLogNewEntry5_WdWarning(v115, v112, v113, v114);
      *(_QWORD *)(v136 + 32) = (int)v71;
      *(_QWORD *)(v136 + 24) = this;
      WdLogEvent5_WdWarning(v136);
      v137 = 0;
      *(_QWORD *)&UnicodeString.Length = 0LL;
      UnicodeString.Buffer = 0LL;
      v138 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 56LL);
      if ( v138
        && (v139 = (const char *)PsGetProcessImageFileName(v138),
            RtlInitAnsiString(&DestinationString, v139),
            RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0) )
      {
        v137 = 1;
      }
      else
      {
        RtlInitUnicodeString(&UnicodeString, L"<Unknown>");
      }
      DxgkSqmCreateStringStreamEntry((__int64)v198, UnicodeString.Buffer);
      DxgkSqmCreateDwordStreamEntry(v199, 1);
      DxgkSqmAddToStream(4783LL, 2LL, v198);
      if ( v137 )
      {
        RtlFreeUnicodeString(&UnicodeString);
        CVidSchSubmitData::~CVidSchSubmitData(v195);
        return (unsigned int)v71;
      }
      goto LABEL_193;
    }
    LODWORD(v116) = 0;
    v117 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 424LL)
                                                                             + 8LL)
                                                                 + 544LL))(v163);
    v118 = LODWORD(v191.pDmaBufferPrivateData) - v117;
    v119 = LODWORD(v191.pDmaBuffer) - (_DWORD)v170;
    if ( DXGCONTEXT::DisableDdiRenderAllocationList(this) )
    {
      v121 = 0LL;
    }
    else
    {
      v120 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 424LL)
                                                                               + 8LL)
                                                                   + 528LL))(v163);
      v116 = ((__int64)v191.pPatchLocationListOut - v120) / 24;
      v121 = v167->AllocationCount;
      AllocationCount = v167->AllocationCount;
      if ( (qword_1C00467F0 & 0x10) != 0 )
      {
        v122 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 424LL)
                                                                                 + 8LL)
                                                                     + 528LL))(v163);
        TraceDxgkPatchLocationList((__int64)this, (__int64)v163, v116, v122);
        v121 = AllocationCount;
      }
    }
    LODWORD(v51->Next) = v10;
    if ( *((_BYTE *)this + 350) )
    {
      LODWORD(v51->Next) = v10 | 0x8000000;
      *((_QWORD *)&v51[2].Next + 1) = v176;
    }
    v123 = 0LL;
    if ( (v10 & 0x20) != 0 )
    {
      LODWORD(v51->Next) ^= (LODWORD(v51->Next) ^ (((_DWORD)v71 == -1071775743) << 6)) & 0x40;
      LODWORD(v51->Next) = (__int64)v51->Next & 0xFFFFFBFF | (((v166 > 1) | 2) << 10);
      if ( *(_QWORD *)(*((_QWORD *)this + 2) + 2832LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
        HIDWORD(v51[7].Next) = 0;
    }
    *((_QWORD *)&v51->Next + 1) = v163;
    HIDWORD(v51[3].Next) = v119;
    LODWORD(v51[3].Next) = 0;
    *((_DWORD *)&v51[3].Next + 3) = v121;
    *((_DWORD *)&v51[3].Next + 2) = 0;
    HIDWORD(v51[4].Next) = v116;
    LODWORD(v51[4].Next) = 0;
    *((_DWORD *)&v51[4].Next + 3) = v118;
    *((_DWORD *)&v51[4].Next + 2) = 0;
    if ( v171 )
    {
      *((_DWORD *)&v51[21].Next + 2) = 1;
      v51[21].Next = (struct _SLIST_ENTRY *)&v171;
    }
    else
    {
      v51[21].Next = 0LL;
      *((_DWORD *)&v51[21].Next + 2) = 0;
    }
    v124 = 0;
    v125 = 0LL;
    if ( v179 > 0 )
      break;
LABEL_160:
    v133 = SListHead;
    v134 = SListHead;
    v164 = 0;
    ++*((_DWORD *)&SListHead[1].HeaderX64 + 3);
    if ( ExQueryDepthSList(v134) < LOWORD(v133[1].Alignment) )
    {
      ExpInterlockedPushEntrySList(v133, v51);
    }
    else
    {
      ++LODWORD(v133[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, PSLIST_HEADER))v133[3].Region)(v51, v133);
    }
    if ( (_DWORD)v71 != -1071775743 )
    {
      if ( (*(_DWORD *)&v167->Flags & 0x10) != 0 )
      {
        PresentHistoryToken = v167->PresentHistoryToken;
        v202.Model = D3DKMT_PM_REDIRECTED_VISTABLT;
        v202.Token.Flip.FenceValue = PresentHistoryToken;
        v145 = DXGCONTEXT::SubmitPresentHistoryToken((struct _EX_RUNDOWN_REF *)this, &v202, v177, 0LL, 0, 0LL, 0LL, 0LL);
        v71 = v145;
        if ( (int)(v145 + 0x80000000) >= 0 && v145 != -1073741130 )
        {
          v149 = WdLogNewEntry5_WdWarning(0x80000000LL, v146, v147, v148);
          *(_QWORD *)(v149 + 24) = this;
          *(_QWORD *)(v149 + 32) = v71;
          WdLogEvent5_WdWarning(v149);
          LODWORD(v71) = 0;
        }
      }
      return (unsigned int)v71;
    }
    v6 = v167;
    v5 = v177;
  }
  while ( 1 )
  {
    v126 = KeGetCurrentThread();
    v127 = v174;
    if ( *((struct _KTHREAD **)v174[v125] + 46) != v126 )
    {
      v128 = WdLogNewEntry5_WdAssertion(v126);
      *(_QWORD *)(v128 + 24) = 787LL;
      WdLogEvent5_WdAssertion(v128);
    }
    v129 = (*(__int64 (__fastcall **)(_QWORD, PSLIST_ENTRY, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL)
                                                                                         + 8LL)
                                                                             + 344LL))(
             *((_QWORD *)v127[v125] + 27),
             v51,
             v121,
             v123);
    v132 = v129;
    if ( v129 < 0 )
      break;
    LODWORD(v51->Next) &= ~0x800u;
    ++v124;
    if ( ++v125 >= v179 )
      goto LABEL_160;
  }
  v140 = v124;
  if ( v124 >= 0 )
  {
    v141 = v174;
    do
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL)
                                                         + 8LL)
                                             + 352LL))(
        *((_QWORD *)v141[v140--] + 27),
        0LL);
    while ( v140 >= 0 );
  }
  if ( v124 < v166 )
  {
    v142 = (unsigned int)(v166 - v124);
    do
    {
      VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL),
        v163);
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 424LL)
                                                                             + 8LL)
                                                                 + 480LL))(
        v163,
        0LL);
      --v142;
    }
    while ( v142 );
  }
  v163 = 0LL;
  v143 = WdLogNewEntry5_WdWarning(v131, v130, v121, v123);
  *(_QWORD *)(v143 + 24) = this;
  *(_QWORD *)(v143 + 32) = v132;
  WdLogEvent5_WdWarning(v143);
  CVidSchSubmitData::~CVidSchSubmitData(v195);
  return (unsigned int)v132;
}
