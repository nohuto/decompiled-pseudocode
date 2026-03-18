/*
 * XREFs of ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C014EBF4
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C00881A0 (-DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0003424 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0003470 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     DxgkSqmCreateDwordStreamEntry @ 0x1C0010120 (DxgkSqmCreateDwordStreamEntry.c)
 *     Template_p @ 0x1C0010C14 (Template_p.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?VidMmReferenceDmaBuffer@VIDMM_EXPORT@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0018D2C (-VidMmReferenceDmaBuffer@VIDMM_EXPORT@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@I.c)
 *     ?VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C001EFB4 (-VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     DxgkSqmCreateStringStreamEntry @ 0x1C001F830 (DxgkSqmCreateStringStreamEntry.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0076A70 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C009D388 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00C8FA4 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     DxgkSqmAddToStream @ 0x1C00E7550 (DxgkSqmAddToStream.c)
 *     ?DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z @ 0x1C01243A0 (-DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::RenderKmLda(
        struct _D3DKMT_RENDER *a1,
        struct COREDEVICEACCESS *a2,
        struct DXGCONTEXT **a3,
        struct DXGALLOCATION **a4)
{
  struct DXGCONTEXT *v4; // rax
  struct _D3DKMT_RENDER *v5; // r13
  struct DXGCONTEXT **v6; // r12
  __int64 v7; // r10
  ULONG BroadcastContextCount; // edi
  struct _D3DDDI_ALLOCATIONLIST *v9; // r14
  int v10; // edi
  unsigned __int64 AllocationCount; // rbx
  struct _D3DDDI_ALLOCATIONLIST *PoolWithTag; // r14
  __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  struct DXGALLOCATION **v15; // rsi
  struct DXGALLOCATION **v16; // rsi
  __int64 v17; // r15
  int v18; // ebx
  struct DXGCONTEXT *v19; // r15
  UINT v20; // eax
  bool v21; // zf
  __int64 v22; // rdi
  D3DDDI_ALLOCATIONLIST v23; // rcx
  struct DXGALLOCATION **v24; // rax
  D3DKMT_HANDLE hAllocation; // r12d
  unsigned int v26; // ecx
  __int64 v27; // r8
  int v28; // edx
  struct _EX_RUNDOWN_REF *v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  const EVENT_DESCRIPTOR *v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  VIDMM_EXPORT *v42; // rsi
  int v43; // eax
  bool v44; // sf
  __int64 v45; // rax
  void *v46; // r13
  UINT v47; // r12d
  DXGK_ALLOCATIONLIST *v48; // r14
  UINT v49; // r15d
  void *v50; // rdi
  UINT v51; // esi
  void *v52; // rdx
  int v53; // eax
  VIDMM_EXPORT *v54; // rsi
  __int64 v55; // rcx
  __int64 v56; // r12
  int v57; // eax
  struct _SLIST_ENTRY *v58; // r9
  int v59; // edx
  int v60; // r8d
  int v61; // eax
  __int64 v62; // r13
  int v63; // eax
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  char v70; // bl
  __int64 v71; // rcx
  const char *v72; // rax
  __int64 v73; // rbx
  struct DXGCONTEXT **v74; // r14
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rax
  char v85; // bl
  __int64 v86; // rcx
  const char *ProcessImageFileName; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  struct DXGALLOCATION **v91; // [rsp+58h] [rbp-A8h]
  struct _VIDMM_DMA_BUFFER *v92; // [rsp+60h] [rbp-A0h] BYREF
  UINT i; // [rsp+68h] [rbp-98h]
  int v94; // [rsp+6Ch] [rbp-94h]
  struct _UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION **v96; // [rsp+80h] [rbp-80h]
  struct _D3DDDI_ALLOCATIONLIST *v97; // [rsp+88h] [rbp-78h]
  struct _D3DKMT_RENDER *v98; // [rsp+90h] [rbp-70h]
  __int64 v99; // [rsp+98h] [rbp-68h]
  struct DXGPROCESS *Current; // [rsp+A0h] [rbp-60h]
  struct _EX_RUNDOWN_REF *v101; // [rsp+A8h] [rbp-58h] BYREF
  struct VIDMM_ALLOC *v102; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v103; // [rsp+B8h] [rbp-48h] BYREF
  void *v104; // [rsp+C0h] [rbp-40h] BYREF
  struct _SLIST_ENTRY *v105[2]; // [rsp+C8h] [rbp-38h] BYREF
  ADAPTER_RENDER *v106; // [rsp+D8h] [rbp-28h]
  struct _STRING DestinationString; // [rsp+E0h] [rbp-20h] BYREF
  VIDMM_EXPORT *v108; // [rsp+F0h] [rbp-10h]
  struct DXGCONTEXT **v109; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v110; // [rsp+100h] [rbp+0h] BYREF
  struct DXGCONTEXT *v111; // [rsp+108h] [rbp+8h]
  struct COREDEVICEACCESS *v112; // [rsp+110h] [rbp+10h]
  struct DXGALLOCATION **v113; // [rsp+118h] [rbp+18h]
  _DXGKARG_RENDERGDI v114; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v115[16]; // [rsp+170h] [rbp+70h] BYREF
  _DWORD v116[4]; // [rsp+180h] [rbp+80h] BYREF
  union _LARGE_INTEGER v117; // [rsp+190h] [rbp+90h] BYREF
  struct DXGALLOCATION **v118; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v119[128]; // [rsp+1A8h] [rbp+A8h] BYREF
  int v120; // [rsp+228h] [rbp+128h]
  _QWORD v121[12]; // [rsp+240h] [rbp+140h] BYREF
  struct _D3DDDI_ALLOCATIONLIST *v122; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v123[128]; // [rsp+2A8h] [rbp+1A8h] BYREF
  int v124; // [rsp+328h] [rbp+228h]

  v4 = *a3;
  v5 = a1;
  v98 = a1;
  v6 = a3;
  v113 = a4;
  v109 = a3;
  v7 = *((_QWORD *)v4 + 2);
  v112 = a2;
  v106 = *(ADAPTER_RENDER **)(v7 + 16);
  v108 = (VIDMM_EXPORT *)*((_QWORD *)v106 + 53);
  *(_QWORD *)&DestinationString.Length = *((_QWORD *)v106 + 50);
  Current = DXGPROCESS::GetCurrent();
  BroadcastContextCount = v5->BroadcastContextCount;
  v9 = 0LL;
  v124 = 0;
  v10 = BroadcastContextCount + 1;
  AllocationCount = v5->AllocationCount;
  v97 = 0LL;
  v122 = 0LL;
  if ( (unsigned int)AllocationCount <= 0x10 )
  {
    PoolWithTag = (struct _D3DDDI_ALLOCATIONLIST *)v123;
    v122 = (struct _D3DDDI_ALLOCATIONLIST *)v123;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / AllocationCount < 8 )
      goto LABEL_7;
    PoolWithTag = (struct _D3DDDI_ALLOCATIONLIST *)ExAllocatePoolWithTag(
                                                     PagedPool,
                                                     8LL * (unsigned int)AllocationCount,
                                                     0x4B677844u);
    v122 = PoolWithTag;
  }
  v97 = PoolWithTag;
  v124 = AllocationCount;
  if ( !PoolWithTag )
  {
LABEL_8:
    LODWORD(v13) = -1073741801;
    goto LABEL_79;
  }
  memset(PoolWithTag, 0, 8 * AllocationCount);
  v9 = v122;
  v97 = v122;
LABEL_7:
  if ( !v9 )
    goto LABEL_8;
  v14 = v5->AllocationCount;
  v15 = 0LL;
  v120 = 0;
  v96 = 0LL;
  v118 = 0LL;
  if ( (unsigned int)v14 <= 0x10 )
  {
    v16 = (struct DXGALLOCATION **)v119;
    v118 = (struct DXGALLOCATION **)v119;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v14 < 8 )
      goto LABEL_15;
    v16 = (struct DXGALLOCATION **)ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)v14, 0x4B677844u);
    v118 = v16;
  }
  v96 = v16;
  v120 = v14;
  if ( !v16 )
  {
LABEL_16:
    LODWORD(v13) = -1073741801;
    goto LABEL_78;
  }
  memset(v16, 0, 8 * v14);
  v15 = v118;
  v96 = v118;
LABEL_15:
  if ( !v15 )
    goto LABEL_16;
  v17 = 0LL;
  v94 = 0;
  *(_QWORD *)&UnicodeString.Length = v10;
  v99 = 0LL;
  if ( v10 > 0 )
  {
LABEL_18:
    v18 = ((*(_DWORD *)&v5->Flags & 8) << 12) | 0x100;
    memset(v121, 0, sizeof(v121));
    v19 = v6[v17];
    v111 = v19;
    LODWORD(v92) = *((_DWORD *)v19 + 82);
    v20 = 0;
    for ( i = 0; v20 < v5->AllocationCount; i = v20 )
    {
      v21 = v99 == 0;
      v22 = v20;
      v23 = v5->pNewAllocationList[v20];
      v24 = v113;
      v9[v22] = v23;
      v15[v22] = v24[v22];
      if ( !v21 )
      {
        hAllocation = v5->pNewAllocationList[v22].hAllocation;
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 192));
        v26 = (hAllocation >> 6) & 0xFFFFFF;
        if ( v26 < *((_DWORD *)Current + 58)
          && (v27 = *((_QWORD *)Current + 27),
              v28 = *(_DWORD *)(v27 + 16LL * v26 + 8),
              ((hAllocation >> 26) & 0x30) == (*(_BYTE *)(v27 + 16LL * v26 + 8) & 0x30))
          && (v28 & 0x1000) == 0
          && (v28 & 0xF) != 0
          && (*(_BYTE *)(v27 + 16LL * v26 + 8) & 0xF) == 5 )
        {
          v29 = *(struct _EX_RUNDOWN_REF **)(v27 + 16LL * v26);
        }
        else
        {
          v29 = 0LL;
        }
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v101, v29);
        ExReleasePushLockSharedEx((char *)Current + 192, 0LL);
        KeLeaveCriticalRegion();
        if ( !v101 )
        {
          v64 = WdLogNewEntry5_WdError(v30);
          *(_QWORD *)(v64 + 24) = 964LL;
          WdLogEvent5_WdError(v64);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v101);
          LODWORD(v13) = -1073741811;
          goto LABEL_78;
        }
        v31 = *(_QWORD *)(v101[5].Count + 24);
        if ( v31 )
        {
          do
          {
            if ( ((*(_DWORD *)(v31 + 72) >> 12) & 0x3F) == (_DWORD)v92 )
              break;
            v31 = *(_QWORD *)(v31 + 64);
          }
          while ( v31 );
          if ( v31 )
          {
            v9[v22].hAllocation = *(_DWORD *)(v31 + 16);
            v15[v22] = (struct DXGALLOCATION *)v31;
          }
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v101);
      }
      v20 = i + 1;
    }
    i = HIDWORD(v121[9]);
    while ( 1 )
    {
      v92 = 0LL;
      v32 = DXGCONTEXT::AcquireDmaBuffer(v19, &v92, v112, 0);
      v13 = v32;
      if ( v32 < 0 )
      {
        v89 = WdLogNewEntry5_WdEvent(v34, v33, v35, v36);
        *(_QWORD *)(v89 + 24) = v19;
        *(_QWORD *)(v89 + 32) = v13;
        WdLogEvent5_WdEvent(v89);
        goto LABEL_78;
      }
      if ( !bTracingEnabled )
        goto LABEL_44;
      if ( (*(_DWORD *)&v5->Flags & 0x20) != 0 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          v37 = (const EVENT_DESCRIPTOR *)&EventRenderKm;
LABEL_43:
          Template_p(v34, v37, v35, v92);
        }
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      {
        v37 = &EventRender;
        goto LABEL_43;
      }
LABEL_44:
      v105[1] = (struct _SLIST_ENTRY *)v106;
      v102 = 0LL;
      v105[0] = 0LL;
      CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v105);
      if ( !v105[0] )
      {
        v88 = WdLogNewEntry5_WdLowResource(v39, v38, v40, v41);
        *(_QWORD *)(v88 + 24) = 1034LL;
        WdLogEvent5_WdLowResource(v88);
        LODWORD(v13) = -1073741801;
LABEL_74:
        CVidSchSubmitData::~CVidSchSubmitData(v105);
        goto LABEL_78;
      }
      v91 = v15;
      v42 = v108;
      v43 = VIDMM_EXPORT::VidMmReferenceDmaBuffer(
              v108,
              v92,
              v9,
              v5->AllocationCount,
              1,
              1,
              &v103,
              &v117,
              &v110,
              &v102,
              (struct _VIDMM_PRIMARIES_REFERENCES *)&v105[0][12],
              v91);
      v44 = v43 < 0;
      v13 = v43;
      v45 = *((_QWORD *)v42 + 1);
      if ( v44 )
      {
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(v45 + 480))(v92, 0LL);
        v92 = 0LL;
        v84 = WdLogNewEntry5_WdWarning(v81, v80, v82, v83);
        *(_QWORD *)(v84 + 24) = v19;
        *(_QWORD *)(v84 + 32) = v13;
        WdLogEvent5_WdWarning(v84);
        v85 = 0;
        *(_QWORD *)&UnicodeString.Length = 0LL;
        UnicodeString.Buffer = 0LL;
        v86 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 40LL) + 56LL);
        if ( v86
          && (ProcessImageFileName = (const char *)PsGetProcessImageFileName(v86),
              RtlInitAnsiString(&DestinationString, ProcessImageFileName),
              RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0) )
        {
          v85 = 1;
        }
        else
        {
          RtlInitUnicodeString(&UnicodeString, L"<Unknown>");
        }
        DxgkSqmCreateStringStreamEntry((__int64)v115, UnicodeString.Buffer);
        DxgkSqmCreateDwordStreamEntry(v116, 32);
        DxgkSqmAddToStream(4783LL, 2u, (__int64)v115);
        if ( v85 )
          RtlFreeUnicodeString(&UnicodeString);
        goto LABEL_74;
      }
      v104 = 0LL;
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, void **))(v45 + 488))(v92, &v104);
      v46 = v104;
      v47 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*((_QWORD *)v42 + 1) + 512LL))(v92);
      v48 = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*((_QWORD *)v42 + 1) + 536LL))(v92);
      v49 = v98->AllocationCount;
      v50 = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*((_QWORD *)v42 + 1) + 544LL))(v92);
      v51 = *((_DWORD *)v111 + 46);
      v114.pCommand = (char *)v98->pNewCommandBuffer + v98->CommandOffset;
      v114.CommandLength = v98->CommandLength;
      memset(&v114.pDmaBuffer, 0, 0x38uLL);
      v114.AllocationListSize = v49;
      v19 = v111;
      v114.DmaBufferGpuVirtualAddress = v110;
      v114.pDmaBuffer = v46;
      v52 = (void *)*((_QWORD *)v111 + 21);
      v114.DmaSize = v47;
      v114.pDmaBufferPrivateData = v50;
      v114.DmaBufferPrivateDataSize = v51;
      v114.pAllocationList = v48;
      v114.MultipassOffset = i;
      v53 = ADAPTER_RENDER::DdiRenderGdi(v106, v52, &v114);
      v54 = v108;
      v121[0] = v114.pDmaBuffer;
      v121[2] = v114.pDmaBufferPrivateData;
      v55 = *((_QWORD *)v108 + 1);
      v56 = v53;
      i = v114.MultipassOffset;
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(v55 + 496))(v92);
      if ( (int)(v56 + 0x80000000) >= 0 && (_DWORD)v56 != -1071775743 )
      {
        VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(v54, v92);
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*((_QWORD *)v54 + 1) + 480LL))(v92, 0LL);
        v92 = 0LL;
        v69 = WdLogNewEntry5_WdWarning(v66, v65, v67, v68);
        *(_QWORD *)(v69 + 24) = v19;
        *(_QWORD *)(v69 + 32) = v56;
        WdLogEvent5_WdWarning(v69);
        v70 = 0;
        *(_QWORD *)&UnicodeString.Length = 0LL;
        UnicodeString.Buffer = 0LL;
        v71 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 40LL) + 56LL);
        if ( v71
          && (v72 = (const char *)PsGetProcessImageFileName(v71),
              RtlInitAnsiString(&DestinationString, v72),
              RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0) )
        {
          v70 = 1;
        }
        else
        {
          RtlInitUnicodeString(&UnicodeString, L"<Unknown>");
        }
        DxgkSqmCreateStringStreamEntry((__int64)v115, UnicodeString.Buffer);
        DxgkSqmCreateDwordStreamEntry(v116, 1);
        DxgkSqmAddToStream(4783LL, 2u, (__int64)v115);
        if ( v70 )
          RtlFreeUnicodeString(&UnicodeString);
        LODWORD(v13) = v56;
        goto LABEL_74;
      }
      v57 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*((_QWORD *)v54 + 1) + 544LL))(v92);
      v58 = v105[0];
      v59 = LODWORD(v121[0]) - (_DWORD)v104;
      v60 = v57;
      v61 = v121[2];
      LODWORD(v105[0]->Next) = v18 | 0x8000000;
      *((_QWORD *)&v58[2].Next + 1) = v110;
      *((_QWORD *)&v58->Next + 1) = v92;
      HIDWORD(v58[3].Next) = v59;
      LODWORD(v58[3].Next) = 0;
      *((_QWORD *)&v58[3].Next + 1) = 0LL;
      v58[4].Next = 0LL;
      *((_DWORD *)&v58[4].Next + 3) = v61 - v60;
      *((_DWORD *)&v58[4].Next + 2) = 0;
      if ( v102 )
      {
        *((_DWORD *)&v58[21].Next + 2) = 1;
        v58[21].Next = (struct _SLIST_ENTRY *)&v102;
      }
      else
      {
        v58[21].Next = 0LL;
        *((_DWORD *)&v58[21].Next + 2) = 0;
      }
      v62 = *(_QWORD *)&DestinationString.Length;
      v63 = (*(__int64 (__fastcall **)(_QWORD, struct _SLIST_ENTRY *))(*(_QWORD *)(*(_QWORD *)&DestinationString.Length
                                                                                 + 8LL)
                                                                     + 344LL))(
              *((_QWORD *)v19 + 27),
              v58);
      v13 = v63;
      if ( v63 < 0 )
      {
        v73 = v94;
        if ( v94 >= 0 )
        {
          v74 = v109;
          do
            (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v62 + 8) + 352LL))(*((_QWORD *)v74[v73--] + 27), 0LL);
          while ( v73 >= 0 );
        }
        VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(v54, v92);
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*((_QWORD *)v54 + 1) + 480LL))(v92, 0LL);
        v92 = 0LL;
        v79 = WdLogNewEntry5_WdWarning(v76, v75, v77, v78);
        *(_QWORD *)(v79 + 24) = v19;
        *(_QWORD *)(v79 + 32) = v13;
        WdLogEvent5_WdWarning(v79);
        goto LABEL_74;
      }
      CVidSchSubmitData::~CVidSchSubmitData(v105);
      v15 = v96;
      v9 = v97;
      v5 = v98;
      if ( (_DWORD)v56 != -1071775743 )
      {
        ++v94;
        v17 = v99 + 1;
        v99 = v17;
        if ( v17 >= *(__int64 *)&UnicodeString.Length )
          goto LABEL_77;
        v6 = v109;
        goto LABEL_18;
      }
    }
  }
  LODWORD(v56) = v103;
LABEL_77:
  LODWORD(v13) = v56;
LABEL_78:
  PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>((PVOID *)&v118);
LABEL_79:
  PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>((PVOID *)&v122);
  return (unsigned int)v13;
}
