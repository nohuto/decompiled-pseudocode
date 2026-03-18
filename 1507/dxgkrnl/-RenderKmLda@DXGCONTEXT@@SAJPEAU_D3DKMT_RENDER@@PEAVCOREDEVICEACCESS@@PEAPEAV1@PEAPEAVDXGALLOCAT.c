/*
 * XREFs of ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C014A904
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C00A4EA0 (-DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z.c)
 * Callees:
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0001600 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000E5C0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     DxgkSqmCreateDwordStreamEntry @ 0x1C000F300 (DxgkSqmCreateDwordStreamEntry.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?VidMmReferenceDmaBuffer@VIDMM_EXPORT@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C001725C (-VidMmReferenceDmaBuffer@VIDMM_EXPORT@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@I.c)
 *     ?VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C001F0C8 (-VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     Template_p @ 0x1C001F9FC (Template_p.c)
 *     DxgkSqmCreateStringStreamEntry @ 0x1C001FAC0 (DxgkSqmCreateStringStreamEntry.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0078DC0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00B3A64 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     DxgkSqmAddToStream @ 0x1C00DA220 (DxgkSqmAddToStream.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C011EE74 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 *     ?DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z @ 0x1C0121E18 (-DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z.c)
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
  struct DXGPROCESS *Current; // rax
  ULONG BroadcastContextCount; // edi
  struct _D3DDDI_ALLOCATIONLIST *v10; // r15
  int v11; // edi
  unsigned __int64 AllocationCount; // rbx
  struct _D3DDDI_ALLOCATIONLIST *PoolWithTag; // r15
  __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  struct DXGALLOCATION **v16; // rsi
  struct DXGALLOCATION **v17; // rsi
  __int64 v18; // r14
  int v19; // ebx
  struct DXGCONTEXT *v20; // r14
  UINT v21; // eax
  bool v22; // zf
  __int64 v23; // r12
  D3DDDI_ALLOCATIONLIST v24; // rcx
  struct DXGALLOCATION **v25; // rax
  D3DKMT_HANDLE hAllocation; // edi
  unsigned int v27; // ecx
  __int64 v28; // r8
  int v29; // edx
  struct _EX_RUNDOWN_REF *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  const EVENT_DESCRIPTOR *v41; // rdx
  __int64 v42; // rcx
  VIDMM_EXPORT *v43; // rsi
  int v44; // eax
  bool v45; // sf
  __int64 v46; // rax
  void *v47; // r13
  UINT v48; // r12d
  DXGK_ALLOCATIONLIST *v49; // r14
  UINT v50; // r15d
  void *v51; // rdi
  UINT v52; // esi
  void *v53; // rdx
  int v54; // eax
  VIDMM_EXPORT *v55; // rsi
  __int64 v56; // rcx
  __int64 v57; // r12
  int v58; // eax
  struct _SLIST_ENTRY *v59; // r9
  int v60; // edx
  int v61; // r8d
  int v62; // eax
  __int64 v63; // r13
  int v64; // eax
  _QWORD *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  char v74; // bl
  __int64 v75; // rcx
  const char *v76; // rax
  __int64 v77; // r9
  __int64 v78; // rbx
  struct DXGCONTEXT **v79; // r15
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rax
  char v90; // bl
  __int64 v91; // rcx
  const char *ProcessImageFileName; // rax
  __int64 v93; // r9
  __int64 v94; // rax
  __int64 v95; // rax
  struct DXGALLOCATION **v97; // [rsp+58h] [rbp-A8h]
  struct _VIDMM_DMA_BUFFER *v98; // [rsp+60h] [rbp-A0h] BYREF
  UINT MultipassOffset; // [rsp+68h] [rbp-98h]
  int v100; // [rsp+6Ch] [rbp-94h]
  struct _UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION **v102; // [rsp+80h] [rbp-80h]
  struct _D3DDDI_ALLOCATIONLIST *v103; // [rsp+88h] [rbp-78h]
  struct _D3DKMT_RENDER *v104; // [rsp+90h] [rbp-70h]
  struct _EX_RUNDOWN_REF *v105; // [rsp+98h] [rbp-68h] BYREF
  struct VIDMM_ALLOC *v106; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v107; // [rsp+A8h] [rbp-58h]
  void *v108; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v109; // [rsp+B8h] [rbp-48h] BYREF
  struct DXGPROCESS *v110; // [rsp+C0h] [rbp-40h]
  struct _SLIST_ENTRY *v111[2]; // [rsp+C8h] [rbp-38h] BYREF
  ADAPTER_RENDER *v112; // [rsp+D8h] [rbp-28h]
  struct _STRING DestinationString; // [rsp+E0h] [rbp-20h] BYREF
  VIDMM_EXPORT *v114; // [rsp+F0h] [rbp-10h]
  struct DXGCONTEXT **v115; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v116; // [rsp+100h] [rbp+0h] BYREF
  struct DXGCONTEXT *v117; // [rsp+108h] [rbp+8h]
  struct COREDEVICEACCESS *v118; // [rsp+110h] [rbp+10h]
  struct DXGALLOCATION **v119; // [rsp+118h] [rbp+18h]
  struct _DXGKARG_RENDERGDI v120; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v121[16]; // [rsp+170h] [rbp+70h] BYREF
  _DWORD v122[4]; // [rsp+180h] [rbp+80h] BYREF
  union _LARGE_INTEGER v123; // [rsp+190h] [rbp+90h] BYREF
  struct DXGALLOCATION **v124; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v125[128]; // [rsp+1A8h] [rbp+A8h] BYREF
  int v126; // [rsp+228h] [rbp+128h]
  _QWORD v127[12]; // [rsp+240h] [rbp+140h] BYREF
  struct _D3DDDI_ALLOCATIONLIST *v128; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v129[128]; // [rsp+2A8h] [rbp+1A8h] BYREF
  int v130; // [rsp+328h] [rbp+228h]

  v4 = *a3;
  v5 = a1;
  v104 = a1;
  v6 = a3;
  v119 = a4;
  v115 = a3;
  v7 = *((_QWORD *)v4 + 2);
  v118 = a2;
  v112 = *(ADAPTER_RENDER **)(v7 + 16);
  v114 = (VIDMM_EXPORT *)*((_QWORD *)v112 + 50);
  *(_QWORD *)&DestinationString.Length = *((_QWORD *)v112 + 47);
  Current = DXGPROCESS::GetCurrent((__int64)v112);
  BroadcastContextCount = v5->BroadcastContextCount;
  v10 = 0LL;
  v130 = 0;
  v11 = BroadcastContextCount + 1;
  AllocationCount = v5->AllocationCount;
  v110 = Current;
  v103 = 0LL;
  v128 = 0LL;
  if ( (unsigned int)AllocationCount <= 0x10 )
  {
    PoolWithTag = (struct _D3DDDI_ALLOCATIONLIST *)v129;
    v128 = (struct _D3DDDI_ALLOCATIONLIST *)v129;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / AllocationCount < 8 )
      goto LABEL_7;
    PoolWithTag = (struct _D3DDDI_ALLOCATIONLIST *)ExAllocatePoolWithTag(
                                                     PagedPool,
                                                     8LL * (unsigned int)AllocationCount,
                                                     0x4B677844u);
    v128 = PoolWithTag;
  }
  v103 = PoolWithTag;
  v130 = AllocationCount;
  if ( !PoolWithTag )
  {
LABEL_8:
    LODWORD(v14) = -1073741801;
    goto LABEL_82;
  }
  memset(PoolWithTag, 0, 8 * AllocationCount);
  v10 = v128;
  v103 = v128;
LABEL_7:
  if ( !v10 )
    goto LABEL_8;
  v15 = v5->AllocationCount;
  v16 = 0LL;
  v126 = 0;
  v102 = 0LL;
  v124 = 0LL;
  if ( (unsigned int)v15 <= 0x10 )
  {
    v17 = (struct DXGALLOCATION **)v125;
    v124 = (struct DXGALLOCATION **)v125;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v15 < 8 )
      goto LABEL_15;
    v17 = (struct DXGALLOCATION **)ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)v15, 0x4B677844u);
    v124 = v17;
  }
  v102 = v17;
  v126 = v15;
  if ( !v17 )
  {
LABEL_16:
    LODWORD(v14) = -1073741801;
    goto LABEL_81;
  }
  memset(v17, 0, 8 * v15);
  v16 = v124;
  v102 = v124;
LABEL_15:
  if ( !v16 )
    goto LABEL_16;
  v18 = 0LL;
  v100 = 0;
  *(_QWORD *)&UnicodeString.Length = v11;
  v107 = 0LL;
  if ( v11 <= 0 )
  {
    LODWORD(v57) = v109;
LABEL_80:
    LODWORD(v14) = v57;
    goto LABEL_81;
  }
LABEL_18:
  v19 = ((*(_DWORD *)&v5->Flags & 8) << 13) | 0x200;
  memset(v127, 0, sizeof(v127));
  v20 = v6[v18];
  v117 = v20;
  LODWORD(v98) = *((_DWORD *)v20 + 82);
  v21 = 0;
  MultipassOffset = 0;
  if ( !v5->AllocationCount )
  {
LABEL_36:
    MultipassOffset = HIDWORD(v127[9]);
    while ( 1 )
    {
      v98 = 0LL;
      v36 = DXGCONTEXT::AcquireDmaBuffer(v20, &v98, v118, 0);
      v14 = v36;
      if ( v36 < 0 )
      {
        v95 = WdLogNewEntry5_WdEvent(v38, v37, v39, v40);
        *(_QWORD *)(v95 + 24) = v20;
        *(_QWORD *)(v95 + 32) = v14;
        WdLogEvent5_WdEvent(v95);
        goto LABEL_81;
      }
      if ( !bTracingEnabled )
        goto LABEL_45;
      if ( (*(_DWORD *)&v5->Flags & 0x20) != 0 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          v41 = (const EVENT_DESCRIPTOR *)&EventRenderKm;
LABEL_44:
          Template_p(v38, v41, v39, v98);
        }
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      {
        v41 = &EventRender;
        goto LABEL_44;
      }
LABEL_45:
      v111[1] = (struct _SLIST_ENTRY *)v112;
      v106 = 0LL;
      v111[0] = 0LL;
      CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v111);
      if ( !v111[0] )
      {
        v94 = WdLogNewEntry5_WdLowResource(v42);
        *(_QWORD *)(v94 + 24) = 1057LL;
        WdLogEvent5_WdLowResource(v94);
        LODWORD(v14) = -1073741801;
LABEL_77:
        CVidSchSubmitData::~CVidSchSubmitData(v111);
        goto LABEL_81;
      }
      v97 = v16;
      v43 = v114;
      v44 = VIDMM_EXPORT::VidMmReferenceDmaBuffer(
              v114,
              v98,
              v10,
              v5->AllocationCount,
              1,
              1,
              &v109,
              &v123,
              &v116,
              &v106,
              (struct _VIDMM_PRIMARIES_REFERENCES *)&v111[0][12],
              v97);
      v45 = v44 < 0;
      v14 = v44;
      v46 = *((_QWORD *)v43 + 1);
      if ( v45 )
      {
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(v46 + 480))(v98, 0LL);
        v98 = 0LL;
        v89 = WdLogNewEntry5_WdWarning(v86, v85, v87, v88);
        *(_QWORD *)(v89 + 24) = v20;
        *(_QWORD *)(v89 + 32) = v14;
        WdLogEvent5_WdWarning(v89);
        v90 = 0;
        *(_QWORD *)&UnicodeString.Length = 0LL;
        UnicodeString.Buffer = 0LL;
        v91 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 2) + 40LL) + 56LL);
        if ( v91
          && (ProcessImageFileName = (const char *)PsGetProcessImageFileName(v91),
              RtlInitAnsiString(&DestinationString, ProcessImageFileName),
              RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0) )
        {
          v90 = 1;
        }
        else
        {
          RtlInitUnicodeString(&UnicodeString, L"<Unknown>");
        }
        DxgkSqmCreateStringStreamEntry((__int64)v121, UnicodeString.Buffer);
        DxgkSqmCreateDwordStreamEntry(v122, 32);
        DxgkSqmAddToStream(4783LL, 2LL, (__int64)v121, v93);
        if ( v90 )
          RtlFreeUnicodeString(&UnicodeString);
        goto LABEL_77;
      }
      v108 = 0LL;
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, void **))(v46 + 488))(v98, &v108);
      v47 = v108;
      v48 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*((_QWORD *)v43 + 1) + 512LL))(v98);
      v49 = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*((_QWORD *)v43 + 1) + 536LL))(v98);
      v50 = v104->AllocationCount;
      v51 = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*((_QWORD *)v43 + 1) + 544LL))(v98);
      v52 = *((_DWORD *)v117 + 46);
      v120.pCommand = (char *)v104->pNewCommandBuffer + v104->CommandOffset;
      v120.CommandLength = v104->CommandLength;
      memset(&v120.pDmaBuffer, 0, 0x38uLL);
      v120.pAllocationList = v49;
      v20 = v117;
      v120.DmaBufferGpuVirtualAddress = v116;
      v120.pDmaBuffer = v47;
      v53 = (void *)*((_QWORD *)v117 + 21);
      v120.DmaSize = v48;
      v120.pDmaBufferPrivateData = v51;
      v120.DmaBufferPrivateDataSize = v52;
      v120.AllocationListSize = v50;
      v120.MultipassOffset = MultipassOffset;
      v54 = ADAPTER_RENDER::DdiRenderGdi(v112, v53, &v120);
      v55 = v114;
      v127[0] = v120.pDmaBuffer;
      v127[2] = v120.pDmaBufferPrivateData;
      v56 = *((_QWORD *)v114 + 1);
      v57 = v54;
      MultipassOffset = v120.MultipassOffset;
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(v56 + 496))(v98);
      if ( (int)(v57 + 0x80000000) >= 0 && (_DWORD)v57 != -1071775743 )
      {
        VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(v55, v98);
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*((_QWORD *)v55 + 1) + 480LL))(v98, 0LL);
        v98 = 0LL;
        v73 = WdLogNewEntry5_WdWarning(v70, v69, v71, v72);
        *(_QWORD *)(v73 + 24) = v20;
        *(_QWORD *)(v73 + 32) = v57;
        WdLogEvent5_WdWarning(v73);
        v74 = 0;
        *(_QWORD *)&UnicodeString.Length = 0LL;
        UnicodeString.Buffer = 0LL;
        v75 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 2) + 40LL) + 56LL);
        if ( v75
          && (v76 = (const char *)PsGetProcessImageFileName(v75),
              RtlInitAnsiString(&DestinationString, v76),
              RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0) )
        {
          v74 = 1;
        }
        else
        {
          RtlInitUnicodeString(&UnicodeString, L"<Unknown>");
        }
        DxgkSqmCreateStringStreamEntry((__int64)v121, UnicodeString.Buffer);
        DxgkSqmCreateDwordStreamEntry(v122, 1);
        DxgkSqmAddToStream(4783LL, 2LL, (__int64)v121, v77);
        if ( v74 )
          RtlFreeUnicodeString(&UnicodeString);
        LODWORD(v14) = v57;
        goto LABEL_77;
      }
      v58 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*((_QWORD *)v55 + 1) + 544LL))(v98);
      v59 = v111[0];
      v60 = LODWORD(v127[0]) - (_DWORD)v108;
      v61 = v58;
      v62 = v127[2];
      LODWORD(v111[0]->Next) = v19 | 0x10000000;
      *((_QWORD *)&v59[2].Next + 1) = v116;
      *((_QWORD *)&v59->Next + 1) = v98;
      HIDWORD(v59[3].Next) = v60;
      LODWORD(v59[3].Next) = 0;
      *((_QWORD *)&v59[3].Next + 1) = 0LL;
      v59[4].Next = 0LL;
      *((_DWORD *)&v59[4].Next + 3) = v62 - v61;
      *((_DWORD *)&v59[4].Next + 2) = 0;
      if ( v106 )
      {
        *((_DWORD *)&v59[21].Next + 2) = 1;
        v59[21].Next = (struct _SLIST_ENTRY *)&v106;
      }
      else
      {
        v59[21].Next = 0LL;
        *((_DWORD *)&v59[21].Next + 2) = 0;
      }
      v63 = *(_QWORD *)&DestinationString.Length;
      v64 = (*(__int64 (__fastcall **)(_QWORD, struct _SLIST_ENTRY *))(*(_QWORD *)(*(_QWORD *)&DestinationString.Length
                                                                                 + 8LL)
                                                                     + 344LL))(
              *((_QWORD *)v20 + 27),
              v59);
      v14 = v64;
      if ( v64 < 0 )
      {
        v78 = v100;
        if ( v100 >= 0 )
        {
          v79 = v115;
          do
            (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v63 + 8) + 352LL))(*((_QWORD *)v79[v78--] + 27), 0LL);
          while ( v78 >= 0 );
        }
        VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(v55, v98);
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*((_QWORD *)v55 + 1) + 480LL))(v98, 0LL);
        v98 = 0LL;
        v84 = WdLogNewEntry5_WdWarning(v81, v80, v82, v83);
        *(_QWORD *)(v84 + 24) = v20;
        *(_QWORD *)(v84 + 32) = v14;
        WdLogEvent5_WdWarning(v84);
        goto LABEL_77;
      }
      CVidSchSubmitData::~CVidSchSubmitData(v111);
      v16 = v102;
      v10 = v103;
      v5 = v104;
      if ( (_DWORD)v57 != -1071775743 )
      {
        ++v100;
        v18 = v107 + 1;
        v107 = v18;
        if ( v18 >= *(__int64 *)&UnicodeString.Length )
          goto LABEL_80;
        v6 = v115;
        goto LABEL_18;
      }
    }
  }
  while ( 1 )
  {
    v22 = v107 == 0;
    v23 = v21;
    v24 = v5->pNewAllocationList[v21];
    v25 = v119;
    v10[v23] = v24;
    v16[v23] = v25[v23];
    if ( v22 )
      goto LABEL_35;
    hAllocation = v5->pNewAllocationList[v23].hAllocation;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v110 + 192));
    v27 = (hAllocation >> 6) & 0xFFFFFF;
    if ( v27 < *((_DWORD *)v110 + 58)
      && (v28 = *((_QWORD *)v110 + 27),
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
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v105, v30);
    ExReleasePushLockSharedEx((char *)v110 + 192, 0LL);
    KeLeaveCriticalRegion();
    LODWORD(v14) = -1073741811;
    if ( !v105 )
      break;
    v33 = *(_QWORD *)(v105[1].Count + 16);
    v34 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL) + 16LL);
    if ( *(_QWORD *)(v33 + 16) != v34 )
    {
      v65 = (_QWORD *)WdLogNewEntry5_WdError(v34);
      v65[3] = *((_QWORD *)v20 + 2);
      v65[4] = v105;
      v65[5] = -1073741811LL;
      goto LABEL_58;
    }
    v35 = *(_QWORD *)(v105[5].Count + 24);
    if ( v35 )
    {
      do
      {
        if ( ((*(_DWORD *)(v35 + 72) >> 9) & 0x3F) == (_DWORD)v98 )
          break;
        v35 = *(_QWORD *)(v35 + 64);
      }
      while ( v35 );
      if ( v35 )
      {
        v10[v23].hAllocation = *(_DWORD *)(v35 + 16);
        v16[v23] = (struct DXGALLOCATION *)v35;
      }
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v105, v35, v33, v32);
LABEL_35:
    v21 = MultipassOffset + 1;
    MultipassOffset = v21;
    if ( v21 >= v5->AllocationCount )
      goto LABEL_36;
  }
  v65 = (_QWORD *)WdLogNewEntry5_WdError(v31);
  v65[3] = 978LL;
LABEL_58:
  WdLogEvent5_WdError(v65);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v105, v66, v67, v68);
LABEL_81:
  PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>((PVOID *)&v124);
LABEL_82:
  PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>((PVOID *)&v128);
  return (unsigned int)v14;
}
