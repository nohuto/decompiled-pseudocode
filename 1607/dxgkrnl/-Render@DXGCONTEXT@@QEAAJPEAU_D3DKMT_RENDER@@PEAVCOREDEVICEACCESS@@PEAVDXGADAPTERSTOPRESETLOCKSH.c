/*
 * XREFs of ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00B15B0
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C00B3800 (-DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0164658 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkRender @ 0x1C0175270 (DxgkRender.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0009F8C (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?DisableDdiRenderAllocationList@DXGCONTEXT@@QEAAEXZ @ 0x1C000A1E4 (-DisableDdiRenderAllocationList@DXGCONTEXT@@QEAAEXZ.c)
 *     Template_p @ 0x1C00111E4 (Template_p.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     TraceDxgkPatchLocationList @ 0x1C0023210 (TraceDxgkPatchLocationList.c)
 *     ?VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0025E00 (-VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     Template_ppxppttqddddddddq @ 0x1C0025EC0 (Template_ppxppttqddddddddq.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B27C0 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0143CD4 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DdiRender@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1C014BB9C (-DdiRender@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z.c)
 *     ?DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1C014BE14 (-DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::Render(
        DXGCONTEXT *this,
        struct _D3DKMT_RENDER *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct DXGCONTEXT **a5,
        struct DXGALLOCATION **a6)
{
  struct COREDEVICEACCESS *v7; // r12
  signed int v8; // ebx
  struct _D3DKMT_RENDER *v9; // r13
  D3DKMT_RENDERFLAGS Flags; // eax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  char *pNewCommandBuffer; // rcx
  __int64 v17; // rax
  struct _SLIST_ENTRY *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // r15d
  int v22; // r14d
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rsi
  int v36; // eax
  __int64 v37; // r14
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rax
  D3DKMT_RENDERFLAGS v41; // eax
  int v42; // r12d
  const EVENT_DESCRIPTOR *v43; // rdx
  __int64 v44; // rax
  __int64 v45; // r14
  __int64 v46; // rcx
  PSLIST_ENTRY v47; // rsi
  __int64 v48; // rdx
  int v49; // r8d
  unsigned int v50; // eax
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // r8
  bool v54; // al
  __int64 v55; // r9
  int v56; // eax
  __int64 *v57; // r15
  D3DDDI_ALLOCATIONLIST *pNewAllocationList; // r12
  __int64 v59; // rcx
  __int64 v60; // r13
  struct DXGPROCESS *Current; // rax
  char *v62; // r14
  __int64 v63; // rcx
  __int64 v64; // r8
  int v65; // r9d
  __int64 v66; // r15
  char *v67; // rcx
  __int64 v68; // rax
  void *v69; // rdx
  __int64 v70; // r8
  __int64 v71; // rcx
  __int64 v72; // r15
  int v73; // eax
  __int64 v74; // rax
  __int64 v75; // r15
  __int64 CurrentProcess; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 ProcessDxgProcess; // r14
  __int64 v80; // r13
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // r8
  int v84; // r9d
  __int64 v85; // rcx
  __int64 v86; // r14
  struct _KTHREAD *CurrentThread; // r14
  __int64 v88; // rax
  int CurrentProcessSessionId; // r15d
  __int64 ThreadWin32Thread; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  _QWORD *v95; // rax
  unsigned __int8 v96; // cl
  _QWORD *v97; // rax
  _QWORD *v98; // rax
  struct _VIDMM_DMA_BUFFER *v99; // rcx
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // rdx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rcx
  __int64 v108; // r14
  int v109; // eax
  int v110; // r12d
  int v111; // r13d
  __int64 v112; // rax
  __int64 v113; // r8
  __int64 v114; // rax
  __int64 v115; // r9
  int v116; // r12d
  __int64 v117; // r14
  struct _KTHREAD *v118; // rcx
  struct DXGCONTEXT **v119; // r13
  __int64 v120; // rax
  int v121; // eax
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r13
  PSLIST_HEADER v125; // r14
  union _SLIST_HEADER *v126; // rcx
  __int64 v127; // rbx
  __int64 v128; // rax
  __int64 v129; // rbx
  struct DXGCONTEXT **v130; // rsi
  __int64 v131; // rbx
  __int64 v132; // rax
  UINT64 PresentHistoryToken; // rax
  int v134; // eax
  __int64 v135; // rdx
  __int64 v136; // r8
  __int64 v137; // r9
  __int64 v138; // rax
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  int v146; // [rsp+20h] [rbp-100h]
  struct _VIDMM_DMA_BUFFER *v147; // [rsp+A0h] [rbp-80h] BYREF
  unsigned __int8 v148; // [rsp+A8h] [rbp-78h]
  unsigned int AllocationCount; // [rsp+ACh] [rbp-74h]
  int v150; // [rsp+B0h] [rbp-70h]
  struct _SLIST_ENTRY *v151; // [rsp+B8h] [rbp-68h] BYREF
  UINT v152; // [rsp+C0h] [rbp-60h] BYREF
  int v153; // [rsp+C4h] [rbp-5Ch]
  struct _D3DKMT_RENDER *v154; // [rsp+C8h] [rbp-58h]
  struct _VIDMM_DMA_BUFFER *v155; // [rsp+D0h] [rbp-50h]
  struct DXGPROCESS *v156; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v157; // [rsp+E0h] [rbp-40h]
  void *v158; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v159; // [rsp+F0h] [rbp-30h] BYREF
  LARGE_INTEGER v160; // [rsp+F8h] [rbp-28h] BYREF
  __int64 CurrentIrql; // [rsp+100h] [rbp-20h]
  __int64 v162; // [rsp+108h] [rbp-18h]
  struct DXGCONTEXT **v163; // [rsp+110h] [rbp-10h]
  struct COREDEVICEACCESS *v164; // [rsp+118h] [rbp-8h]
  char *v165; // [rsp+120h] [rbp+0h] BYREF
  UINT CommandLength; // [rsp+128h] [rbp+8h]
  void *pDmaBuffer; // [rsp+130h] [rbp+10h]
  __int64 v168; // [rsp+138h] [rbp+18h]
  __int64 DmaSize; // [rsp+140h] [rbp+20h]
  void *v170; // [rsp+148h] [rbp+28h]
  __int64 v171; // [rsp+150h] [rbp+30h]
  DXGK_ALLOCATIONLIST *pAllocationList; // [rsp+158h] [rbp+38h]
  UINT AllocationListSize; // [rsp+160h] [rbp+40h]
  UINT MultipassOffset; // [rsp+164h] [rbp+44h]
  _DXGKARG_RENDER v175; // [rsp+170h] [rbp+50h] BYREF
  struct DXGALLOCATION **v176; // [rsp+1E0h] [rbp+C0h]
  PSLIST_HEADER SListHead; // [rsp+1E8h] [rbp+C8h]
  struct DXGADAPTERSTOPRESETLOCKSHARED *v178; // [rsp+1F0h] [rbp+D0h]
  __int64 v179; // [rsp+1F8h] [rbp+D8h]
  __int64 v180; // [rsp+200h] [rbp+E0h]
  __int64 v181; // [rsp+208h] [rbp+E8h]
  __int64 v182; // [rsp+210h] [rbp+F0h]
  struct _SLIST_ENTRY *v183[3]; // [rsp+218h] [rbp+F8h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN v184; // [rsp+230h] [rbp+110h] BYREF

  v7 = a3;
  v8 = a2->BroadcastContextCount + 1;
  v176 = a6;
  v9 = a2;
  Flags = a2->Flags;
  v178 = a4;
  v164 = a3;
  v154 = a2;
  v163 = a5;
  v148 = 1;
  v153 = ((*(_BYTE *)&Flags & 8) << 12) | 0x100;
  LODWORD(v151) = v153;
  v150 = v8;
  if ( (*(_BYTE *)&Flags & 0x10) != 0 )
  {
    v153 = ((*(_BYTE *)&Flags & 8) << 12) | 0x1A0;
    LODWORD(v151) = v153;
    v11 = DXGCONTEXT::WaitForQueuedPresentLimit(this, 0, 1u, a3);
    v13 = v11;
    if ( v11 < 0 )
    {
      v14 = WdLogNewEntry5_WdEvent(v12);
      *(_QWORD *)(v14 + 24) = this;
      *(_QWORD *)(v14 + 32) = v13;
      WdLogEvent5_WdEvent(v14);
      return (unsigned int)v13;
    }
    v8 = v150;
  }
  if ( (*(_DWORD *)&v9->Flags & 0x20) != 0 )
    pNewCommandBuffer = (char *)v9->pNewCommandBuffer;
  else
    pNewCommandBuffer = (char *)*((_QWORD *)this + 7);
  v175.pCommand = &pNewCommandBuffer[v9->CommandOffset];
  v175.CommandLength = v9->CommandLength;
  memset(&v175.pDmaBuffer, 0, 0x60uLL);
  v17 = v8;
  v18 = v151;
  v162 = v17;
  while ( 1 )
  {
    v19 = *((_QWORD *)this + 2);
    v147 = 0LL;
    ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v19 + 80));
    v21 = *((_DWORD *)this + 24);
    v22 = 3;
    if ( *((_DWORD *)this + 16) > 3u )
      v22 = *((_DWORD *)this + 16);
    if ( !*((_QWORD *)this + 26) )
    {
      LOBYTE(v146) = 1;
      v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, int, _DWORD, int, int, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL) + 432LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
              *((unsigned int *)this + 82),
              *(_QWORD *)(*((_QWORD *)this + 2) + 560LL),
              this,
              v146,
              *((_DWORD *)this + 44),
              v22,
              v21,
              *((_DWORD *)this + 45),
              *((_DWORD *)this + 46));
      *((_QWORD *)this + 26) = v23;
      if ( !v23 )
      {
        v27 = WdLogNewEntry5_WdWarning(0LL, v24, v25, v26);
        *(_QWORD *)(v27 + 24) = this;
        *(_QWORD *)(v27 + 32) = -1073741801LL;
        WdLogEvent5_WdWarning(v27);
        LODWORD(v31) = -1073741801;
LABEL_18:
        v32 = WdLogNewEntry5_WdWarning(v28, v20, v29, v30);
        *(_QWORD *)(v32 + 24) = this;
        WdLogEvent5_WdWarning(v32);
        goto LABEL_28;
      }
      LODWORD(v31) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                            + 16LL)
                                                                                + 400LL)
                                                                    + 8LL)
                                                        + 440LL))(v23);
      if ( (int)v31 < 0 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL)
                                       + 448LL))(*((_QWORD *)this + 26));
        *((_QWORD *)this + 26) = 0LL;
      }
      else
      {
        *((_DWORD *)this + 47) = v22;
        *((_DWORD *)this + 48) = v21;
      }
      if ( (int)v31 < 0 )
        goto LABEL_18;
    }
    v35 = *((_QWORD *)this + 26);
    LOBYTE(v20) = 1;
    v36 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL)
                                                                                           + 488LL))(
            v35,
            v20,
            0LL,
            &v147);
    v37 = v36;
    if ( v36 == -1071775486 )
    {
      if ( v7 )
      {
        if ( *((_BYTE *)v7 + 80) )
          COREACCESS::Release((struct COREDEVICEACCESS *)((char *)v7 + 40));
        COREACCESS::Release((struct COREDEVICEACCESS *)((char *)v7 + 8));
        LODWORD(v37) = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL) + 488LL))(
                         v35,
                         0LL,
                         0LL,
                         &v147);
        v38 = COREDEVICEACCESS::AcquireShared(v7);
        v31 = v38;
        if ( v38 < 0 )
        {
          v39 = WdLogNewEntry5_WdEvent(v33);
          *(_QWORD *)(v39 + 24) = this;
          *(_QWORD *)(v39 + 32) = v31;
          WdLogEvent5_WdEvent(v39);
          goto LABEL_28;
        }
      }
    }
    else if ( v36 < 0 )
    {
      v40 = WdLogNewEntry5_WdEvent(v33);
      *(_QWORD *)(v40 + 24) = this;
      *(_QWORD *)(v40 + 32) = v37;
      WdLogEvent5_WdEvent(v40);
    }
    LODWORD(v31) = v37;
LABEL_28:
    if ( (int)v31 < 0 )
    {
      v145 = WdLogNewEntry5_WdEvent(v33);
      *(_QWORD *)(v145 + 32) = (int)v31;
      *(_QWORD *)(v145 + 24) = this;
      WdLogEvent5_WdEvent(v145);
      return (unsigned int)v31;
    }
    if ( !bTracingEnabled )
      goto LABEL_39;
    v41 = v9->Flags;
    if ( (*(_BYTE *)&v41 & 0x10) == 0 )
    {
      if ( (*(_BYTE *)&v41 & 0x20) != 0 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v43 = (const EVENT_DESCRIPTOR *)&EventRenderKm;
          goto LABEL_38;
        }
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v43 = &EventRender;
LABEL_38:
        Template_p(v33, v43, v34, v147);
      }
LABEL_39:
      v42 = 0;
      goto LABEL_40;
    }
    v181 = 0LL;
    v42 = 0;
    v182 = 0LL;
    v179 = 0LL;
    v180 = 0LL;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
      Template_ppxppttqddddddddq(0LL, 0LL, v34, 0LL, v147);
LABEL_40:
    v152 = 0;
    v160.QuadPart = 0LL;
    v44 = *((_QWORD *)this + 2);
    v159 = 0LL;
    v151 = 0LL;
    v45 = *(_QWORD *)(v44 + 16);
    v183[1] = (struct _SLIST_ENTRY *)v45;
    ++*(_DWORD *)(v45 + 964);
    SListHead = (PSLIST_HEADER)(v45 + 944);
    v47 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v45 + 944));
    if ( !v47 )
    {
      ++*(_DWORD *)(v45 + 968);
      v47 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v45 + 992))(
                            *(unsigned int *)(v45 + 980),
                            *(unsigned int *)(v45 + 988),
                            *(unsigned int *)(v45 + 984),
                            v45 + 944);
    }
    v183[0] = v47;
    if ( !v47 )
    {
      v144 = WdLogNewEntry5_WdLowResource(v46);
      *(_QWORD *)(v144 + 24) = 549LL;
      WdLogEvent5_WdLowResource(v144);
      CVidSchSubmitData::~CVidSchSubmitData(v183);
      return 3221225495LL;
    }
    v48 = *(_QWORD *)(v45 + 16);
    if ( *(int *)(v48 + 1792) < 0x2000 )
      v49 = 1;
    else
      v49 = *(_DWORD *)(v48 + 248);
    if ( *(int *)(v48 + 1792) >= 0x2000 || *(_BYTE *)(v48 + 2076) )
      v50 = *(_DWORD *)(v48 + 2000) * (48 * v49 + ((8 * v49 + 167) & 0xFFFFFFF8)) + 8 * (v49 + 55);
    else
      v50 = 936;
    memset(v47, 0, v50);
    v51 = *(_QWORD *)(v45 + 16);
    v52 = *(_DWORD *)(v51 + 1792);
    if ( v52 < 0x2000 )
      v53 = 1LL;
    else
      v53 = *(unsigned int *)(v51 + 248);
    v54 = v52 >= 0x2000 || *(_BYTE *)(v51 + 2076);
    v55 = *(unsigned int *)(v51 + 2000);
    *((_BYTE *)&v47[21].Next + 12) = v54;
    if ( v54 )
    {
      *((_DWORD *)&v47[26].Next + 3) = v55;
      LODWORD(v47[27].Next) = v53;
      HIDWORD(v47[27].Next) = v55 * (48 * v53 + ((8 * v53 + 167) & 0xFFFFFFF8)) + 16;
      v56 = v55 * (48 * v53 + ((8 * v53 + 167) & 0xFFFFFFF8)) + 440;
      LODWORD(v47[26].Next) = v56;
      HIDWORD(v47[26].Next) = 8 * v53 + v56;
    }
    if ( (*((_DWORD *)this + 50) & 1) == 0
      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2072LL) & 2) == 0
      || (*(_DWORD *)&v9->Flags & 0x20) != 0 )
    {
      v57 = &v159;
      if ( !*((_BYTE *)this + 350) )
        v57 = 0LL;
      if ( (*(_DWORD *)&v9->Flags & 0x20) != 0 )
        pNewAllocationList = v9->pNewAllocationList;
      else
        pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)*((_QWORD *)this + 10);
      v59 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v60 = *(_QWORD *)(v59 + 400);
      AllocationCount = v154->AllocationCount;
      v155 = v147;
      Current = DXGPROCESS::GetCurrent(v59);
      v156 = Current;
      if ( Current )
      {
        v62 = (char *)Current + 112;
        if ( *((struct _KTHREAD **)Current + 15) == KeGetCurrentThread() )
        {
          v156 = 0LL;
        }
        else
        {
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v62, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v65 = *((_DWORD *)v62 + 4);
              if ( v65 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                Template_q(v63, &EventBlockThread, v64, v65);
            }
            ExAcquirePushLockExclusiveEx(v62, 0LL);
          }
          *((_QWORD *)v62 + 1) = KeGetCurrentThread();
        }
      }
      v66 = (*(int (__fastcall **)(struct _VIDMM_DMA_BUFFER *, D3DDDI_ALLOCATIONLIST *, _QWORD, _QWORD, int, UINT *, LARGE_INTEGER *, __int64 *, struct DXGPROCESS **, struct _SLIST_ENTRY **, PSLIST_ENTRY, struct DXGALLOCATION **))(*(_QWORD *)(v60 + 8) + 568LL))(
              v155,
              pNewAllocationList,
              AllocationCount,
              v148,
              v150,
              &v152,
              &v160,
              v57,
              &v156,
              &v151,
              v47 + 12,
              v176);
      v42 = 0;
      if ( v156 )
      {
        v67 = (char *)v156 + 112;
        *((_QWORD *)v156 + 15) = 0LL;
        ExReleasePushLockExclusiveEx(v67, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( (int)v66 < 0 )
      {
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 400LL)
                                                                               + 8LL)
                                                                   + 496LL))(
          v147,
          0LL);
        v147 = 0LL;
        v143 = WdLogNewEntry5_WdWarning(v140, v139, v141, v142);
        *(_QWORD *)(v143 + 24) = this;
        *(_QWORD *)(v143 + 32) = v66;
        WdLogEvent5_WdWarning(v143);
        CVidSchSubmitData::~CVidSchSubmitData(v183);
        return (unsigned int)v66;
      }
      v9 = v154;
    }
    v68 = *((_QWORD *)this + 2);
    v158 = 0LL;
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, void **, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v68 + 16) + 400LL)
                                                                                              + 8LL)
                                                                                  + 504LL))(
      v147,
      &v158,
      v53,
      v55);
    v175.pDmaBuffer = v158;
    v175.DmaSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                 + 400LL)
                                                                                     + 8LL)
                                                                         + 528LL))(v147);
    if ( !DXGCONTEXT::DisableDdiRenderAllocationList(this) || (*(_DWORD *)&v9->Flags & 0x20) != 0 )
    {
      v175.pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL) + 552LL))(v147);
      v175.AllocationListSize = v9->AllocationCount;
      v175.pPatchLocationListIn = (D3DDDI_PATCHLOCATIONLIST *)*((_QWORD *)this + 14);
      v175.PatchLocationListInSize = v9->PatchLocationCount;
      v175.pPatchLocationListOut = (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL) + 544LL))(v147);
      v175.PatchLocationListOutSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL)
                                                                                            + 536LL))(v147);
    }
    else
    {
      v175.pAllocationList = 0LL;
      v175.AllocationListSize = 0;
      v175.pPatchLocationListIn = 0LL;
      v175.PatchLocationListInSize = 0;
      v175.pPatchLocationListOut = 0LL;
      v175.PatchLocationListOutSize = 0;
    }
    v69 = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 400LL)
                                                                                    + 8LL)
                                                                        + 560LL))(v147);
    v70 = *((unsigned int *)this + 46);
    v175.DmaBufferSegmentId = v152;
    v175.DmaBufferPhysicalAddress = v160;
    v71 = (unsigned int)v9->Flags;
    v175.pDmaBufferPrivateData = v69;
    v175.DmaBufferPrivateDataSize = v70;
    if ( (v71 & 0x20) == 0 )
    {
      if ( (*((_DWORD *)this + 50) & 1) != 0
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2072LL) & 4) != 0 )
      {
        LODWORD(v72) = 0;
        goto LABEL_140;
      }
      v73 = ADAPTER_RENDER::DdiRender(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), *((void **)this + 21), &v175);
LABEL_139:
      LODWORD(v72) = v73;
      goto LABEL_140;
    }
    if ( !*((_BYTE *)this + 350) )
    {
      v73 = ADAPTER_RENDER::DdiRenderKm(
              *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
              *((void **)this + 21),
              &v175);
      goto LABEL_139;
    }
    v165 = (char *)v9->pNewCommandBuffer + v9->CommandOffset;
    CommandLength = v9->CommandLength;
    v171 = 0LL;
    pDmaBuffer = v175.pDmaBuffer;
    v168 = v159;
    DmaSize = v175.DmaSize;
    pAllocationList = v175.pAllocationList;
    AllocationListSize = v175.AllocationListSize;
    MultipassOffset = v175.MultipassOffset;
    v155 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + 21);
    v74 = *((_QWORD *)this + 2);
    v170 = v69;
    LODWORD(v171) = v70;
    v75 = *(_QWORD *)(v74 + 16);
    v157 = v75;
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v71, &EventProfilerEnter, v70, 5066);
    CurrentProcess = PsGetCurrentProcess(v71);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v77);
    v80 = ProcessDxgProcess + 88;
    if ( !ProcessDxgProcess )
      v80 = 0LL;
    AllocationCount = 0;
    if ( v80 && *(struct _KTHREAD **)(v80 + 8) == KeGetCurrentThread() )
    {
      v81 = WdLogNewEntry5_WdAssertion(v78);
      *(_QWORD *)(v81 + 24) = 1142LL;
      WdLogEvent5_WdAssertion(v81);
    }
    if ( ProcessDxgProcess )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v80, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v84 = *(_DWORD *)(v80 + 16);
          if ( v84 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q(v82, &EventBlockThread, v83, v84);
        }
        ExAcquirePushLockExclusiveEx(v80, 0LL);
      }
      *(_QWORD *)(v80 + 8) = KeGetCurrentThread();
      AllocationCount = 2;
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v75 + 16), 1);
    CurrentIrql = KeGetCurrentIrql();
    v86 = 0LL;
    if ( (unsigned __int8)CurrentIrql < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v88 = WdLogNewEntry5_WdAssertion(v85);
        *(_QWORD *)(v88 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v88);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      if ( CurrentProcessSessionId
        && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
        && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
        && *(_QWORD *)ThreadWin32Thread )
      {
        v86 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
        if ( v86 )
          v42 = *(_DWORD *)(v86 + 136);
      }
      else
      {
        v86 = 0LL;
      }
    }
    v72 = (*(int (__fastcall **)(struct _VIDMM_DMA_BUFFER *, char **))(*(_QWORD *)(v157 + 16) + 800LL))(v155, &v165);
    if ( (_BYTE)CurrentIrql != KeGetCurrentIrql() )
    {
      v95 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v92, v91, v93);
      v95[5] = v157;
      v95[6] = (unsigned __int8)CurrentIrql;
      v95[3] = 275LL;
      v95[4] = 16LL;
      v96 = KeGetCurrentIrql();
      v95[7] = v96;
      WdLogEvent5_WdCriticalError(v95);
    }
    if ( v86 && *(_DWORD *)(v86 + 136) != v42 )
    {
      v97 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v92, v91, v93);
      v97[3] = 275LL;
      v97[4] = 25LL;
      v97[5] = *(int *)(v86 + 136);
      v97[6] = v42;
      v97[7] = 0LL;
      WdLogEvent5_WdCriticalError(v97);
    }
    v98 = (_QWORD *)WdLogNewEntry5_WdTrace(v92, v91, v93, v94);
    v99 = v155;
    v98[3] = v72;
    v98[4] = v99;
    v98[5] = pDmaBuffer;
    v98[6] = (unsigned int)DmaSize;
    v100 = (__int64)pAllocationList;
    v98[7] = pAllocationList;
    if ( (unsigned int)(v72 + 1073741816) > 0xF || (v100 = 32801LL, !_bittest((const int *)&v100, v72 + 1073741816)) )
    {
      if ( (_DWORD)v72 != -1073741592 && (_DWORD)v72 != -1071775743 && (_DWORD)v72 != -1071775232 && (_DWORD)v72 )
      {
        v101 = WdLogNewEntry5_WdError(v100);
        *(_QWORD *)(v101 + 24) = v72;
        WdLogEvent5_WdError(v101);
      }
    }
    DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v157 + 16));
    if ( AllocationCount == 1 )
    {
      ExReleasePushLockSharedEx(v80, 0LL);
    }
    else
    {
      if ( AllocationCount != 2 )
        goto LABEL_134;
      *(_QWORD *)(v80 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v80, 0LL);
    }
    KeLeaveCriticalRegion();
LABEL_134:
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v102, &EventProfilerExit, v103, 5066);
    v175.pDmaBuffer = pDmaBuffer;
    v175.pDmaBufferPrivateData = v170;
    v175.MultipassOffset = MultipassOffset;
LABEL_140:
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, void *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 400LL)
                                                                           + 8LL)
                                                               + 512LL))(
      v147,
      v69);
    v107 = 0x80000000LL;
    if ( (int)(v72 + 0x80000000) >= 0 && (_DWORD)v72 != -1071775743 )
    {
      if ( v150 > 0 )
      {
        v127 = (unsigned int)v150;
        do
        {
          VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL),
            v147);
          (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 400LL)
                                                                                 + 8LL)
                                                                     + 496LL))(
            v147,
            0LL);
          --v127;
        }
        while ( v127 );
      }
      v147 = 0LL;
      v128 = WdLogNewEntry5_WdWarning(v107, v104, v105, v106);
      *(_QWORD *)(v128 + 32) = (int)v72;
      *(_QWORD *)(v128 + 24) = this;
      WdLogEvent5_WdWarning(v128);
      CVidSchSubmitData::~CVidSchSubmitData(v183);
      return (unsigned int)v72;
    }
    LODWORD(v108) = 0;
    v109 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 400LL)
                                                                             + 8LL)
                                                                 + 560LL))(v147);
    v110 = LODWORD(v175.pDmaBufferPrivateData) - v109;
    v111 = LODWORD(v175.pDmaBuffer) - (_DWORD)v158;
    if ( DXGCONTEXT::DisableDdiRenderAllocationList(this) )
    {
      v113 = 0LL;
    }
    else
    {
      v112 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 400LL)
                                                                               + 8LL)
                                                                   + 544LL))(v147);
      v108 = ((__int64)v175.pPatchLocationListOut - v112) / 24;
      v113 = v154->AllocationCount;
      AllocationCount = v154->AllocationCount;
      if ( (qword_1C0056840 & 0x10) != 0 )
      {
        v114 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 400LL)
                                                                                 + 8LL)
                                                                     + 544LL))(v147);
        TraceDxgkPatchLocationList((__int64)this, (__int64)v147, v108, v114);
        v113 = AllocationCount;
      }
    }
    v47->Next = v18;
    if ( *((_BYTE *)this + 350) )
    {
      LODWORD(v47->Next) |= 0x8000000u;
      *((_QWORD *)&v47[2].Next + 1) = v159;
    }
    v115 = 0LL;
    if ( (v153 & 0x20) != 0 )
    {
      LODWORD(v47->Next) ^= (LODWORD(v47->Next) ^ (((_DWORD)v72 == -1071775743) << 6)) & 0x40;
      LODWORD(v47->Next) = (__int64)v47->Next & 0xFFFFFBFF | (((v150 > 1) | 2) << 10);
      if ( *(_QWORD *)(*((_QWORD *)this + 2) + 2856LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
        HIDWORD(v47[7].Next) = 0;
    }
    *((_QWORD *)&v47->Next + 1) = v147;
    HIDWORD(v47[3].Next) = v111;
    LODWORD(v47[3].Next) = 0;
    *((_DWORD *)&v47[3].Next + 3) = v113;
    *((_DWORD *)&v47[3].Next + 2) = 0;
    HIDWORD(v47[4].Next) = v108;
    LODWORD(v47[4].Next) = 0;
    *((_DWORD *)&v47[4].Next + 3) = v110;
    *((_DWORD *)&v47[4].Next + 2) = 0;
    if ( v151 )
    {
      *((_DWORD *)&v47[21].Next + 2) = 1;
      v47[21].Next = (struct _SLIST_ENTRY *)&v151;
    }
    else
    {
      v47[21].Next = 0LL;
      *((_DWORD *)&v47[21].Next + 2) = 0;
    }
    v116 = 0;
    v117 = 0LL;
    if ( v162 > 0 )
      break;
LABEL_159:
    v125 = SListHead;
    v126 = SListHead;
    v148 = 0;
    ++*((_DWORD *)&SListHead[1].HeaderX64 + 3);
    if ( ExQueryDepthSList(v126) < LOWORD(v125[1].Alignment) )
    {
      ExpInterlockedPushEntrySList(v125, v47);
    }
    else
    {
      ++LODWORD(v125[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, PSLIST_HEADER))v125[3].Region)(v47, v125);
    }
    if ( (_DWORD)v72 != -1071775743 )
    {
      if ( (*(_DWORD *)&v154->Flags & 0x10) != 0 )
      {
        PresentHistoryToken = v154->PresentHistoryToken;
        v184.Model = D3DKMT_PM_REDIRECTED_VISTABLT;
        v184.Token.Flip.FenceValue = PresentHistoryToken;
        v134 = DXGCONTEXT::SubmitPresentHistoryToken(this, &v184, v164, v178, 0LL, 0, 0LL, 0LL, 0LL);
        v72 = v134;
        if ( (int)(v134 + 0x80000000) >= 0 && v134 != -1073741130 )
        {
          v138 = WdLogNewEntry5_WdWarning(0x80000000LL, v135, v136, v137);
          *(_QWORD *)(v138 + 24) = this;
          *(_QWORD *)(v138 + 32) = v72;
          WdLogEvent5_WdWarning(v138);
          LODWORD(v72) = 0;
        }
      }
      return (unsigned int)v72;
    }
    v9 = v154;
    v7 = v164;
  }
  while ( 1 )
  {
    v118 = KeGetCurrentThread();
    v119 = v163;
    if ( *((struct _KTHREAD **)v163[v117] + 46) != v118 )
    {
      v120 = WdLogNewEntry5_WdAssertion(v118);
      *(_QWORD *)(v120 + 24) = 798LL;
      WdLogEvent5_WdAssertion(v120);
    }
    v121 = (*(__int64 (__fastcall **)(_QWORD, PSLIST_ENTRY, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL)
                                                                                         + 8LL)
                                                                             + 344LL))(
             *((_QWORD *)v119[v117] + 27),
             v47,
             v113,
             v115);
    v124 = v121;
    if ( v121 < 0 )
      break;
    LODWORD(v47->Next) &= ~0x800u;
    ++v116;
    if ( ++v117 >= v162 )
      goto LABEL_159;
  }
  v129 = v116;
  if ( v116 >= 0 )
  {
    v130 = v163;
    do
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL)
                                                         + 8LL)
                                             + 352LL))(
        *((_QWORD *)v130[v129--] + 27),
        0LL);
    while ( v129 >= 0 );
  }
  if ( v116 < v150 )
  {
    v131 = (unsigned int)(v150 - v116);
    do
    {
      VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL),
        v147);
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 400LL)
                                                                             + 8LL)
                                                                 + 496LL))(
        v147,
        0LL);
      --v131;
    }
    while ( v131 );
  }
  v147 = 0LL;
  v132 = WdLogNewEntry5_WdWarning(v123, v122, v113, v115);
  *(_QWORD *)(v132 + 24) = this;
  *(_QWORD *)(v132 + 32) = v124;
  WdLogEvent5_WdWarning(v132);
  CVidSchSubmitData::~CVidSchSubmitData(v183);
  return (unsigned int)v124;
}
