/*
 * XREFs of ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0074DF0
 * Callers:
 *     DxgkRender @ 0x1C00763F0 (DxgkRender.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C00A4EA0 (-DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0124C68 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001B44 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00022B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002310 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000E5C0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     DxgkSqmCreateDwordStreamEntry @ 0x1C000F300 (DxgkSqmCreateDwordStreamEntry.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     TraceDxgkPatchLocationList @ 0x1C001E040 (TraceDxgkPatchLocationList.c)
 *     ?VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C001F0C8 (-VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     Template_ppxppttqddddddddq @ 0x1C001F4AC (Template_ppxppttqddddddddq.c)
 *     Template_p @ 0x1C001F9FC (Template_p.c)
 *     DxgkSqmCreateStringStreamEntry @ 0x1C001FAC0 (DxgkSqmCreateStringStreamEntry.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C005AEBC (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0073E60 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkSqmAddToStream @ 0x1C00DA220 (DxgkSqmAddToStream.c)
 *     ?DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z @ 0x1C0121E18 (-DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::Render(
        DXGCONTEXT *this,
        struct _D3DKMT_RENDER *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGCONTEXT **a4,
        struct DXGALLOCATION **a5)
{
  struct COREDEVICEACCESS *v5; // r13
  struct _D3DKMT_RENDER *v6; // r12
  signed int v7; // edi
  D3DKMT_RENDERFLAGS Flags; // eax
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
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
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdi
  int v39; // eax
  __int64 v40; // r14
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rax
  D3DKMT_RENDERFLAGS v44; // eax
  __int64 v45; // r15
  const EVENT_DESCRIPTOR *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rcx
  PSLIST_ENTRY v50; // r13
  __int64 v51; // rax
  int v52; // ecx
  unsigned int v53; // eax
  __int64 v54; // rcx
  int v55; // eax
  int v56; // edx
  bool v57; // al
  __int64 v58; // r8
  D3DGPU_VIRTUAL_ADDRESS *v59; // r14
  D3DDDI_ALLOCATIONLIST *pNewAllocationList; // r15
  __int64 v61; // r12
  struct DXGPROCESS *Current; // rax
  char *v63; // rdi
  __int64 v64; // rcx
  __int64 v65; // r8
  int v66; // r9d
  __int64 v67; // r14
  char *v68; // rcx
  __int64 v69; // rax
  void *v70; // rdx
  __int64 v71; // r8
  __int64 v72; // rcx
  __int64 v73; // r14
  __int64 CurrentProcess; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rdi
  __int64 v81; // rax
  int v82; // r12d
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // r8
  int v86; // r9d
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v93; // rax
  int CurrentProcessSessionId; // r14d
  __int64 ThreadWin32Thread; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  _QWORD *v100; // rax
  unsigned __int8 v101; // cl
  _QWORD *v102; // rax
  _QWORD *v103; // rax
  struct _VIDMM_DMA_BUFFER *v104; // rcx
  __int64 v105; // rcx
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // r8
  int v109; // r9d
  __int64 v110; // rax
  void *v111; // rdx
  __int64 v112; // r14
  __int64 v113; // rdi
  __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // rdi
  __int64 v120; // rax
  int v121; // r12d
  __int64 v122; // rax
  __int64 v123; // rcx
  __int64 v124; // r8
  int v125; // r9d
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // r8
  __int64 v129; // r9
  __int64 v130; // rdi
  struct _KTHREAD *v131; // rdi
  __int64 v132; // rax
  int v133; // r14d
  __int64 v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  _QWORD *v139; // rax
  unsigned __int8 v140; // cl
  _QWORD *v141; // rax
  _QWORD *v142; // rax
  __int64 v143; // rcx
  __int64 v144; // rcx
  __int64 v145; // rax
  __int64 v146; // rdx
  __int64 v147; // r8
  __int64 v148; // r9
  __int64 v149; // rcx
  __int64 v150; // rdi
  int v151; // eax
  __int64 v152; // rdx
  int v153; // r15d
  int v154; // r12d
  __int64 v155; // rax
  __int64 v156; // r8
  __int64 v157; // rax
  __int64 v158; // r9
  int v159; // r15d
  __int64 v160; // rdi
  struct _KTHREAD *v161; // rcx
  struct DXGCONTEXT **v162; // r12
  __int64 v163; // rax
  int v164; // eax
  __int64 v165; // rcx
  __int64 v166; // r12
  PSLIST_HEADER v167; // rdi
  union _SLIST_HEADER *v168; // rcx
  __int64 v169; // rbx
  __int64 v170; // rax
  char v171; // bl
  __int64 v172; // rcx
  const char *v173; // rax
  __int64 v174; // rbx
  struct DXGCONTEXT **v175; // rdi
  __int64 v176; // rbx
  __int64 v177; // rax
  UINT64 PresentHistoryToken; // rax
  int v179; // eax
  __int64 v180; // rdx
  __int64 v181; // r8
  __int64 v182; // r9
  __int64 v183; // rax
  __int64 v184; // rdx
  __int64 v185; // rcx
  __int64 v186; // r8
  __int64 v187; // r9
  __int64 v188; // rax
  char v189; // bl
  __int64 v190; // rcx
  const char *ProcessImageFileName; // rax
  __int64 v192; // rax
  __int64 v193; // rax
  int v194; // [rsp+20h] [rbp-100h]
  struct DXGK_PRESENT_PARAMS *v195; // [rsp+30h] [rbp-F0h]
  struct VIDSCH_SUBMIT_DATA_BASE *v196; // [rsp+38h] [rbp-E8h]
  struct _VIDMM_DMA_BUFFER *v197; // [rsp+A0h] [rbp-80h] BYREF
  unsigned int AllocationCount; // [rsp+A8h] [rbp-78h]
  unsigned __int8 v199; // [rsp+ACh] [rbp-74h]
  int v200; // [rsp+B0h] [rbp-70h]
  struct _VIDMM_DMA_BUFFER *v201; // [rsp+B8h] [rbp-68h]
  __int64 v202; // [rsp+C0h] [rbp-60h]
  struct _D3DKMT_RENDER *v203; // [rsp+C8h] [rbp-58h]
  __int64 CurrentIrql; // [rsp+D0h] [rbp-50h]
  __int64 v205; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v206; // [rsp+E0h] [rbp-40h] BYREF
  int v207; // [rsp+E8h] [rbp-38h] BYREF
  struct DXGPROCESS *v208; // [rsp+F0h] [rbp-30h] BYREF
  struct DXGCONTEXT **v209; // [rsp+F8h] [rbp-28h]
  struct _UNICODE_STRING v210; // [rsp+100h] [rbp-20h] BYREF
  struct COREDEVICEACCESS *v211; // [rsp+110h] [rbp-10h]
  struct _UNICODE_STRING UnicodeString; // [rsp+118h] [rbp-8h] BYREF
  D3DGPU_VIRTUAL_ADDRESS v213; // [rsp+128h] [rbp+8h] BYREF
  __int64 v214; // [rsp+130h] [rbp+10h]
  char *v215; // [rsp+140h] [rbp+20h] BYREF
  UINT CommandLength; // [rsp+148h] [rbp+28h]
  _QWORD v217[12]; // [rsp+150h] [rbp+30h] BYREF
  _DXGKARG_RENDERGDI v218; // [rsp+1B0h] [rbp+90h] BYREF
  PSLIST_HEADER SListHead; // [rsp+200h] [rbp+E0h]
  __int64 v220; // [rsp+208h] [rbp+E8h] BYREF
  struct DXGALLOCATION **v221; // [rsp+210h] [rbp+F0h]
  struct _SLIST_ENTRY *v222[2]; // [rsp+218h] [rbp+F8h] BYREF
  struct _STRING DestinationString; // [rsp+228h] [rbp+108h] BYREF
  struct _STRING SourceString; // [rsp+238h] [rbp+118h] BYREF
  _BYTE v225[16]; // [rsp+248h] [rbp+128h] BYREF
  int v226[4]; // [rsp+258h] [rbp+138h] BYREF
  _BYTE v227[16]; // [rsp+268h] [rbp+148h] BYREF
  int v228[6]; // [rsp+278h] [rbp+158h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN v229; // [rsp+290h] [rbp+170h] BYREF

  v5 = a3;
  v6 = a2;
  v7 = a2->BroadcastContextCount + 1;
  v221 = a5;
  Flags = a2->Flags;
  v209 = a4;
  v211 = a3;
  v10 = ((*(_BYTE *)&Flags & 8) << 13) | 0x200;
  v203 = a2;
  v199 = 1;
  v200 = v7;
  if ( (*(_BYTE *)&Flags & 0x10) != 0 )
  {
    v10 = ((*(_BYTE *)&Flags & 8) << 13) | 0x340;
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
    v7 = v200;
  }
  if ( (*(_DWORD *)&v6->Flags & 0x20) != 0 )
    pNewCommandBuffer = (char *)v6->pNewCommandBuffer;
  else
    pNewCommandBuffer = (char *)*((_QWORD *)this + 7);
  v215 = &pNewCommandBuffer[v6->CommandOffset];
  CommandLength = v6->CommandLength;
  memset(v217, 0, sizeof(v217));
  v214 = v7;
  while ( 1 )
  {
    v20 = *((_QWORD *)this + 2);
    v197 = 0LL;
    ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v20 + 80));
    v22 = *((_DWORD *)this + 24);
    v23 = 3;
    if ( *((_DWORD *)this + 16) > 3u )
      v23 = *((_DWORD *)this + 16);
    if ( !*((_QWORD *)this + 26) )
    {
      LODWORD(v196) = *((_DWORD *)this + 24);
      LODWORD(v195) = v23;
      LOBYTE(v194) = 1;
      v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, int, _DWORD, struct DXGK_PRESENT_PARAMS *, struct VIDSCH_SUBMIT_DATA_BASE *, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL) + 416LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
              *((unsigned int *)this + 82),
              *(_QWORD *)(*((_QWORD *)this + 2) + 536LL),
              this,
              v194,
              *((_DWORD *)this + 44),
              v195,
              v196,
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
        goto LABEL_24;
      }
      LODWORD(v32) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                            + 16LL)
                                                                                + 400LL)
                                                                    + 8LL)
                                                        + 424LL))(v24);
      if ( (int)v32 < 0 )
        goto LABEL_14;
      *((_DWORD *)this + 47) = v23;
      *((_DWORD *)this + 48) = v22;
    }
    v38 = *((_QWORD *)this + 26);
    LOBYTE(v21) = 1;
    v39 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL)
                                                                                           + 472LL))(
            v38,
            v21,
            0LL,
            &v197);
    v40 = v39;
    if ( v39 == -1071775486 )
    {
      if ( v5 )
      {
        COREDEVICEACCESS::Release(v5);
        LODWORD(v40) = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL) + 472LL))(
                         v38,
                         0LL,
                         0LL,
                         &v197);
        v41 = COREDEVICEACCESS::AcquireShared(v5);
        v32 = v41;
        if ( v41 < 0 )
        {
          v42 = WdLogNewEntry5_WdEvent(v35, v34, v36, v37);
          *(_QWORD *)(v42 + 24) = this;
          *(_QWORD *)(v42 + 32) = v32;
          WdLogEvent5_WdEvent(v42);
          goto LABEL_24;
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
LABEL_24:
    if ( (int)v32 < 0 )
    {
      v193 = WdLogNewEntry5_WdEvent(v35, v34, v36, v37);
      *(_QWORD *)(v193 + 32) = (int)v32;
      *(_QWORD *)(v193 + 24) = this;
      WdLogEvent5_WdEvent(v193);
      return (unsigned int)v32;
    }
    if ( !bTracingEnabled )
      goto LABEL_35;
    v44 = v6->Flags;
    if ( (*(_BYTE *)&v44 & 0x10) == 0 )
    {
      if ( (*(_BYTE *)&v44 & 0x20) != 0 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          v46 = (const EVENT_DESCRIPTOR *)&EventRenderKm;
          goto LABEL_34;
        }
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      {
        v46 = &EventRender;
LABEL_34:
        Template_p(v35, v46, v36, v197);
      }
LABEL_35:
      v45 = 0LL;
      goto LABEL_36;
    }
    v45 = 0LL;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      HIDWORD(v196) = 0;
      HIDWORD(v195) = 0;
      Template_ppxppttqddddddddq(v35, v34, v36, 0LL, v197);
    }
LABEL_36:
    v47 = *((_QWORD *)this + 2);
    v205 = 0LL;
    v48 = *(_QWORD *)(v47 + 16);
    v222[1] = (struct _SLIST_ENTRY *)v48;
    ++*(_DWORD *)(v48 + 964);
    SListHead = (PSLIST_HEADER)(v48 + 944);
    v50 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v48 + 944));
    if ( !v50 )
    {
      ++*(_DWORD *)(v48 + 968);
      v50 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v48 + 992))(
                            *(unsigned int *)(v48 + 980),
                            *(unsigned int *)(v48 + 988),
                            *(unsigned int *)(v48 + 984),
                            v48 + 944);
    }
    v222[0] = v50;
    if ( !v50 )
    {
      v192 = WdLogNewEntry5_WdLowResource(v49);
      *(_QWORD *)(v192 + 24) = 542LL;
      WdLogEvent5_WdLowResource(v192);
      LODWORD(v67) = -1073741801;
LABEL_239:
      CVidSchSubmitData::~CVidSchSubmitData(v222);
      return (unsigned int)v67;
    }
    v51 = *(_QWORD *)(v48 + 16);
    if ( *(int *)(v51 + 1648) < 0x2000 )
      v52 = 1;
    else
      v52 = *(_DWORD *)(v51 + 232);
    if ( *(int *)(v51 + 1648) >= 0x2000 || *(_BYTE *)(v51 + 1932) )
      v53 = v52 * (56 * *(_DWORD *)(v51 + 1856) + 8) + 376;
    else
      v53 = 808;
    memset(v50, 0, v53);
    v54 = *(_QWORD *)(v48 + 16);
    v55 = *(_DWORD *)(v54 + 1648);
    if ( v55 < 0x2000 )
      v56 = 1;
    else
      v56 = *(_DWORD *)(v54 + 232);
    v57 = v55 >= 0x2000 || *(_BYTE *)(v54 + 1932);
    v58 = *(unsigned int *)(v54 + 1856);
    *((_BYTE *)&v50[21].Next + 12) = v57;
    if ( v57 )
    {
      *((_DWORD *)&v50[22].Next + 3) = v58;
      LODWORD(v50[23].Next) = v56;
      HIDWORD(v50[23].Next) = 56 * v58 * v56 + 16;
      LODWORD(v50[22].Next) = 56 * v58 * v56 + 376;
      HIDWORD(v50[22].Next) = 56 * v58 * v56 + 376 + 8 * v56;
    }
    if ( (*((_DWORD *)this + 50) & 1) == 0
      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 1928LL) & 2) == 0
      || (*(_DWORD *)&v6->Flags & 0x20) != 0 )
    {
      v59 = &v213;
      if ( !*((_BYTE *)this + 350) )
        v59 = 0LL;
      if ( (*(_DWORD *)&v6->Flags & 0x20) != 0 )
        pNewAllocationList = v6->pNewAllocationList;
      else
        pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)*((_QWORD *)this + 10);
      v61 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL);
      AllocationCount = v203->AllocationCount;
      v201 = v197;
      Current = DXGPROCESS::GetCurrent();
      v208 = Current;
      if ( Current )
      {
        v63 = (char *)Current + 120;
        if ( *((struct _KTHREAD **)Current + 16) == KeGetCurrentThread() )
        {
          v208 = 0LL;
        }
        else
        {
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v63, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v66 = *((_DWORD *)v63 + 4);
              if ( v66 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                Template_q(v64, &EventBlockThread, v65, v66);
            }
            ExAcquirePushLockExclusiveEx(v63, 0LL);
          }
          *((_QWORD *)v63 + 1) = KeGetCurrentThread();
        }
      }
      v67 = (*(int (__fastcall **)(struct _VIDMM_DMA_BUFFER *, D3DDDI_ALLOCATIONLIST *, _QWORD, _QWORD, int, int *, __int64 *, D3DGPU_VIRTUAL_ADDRESS *, struct DXGPROCESS **, __int64 *, PSLIST_ENTRY, struct DXGALLOCATION **))(*(_QWORD *)(v61 + 8) + 552LL))(
              v201,
              pNewAllocationList,
              AllocationCount,
              v199,
              v200,
              &v207,
              &v220,
              v59,
              &v208,
              &v205,
              v50 + 12,
              v221);
      v45 = 0LL;
      if ( v208 )
      {
        v68 = (char *)v208 + 120;
        *((_QWORD *)v208 + 16) = 0LL;
        ExReleasePushLockExclusiveEx(v68, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( (int)v67 < 0 )
      {
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 400LL)
                                                                               + 8LL)
                                                                   + 480LL))(
          v197,
          0LL);
        v197 = 0LL;
        v188 = WdLogNewEntry5_WdWarning(v185, v184, v186, v187);
        *(_QWORD *)(v188 + 24) = this;
        *(_QWORD *)(v188 + 32) = v67;
        WdLogEvent5_WdWarning(v188);
        v189 = 0;
        *(_QWORD *)&v210.Length = 0LL;
        v210.Buffer = 0LL;
        v190 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 56LL);
        if ( v190
          && (ProcessImageFileName = (const char *)PsGetProcessImageFileName(v190),
              RtlInitAnsiString(&SourceString, ProcessImageFileName),
              RtlAnsiStringToUnicodeString(&v210, &SourceString, 1u) >= 0) )
        {
          v189 = 1;
        }
        else
        {
          RtlInitUnicodeString(&v210, L"<Unknown>");
        }
        DxgkSqmCreateStringStreamEntry((__int64)v227, v210.Buffer);
        DxgkSqmCreateDwordStreamEntry(v228, 32);
        DxgkSqmAddToStream(4783LL, 2LL, v227);
        if ( v189 )
        {
          RtlFreeUnicodeString(&v210);
          CVidSchSubmitData::~CVidSchSubmitData(v222);
          return (unsigned int)v67;
        }
        goto LABEL_239;
      }
      v6 = v203;
    }
    v69 = *((_QWORD *)this + 2);
    v206 = 0LL;
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v69 + 16) + 400LL)
                                                                                       + 8LL)
                                                                           + 488LL))(
      v197,
      &v206,
      v58);
    v217[0] = v206;
    LODWORD(v217[1]) = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL)
                                                                                         + 8LL)
                                                                             + 512LL))(v197);
    if ( (*((_DWORD *)this + 50) & 1) != 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 1928LL) & 8) != 0
      && (*(_DWORD *)&v6->Flags & 0x20) == 0 )
    {
      v217[4] = 0LL;
      LODWORD(v217[5]) = 0;
      v217[6] = 0LL;
      LODWORD(v217[7]) = 0;
      v217[8] = 0LL;
      LODWORD(v217[9]) = 0;
    }
    else
    {
      v217[4] = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 400LL)
                                                                                  + 8LL)
                                                                      + 536LL))(v197);
      LODWORD(v217[5]) = v6->AllocationCount;
      v217[6] = *((_QWORD *)this + 14);
      LODWORD(v217[7]) = v6->PatchLocationCount;
      v217[8] = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 400LL)
                                                                                  + 8LL)
                                                                      + 528LL))(v197);
      LODWORD(v217[9]) = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL)
                                                                                           + 8LL)
                                                                               + 520LL))(v197);
    }
    v70 = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 400LL)
                                                                                    + 8LL)
                                                                        + 544LL))(v197);
    v71 = *((unsigned int *)this + 46);
    LODWORD(v217[10]) = v207;
    v217[11] = v220;
    v72 = (unsigned int)v6->Flags;
    v217[2] = v70;
    LODWORD(v217[3]) = v71;
    if ( (v72 & 0x20) == 0 )
    {
      if ( (*((_DWORD *)this + 50) & 1) != 0 )
      {
        v72 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 1928LL);
        if ( (v72 & 4) != 0 )
        {
          LODWORD(v67) = 0;
          goto LABEL_186;
        }
      }
      v201 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + 21);
      v73 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v202 = v73;
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v72, &EventProfilerEnter, v71, 5030);
      CurrentProcess = PsGetCurrentProcess(v72);
      ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
      if ( ProcessWin32Process )
      {
        v80 = *(_QWORD *)(ProcessWin32Process + 248);
        if ( v80 )
          v45 = v80 + 96;
      }
      else
      {
        v81 = WdLogNewEntry5_WdEvent(v77, v76, v78, v79);
        *(_QWORD *)(v81 + 24) = CurrentProcess;
        WdLogEvent5_WdEvent(v81);
        v80 = 0LL;
      }
      v82 = 0;
      AllocationCount = 0;
      if ( v45 && *(struct _KTHREAD **)(v45 + 8) == KeGetCurrentThread() )
      {
        v83 = WdLogNewEntry5_WdAssertion(v77, v76, v78, v79);
        *(_QWORD *)(v83 + 24) = 1135LL;
        WdLogEvent5_WdAssertion(v83);
      }
      if ( v80 )
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v45, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v86 = *(_DWORD *)(v45 + 16);
            if ( v86 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
              Template_q(v84, &EventBlockThread, v85, v86);
          }
          ExAcquirePushLockExclusiveEx(v45, 0LL);
        }
        *(_QWORD *)(v45 + 8) = KeGetCurrentThread();
        AllocationCount = 2;
      }
      DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v73 + 16), 1);
      CurrentIrql = KeGetCurrentIrql();
      v91 = 0LL;
      if ( (unsigned __int8)CurrentIrql < 2u )
      {
        CurrentThread = KeGetCurrentThread();
        if ( !CurrentThread )
        {
          v93 = WdLogNewEntry5_WdAssertion(v88, v87, v89, v90);
          *(_QWORD *)(v93 + 24) = 92LL;
          WdLogEvent5_WdAssertion(v93);
        }
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v88, v87, v89, v90);
        if ( CurrentProcessSessionId
          && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
          && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
          && *(_QWORD *)ThreadWin32Thread )
        {
          v91 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
          if ( v91 )
            v82 = *(_DWORD *)(v91 + 136);
        }
        else
        {
          v91 = 0LL;
        }
      }
      v67 = (*(int (__fastcall **)(struct _VIDMM_DMA_BUFFER *, char **))(*(_QWORD *)(v202 + 16) + 584LL))(v201, &v215);
      if ( (_BYTE)CurrentIrql != KeGetCurrentIrql() )
      {
        v100 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v97, v96, v98);
        v100[5] = v202;
        v100[6] = (unsigned __int8)CurrentIrql;
        v100[3] = 275LL;
        v100[4] = 16LL;
        v101 = KeGetCurrentIrql();
        v100[7] = v101;
        WdLogEvent5_WdCriticalError(v100);
      }
      if ( v91 && *(_DWORD *)(v91 + 136) != v82 )
      {
        v102 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v97, v96, v98);
        v102[3] = 275LL;
        v102[4] = 25LL;
        v102[5] = *(int *)(v91 + 136);
        v102[6] = v82;
        v102[7] = 0LL;
        WdLogEvent5_WdCriticalError(v102);
      }
      v103 = (_QWORD *)WdLogNewEntry5_WdTrace(v97, v96, v98, v99);
      v104 = v201;
      v103[3] = v67;
      v103[4] = v104;
      v103[5] = v217[0];
      v103[6] = LODWORD(v217[1]);
      v105 = v217[4];
      v103[7] = v217[4];
      if ( (unsigned int)(v67 + 1073741816) > 0x15
        || (v105 = 2129953LL, !_bittest((const int *)&v105, v67 + 1073741816)) )
      {
        if ( (_DWORD)v67 != -1073741674
          && (_DWORD)v67 != -1073741592
          && (_DWORD)v67 != -1071775743
          && (_DWORD)v67 != -1071775232
          && (_DWORD)v67 )
        {
          v106 = WdLogNewEntry5_WdError(v105);
          *(_QWORD *)(v106 + 24) = v67;
          WdLogEvent5_WdError(v106);
        }
      }
      DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v202 + 16));
      if ( AllocationCount == 1 )
      {
        ExReleasePushLockSharedEx(v45, 0LL);
      }
      else
      {
        if ( AllocationCount != 2 )
        {
LABEL_132:
          if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          {
            v109 = 5030;
LABEL_185:
            Template_q(v107, &EventProfilerExit, v108, v109);
            goto LABEL_186;
          }
          goto LABEL_186;
        }
        *(_QWORD *)(v45 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v45, 0LL);
      }
      KeLeaveCriticalRegion();
      goto LABEL_132;
    }
    if ( *((_BYTE *)this + 350) )
    {
      v218.pCommand = (char *)v6->pNewCommandBuffer + v6->CommandOffset;
      v218.CommandLength = v6->CommandLength;
      *(&v218.DmaSize + 1) = 0;
      *(_QWORD *)&v218.DmaBufferPrivateDataSize = 0LL;
      v218.pDmaBuffer = (void *)v217[0];
      v218.DmaBufferGpuVirtualAddress = v213;
      v218.DmaSize = v217[1];
      v218.pAllocationList = (DXGK_ALLOCATIONLIST *)v217[4];
      v218.AllocationListSize = v217[5];
      v218.MultipassOffset = HIDWORD(v217[9]);
      v110 = *((_QWORD *)this + 2);
      v218.pDmaBufferPrivateData = v70;
      v111 = (void *)*((_QWORD *)this + 21);
      v218.DmaBufferPrivateDataSize = v71;
      LODWORD(v67) = ADAPTER_RENDER::DdiRenderGdi(*(ADAPTER_RENDER **)(v110 + 16), v111, &v218);
      v217[0] = v218.pDmaBuffer;
      v217[2] = v218.pDmaBufferPrivateData;
      HIDWORD(v217[9]) = v218.MultipassOffset;
      goto LABEL_186;
    }
    CurrentIrql = *((_QWORD *)this + 21);
    v112 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    v202 = v112;
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v72, &EventProfilerEnter, v71, 5045);
    v113 = PsGetCurrentProcess(v72);
    v114 = PsGetProcessWin32Process(v113);
    if ( v114 )
    {
      v119 = *(_QWORD *)(v114 + 248);
      if ( v119 )
        v45 = v119 + 96;
    }
    else
    {
      v120 = WdLogNewEntry5_WdEvent(v116, v115, v117, v118);
      *(_QWORD *)(v120 + 24) = v113;
      WdLogEvent5_WdEvent(v120);
      v119 = 0LL;
    }
    v121 = 0;
    AllocationCount = 0;
    if ( v45 && *(struct _KTHREAD **)(v45 + 8) == KeGetCurrentThread() )
    {
      v122 = WdLogNewEntry5_WdAssertion(v116, v115, v117, v118);
      *(_QWORD *)(v122 + 24) = 1135LL;
      WdLogEvent5_WdAssertion(v122);
    }
    if ( v119 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v45, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v125 = *(_DWORD *)(v45 + 16);
          if ( v125 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_q(v123, &EventBlockThread, v124, v125);
        }
        ExAcquirePushLockExclusiveEx(v45, 0LL);
      }
      *(_QWORD *)(v45 + 8) = KeGetCurrentThread();
      AllocationCount = 2;
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v112 + 16), 1);
    v201 = (struct _VIDMM_DMA_BUFFER *)KeGetCurrentIrql();
    v130 = 0LL;
    if ( (unsigned __int8)v201 < 2u )
    {
      v131 = KeGetCurrentThread();
      if ( !v131 )
      {
        v132 = WdLogNewEntry5_WdAssertion(v127, v126, v128, v129);
        *(_QWORD *)(v132 + 24) = 92LL;
        WdLogEvent5_WdAssertion(v132);
      }
      v133 = PsGetCurrentProcessSessionId(v127, v126, v128, v129);
      if ( v133
        && (unsigned int)PsGetThreadSessionId(v131) == v133
        && (v134 = PsGetThreadWin32Thread(v131)) != 0
        && *(_QWORD *)v134 )
      {
        v130 = *(_QWORD *)(*(_QWORD *)v134 + 80LL);
        if ( v130 )
          v121 = *(_DWORD *)(v130 + 136);
      }
      else
      {
        v130 = 0LL;
      }
    }
    v67 = (*(int (__fastcall **)(__int64, char **))(*(_QWORD *)(v202 + 16) + 648LL))(CurrentIrql, &v215);
    if ( (_BYTE)v201 != KeGetCurrentIrql() )
    {
      v139 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v136, v135, v137);
      v139[5] = v202;
      v139[6] = (unsigned __int8)v201;
      v139[3] = 275LL;
      v139[4] = 16LL;
      v140 = KeGetCurrentIrql();
      v139[7] = v140;
      WdLogEvent5_WdCriticalError(v139);
    }
    if ( v130 && *(_DWORD *)(v130 + 136) != v121 )
    {
      v141 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v136, v135, v137);
      v141[3] = 275LL;
      v141[4] = 25LL;
      v141[5] = *(int *)(v130 + 136);
      v141[6] = v121;
      v141[7] = 0LL;
      WdLogEvent5_WdCriticalError(v141);
    }
    v142 = (_QWORD *)WdLogNewEntry5_WdTrace(v136, v135, v137, v138);
    v143 = CurrentIrql;
    v142[3] = v67;
    v142[4] = v143;
    v142[5] = v217[0];
    v142[6] = LODWORD(v217[1]);
    v144 = v217[4];
    v142[7] = v217[4];
    if ( (unsigned int)(v67 + 1073741816) > 0xF || (v144 = 32801LL, !_bittest((const int *)&v144, v67 + 1073741816)) )
    {
      if ( (_DWORD)v67 != -1073741592 && (_DWORD)v67 != -1071775743 && (_DWORD)v67 != -1071775232 && (_DWORD)v67 )
      {
        v145 = WdLogNewEntry5_WdError(v144);
        *(_QWORD *)(v145 + 24) = v67;
        WdLogEvent5_WdError(v145);
      }
    }
    DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v202 + 16));
    if ( AllocationCount == 1 )
    {
      ExReleasePushLockSharedEx(v45, 0LL);
LABEL_181:
      KeLeaveCriticalRegion();
      goto LABEL_182;
    }
    if ( AllocationCount == 2 )
    {
      *(_QWORD *)(v45 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v45, 0LL);
      goto LABEL_181;
    }
LABEL_182:
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    {
      v109 = 5045;
      goto LABEL_185;
    }
LABEL_186:
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, void *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 400LL)
                                                                           + 8LL)
                                                               + 496LL))(
      v197,
      v70);
    v149 = 0x80000000LL;
    if ( (int)(v67 + 0x80000000) >= 0 && (_DWORD)v67 != -1071775743 )
    {
      if ( v200 > 0 )
      {
        v169 = (unsigned int)v200;
        do
        {
          VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL),
            v197);
          (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 400LL)
                                                                                 + 8LL)
                                                                     + 480LL))(
            v197,
            0LL);
          --v169;
        }
        while ( v169 );
      }
      v197 = 0LL;
      v170 = WdLogNewEntry5_WdWarning(v149, v146, v147, v148);
      *(_QWORD *)(v170 + 32) = (int)v67;
      *(_QWORD *)(v170 + 24) = this;
      WdLogEvent5_WdWarning(v170);
      v171 = 0;
      *(_QWORD *)&UnicodeString.Length = 0LL;
      UnicodeString.Buffer = 0LL;
      v172 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 56LL);
      if ( v172
        && (v173 = (const char *)PsGetProcessImageFileName(v172),
            RtlInitAnsiString(&DestinationString, v173),
            RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0) )
      {
        v171 = 1;
      }
      else
      {
        RtlInitUnicodeString(&UnicodeString, L"<Unknown>");
      }
      DxgkSqmCreateStringStreamEntry((__int64)v225, UnicodeString.Buffer);
      DxgkSqmCreateDwordStreamEntry(v226, 1);
      DxgkSqmAddToStream(4783LL, 2LL, v225);
      if ( v171 )
      {
        RtlFreeUnicodeString(&UnicodeString);
        CVidSchSubmitData::~CVidSchSubmitData(v222);
        return (unsigned int)v67;
      }
      goto LABEL_239;
    }
    LODWORD(v150) = 0;
    v151 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 400LL)
                                                                             + 8LL)
                                                                 + 544LL))(v197);
    v153 = LODWORD(v217[2]) - v151;
    v154 = LODWORD(v217[0]) - v206;
    if ( (*((_DWORD *)this + 50) & 1) != 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 1928LL) & 8) != 0 )
    {
      v156 = 0LL;
    }
    else
    {
      v155 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 400LL)
                                                                               + 8LL)
                                                                   + 528LL))(v197);
      v152 = (unsigned __int128)((v217[8] - v155) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
      v150 = (v217[8] - v155) / 24;
      v156 = v203->AllocationCount;
      AllocationCount = v203->AllocationCount;
      if ( (qword_1C00467F0 & 0x10) != 0 )
      {
        v157 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 400LL)
                                                                                 + 8LL)
                                                                     + 528LL))(v197);
        TraceDxgkPatchLocationList((__int64)this, (__int64)v197, v150, v157);
        v156 = AllocationCount;
      }
    }
    LODWORD(v50->Next) = v10;
    if ( *((_BYTE *)this + 350) )
    {
      LODWORD(v50->Next) = v10 | 0x10000000;
      *((_QWORD *)&v50[2].Next + 1) = v213;
    }
    v158 = 0LL;
    if ( (v10 & 0x40) != 0 )
    {
      LODWORD(v50->Next) ^= (LODWORD(v50->Next) ^ (((_DWORD)v67 == -1071775743) << 7)) & 0x80;
      LODWORD(v50->Next) = (__int64)v50->Next & 0xFFFFF7FF | (((v200 > 1) | 2) << 11);
      v152 = *((_QWORD *)this + 2);
      if ( *(_QWORD *)(v152 + 18704) != *(_QWORD *)(*(_QWORD *)(v152 + 16) + 16LL) )
        HIDWORD(v50[7].Next) = 0;
    }
    *((_QWORD *)&v50->Next + 1) = v197;
    HIDWORD(v50[3].Next) = v154;
    LODWORD(v50[3].Next) = 0;
    *((_DWORD *)&v50[3].Next + 3) = v156;
    *((_DWORD *)&v50[3].Next + 2) = 0;
    HIDWORD(v50[4].Next) = v150;
    LODWORD(v50[4].Next) = 0;
    *((_DWORD *)&v50[4].Next + 3) = v153;
    *((_DWORD *)&v50[4].Next + 2) = 0;
    if ( v205 )
    {
      *((_DWORD *)&v50[21].Next + 2) = 1;
      v50[21].Next = (struct _SLIST_ENTRY *)&v205;
    }
    else
    {
      v50[21].Next = 0LL;
      *((_DWORD *)&v50[21].Next + 2) = 0;
    }
    v159 = 0;
    v160 = 0LL;
    if ( v214 > 0 )
      break;
LABEL_206:
    v167 = SListHead;
    v168 = SListHead;
    v199 = 0;
    ++*((_DWORD *)&SListHead[1].HeaderX64 + 3);
    if ( ExQueryDepthSList(v168) < LOWORD(v167[1].Alignment) )
    {
      ExpInterlockedPushEntrySList(v167, v50);
    }
    else
    {
      ++LODWORD(v167[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, PSLIST_HEADER))v167[3].Region)(v50, v167);
    }
    if ( (_DWORD)v67 != -1071775743 )
    {
      if ( (*(_DWORD *)&v203->Flags & 0x10) != 0 )
      {
        PresentHistoryToken = v203->PresentHistoryToken;
        v229.Model = D3DKMT_PM_REDIRECTED_VISTABLT;
        v229.Token.Flip.FenceValue = PresentHistoryToken;
        v179 = DXGCONTEXT::SubmitPresentHistoryToken(this, &v229, v211, 0LL, 0, 0LL, 0LL, 0LL);
        v67 = v179;
        if ( (int)(v179 + 0x80000000) >= 0 && v179 != -1073741130 )
        {
          v183 = WdLogNewEntry5_WdWarning(0x80000000LL, v180, v181, v182);
          *(_QWORD *)(v183 + 24) = this;
          *(_QWORD *)(v183 + 32) = v67;
          WdLogEvent5_WdWarning(v183);
          LODWORD(v67) = 0;
        }
      }
      return (unsigned int)v67;
    }
    v6 = v203;
    v5 = v211;
  }
  while ( 1 )
  {
    v161 = KeGetCurrentThread();
    v162 = v209;
    if ( *((struct _KTHREAD **)v209[v160] + 46) != v161 )
    {
      v163 = WdLogNewEntry5_WdAssertion(v161, v152, v156, v158);
      *(_QWORD *)(v163 + 24) = 801LL;
      WdLogEvent5_WdAssertion(v163);
    }
    v164 = (*(__int64 (__fastcall **)(_QWORD, PSLIST_ENTRY, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL)
                                                                                         + 8LL)
                                                                             + 344LL))(
             *((_QWORD *)v162[v160] + 27),
             v50,
             v156,
             v158);
    v166 = v164;
    if ( v164 < 0 )
      break;
    LODWORD(v50->Next) &= ~0x1000u;
    ++v159;
    if ( ++v160 >= v214 )
      goto LABEL_206;
  }
  v174 = v159;
  if ( v159 >= 0 )
  {
    v175 = v209;
    do
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL)
                                                         + 8LL)
                                             + 352LL))(
        *((_QWORD *)v175[v174--] + 27),
        0LL);
    while ( v174 >= 0 );
  }
  if ( v159 < v200 )
  {
    v176 = (unsigned int)(v200 - v159);
    do
    {
      VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL),
        v197);
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 400LL)
                                                                             + 8LL)
                                                                 + 480LL))(
        v197,
        0LL);
      --v176;
    }
    while ( v176 );
  }
  v197 = 0LL;
  v177 = WdLogNewEntry5_WdWarning(v165, v152, v156, v158);
  *(_QWORD *)(v177 + 24) = this;
  *(_QWORD *)(v177 + 32) = v166;
  WdLogEvent5_WdWarning(v177);
  CVidSchSubmitData::~CVidSchSubmitData(v222);
  return (unsigned int)v166;
}
