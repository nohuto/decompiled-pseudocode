/*
 * XREFs of ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0174A10
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C00B3800 (-DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0009F8C (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0009FD8 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     Template_p @ 0x1C00111E4 (Template_p.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?VidMmReferenceDmaBuffer@VIDMM_EXPORT@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C001CED0 (-VidMmReferenceDmaBuffer@VIDMM_EXPORT@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@I.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0021384 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0025E00 (-VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00747A8 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00A75D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00AEF28 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z @ 0x1C014419C (-DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::RenderKmLda(
        struct _D3DKMT_RENDER *a1,
        struct COREDEVICEACCESS *a2,
        struct DXGCONTEXT **a3,
        struct DXGALLOCATION **a4)
{
  struct DXGCONTEXT *v4; // rax
  struct _D3DKMT_RENDER *v5; // r13
  struct DXGCONTEXT **v6; // r15
  __int64 v7; // r10
  __int64 CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 ProcessDxgProcess; // rax
  ULONG BroadcastContextCount; // edi
  struct _D3DDDI_ALLOCATIONLIST *v12; // r14
  int v13; // edi
  unsigned __int64 AllocationCount; // rbx
  struct _D3DDDI_ALLOCATIONLIST *PoolWithTag; // r14
  __int64 v16; // rdi
  unsigned __int64 v17; // rbx
  struct DXGALLOCATION **v18; // rsi
  struct DXGALLOCATION **v19; // rsi
  __int64 v20; // r12
  __int64 v21; // rbx
  struct DXGCONTEXT *v22; // r15
  __int64 v23; // r12
  bool v24; // zf
  struct DXGALLOCATION **v25; // rax
  D3DKMT_HANDLE hAllocation; // edi
  unsigned int v27; // ecx
  __int64 v28; // r8
  int v29; // edx
  struct _EX_RUNDOWN_REF *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  ULONG_PTR Count; // rdi
  __int64 v34; // rcx
  struct _SLIST_ENTRY *v35; // rbx
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // r8
  const EVENT_DESCRIPTOR *v39; // rdx
  __int64 v40; // rcx
  VIDMM_EXPORT *v41; // rsi
  int v42; // eax
  bool v43; // sf
  __int64 v44; // rax
  void *v45; // r13
  UINT v46; // r12d
  DXGK_ALLOCATIONLIST *v47; // r14
  UINT v48; // r15d
  void *v49; // rdi
  UINT v50; // esi
  void *v51; // rdx
  int v52; // eax
  VIDMM_EXPORT *v53; // rsi
  __int64 v54; // rcx
  int v55; // eax
  struct _SLIST_ENTRY *v56; // r9
  int v57; // r8d
  int v58; // edx
  int v59; // eax
  __int64 v60; // r13
  int v61; // eax
  _QWORD *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rax
  __int64 v68; // rbx
  struct DXGCONTEXT **v69; // r14
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  struct DXGALLOCATION **v78; // [rsp+58h] [rbp-A8h]
  struct _VIDMM_DMA_BUFFER *v79; // [rsp+60h] [rbp-A0h] BYREF
  bool v80; // [rsp+68h] [rbp-98h]
  UINT MultipassOffset; // [rsp+6Ch] [rbp-94h]
  int v82; // [rsp+70h] [rbp-90h]
  struct DXGALLOCATION **v83; // [rsp+78h] [rbp-88h]
  struct _D3DDDI_ALLOCATIONLIST *v84; // [rsp+80h] [rbp-80h]
  struct _D3DKMT_RENDER *v85; // [rsp+88h] [rbp-78h]
  struct _EX_RUNDOWN_REF *v86; // [rsp+90h] [rbp-70h] BYREF
  __int64 v87; // [rsp+98h] [rbp-68h]
  void *v88; // [rsp+A0h] [rbp-60h] BYREF
  struct VIDMM_ALLOC *v89; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v90; // [rsp+B0h] [rbp-50h]
  struct _SLIST_ENTRY *v91[2]; // [rsp+B8h] [rbp-48h] BYREF
  struct DXGCONTEXT *v92; // [rsp+C8h] [rbp-38h]
  ADAPTER_RENDER *v93; // [rsp+D0h] [rbp-30h]
  VIDMM_EXPORT *v94; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v95; // [rsp+E0h] [rbp-20h] BYREF
  struct DXGCONTEXT **v96; // [rsp+E8h] [rbp-18h]
  unsigned int v97; // [rsp+F0h] [rbp-10h] BYREF
  struct DXGALLOCATION **v98; // [rsp+F8h] [rbp-8h]
  struct _SLIST_ENTRY *v99; // [rsp+100h] [rbp+0h]
  struct COREDEVICEACCESS *v100; // [rsp+108h] [rbp+8h]
  __int64 v101; // [rsp+110h] [rbp+10h]
  __int64 v102; // [rsp+118h] [rbp+18h]
  _DXGKARG_RENDERGDI v103; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v104[16]; // [rsp+170h] [rbp+70h] BYREF
  union _LARGE_INTEGER v105; // [rsp+180h] [rbp+80h] BYREF
  struct DXGALLOCATION **v106; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v107[128]; // [rsp+198h] [rbp+98h] BYREF
  int v108; // [rsp+218h] [rbp+118h]
  _QWORD v109[12]; // [rsp+230h] [rbp+130h] BYREF
  struct _D3DDDI_ALLOCATIONLIST *v110; // [rsp+290h] [rbp+190h] BYREF
  _BYTE v111[128]; // [rsp+298h] [rbp+198h] BYREF
  int v112; // [rsp+318h] [rbp+218h]

  v4 = *a3;
  v5 = a1;
  v85 = a1;
  v6 = a3;
  v98 = a4;
  v96 = a3;
  v7 = *((_QWORD *)v4 + 2);
  v100 = a2;
  v93 = *(ADAPTER_RENDER **)(v7 + 16);
  v94 = (VIDMM_EXPORT *)*((_QWORD *)v93 + 50);
  v101 = *((_QWORD *)v93 + 47);
  CurrentProcess = PsGetCurrentProcess(v93);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v9);
  BroadcastContextCount = v5->BroadcastContextCount;
  v12 = 0LL;
  v112 = 0;
  v13 = BroadcastContextCount + 1;
  AllocationCount = v5->AllocationCount;
  v87 = ProcessDxgProcess;
  v84 = 0LL;
  v110 = 0LL;
  if ( (unsigned int)AllocationCount <= 0x10 )
  {
    PoolWithTag = (struct _D3DDDI_ALLOCATIONLIST *)v111;
    v110 = (struct _D3DDDI_ALLOCATIONLIST *)v111;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / AllocationCount < 8 )
      goto LABEL_7;
    PoolWithTag = (struct _D3DDDI_ALLOCATIONLIST *)ExAllocatePoolWithTag(
                                                     PagedPool,
                                                     8LL * (unsigned int)AllocationCount,
                                                     0x4B677844u);
    v110 = PoolWithTag;
  }
  v84 = PoolWithTag;
  v112 = AllocationCount;
  if ( !PoolWithTag )
  {
LABEL_8:
    LODWORD(v16) = -1073741801;
    goto LABEL_73;
  }
  memset(PoolWithTag, 0, 8 * AllocationCount);
  v12 = v110;
  v84 = v110;
LABEL_7:
  if ( !v12 )
    goto LABEL_8;
  v17 = v5->AllocationCount;
  v18 = 0LL;
  v108 = 0;
  v83 = 0LL;
  v106 = 0LL;
  if ( (unsigned int)v17 <= 0x10 )
  {
    v19 = (struct DXGALLOCATION **)v107;
    v106 = (struct DXGALLOCATION **)v107;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v17 < 8 )
      goto LABEL_15;
    v19 = (struct DXGALLOCATION **)ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)v17, 0x4B677844u);
    v106 = v19;
  }
  v83 = v19;
  v108 = v17;
  if ( !v19 )
  {
LABEL_16:
    LODWORD(v16) = -1073741801;
    goto LABEL_72;
  }
  memset(v19, 0, 8 * v17);
  v18 = v106;
  v83 = v106;
LABEL_15:
  if ( !v18 )
    goto LABEL_16;
  LODWORD(v20) = 0;
  v80 = EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_387928376_59283803_FeatureDescriptorDetails);
  v21 = 0LL;
  v82 = 0;
  v102 = v13;
  v90 = 0LL;
  if ( v13 <= 0 )
  {
LABEL_71:
    LODWORD(v16) = v20;
    goto LABEL_72;
  }
LABEL_18:
  LODWORD(v99) = ((*(_DWORD *)&v5->Flags & 8) << 12) | 0x100;
  memset(v109, 0, sizeof(v109));
  v22 = v6[v21];
  v23 = 0LL;
  v92 = v22;
  MultipassOffset = *((_DWORD *)v22 + 82);
  if ( !v5->AllocationCount )
  {
LABEL_38:
    v35 = v99;
    MultipassOffset = HIDWORD(v109[9]);
    while ( 1 )
    {
      v79 = 0LL;
      v36 = DXGCONTEXT::AcquireDmaBuffer(v22, &v79, v100, 0);
      v16 = v36;
      if ( v36 < 0 )
      {
        v76 = WdLogNewEntry5_WdEvent(v37);
        *(_QWORD *)(v76 + 24) = v22;
        *(_QWORD *)(v76 + 32) = v16;
        WdLogEvent5_WdEvent(v76);
        goto LABEL_72;
      }
      if ( !bTracingEnabled )
        goto LABEL_47;
      if ( (*(_DWORD *)&v5->Flags & 0x20) != 0 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v39 = (const EVENT_DESCRIPTOR *)&EventRenderKm;
LABEL_46:
          Template_p(v37, v39, v38, v79);
        }
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v39 = &EventRender;
        goto LABEL_46;
      }
LABEL_47:
      v91[1] = (struct _SLIST_ENTRY *)v93;
      v89 = 0LL;
      v91[0] = 0LL;
      CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v91);
      if ( !v91[0] )
      {
        v75 = WdLogNewEntry5_WdLowResource(v40);
        *(_QWORD *)(v75 + 24) = 1063LL;
        WdLogEvent5_WdLowResource(v75);
        LODWORD(v16) = -1073741801;
        goto LABEL_69;
      }
      v78 = v18;
      v41 = v94;
      v42 = VIDMM_EXPORT::VidMmReferenceDmaBuffer(
              v94,
              v79,
              v12,
              v5->AllocationCount,
              1,
              1,
              &v97,
              &v105,
              &v95,
              &v89,
              (struct _VIDMM_PRIMARIES_REFERENCES *)&v91[0][12],
              v78);
      v43 = v42 < 0;
      v16 = v42;
      v44 = *((_QWORD *)v41 + 1);
      if ( v43 )
      {
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(v44 + 496))(v79, 0LL);
        v79 = 0LL;
        goto LABEL_66;
      }
      v88 = 0LL;
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, void **))(v44 + 504))(v79, &v88);
      v45 = v88;
      v46 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*((_QWORD *)v41 + 1) + 528LL))(v79);
      v47 = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*((_QWORD *)v41 + 1) + 552LL))(v79);
      v48 = v85->AllocationCount;
      v49 = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*((_QWORD *)v41 + 1) + 560LL))(v79);
      v50 = *((_DWORD *)v92 + 46);
      v103.pCommand = (char *)v85->pNewCommandBuffer + v85->CommandOffset;
      v103.CommandLength = v85->CommandLength;
      memset(&v103.pDmaBuffer, 0, 0x38uLL);
      v103.AllocationListSize = v48;
      v22 = v92;
      v103.DmaBufferGpuVirtualAddress = v95;
      v103.pDmaBuffer = v45;
      v51 = (void *)*((_QWORD *)v92 + 21);
      v103.DmaSize = v46;
      v103.pDmaBufferPrivateData = v49;
      v103.DmaBufferPrivateDataSize = v50;
      v103.pAllocationList = v47;
      v103.MultipassOffset = MultipassOffset;
      v52 = ADAPTER_RENDER::DdiRenderGdi(v93, v51, &v103);
      v53 = v94;
      v109[0] = v103.pDmaBuffer;
      v109[2] = v103.pDmaBufferPrivateData;
      v54 = *((_QWORD *)v94 + 1);
      v20 = v52;
      MultipassOffset = v103.MultipassOffset;
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(v54 + 512))(v79);
      if ( (int)(v20 + 0x80000000) >= 0 && (_DWORD)v20 != -1071775743 )
      {
        VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(v53, v79);
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*((_QWORD *)v53 + 1) + 496LL))(v79, 0LL);
        v79 = 0LL;
        v67 = WdLogNewEntry5_WdWarning(v64, v63, v65, v66);
        *(_QWORD *)(v67 + 24) = v22;
        *(_QWORD *)(v67 + 32) = v20;
        WdLogEvent5_WdWarning(v67);
        LODWORD(v16) = v20;
        goto LABEL_69;
      }
      v55 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*((_QWORD *)v53 + 1) + 560LL))(v79);
      v56 = v91[0];
      v57 = v55;
      v58 = LODWORD(v109[0]) - (_DWORD)v88;
      v59 = v109[2];
      v91[0]->Next = v35;
      LODWORD(v56->Next) |= 0x8000000u;
      *((_QWORD *)&v56[2].Next + 1) = v95;
      *((_QWORD *)&v56->Next + 1) = v79;
      HIDWORD(v56[3].Next) = v58;
      LODWORD(v56[3].Next) = 0;
      *((_QWORD *)&v56[3].Next + 1) = 0LL;
      v56[4].Next = 0LL;
      *((_DWORD *)&v56[4].Next + 3) = v59 - v57;
      *((_DWORD *)&v56[4].Next + 2) = 0;
      if ( v89 )
      {
        *((_DWORD *)&v56[21].Next + 2) = 1;
        v56[21].Next = (struct _SLIST_ENTRY *)&v89;
      }
      else
      {
        v56[21].Next = 0LL;
        *((_DWORD *)&v56[21].Next + 2) = 0;
      }
      v60 = v101;
      v61 = (*(__int64 (__fastcall **)(_QWORD, struct _SLIST_ENTRY *))(*(_QWORD *)(v101 + 8) + 344LL))(
              *((_QWORD *)v22 + 27),
              v56);
      v16 = v61;
      if ( v61 < 0 )
      {
        v68 = v82;
        if ( v82 >= 0 )
        {
          v69 = v96;
          do
            (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v60 + 8) + 352LL))(*((_QWORD *)v69[v68--] + 27), 0LL);
          while ( v68 >= 0 );
        }
        VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(v53, v79);
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*((_QWORD *)v53 + 1) + 496LL))(v79, 0LL);
        v79 = 0LL;
LABEL_66:
        v74 = WdLogNewEntry5_WdWarning(v71, v70, v72, v73);
        *(_QWORD *)(v74 + 24) = v22;
        *(_QWORD *)(v74 + 32) = v16;
        WdLogEvent5_WdWarning(v74);
LABEL_69:
        CVidSchSubmitData::~CVidSchSubmitData(v91);
        goto LABEL_72;
      }
      CVidSchSubmitData::~CVidSchSubmitData(v91);
      v18 = v83;
      v12 = v84;
      v5 = v85;
      if ( (_DWORD)v20 != -1071775743 )
      {
        ++v82;
        v21 = v90 + 1;
        v90 = v21;
        if ( v21 >= v102 )
          goto LABEL_71;
        v6 = v96;
        goto LABEL_18;
      }
    }
  }
  while ( 1 )
  {
    v24 = v90 == 0;
    v25 = v98;
    v12[v23] = v5->pNewAllocationList[v23];
    v18[v23] = v25[v23];
    if ( v24 )
      goto LABEL_37;
    hAllocation = v5->pNewAllocationList[v23].hAllocation;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v87 + 184));
    v27 = (hAllocation >> 6) & 0xFFFFFF;
    if ( v27 < *(_DWORD *)(v87 + 224)
      && (v28 = *(_QWORD *)(v87 + 208),
          v29 = *(_DWORD *)(v28 + 16LL * v27 + 8),
          ((hAllocation >> 26) & 0x30) == (*(_BYTE *)(v28 + 16LL * v27 + 8) & 0x30))
      && (v29 & 0x1000) == 0
      && (v29 & 0xF) != 0
      && (*(_BYTE *)(v28 + 16LL * v27 + 8) & 0xF) == 5 )
    {
      v30 = *(struct _EX_RUNDOWN_REF **)(v28 + 16LL * v27);
    }
    else
    {
      v30 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v86, v30);
    ExReleasePushLockSharedEx(v87 + 184, 0LL);
    KeLeaveCriticalRegion();
    LODWORD(v16) = -1073741811;
    if ( !v86 )
      break;
    v32 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v22 + 2) + 16LL) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(v86[1].Count + 16) + 16LL) != v32 )
    {
      v62 = (_QWORD *)WdLogNewEntry5_WdError(v32);
      v62[3] = *((_QWORD *)v22 + 2);
      v62[4] = v86;
      v62[5] = -1073741811LL;
      goto LABEL_60;
    }
    Count = v86[5].Count;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v104, (struct DXGFASTMUTEX *const)(Count + 80));
    if ( v80 )
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v104);
    v34 = *(_QWORD *)(Count + 24);
    if ( v34 )
    {
      do
      {
        if ( ((*(_DWORD *)(v34 + 72) >> 12) & 0x3F) == MultipassOffset )
          break;
        v34 = *(_QWORD *)(v34 + 64);
      }
      while ( v34 );
      if ( v34 )
      {
        v12[v23].hAllocation = *(_DWORD *)(v34 + 16);
        v18[v23] = (struct DXGALLOCATION *)v34;
      }
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v104);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v86);
LABEL_37:
    v23 = (unsigned int)(v23 + 1);
    if ( (unsigned int)v23 >= v5->AllocationCount )
      goto LABEL_38;
  }
  v62 = (_QWORD *)WdLogNewEntry5_WdError(v31);
  v62[3] = 976LL;
LABEL_60:
  WdLogEvent5_WdError(v62);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v86);
LABEL_72:
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v106);
LABEL_73:
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v110);
  return (unsigned int)v16;
}
