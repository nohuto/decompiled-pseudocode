/*
 * XREFs of ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A80F0
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A8790 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000911C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00114E8 (-VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MU.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     TraceDxgkPatchLocationList @ 0x1C0023210 (TraceDxgkPatchLocationList.c)
 *     ?VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0025E00 (-VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C0025E50 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C009183C (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00AEF28 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentWithDmaBuffer(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT *a2,
        struct DXGALLOCATION *a3,
        struct DXGALLOCATION *a4,
        struct _DXGKARG_PRESENT *a5,
        struct _VIDMM_DMA_BUFFER *a6,
        struct VIDSCH_SUBMIT_DATA_BASE *a7,
        struct COREDEVICEACCESS *a8)
{
  struct _VIDMM_DMA_BUFFER *v8; // rdi
  struct COREDEVICEACCESS *v10; // rcx
  struct DXGALLOCATION *v11; // r13
  struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF Value; // eax
  unsigned __int8 v13; // r12
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  D3DGPU_VIRTUAL_ADDRESS *v19; // r8
  __int64 v20; // r13
  struct DXGPROCESS *Current; // rax
  char *v22; // r15
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r15
  char *v30; // rcx
  char v31; // r12
  __int64 v32; // rax
  struct DXGALLOCATION *v33; // r11
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  int v45; // eax
  char *v46; // rcx
  unsigned int v47; // r12d
  int v48; // r13d
  char *v49; // rcx
  __int64 v50; // rdi
  int v51; // eax
  char v52; // al
  _BYTE *v53; // r12
  char *v54; // rdi
  struct VIDMM_ALLOC **v55; // r13
  __int64 v56; // rax
  int v57; // edi
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  int v62; // r9d
  _QWORD *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rdi
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  bool v80; // zf
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rax
  char *v85; // r9
  struct DXGALLOCATION *v86; // rcx
  __int64 v87; // rax
  int v88; // eax
  char *v89; // rdx
  __int64 v90; // rax
  __int64 v91; // rax
  _QWORD *v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  struct _VIDMM_DMA_BUFFER *v95; // r8
  unsigned int v96; // edi
  char *v97; // r14
  struct VIDMM_ALLOC *v98; // r9
  char v99; // [rsp+70h] [rbp-90h]
  struct _VIDMM_DMA_BUFFER *v100; // [rsp+78h] [rbp-88h] BYREF
  struct DXGALLOCATION *v101; // [rsp+80h] [rbp-80h]
  int v102; // [rsp+88h] [rbp-78h] BYREF
  char *v103; // [rsp+90h] [rbp-70h] BYREF
  struct DXGALLOCATION *v104; // [rsp+98h] [rbp-68h]
  UINT v105; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v106; // [rsp+A4h] [rbp-5Ch] BYREF
  struct DXGPROCESS *v107; // [rsp+A8h] [rbp-58h] BYREF
  char *v108; // [rsp+B0h] [rbp-50h]
  D3DGPU_VIRTUAL_ADDRESS *v109; // [rsp+B8h] [rbp-48h]
  D3DGPU_VIRTUAL_ADDRESS v110; // [rsp+C0h] [rbp-40h] BYREF
  LARGE_INTEGER v111; // [rsp+C8h] [rbp-38h] BYREF
  struct COREDEVICEACCESS *v112; // [rsp+D0h] [rbp-30h]
  char v113[8]; // [rsp+D8h] [rbp-28h] BYREF
  int v114; // [rsp+E0h] [rbp-20h] BYREF
  int v115; // [rsp+E4h] [rbp-1Ch]
  int v116; // [rsp+E8h] [rbp-18h]
  int v117; // [rsp+ECh] [rbp-14h]
  int v118; // [rsp+F0h] [rbp-10h]
  __int64 v119; // [rsp+F4h] [rbp-Ch] BYREF
  int v120; // [rsp+FCh] [rbp-4h]
  struct DXGALLOCATION *v121; // [rsp+100h] [rbp+0h]
  struct DXGALLOCATION *v122; // [rsp+108h] [rbp+8h]
  _QWORD v123[12]; // [rsp+110h] [rbp+10h] BYREF

  v8 = a6;
  v10 = a8;
  v11 = a3;
  v112 = a8;
  v104 = a4;
  v101 = a3;
  v100 = a6;
  Value = (struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF)a5->Flags.Value;
  v99 = 0;
  v13 = 1;
  a5->MultipassOffset = 0;
  if ( (*(_BYTE *)&Value & 4) != 0 && !a3 )
  {
    v59 = WdLogNewEntry5_WdError(a8);
    *(_QWORD *)(v59 + 24) = 6601LL;
    WdLogEvent5_WdError(v59);
    return 3221225473LL;
  }
  while ( 1 )
  {
    v103 = 0LL;
    if ( !v8 )
    {
      LODWORD(v29) = DXGCONTEXT::AcquireDmaBuffer(this, &v100, v10, 0);
      if ( (int)v29 < 0 )
      {
        v91 = WdLogNewEntry5_WdError(v60);
        *(_QWORD *)(v91 + 24) = this;
        WdLogEvent5_WdError(v91);
LABEL_137:
        v31 = v99;
        goto LABEL_138;
      }
      v8 = v100;
      if ( !v100 )
      {
        v61 = WdLogNewEntry5_WdAssertion(v60);
        *(_QWORD *)(v61 + 24) = 6628LL;
        WdLogEvent5_WdAssertion(v61);
        v8 = v100;
      }
      a4 = v104;
    }
    v115 &= 2u;
    v114 = 0;
    if ( v11 )
      v14 = *((_DWORD *)v11 + 4);
    else
      v14 = 0;
    v117 &= 2u;
    v116 = v14;
    if ( a4 )
      v15 = *((_DWORD *)a4 + 4);
    else
      v15 = 0;
    v118 = v15;
    v120 = 0;
    v121 = v11;
    v119 = v119 & 2 | 1;
    v16 = *((_QWORD *)this + 2);
    v122 = a4;
    v110 = 0LL;
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v16 + 16) + 16LL)) )
      v108 = (char *)&v119 + 4;
    else
      v108 = (char *)v19;
    if ( *((_BYTE *)this + 350) )
      v109 = &v110;
    else
      v109 = v19;
    v20 = *(_QWORD *)(v17 + 400);
    Current = DXGPROCESS::GetCurrent(v18);
    v107 = Current;
    if ( Current )
    {
      v22 = (char *)Current + 112;
      if ( *((struct _KTHREAD **)Current + 15) == KeGetCurrentThread() )
      {
        v107 = 0LL;
      }
      else
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v22, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v62 = *((_DWORD *)v22 + 4);
            if ( v62 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_q(v23, &EventBlockThread, v24, v62);
          }
          ExAcquirePushLockExclusiveEx(v22, 0LL);
        }
        *((_QWORD *)v22 + 1) = KeGetCurrentThread();
      }
    }
    v29 = (*(int (__fastcall **)(struct _VIDMM_DMA_BUFFER *, int *, __int64, _QWORD, int, UINT *, LARGE_INTEGER *, D3DGPU_VIRTUAL_ADDRESS *, struct DXGPROCESS **, char *, char *, char *))(*(_QWORD *)(v20 + 8) + 568LL))(
            v8,
            &v114,
            3LL,
            v13,
            1,
            &v105,
            &v111,
            v109,
            &v107,
            v113,
            (char *)a7 + 192,
            v108);
    if ( v107 )
    {
      v30 = (char *)v107 + 112;
      *((_QWORD *)v107 + 15) = 0LL;
      ExReleasePushLockExclusiveEx(v30, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (int)v29 < 0 )
    {
      v94 = WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
      *(_QWORD *)(v94 + 24) = this;
      *(_QWORD *)(v94 + 32) = v29;
      WdLogEvent5_WdWarning(v94);
      goto LABEL_137;
    }
    v31 = 1;
    v99 = 1;
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, char **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 400LL)
                                                                            + 8LL)
                                                                + 504LL))(
      v100,
      &v103);
    a5->pDmaBuffer = v103;
    a5->DmaSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 400LL)
                                                                                    + 8LL)
                                                                        + 528LL))(v100);
    a5->pDmaBufferPrivateData = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL)
                                                                                              + 560LL))(v100);
    a5->DmaBufferPrivateDataSize = *((_DWORD *)this + 46);
    a5->DmaBufferSegmentId = v105;
    a5->DmaBufferPhysicalAddress = v111;
    *(_DWORD *)a7 &= ~0x8000000u;
    if ( *((_BYTE *)this + 350) )
    {
      *(_DWORD *)a7 |= 0x8000000u;
      memset(v123, 0, sizeof(v123));
      v32 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                          + 400LL)
                                                                              + 8LL)
                                                                  + 552LL))(v100);
      v33 = v101;
      v34 = v32;
      v123[4] = *(_QWORD *)(v32 + 24);
      if ( v101 )
      {
        v35 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 400LL)
                                                                                    + 8LL)
                                                                        + 248LL))(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
                *((_QWORD *)v101 + 3),
                *((unsigned __int8 *)this + 351),
                *((unsigned int *)this + 82));
        v33 = v101;
        v123[5] = v35;
      }
      if ( (a5->Flags.Value & 4) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, __int16 *, _QWORD *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 400LL)
                                                                                + 8LL)
                                                                    + 216LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
          *(_QWORD *)(*((_QWORD *)v33 + 6) + 8LL),
          &v106,
          &v123[6]);
        LOWORD(v123[7]) = v106;
      }
      else if ( v104 )
      {
        v36 = *((unsigned __int8 *)this + 351);
        v37 = *((unsigned int *)this + 82);
        v123[8] = *(_QWORD *)(v34 + 48);
        v123[9] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL)
                                                                                          + 8LL)
                                                                              + 248LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
                    *((_QWORD *)v104 + 3),
                    v36,
                    v37);
        if ( !v123[9] )
        {
          v92 = (_QWORD *)WdLogNewEntry5_WdError(v38);
          LODWORD(v29) = -1073741811;
          v92[3] = this;
          v92[4] = -1073741811LL;
          v92[5] = 6769LL;
          WdLogEvent5_WdError(v92);
          goto LABEL_138;
        }
      }
      a5->DmaBufferGpuVirtualAddress = v110;
      a5->pAllocationList = (DXGK_ALLOCATIONLIST *)v123;
      a5->pPatchLocationListOut = 0LL;
      a5->PatchLocationListOutSize = 0;
    }
    else
    {
      a5->pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL) + 552LL))(v100);
      a5->pPatchLocationListOut = (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL) + 544LL))(v100);
      a5->PatchLocationListOutSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL)
                                                                                           + 536LL))(v100);
    }
    LODWORD(v29) = ADAPTER_RENDER::DdiPresent(
                     *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                     *((void **)this + 21),
                     a5);
    if ( *((_BYTE *)this + 350) && (a5->pPatchLocationListOut || a5->PatchLocationListOutSize) )
    {
      v63 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v40, v39, v41);
      v63[3] = 275LL;
      v63[4] = 9LL;
      v63[5] = a5;
      v63[6] = 0LL;
      v63[7] = 0LL;
      WdLogEvent5_WdCriticalError(v63);
    }
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                               + 400LL)
                                                                   + 8LL)
                                                       + 512LL))(v100);
    if ( (_DWORD)v29 == -1071775743 )
      break;
    if ( (int)v29 < 0 )
      goto LABEL_80;
LABEL_30:
    if ( *((_BYTE *)this + 350) )
    {
      if ( a5->pAllocationList != (DXGK_ALLOCATIONLIST *)v123 )
      {
        v67 = WdLogNewEntry5_WdAssertion(v42);
        *(_QWORD *)(v67 + 24) = 6868LL;
LABEL_85:
        WdLogEvent5_WdAssertion(v67);
      }
    }
    else if ( a5->pAllocationList != (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL) + 552LL))(v100) )
    {
      v67 = WdLogNewEntry5_WdAssertion(v68);
      *(_QWORD *)(v67 + 24) = 6872LL;
      goto LABEL_85;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 376LL)
                                                                + 8LL)
                                                    + 480LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 384LL))
      && a5->pDmaBuffer <= v103 )
    {
      v69 = WdLogNewEntry5_WdAssertion(v43);
      *(_QWORD *)(v69 + 24) = 6886LL;
      WdLogEvent5_WdAssertion(v69);
    }
    v44 = (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 400LL)
                                                                                 + 8LL)
                                                                     + 528LL))(v100);
    v45 = (int)v103;
    v46 = &v103[v44];
    if ( a5->pDmaBuffer > v46 )
    {
      v70 = WdLogNewEntry5_WdAssertion(v46);
      *(_QWORD *)(v70 + 24) = 6887LL;
      WdLogEvent5_WdAssertion(v70);
      v45 = (int)v103;
    }
    v47 = LODWORD(a5->pDmaBuffer) - v45;
    v48 = LODWORD(a5->pDmaBufferPrivateData)
        - (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 400LL)
                                                                            + 8LL)
                                                                + 560LL))(v100);
    if ( (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 400LL)
                                                                                + 8LL)
                                                                    + 528LL))(v100) < v47 )
    {
      v71 = WdLogNewEntry5_WdAssertion(v49);
      *(_QWORD *)(v71 + 24) = 6894LL;
      WdLogEvent5_WdAssertion(v71);
    }
    if ( *((_BYTE *)this + 350) )
    {
      LODWORD(v50) = 0;
    }
    else
    {
      if ( a5->pPatchLocationListOut < (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL) + 544LL))(v100) )
      {
        v73 = WdLogNewEntry5_WdAssertion(v72);
        *(_QWORD *)(v73 + 24) = 6906LL;
        WdLogEvent5_WdAssertion(v73);
      }
      v74 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                          + 400LL)
                                                                              + 8LL)
                                                                  + 544LL))(v100);
      v75 = (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                               + 400LL)
                                                                                   + 8LL)
                                                                       + 536LL))(v100);
      if ( a5->pPatchLocationListOut > (D3DDDI_PATCHLOCATIONLIST *)(v74 + 24 * v75) )
      {
        v76 = WdLogNewEntry5_WdAssertion(v75);
        *(_QWORD *)(v76 + 24) = 6907LL;
        WdLogEvent5_WdAssertion(v76);
      }
      v50 = ((__int64)a5->pPatchLocationListOut
           - (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 400LL)
                                                                               + 8LL)
                                                                   + 544LL))(v100))
          / 24;
      if ( (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 400LL)
                                                                                  + 8LL)
                                                                      + 536LL))(v100) < (unsigned int)v50 )
      {
        v77 = WdLogNewEntry5_WdAssertion(v49);
        *(_QWORD *)(v77 + 24) = 6917LL;
        WdLogEvent5_WdAssertion(v77);
      }
      if ( (qword_1C0056840 & 0x10) != 0 )
      {
        v78 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 400LL)
                                                                                + 8LL)
                                                                    + 544LL))(v100);
        TraceDxgkPatchLocationList((__int64)this, (__int64)v100, v50, v78);
      }
    }
    if ( !v47
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 376LL)
                                                                + 8LL)
                                                    + 480LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 384LL)) )
    {
      v79 = WdLogNewEntry5_WdAssertion(v49);
      *(_QWORD *)(v79 + 24) = 6932LL;
      WdLogEvent5_WdAssertion(v79);
    }
    v51 = *(_DWORD *)a7;
    if ( (*(_DWORD *)a7 & 0x20) != 0 && (_DWORD)v29 == -1071775743 )
    {
      v80 = bTracingEnabled == 0;
      *(_DWORD *)a7 = v51 | 0x40;
      if ( !v80 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q((__int64)v49, &EventPerformanceWarning, 0LL, 1);
    }
    else
    {
      *(_DWORD *)a7 = v51 & 0xFFFFFFBF;
    }
    *((_QWORD *)a7 + 1) = v100;
    *((_DWORD *)a7 + 13) = v47;
    *((_DWORD *)a7 + 12) = 0;
    *((_DWORD *)a7 + 15) = 3;
    *((_DWORD *)a7 + 14) = 0;
    *((_DWORD *)a7 + 17) = v50;
    *((_DWORD *)a7 + 16) = 0;
    *((_DWORD *)a7 + 19) = v48;
    *((_DWORD *)a7 + 18) = 0;
    if ( *((_BYTE *)this + 350) )
    {
      *((_DWORD *)a7 + 20) = v48;
      *((_DWORD *)a7 + 19) = a5->DmaBufferPrivateDataSize;
    }
    v52 = *((_BYTE *)a7 + 348);
    if ( v52 )
      v53 = (char *)a7 + 424;
    else
      v53 = (char *)a7 + 416;
    v54 = (char *)a7 + 424;
    if ( v52 )
      v55 = (struct VIDMM_ALLOC **)((char *)a7
                                  + *((_DWORD *)a7 + 107) * ((8 * *((_DWORD *)a7 + 108) + 167) & 0xFFFFFFF8)
                                  + 472);
    else
      v55 = (struct VIDMM_ALLOC **)((char *)a7 + 424);
    if ( *((_DWORD *)a7 + 30) == 4 )
    {
      if ( !v101 )
      {
        v81 = WdLogNewEntry5_WdAssertion(v49);
        *(_QWORD *)(v81 + 24) = 6968LL;
        WdLogEvent5_WdAssertion(v81);
      }
      if ( (*(_DWORD *)a7 & 0x40) != 0 )
      {
        v82 = WdLogNewEntry5_WdAssertion(v49);
        *(_QWORD *)(v82 + 24) = 6969LL;
        WdLogEvent5_WdAssertion(v82);
      }
      *v53 = 1;
      if ( (int)VIDMM_EXPORT::VidMmReferencePrimaryAllocationForSubmission(
                  *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL),
                  *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 560LL),
                  *((struct _VIDMM_MULTI_ALLOC **)v101 + 3),
                  v55) < 0 )
      {
        v84 = WdLogNewEntry5_WdAssertion(v83);
        *(_QWORD *)(v84 + 24) = 6988LL;
        WdLogEvent5_WdAssertion(v84);
      }
      if ( *((_BYTE *)a7 + 348) )
        v85 = (char *)a7 + *((_DWORD *)a7 + 107) * ((8 * *((_DWORD *)a7 + 108) + 167) & 0xFFFFFFF8) + 464;
      else
        v85 = (char *)a7 + 440;
      (*(void (__fastcall **)(_QWORD, _QWORD, int *, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                + 16LL)
                                                                                    + 400LL)
                                                                        + 8LL)
                                                            + 216LL))(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
        *(_QWORD *)(*((_QWORD *)v101 + 6) + 8LL),
        &v102,
        v85);
      if ( *((_BYTE *)a7 + 348) )
        *(_WORD *)&v54[*((_DWORD *)a7 + 107) * ((8 * *((_DWORD *)a7 + 108) + 167) & 0xFFFFFFF8) + 32] = v102;
      else
        *((_DWORD *)a7 + 119) ^= (*((_DWORD *)a7 + 119) ^ (v102 << 17)) & 0x3E0000;
      v86 = v101;
      v87 = *((_QWORD *)v101 + 5);
      if ( v87 )
        v88 = (*(_DWORD *)(v87 + 4) >> 3) & 1;
      else
        v88 = 0;
      if ( *((_BYTE *)a7 + 348) )
      {
        v54[*((_DWORD *)a7 + 107) * ((8 * *((_DWORD *)a7 + 108) + 167) & 0xFFFFFFF8) + 56] = v88 != 0;
        v86 = v101;
      }
      else
      {
        *((_DWORD *)a7 + 119) ^= (*((_DWORD *)a7 + 119) ^ (v88 << 23)) & 0x800000;
      }
      if ( *((_BYTE *)a7 + 348) )
        v89 = (char *)a7 + *((_DWORD *)a7 + 107) * ((8 * *((_DWORD *)a7 + 108) + 167) & 0xFFFFFFF8) + 448;
      else
        v89 = (char *)a7 + 432;
      *(_QWORD *)v89 = *(_QWORD *)(*((_QWORD *)v86 + 6) + 16LL);
      if ( *((_BYTE *)a7 + 348) )
        v49 = (char *)a7 + *((_DWORD *)a7 + 107) * ((8 * *((_DWORD *)a7 + 108) + 167) & 0xFFFFFFF8) + 440;
      else
        v49 = (char *)a7 + 480;
      *(_QWORD *)v49 = *((_QWORD *)this + 21);
    }
    else if ( (unsigned __int8)*(_DWORD *)v53 )
    {
      v90 = WdLogNewEntry5_WdAssertion(v49);
      *(_QWORD *)(v90 + 24) = 7014LL;
      WdLogEvent5_WdAssertion(v90);
    }
    if ( *((struct _KTHREAD **)this + 46) != KeGetCurrentThread() )
    {
      v56 = WdLogNewEntry5_WdAssertion(v49);
      *(_QWORD *)(v56 + 24) = 7017LL;
      WdLogEvent5_WdAssertion(v56);
    }
    v57 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL)
                                                                                          + 8LL)
                                                                              + 344LL))(
            *((_QWORD *)this + 27),
            a7);
    if ( v57 < 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL)
                                                         + 8LL)
                                             + 352LL))(
        *((_QWORD *)this + 27),
        0LL);
      if ( (unsigned __int8)*(_DWORD *)v53 && *v55 )
        VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
          *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL),
          *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 560LL),
          *((_DWORD *)a7 + 34),
          *v55);
      LODWORD(v29) = v57;
      goto LABEL_137;
    }
    v13 = 0;
    v100 = 0LL;
    v8 = 0LL;
    if ( (_DWORD)v29 != -1071775743 )
      return (unsigned int)v29;
    a4 = v104;
    v11 = v101;
    v10 = v112;
  }
  if ( (a5->Flags.Value & 4) == 0 )
    goto LABEL_30;
  v64 = WdLogNewEntry5_WdError(v42);
  *(_QWORD *)(v64 + 24) = this;
  WdLogEvent5_WdError(v64);
  LODWORD(v29) = -1073741823;
LABEL_80:
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL)
                                                     + 8LL)
                                         + 352LL))(
    *((_QWORD *)this + 27),
    0LL);
  if ( (_DWORD)v29 == -1071775736 )
  {
    v66 = WdLogNewEntry5_WdEvent(v65);
    *(_QWORD *)(v66 + 24) = this;
    *(_QWORD *)(v66 + 32) = -1071775736LL;
    WdLogEvent5_WdEvent(v66);
  }
  else
  {
    v93 = WdLogNewEntry5_WdError(v65);
    *(_QWORD *)(v93 + 32) = (int)v29;
    *(_QWORD *)(v93 + 24) = this;
    WdLogEvent5_WdError(v93);
  }
LABEL_138:
  if ( v100 )
  {
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
    {
      v96 = 0;
      if ( *((_DWORD *)a7 + 48) )
      {
        do
        {
          v97 = (char *)a7 + 8 * v96;
          v98 = (struct VIDMM_ALLOC *)*((_QWORD *)v97 + 25);
          if ( v98 )
          {
            VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
              *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL),
              *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 560LL),
              0,
              v98);
            *((_QWORD *)v97 + 25) = 0LL;
          }
          ++v96;
        }
        while ( v96 < *((_DWORD *)a7 + 48) );
        v95 = v100;
      }
    }
    if ( v31 )
    {
      VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL),
        v95);
      v95 = v100;
    }
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 400LL)
                                                                           + 8LL)
                                                               + 496LL))(
      v95,
      0LL);
  }
  return (unsigned int)v29;
}
