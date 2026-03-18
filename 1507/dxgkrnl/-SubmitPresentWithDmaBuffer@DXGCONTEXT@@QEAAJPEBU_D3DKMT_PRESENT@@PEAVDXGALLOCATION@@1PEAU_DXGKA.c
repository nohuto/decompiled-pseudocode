/*
 * XREFs of ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B7E90
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C006B8B0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002474 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkSqmCreateDwordStreamEntry @ 0x1C000F300 (DxgkSqmCreateDwordStreamEntry.c)
 *     ?VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C000FA0C (-VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MU.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     TraceDxgkPatchLocationList @ 0x1C001E040 (TraceDxgkPatchLocationList.c)
 *     ?VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C001F0C8 (-VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C001F118 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     DxgkSqmCreateStringStreamEntry @ 0x1C001FAC0 (DxgkSqmCreateStringStreamEntry.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00B3A64 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C00B8598 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     DxgkSqmAddToStream @ 0x1C00DA220 (DxgkSqmAddToStream.c)
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
  unsigned __int8 v12; // r12
  struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF Value; // eax
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
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  int v51; // eax
  char *v52; // rcx
  unsigned int v53; // r12d
  int v54; // r13d
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdi
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdi
  int v68; // eax
  char v69; // al
  struct VIDMM_ALLOC **v70; // r13
  _BYTE *v71; // r12
  __int64 v72; // rax
  int v73; // edi
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rax
  int v81; // r9d
  __int64 v82; // rax
  struct DXGALLOCATION *v83; // r15
  __int64 v84; // rdi
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rcx
  _QWORD *v88; // rax
  _QWORD *v89; // rax
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  bool v105; // zf
  struct DXGALLOCATION *v106; // rdi
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  char v118; // di
  __int64 v119; // rcx
  const char *ProcessImageFileName; // rax
  __int64 v121; // rax
  struct _VIDMM_DMA_BUFFER *v122; // r8
  __int64 v123; // rdi
  char *v124; // r14
  struct VIDMM_ALLOC *v125; // r9
  char v126; // [rsp+70h] [rbp-90h]
  struct _VIDMM_DMA_BUFFER *v127; // [rsp+78h] [rbp-88h] BYREF
  char *v128; // [rsp+80h] [rbp-80h] BYREF
  struct DXGALLOCATION *v129; // [rsp+88h] [rbp-78h]
  __int16 v130[2]; // [rsp+90h] [rbp-70h] BYREF
  UINT v131; // [rsp+94h] [rbp-6Ch] BYREF
  struct DXGPROCESS *v132; // [rsp+98h] [rbp-68h] BYREF
  int v133; // [rsp+A0h] [rbp-60h] BYREF
  struct DXGALLOCATION *v134; // [rsp+A8h] [rbp-58h]
  D3DGPU_VIRTUAL_ADDRESS *v135; // [rsp+B0h] [rbp-50h]
  D3DGPU_VIRTUAL_ADDRESS v136; // [rsp+B8h] [rbp-48h] BYREF
  char *v137; // [rsp+C0h] [rbp-40h]
  struct _UNICODE_STRING UnicodeString; // [rsp+C8h] [rbp-38h] BYREF
  LARGE_INTEGER v139; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v140; // [rsp+E0h] [rbp-20h]
  struct COREDEVICEACCESS *v141; // [rsp+E8h] [rbp-18h]
  char v142[8]; // [rsp+F0h] [rbp-10h] BYREF
  struct _STRING DestinationString; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v144[16]; // [rsp+108h] [rbp+8h] BYREF
  int v145[4]; // [rsp+118h] [rbp+18h] BYREF
  int v146; // [rsp+128h] [rbp+28h] BYREF
  int v147; // [rsp+12Ch] [rbp+2Ch]
  int v148; // [rsp+130h] [rbp+30h]
  int v149; // [rsp+134h] [rbp+34h]
  int v150; // [rsp+138h] [rbp+38h]
  __int64 v151; // [rsp+13Ch] [rbp+3Ch] BYREF
  int v152; // [rsp+144h] [rbp+44h]
  struct DXGALLOCATION *v153; // [rsp+148h] [rbp+48h]
  struct DXGALLOCATION *v154; // [rsp+150h] [rbp+50h]
  _QWORD v155[12]; // [rsp+160h] [rbp+60h] BYREF

  v8 = a6;
  v10 = a8;
  v11 = a3;
  v141 = a8;
  v129 = a4;
  v134 = a3;
  v127 = a6;
  v12 = 1;
  v126 = 0;
  v140 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  Value = (struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF)a5->Flags.Value;
  a5->MultipassOffset = 0;
  if ( (*(_BYTE *)&Value & 4) != 0 && !a3 )
  {
    v75 = WdLogNewEntry5_WdError(a8);
    *(_QWORD *)(v75 + 24) = 6085LL;
    WdLogEvent5_WdError(v75);
    return 3221225473LL;
  }
  while ( 1 )
  {
    v128 = 0LL;
    if ( !v8 )
    {
      LODWORD(v29) = DXGCONTEXT::AcquireDmaBuffer(this, &v127, v10, 0);
      if ( (int)v29 < 0 )
      {
        v116 = WdLogNewEntry5_WdError(v77);
        *(_QWORD *)(v116 + 24) = this;
        WdLogEvent5_WdError(v116);
LABEL_124:
        v31 = v126;
        goto LABEL_125;
      }
      v8 = v127;
      if ( !v127 )
      {
        v80 = WdLogNewEntry5_WdAssertion(v77, v76, v78, v79);
        *(_QWORD *)(v80 + 24) = 6112LL;
        WdLogEvent5_WdAssertion(v80);
        v8 = v127;
      }
      a4 = v129;
    }
    v147 &= 2u;
    v146 = 0;
    if ( v11 )
      v14 = *((_DWORD *)v11 + 4);
    else
      v14 = 0;
    v149 &= 2u;
    v148 = v14;
    if ( a4 )
      v15 = *((_DWORD *)a4 + 4);
    else
      v15 = 0;
    v150 = v15;
    v152 = 0;
    v153 = v11;
    v151 = v151 & 2 | 1;
    v16 = *((_QWORD *)this + 2);
    v154 = a4;
    v136 = 0LL;
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v16 + 16) + 16LL)) )
      v137 = (char *)&v151 + 4;
    else
      v137 = (char *)v19;
    if ( *((_BYTE *)this + 350) )
      v135 = &v136;
    else
      v135 = v19;
    v20 = *(_QWORD *)(v17 + 400);
    Current = DXGPROCESS::GetCurrent(v18);
    v132 = Current;
    if ( Current )
    {
      v22 = (char *)Current + 120;
      if ( *((struct _KTHREAD **)Current + 16) == KeGetCurrentThread() )
      {
        v132 = 0LL;
      }
      else
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v22, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v81 = *((_DWORD *)v22 + 4);
            if ( v81 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
              Template_q(v23, &EventBlockThread, v24, v81);
          }
          ExAcquirePushLockExclusiveEx(v22, 0LL);
        }
        *((_QWORD *)v22 + 1) = KeGetCurrentThread();
      }
    }
    v29 = (*(int (__fastcall **)(struct _VIDMM_DMA_BUFFER *, int *, __int64, _QWORD, int, UINT *, LARGE_INTEGER *, D3DGPU_VIRTUAL_ADDRESS *, struct DXGPROCESS **, char *, char *, char *))(*(_QWORD *)(v20 + 8) + 552LL))(
            v8,
            &v146,
            3LL,
            v12,
            1,
            &v131,
            &v139,
            v135,
            &v132,
            v142,
            (char *)a7 + 192,
            v137);
    if ( v132 )
    {
      v30 = (char *)v132 + 120;
      *((_QWORD *)v132 + 16) = 0LL;
      ExReleasePushLockExclusiveEx(v30, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (int)v29 < 0 )
    {
      v121 = WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
      *(_QWORD *)(v121 + 24) = this;
      *(_QWORD *)(v121 + 32) = v29;
      WdLogEvent5_WdWarning(v121);
      goto LABEL_124;
    }
    v31 = 1;
    v126 = 1;
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, char **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 400LL)
                                                                            + 8LL)
                                                                + 488LL))(
      v127,
      &v128);
    a5->pDmaBuffer = v128;
    a5->DmaSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 400LL)
                                                                                    + 8LL)
                                                                        + 512LL))(v127);
    a5->pDmaBufferPrivateData = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL)
                                                                                              + 544LL))(v127);
    a5->DmaBufferPrivateDataSize = *((_DWORD *)this + 46);
    a5->DmaBufferSegmentId = v131;
    a5->DmaBufferPhysicalAddress = v139;
    *(_DWORD *)a7 &= ~0x10000000u;
    if ( *((_BYTE *)this + 350) )
    {
      *(_DWORD *)a7 |= 0x10000000u;
      memset(v155, 0, sizeof(v155));
      v82 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                          + 400LL)
                                                                              + 8LL)
                                                                  + 536LL))(v127);
      v83 = v134;
      v84 = v82;
      v155[4] = *(_QWORD *)(v82 + 24);
      if ( v134 )
        v155[5] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL)
                                                                                        + 8LL)
                                                                            + 240LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
                    *((_QWORD *)v134 + 3),
                    *((unsigned __int8 *)this + 351),
                    *((unsigned int *)this + 82));
      if ( (a5->Flags.Value & 4) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, __int16 *, _QWORD *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 400LL)
                                                                                + 8LL)
                                                                    + 208LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
          *(_QWORD *)(*((_QWORD *)v83 + 6) + 8LL),
          v130,
          &v155[6]);
        LOWORD(v155[7]) = v130[0];
      }
      else if ( v129 )
      {
        v85 = *((unsigned __int8 *)this + 351);
        v86 = *((unsigned int *)this + 82);
        v155[8] = *(_QWORD *)(v84 + 48);
        v155[9] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL)
                                                                                          + 8LL)
                                                                              + 240LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
                    *((_QWORD *)v129 + 3),
                    v85,
                    v86);
        if ( !v155[9] )
        {
          v88 = (_QWORD *)WdLogNewEntry5_WdError(v87);
          LODWORD(v29) = -1073741811;
          v88[3] = this;
          v88[4] = -1073741811LL;
          v88[5] = 6253LL;
          WdLogEvent5_WdError(v88);
          goto LABEL_125;
        }
      }
      a5->DmaBufferGpuVirtualAddress = v136;
      a5->pAllocationList = (DXGK_ALLOCATIONLIST *)v155;
      a5->pPatchLocationListOut = 0LL;
      a5->PatchLocationListOutSize = 0;
    }
    else
    {
      a5->pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL) + 536LL))(v127);
      a5->pPatchLocationListOut = (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL) + 528LL))(v127);
      a5->PatchLocationListOutSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL)
                                                                                           + 520LL))(v127);
    }
    LODWORD(v29) = ADAPTER_RENDER::DdiPresent(
                     *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                     *((void **)this + 21),
                     a5);
    if ( *((_BYTE *)this + 350) && (a5->pPatchLocationListOut || a5->PatchLocationListOutSize) )
    {
      v89 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, v32, v34);
      v89[3] = 275LL;
      v89[4] = 9LL;
      v89[5] = a5;
      v89[6] = 0LL;
      v89[7] = 0LL;
      WdLogEvent5_WdCriticalError(v89);
    }
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                               + 400LL)
                                                                   + 8LL)
                                                       + 496LL))(v127);
    if ( (_DWORD)v29 == -1071775743 )
      break;
    if ( (int)v29 < 0 )
      goto LABEL_88;
LABEL_23:
    if ( *((_BYTE *)this + 350) )
    {
      if ( a5->pAllocationList != (DXGK_ALLOCATIONLIST *)v155 )
      {
        v96 = WdLogNewEntry5_WdAssertion(v36, v35, v37, v38);
        *(_QWORD *)(v96 + 24) = 6352LL;
LABEL_93:
        WdLogEvent5_WdAssertion(v96);
      }
    }
    else if ( a5->pAllocationList != (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL) + 536LL))(v127) )
    {
      v96 = WdLogNewEntry5_WdAssertion(v40, v39, v41, v42);
      *(_QWORD *)(v96 + 24) = 6356LL;
      goto LABEL_93;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 376LL)
                                                                + 8LL)
                                                    + 480LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 384LL))
      && a5->pDmaBuffer <= v128 )
    {
      v97 = WdLogNewEntry5_WdAssertion(v44, v43, v45, v46);
      *(_QWORD *)(v97 + 24) = 6370LL;
      WdLogEvent5_WdAssertion(v97);
    }
    v48 = (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 400LL)
                                                                                 + 8LL)
                                                                     + 512LL))(v127);
    v51 = (int)v128;
    v52 = &v128[v48];
    if ( a5->pDmaBuffer > v52 )
    {
      v98 = WdLogNewEntry5_WdAssertion(v52, v47, v49, v50);
      *(_QWORD *)(v98 + 24) = 6371LL;
      WdLogEvent5_WdAssertion(v98);
      v51 = (int)v128;
    }
    v53 = LODWORD(a5->pDmaBuffer) - v51;
    v54 = LODWORD(a5->pDmaBufferPrivateData)
        - (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 400LL)
                                                                            + 8LL)
                                                                + 544LL))(v127);
    if ( (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 400LL)
                                                                                + 8LL)
                                                                    + 512LL))(v127) < v53 )
    {
      v99 = WdLogNewEntry5_WdAssertion(v56, v55, v57, v58);
      *(_QWORD *)(v99 + 24) = 6378LL;
      WdLogEvent5_WdAssertion(v99);
    }
    if ( *((_BYTE *)this + 350) )
    {
      LODWORD(v67) = 0;
    }
    else
    {
      if ( a5->pPatchLocationListOut < (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL) + 528LL))(v127) )
      {
        v100 = WdLogNewEntry5_WdAssertion(v60, v59, v61, v62);
        *(_QWORD *)(v100 + 24) = 6390LL;
        WdLogEvent5_WdAssertion(v100);
      }
      v63 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                          + 400LL)
                                                                              + 8LL)
                                                                  + 528LL))(v127);
      v64 = (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                               + 400LL)
                                                                                   + 8LL)
                                                                       + 520LL))(v127);
      if ( a5->pPatchLocationListOut > (D3DDDI_PATCHLOCATIONLIST *)(v63 + 24 * v64) )
      {
        v101 = WdLogNewEntry5_WdAssertion(v64, 3 * v64, v65, v66);
        *(_QWORD *)(v101 + 24) = 6391LL;
        WdLogEvent5_WdAssertion(v101);
      }
      v67 = ((__int64)a5->pPatchLocationListOut
           - (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 400LL)
                                                                               + 8LL)
                                                                   + 528LL))(v127))
          / 24;
      if ( (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 400LL)
                                                                                  + 8LL)
                                                                      + 520LL))(v127) < (unsigned int)v67 )
      {
        v102 = WdLogNewEntry5_WdAssertion(v56, v55, v57, v58);
        *(_QWORD *)(v102 + 24) = 6401LL;
        WdLogEvent5_WdAssertion(v102);
      }
      if ( (qword_1C00467F0 & 0x10) != 0 )
      {
        v103 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 400LL)
                                                                                 + 8LL)
                                                                     + 528LL))(v127);
        TraceDxgkPatchLocationList((__int64)this, (__int64)v127, v67, v103);
      }
    }
    if ( !v53
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 376LL)
                                                                + 8LL)
                                                    + 480LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 384LL)) )
    {
      v104 = WdLogNewEntry5_WdAssertion(v56, v55, v57, v58);
      *(_QWORD *)(v104 + 24) = 6416LL;
      WdLogEvent5_WdAssertion(v104);
    }
    v68 = *(_DWORD *)a7;
    if ( (*(_DWORD *)a7 & 0x40) != 0 && (_DWORD)v29 == -1071775743 )
    {
      v105 = bTracingEnabled == 0;
      *(_DWORD *)a7 = v68 | 0x80;
      if ( !v105 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v56, &EventPerformanceWarning, v57, 1);
    }
    else
    {
      *(_DWORD *)a7 = v68 & 0xFFFFFF7F;
    }
    *((_QWORD *)a7 + 1) = v127;
    *((_DWORD *)a7 + 12) = 0;
    *((_DWORD *)a7 + 14) = 0;
    *((_DWORD *)a7 + 16) = 0;
    *((_DWORD *)a7 + 18) = 0;
    *((_DWORD *)a7 + 13) = v53;
    *((_DWORD *)a7 + 15) = 3;
    *((_DWORD *)a7 + 17) = v67;
    *((_DWORD *)a7 + 19) = v54;
    if ( *((_BYTE *)this + 350) )
    {
      *((_DWORD *)a7 + 20) = v54;
      *((_DWORD *)a7 + 19) = a5->DmaBufferPrivateDataSize;
    }
    v69 = *((_BYTE *)a7 + 348);
    if ( v69 )
      v70 = (struct VIDMM_ALLOC **)((char *)a7 + 376);
    else
      v70 = (struct VIDMM_ALLOC **)((char *)a7 + 360);
    if ( v69 )
      v71 = (char *)a7 + 360;
    else
      v71 = (char *)a7 + 352;
    if ( *((_DWORD *)a7 + 30) == 4 )
    {
      v106 = v134;
      if ( !v134 )
      {
        v107 = WdLogNewEntry5_WdAssertion(v56, v55, v57, v58);
        *(_QWORD *)(v107 + 24) = 6452LL;
        WdLogEvent5_WdAssertion(v107);
      }
      if ( (*(_DWORD *)a7 & 0x80u) != 0 )
      {
        v108 = WdLogNewEntry5_WdAssertion(v56, v55, v57, v58);
        *(_QWORD *)(v108 + 24) = 6453LL;
        WdLogEvent5_WdAssertion(v108);
      }
      *v71 = 1;
      if ( (int)VIDMM_EXPORT::VidMmReferencePrimaryAllocationForSubmission(
                  *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL),
                  *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 536LL),
                  *((struct _VIDMM_MULTI_ALLOC **)v106 + 3),
                  v70) < 0 )
      {
        v113 = WdLogNewEntry5_WdAssertion(v110, v109, v111, v112);
        *(_QWORD *)(v113 + 24) = 6472LL;
        WdLogEvent5_WdAssertion(v113);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, int *, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                + 16LL)
                                                                                    + 400LL)
                                                                        + 8LL)
                                                            + 208LL))(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
        *(_QWORD *)(*((_QWORD *)v106 + 6) + 8LL),
        &v133,
        (char *)v70 + 16);
      *((_DWORD *)v70 + 13) ^= (*((_DWORD *)v70 + 13) ^ (v133 << 17)) & 0x3E0000;
      v114 = *((_QWORD *)v106 + 5);
      if ( v114 )
        LODWORD(v114) = (*(_DWORD *)(v114 + 4) >> 3) & 1;
      *((_DWORD *)v70 + 13) ^= (*((_DWORD *)v70 + 13) ^ ((_DWORD)v114 << 23)) & 0x800000;
      v56 = *(_QWORD *)(*((_QWORD *)v106 + 6) + 16LL);
      v70[1] = (struct VIDMM_ALLOC *)v56;
    }
    else if ( (unsigned __int8)*(_DWORD *)v71 )
    {
      v115 = WdLogNewEntry5_WdAssertion(v56, v55, v57, v58);
      *(_QWORD *)(v115 + 24) = 6494LL;
      WdLogEvent5_WdAssertion(v115);
    }
    if ( *((struct _KTHREAD **)this + 46) != KeGetCurrentThread() )
    {
      v72 = WdLogNewEntry5_WdAssertion(v56, v55, v57, v58);
      *(_QWORD *)(v72 + 24) = 6497LL;
      WdLogEvent5_WdAssertion(v72);
    }
    v73 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL)
                                                                                          + 8LL)
                                                                              + 344LL))(
            *((_QWORD *)this + 27),
            a7);
    if ( v73 < 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL)
                                                         + 8LL)
                                             + 352LL))(
        *((_QWORD *)this + 27),
        0LL);
      if ( (unsigned __int8)*(_DWORD *)v71 && *v70 )
        VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
          *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL),
          *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 536LL),
          *((_DWORD *)a7 + 34),
          *v70);
      LODWORD(v29) = v73;
      goto LABEL_124;
    }
    v12 = 0;
    v127 = 0LL;
    v8 = 0LL;
    if ( (_DWORD)v29 != -1071775743 )
      return (unsigned int)v29;
    v11 = v134;
    a4 = v129;
    v10 = v141;
  }
  if ( (a5->Flags.Value & 4) == 0 )
    goto LABEL_23;
  v90 = WdLogNewEntry5_WdError(v36);
  *(_QWORD *)(v90 + 24) = this;
  WdLogEvent5_WdError(v90);
  LODWORD(v29) = -1073741823;
LABEL_88:
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL)
                                                     + 8LL)
                                         + 352LL))(
    *((_QWORD *)this + 27),
    0LL);
  if ( (_DWORD)v29 == -1071775736 )
  {
    v95 = WdLogNewEntry5_WdEvent(v92, v91, v93, v94);
    *(_QWORD *)(v95 + 24) = this;
    *(_QWORD *)(v95 + 32) = -1071775736LL;
    WdLogEvent5_WdEvent(v95);
  }
  else
  {
    v117 = WdLogNewEntry5_WdError(v92);
    *(_QWORD *)(v117 + 32) = (int)v29;
    *(_QWORD *)(v117 + 24) = this;
    WdLogEvent5_WdError(v117);
    v118 = 0;
    *(_QWORD *)&UnicodeString.Length = 0LL;
    UnicodeString.Buffer = 0LL;
    v119 = *(_QWORD *)(v140 + 56);
    if ( v119
      && (ProcessImageFileName = (const char *)PsGetProcessImageFileName(v119),
          RtlInitAnsiString(&DestinationString, ProcessImageFileName),
          RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0) )
    {
      v118 = 1;
    }
    else
    {
      RtlInitUnicodeString(&UnicodeString, L"<Unknown>");
    }
    DxgkSqmCreateStringStreamEntry((__int64)v144, UnicodeString.Buffer);
    DxgkSqmCreateDwordStreamEntry(v145, 2);
    DxgkSqmAddToStream(4783LL, 2LL, v144);
    if ( v118 )
      RtlFreeUnicodeString(&UnicodeString);
  }
LABEL_125:
  v122 = v127;
  if ( v127 )
  {
    v123 = 0LL;
    if ( *((_DWORD *)a7 + 48) )
    {
      do
      {
        v124 = (char *)a7 + 8 * v123;
        v125 = (struct VIDMM_ALLOC *)*((_QWORD *)v124 + 25);
        if ( v125 )
        {
          VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL),
            *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 536LL),
            0,
            v125);
          *((_QWORD *)v124 + 25) = 0LL;
        }
        v123 = (unsigned int)(v123 + 1);
      }
      while ( (unsigned int)v123 < *((_DWORD *)a7 + 48) );
      v122 = v127;
    }
    if ( v31 )
    {
      VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL),
        v122);
      v122 = v127;
    }
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 400LL)
                                                                           + 8LL)
                                                               + 480LL))(
      v122,
      0LL);
  }
  return (unsigned int)v29;
}
