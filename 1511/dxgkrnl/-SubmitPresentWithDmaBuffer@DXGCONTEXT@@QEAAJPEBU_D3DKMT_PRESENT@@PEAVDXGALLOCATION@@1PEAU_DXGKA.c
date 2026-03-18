/*
 * XREFs of ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C007DB48
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C007E190 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BC8 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0003150 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkSqmCreateDwordStreamEntry @ 0x1C0010120 (DxgkSqmCreateDwordStreamEntry.c)
 *     ?VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0011054 (-VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MU.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     TraceDxgkPatchLocationList @ 0x1C001E100 (TraceDxgkPatchLocationList.c)
 *     ?VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C001EFB4 (-VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C001F004 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     DxgkSqmCreateStringStreamEntry @ 0x1C001F830 (DxgkSqmCreateStringStreamEntry.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C0068E30 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00C8FA4 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     DxgkSqmAddToStream @ 0x1C00E7550 (DxgkSqmAddToStream.c)
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
  struct _VIDMM_DMA_BUFFER *v8; // rbx
  struct COREDEVICEACCESS *v10; // rcx
  struct DXGALLOCATION *v11; // r13
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // r12
  __int64 v18; // rdx
  struct DXGPROCESS *Current; // rax
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r15
  char *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // eax
  char *v39; // rcx
  unsigned int v40; // r12d
  int v41; // ecx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rbx
  int v46; // eax
  int v47; // eax
  struct VIDMM_ALLOC **v48; // rbx
  _BYTE *v49; // r12
  __int64 v50; // rax
  int v51; // r13d
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rbx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  bool v71; // zf
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rax
  int v77; // eax
  __int64 v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rax
  char v83; // bl
  __int64 v84; // rcx
  const char *ProcessImageFileName; // rax
  __int64 v86; // rax
  struct _VIDMM_DMA_BUFFER *v87; // r8
  unsigned int v88; // ebx
  struct VIDMM_ALLOC *v89; // r9
  struct _VIDMM_DMA_BUFFER *v90; // [rsp+70h] [rbp-90h] BYREF
  char v91; // [rsp+78h] [rbp-88h]
  char v92; // [rsp+79h] [rbp-87h]
  char *v93; // [rsp+80h] [rbp-80h] BYREF
  struct DXGALLOCATION *v94; // [rsp+88h] [rbp-78h]
  __int64 v95; // [rsp+90h] [rbp-70h]
  UINT v96; // [rsp+98h] [rbp-68h] BYREF
  int v97; // [rsp+9Ch] [rbp-64h] BYREF
  __int16 v98; // [rsp+A0h] [rbp-60h] BYREF
  struct DXGPROCESS *v99; // [rsp+A8h] [rbp-58h] BYREF
  D3DGPU_VIRTUAL_ADDRESS v100; // [rsp+B0h] [rbp-50h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+B8h] [rbp-48h] BYREF
  LARGE_INTEGER v102; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v103; // [rsp+D0h] [rbp-30h]
  struct COREDEVICEACCESS *v104; // [rsp+D8h] [rbp-28h]
  struct DXGALLOCATION *v105; // [rsp+E0h] [rbp-20h]
  struct _STRING DestinationString; // [rsp+E8h] [rbp-18h] BYREF
  char v107[8]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v108[16]; // [rsp+100h] [rbp+0h] BYREF
  int v109[4]; // [rsp+110h] [rbp+10h] BYREF
  int v110; // [rsp+120h] [rbp+20h] BYREF
  int v111; // [rsp+124h] [rbp+24h]
  int v112; // [rsp+128h] [rbp+28h]
  int v113; // [rsp+12Ch] [rbp+2Ch]
  int v114; // [rsp+130h] [rbp+30h]
  __int64 v115; // [rsp+134h] [rbp+34h] BYREF
  int v116; // [rsp+13Ch] [rbp+3Ch]
  struct DXGALLOCATION *v117; // [rsp+140h] [rbp+40h]
  struct DXGALLOCATION *v118; // [rsp+148h] [rbp+48h]
  _QWORD v119[12]; // [rsp+150h] [rbp+50h] BYREF

  v8 = a6;
  v10 = a8;
  v11 = a3;
  v104 = a8;
  v94 = a4;
  v105 = a3;
  v90 = a6;
  v12 = *((_QWORD *)this + 2);
  v91 = 1;
  v92 = 0;
  v103 = *(_QWORD *)(v12 + 40);
  LODWORD(v12) = a5->Flags.0;
  a5->MultipassOffset = 0;
  if ( (v12 & 4) != 0 && !a3 )
  {
    v53 = WdLogNewEntry5_WdError(a8);
    *(_QWORD *)(v53 + 24) = 6030LL;
    WdLogEvent5_WdError(v53);
    return 3221225473LL;
  }
  while ( 1 )
  {
    v93 = 0LL;
    if ( !v8 )
    {
      LODWORD(v25) = DXGCONTEXT::AcquireDmaBuffer(this, &v90, v10, 0);
      if ( (int)v25 < 0 )
      {
        v79 = (_QWORD *)WdLogNewEntry5_WdError(v54);
        goto LABEL_97;
      }
      v8 = v90;
      if ( !v90 )
      {
        v55 = WdLogNewEntry5_WdAssertion(v54);
        *(_QWORD *)(v55 + 24) = 6057LL;
        WdLogEvent5_WdAssertion(v55);
        v8 = v90;
      }
      a4 = v94;
    }
    v111 &= 2u;
    v110 = 0;
    if ( v11 )
      v13 = *((_DWORD *)v11 + 4);
    else
      v13 = 0;
    v113 &= 2u;
    v112 = v13;
    if ( a4 )
      v14 = *((_DWORD *)a4 + 4);
    else
      v14 = 0;
    v114 = v14;
    v116 = 0;
    v117 = v11;
    v115 = v115 & 2 | 1;
    v15 = *((_QWORD *)this + 2);
    v118 = a4;
    v100 = 0LL;
    v16 = ((unsigned __int64)&v115 + 4) & -(__int64)(DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v15 + 16) + 16LL)) != 0);
    v17 = (unsigned __int64)&v100 & -(__int64)(*((_BYTE *)this + 350) != 0);
    v95 = *(_QWORD *)(v18 + 424);
    Current = DXGPROCESS::GetCurrent();
    v99 = Current;
    if ( Current )
    {
      if ( *((struct _KTHREAD **)Current + 16) == KeGetCurrentThread() )
        v99 = 0LL;
      else
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 120));
    }
    LOBYTE(v20) = v91;
    v25 = (*(int (__fastcall **)(struct _VIDMM_DMA_BUFFER *, int *, __int64, __int64, int, UINT *, LARGE_INTEGER *, unsigned __int64, struct DXGPROCESS **, char *, char *, unsigned __int64))(*(_QWORD *)(v95 + 8) + 552LL))(
            v8,
            &v110,
            3LL,
            v20,
            1,
            &v96,
            &v102,
            v17,
            &v99,
            v107,
            (char *)a7 + 192,
            v16);
    if ( v99 )
    {
      v26 = (char *)v99 + 120;
      *((_QWORD *)v99 + 16) = 0LL;
      ExReleasePushLockExclusiveEx(v26, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (int)v25 < 0 )
      break;
    v27 = *((_QWORD *)this + 2);
    v92 = 1;
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, char **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 424LL)
                                                                            + 8LL)
                                                                + 488LL))(
      v90,
      &v93);
    a5->pDmaBuffer = v93;
    a5->DmaSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 424LL)
                                                                                    + 8LL)
                                                                        + 512LL))(v90);
    a5->pDmaBufferPrivateData = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL) + 8LL)
                                                                                              + 544LL))(v90);
    a5->DmaBufferPrivateDataSize = *((_DWORD *)this + 46);
    a5->DmaBufferSegmentId = v96;
    a5->DmaBufferPhysicalAddress = v102;
    *(_DWORD *)a7 &= ~0x8000000u;
    if ( !*((_BYTE *)this + 350) )
    {
      a5->pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL) + 8LL) + 536LL))(v90);
      a5->pPatchLocationListOut = (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL) + 8LL) + 528LL))(v90);
      a5->PatchLocationListOutSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL) + 8LL)
                                                                                           + 520LL))(v90);
      goto LABEL_20;
    }
    *(_DWORD *)a7 |= 0x8000000u;
    memset(v119, 0, sizeof(v119));
    v28 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 424LL)
                                                                            + 8LL)
                                                                + 536LL))(v90);
    v119[4] = *(_QWORD *)(v28 + 24);
    if ( v11 )
    {
      LOBYTE(v29) = *((_BYTE *)this + 351);
      v119[5] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL)
                                                                                       + 8LL)
                                                                           + 240LL))(
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
                  *((_QWORD *)v11 + 3),
                  v29,
                  *((unsigned int *)this + 82));
    }
    if ( (a5->Flags.Value & 4) == 0 )
    {
      if ( !v94 )
        goto LABEL_19;
      LOBYTE(v29) = *((_BYTE *)this + 351);
      v30 = *((unsigned int *)this + 82);
      v119[8] = *(_QWORD *)(v28 + 48);
      v119[9] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL)
                                                                                        + 8LL)
                                                                            + 240LL))(
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
                  *((_QWORD *)v94 + 3),
                  v29,
                  v30);
      if ( v119[9] )
        goto LABEL_19;
      v79 = (_QWORD *)WdLogNewEntry5_WdError(v31);
      LODWORD(v25) = -1073741811;
      v79[4] = -1073741811LL;
      v79[5] = 6198LL;
LABEL_97:
      v79[3] = this;
      WdLogEvent5_WdError(v79);
      goto LABEL_111;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, __int16 *, _QWORD *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 424LL)
                                                                            + 8LL)
                                                                + 208LL))(
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
      *(_QWORD *)(*((_QWORD *)v11 + 6) + 8LL),
      &v98,
      &v119[6]);
    LOWORD(v119[7]) = v98;
LABEL_19:
    a5->DmaBufferGpuVirtualAddress = v100;
    a5->pAllocationList = (DXGK_ALLOCATIONLIST *)v119;
    a5->pPatchLocationListOut = 0LL;
    a5->PatchLocationListOutSize = 0;
LABEL_20:
    LODWORD(v25) = ADAPTER_RENDER::DdiPresent(
                     *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                     *((void **)this + 21),
                     a5);
    if ( *((_BYTE *)this + 350) && (a5->pPatchLocationListOut || a5->PatchLocationListOutSize) )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, v32, v34);
      v56[3] = 275LL;
      v56[4] = 9LL;
      v56[5] = a5;
      v56[6] = 0LL;
      v56[7] = 0LL;
      WdLogEvent5_WdCriticalError(v56);
    }
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                               + 424LL)
                                                                   + 8LL)
                                                       + 496LL))(v90);
    if ( (_DWORD)v25 == -1071775743 )
    {
      if ( (a5->Flags.Value & 4) == 0 )
        goto LABEL_25;
      v57 = WdLogNewEntry5_WdError(v35);
      *(_QWORD *)(v57 + 24) = this;
      WdLogEvent5_WdError(v57);
      LODWORD(v25) = -1073741823;
    }
    if ( (int)v25 < 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL)
                                                         + 8LL)
                                             + 352LL))(
        *((_QWORD *)this + 27),
        0LL);
      if ( (_DWORD)v25 == -1071775736 )
      {
        v81 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v81 + 24) = this;
        *(_QWORD *)(v81 + 32) = -1071775736LL;
        WdLogEvent5_WdEvent(v81);
      }
      else
      {
        v82 = WdLogNewEntry5_WdError(v80);
        *(_QWORD *)(v82 + 32) = (int)v25;
        *(_QWORD *)(v82 + 24) = this;
        WdLogEvent5_WdError(v82);
        v83 = 0;
        *(_QWORD *)&UnicodeString.Length = 0LL;
        UnicodeString.Buffer = 0LL;
        v84 = *(_QWORD *)(v103 + 56);
        if ( v84
          && (ProcessImageFileName = (const char *)PsGetProcessImageFileName(v84),
              RtlInitAnsiString(&DestinationString, ProcessImageFileName),
              RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0) )
        {
          v83 = 1;
        }
        else
        {
          RtlInitUnicodeString(&UnicodeString, L"<Unknown>");
        }
        DxgkSqmCreateStringStreamEntry((__int64)v108, UnicodeString.Buffer);
        DxgkSqmCreateDwordStreamEntry(v109, 2);
        DxgkSqmAddToStream(4783LL, 2LL, v108);
        if ( v83 )
          RtlFreeUnicodeString(&UnicodeString);
      }
      goto LABEL_111;
    }
LABEL_25:
    if ( !*((_BYTE *)this + 350) )
    {
      if ( a5->pAllocationList == (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL) + 8LL) + 536LL))(v90) )
        goto LABEL_27;
      v58 = WdLogNewEntry5_WdAssertion(v59);
      *(_QWORD *)(v58 + 24) = 6301LL;
LABEL_69:
      WdLogEvent5_WdAssertion(v58);
      goto LABEL_27;
    }
    if ( a5->pAllocationList != (DXGK_ALLOCATIONLIST *)v119 )
    {
      v58 = WdLogNewEntry5_WdAssertion(v35);
      *(_QWORD *)(v58 + 24) = 6297LL;
      goto LABEL_69;
    }
LABEL_27:
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 400LL)
                                                                + 8LL)
                                                    + 480LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 408LL))
      && a5->pDmaBuffer <= v93 )
    {
      v60 = WdLogNewEntry5_WdAssertion(v36);
      *(_QWORD *)(v60 + 24) = 6315LL;
      WdLogEvent5_WdAssertion(v60);
    }
    v37 = (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 424LL)
                                                                                 + 8LL)
                                                                     + 512LL))(v90);
    v38 = (int)v93;
    v39 = &v93[v37];
    if ( a5->pDmaBuffer > v39 )
    {
      v61 = WdLogNewEntry5_WdAssertion(v39);
      *(_QWORD *)(v61 + 24) = 6316LL;
      WdLogEvent5_WdAssertion(v61);
      v38 = (int)v93;
    }
    v40 = LODWORD(a5->pDmaBuffer) - v38;
    v41 = LODWORD(a5->pDmaBufferPrivateData)
        - (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 424LL)
                                                                            + 8LL)
                                                                + 544LL))(v90);
    v42 = *((_QWORD *)this + 2);
    LODWORD(v95) = v41;
    if ( (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v42 + 16)
                                                                                            + 424LL)
                                                                                + 8LL)
                                                                    + 512LL))(v90) < v40 )
    {
      v62 = WdLogNewEntry5_WdAssertion(v43);
      *(_QWORD *)(v62 + 24) = 6323LL;
      WdLogEvent5_WdAssertion(v62);
    }
    if ( *((_BYTE *)this + 350) )
    {
      LODWORD(v45) = 0;
    }
    else
    {
      if ( a5->pPatchLocationListOut < (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL) + 8LL) + 528LL))(v90) )
      {
        v64 = WdLogNewEntry5_WdAssertion(v63);
        *(_QWORD *)(v64 + 24) = 6335LL;
        WdLogEvent5_WdAssertion(v64);
      }
      v65 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                          + 424LL)
                                                                              + 8LL)
                                                                  + 528LL))(v90);
      v66 = (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                               + 424LL)
                                                                                   + 8LL)
                                                                       + 520LL))(v90);
      if ( a5->pPatchLocationListOut > (D3DDDI_PATCHLOCATIONLIST *)(v65 + 24 * v66) )
      {
        v67 = WdLogNewEntry5_WdAssertion(v66);
        *(_QWORD *)(v67 + 24) = 6336LL;
        WdLogEvent5_WdAssertion(v67);
      }
      v45 = ((__int64)a5->pPatchLocationListOut
           - (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 424LL)
                                                                               + 8LL)
                                                                   + 528LL))(v90))
          / 24;
      if ( (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 424LL)
                                                                                  + 8LL)
                                                                      + 520LL))(v90) < (unsigned int)v45 )
      {
        v68 = WdLogNewEntry5_WdAssertion(v43);
        *(_QWORD *)(v68 + 24) = 6346LL;
        WdLogEvent5_WdAssertion(v68);
      }
      if ( (qword_1C00467F0 & 0x10) != 0 )
      {
        v69 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 424LL)
                                                                                + 8LL)
                                                                    + 528LL))(v90);
        TraceDxgkPatchLocationList((__int64)this, (__int64)v90, v45, v69);
      }
    }
    if ( !v40
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 400LL)
                                                                + 8LL)
                                                    + 480LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 408LL)) )
    {
      v70 = WdLogNewEntry5_WdAssertion(v43);
      *(_QWORD *)(v70 + 24) = 6361LL;
      WdLogEvent5_WdAssertion(v70);
    }
    v46 = *(_DWORD *)a7;
    if ( (*(_DWORD *)a7 & 0x20) != 0 && (_DWORD)v25 == -1071775743 )
    {
      v71 = bTracingEnabled == 0;
      *(_DWORD *)a7 = v46 | 0x40;
      if ( !v71 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v43, &EventPerformanceWarning, v44, 1);
    }
    else
    {
      *(_DWORD *)a7 = v46 & 0xFFFFFFBF;
    }
    *((_QWORD *)a7 + 1) = v90;
    v47 = v95;
    *((_DWORD *)a7 + 19) = v95;
    *((_DWORD *)a7 + 13) = v40;
    *((_DWORD *)a7 + 12) = 0;
    *((_DWORD *)a7 + 15) = 3;
    *((_DWORD *)a7 + 14) = 0;
    *((_DWORD *)a7 + 17) = v45;
    *((_DWORD *)a7 + 16) = 0;
    *((_DWORD *)a7 + 18) = 0;
    if ( *((_BYTE *)this + 350) )
    {
      *((_DWORD *)a7 + 20) = v47;
      *((_DWORD *)a7 + 19) = a5->DmaBufferPrivateDataSize;
    }
    v48 = (struct VIDMM_ALLOC **)((char *)a7 + 376);
    if ( *((_BYTE *)a7 + 348) )
    {
      v49 = (char *)a7 + 360;
    }
    else
    {
      v48 = (struct VIDMM_ALLOC **)((char *)a7 + 360);
      v49 = (char *)a7 + 352;
    }
    if ( *((_DWORD *)a7 + 30) == 4 )
    {
      if ( !v11 )
      {
        v72 = WdLogNewEntry5_WdAssertion(v43);
        *(_QWORD *)(v72 + 24) = 6397LL;
        WdLogEvent5_WdAssertion(v72);
      }
      if ( (*(_DWORD *)a7 & 0x40) != 0 )
      {
        v73 = WdLogNewEntry5_WdAssertion(v43);
        *(_QWORD *)(v73 + 24) = 6398LL;
        WdLogEvent5_WdAssertion(v73);
      }
      *v49 = 1;
      if ( (int)VIDMM_EXPORT::VidMmReferencePrimaryAllocationForSubmission(
                  *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL),
                  *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 536LL),
                  *((struct _VIDMM_MULTI_ALLOC **)v11 + 3),
                  v48) < 0 )
      {
        v75 = WdLogNewEntry5_WdAssertion(v74);
        *(_QWORD *)(v75 + 24) = 6417LL;
        WdLogEvent5_WdAssertion(v75);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, int *, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                + 16LL)
                                                                                    + 424LL)
                                                                        + 8LL)
                                                            + 208LL))(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
        *(_QWORD *)(*((_QWORD *)v11 + 6) + 8LL),
        &v97,
        (char *)v48 + 16);
      *((_DWORD *)v48 + 13) ^= (*((_DWORD *)v48 + 13) ^ (v97 << 17)) & 0x3E0000;
      v76 = *((_QWORD *)v11 + 5);
      if ( v76 )
        v77 = (*(_DWORD *)(v76 + 4) >> 3) & 1;
      else
        v77 = 0;
      *((_DWORD *)v48 + 13) ^= (*((_DWORD *)v48 + 13) ^ (v77 << 23)) & 0x800000;
      v43 = *(_QWORD *)(*((_QWORD *)v11 + 6) + 16LL);
      v48[1] = (struct VIDMM_ALLOC *)v43;
      v48[7] = (struct VIDMM_ALLOC *)*((_QWORD *)this + 21);
    }
    else if ( (unsigned __int8)*(_DWORD *)v49 )
    {
      v78 = WdLogNewEntry5_WdAssertion(v43);
      *(_QWORD *)(v78 + 24) = 6440LL;
      WdLogEvent5_WdAssertion(v78);
    }
    if ( *((struct _KTHREAD **)this + 46) != KeGetCurrentThread() )
    {
      v50 = WdLogNewEntry5_WdAssertion(v43);
      *(_QWORD *)(v50 + 24) = 6443LL;
      WdLogEvent5_WdAssertion(v50);
    }
    v51 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL)
                                                                                          + 8LL)
                                                                              + 344LL))(
            *((_QWORD *)this + 27),
            a7);
    if ( v51 < 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL)
                                                         + 8LL)
                                             + 352LL))(
        *((_QWORD *)this + 27),
        0LL);
      if ( (unsigned __int8)*(_DWORD *)v49 && *v48 )
        VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
          *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL),
          *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 536LL),
          *((_DWORD *)a7 + 34),
          *v48);
      LODWORD(v25) = v51;
      goto LABEL_111;
    }
    v91 = 0;
    v8 = 0LL;
    v90 = 0LL;
    if ( (_DWORD)v25 != -1071775743 )
      return (unsigned int)v25;
    v11 = v105;
    a4 = v94;
    v10 = v104;
  }
  v86 = WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
  *(_QWORD *)(v86 + 24) = this;
  *(_QWORD *)(v86 + 32) = v25;
  WdLogEvent5_WdWarning(v86);
LABEL_111:
  v87 = v90;
  if ( v90 )
  {
    v88 = 0;
    if ( *((_DWORD *)a7 + 48) )
    {
      do
      {
        v89 = (struct VIDMM_ALLOC *)*((_QWORD *)a7 + v88 + 25);
        if ( v89 )
        {
          VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL),
            *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 536LL),
            0,
            v89);
          *((_QWORD *)a7 + v88 + 25) = 0LL;
        }
        ++v88;
      }
      while ( v88 < *((_DWORD *)a7 + 48) );
      v87 = v90;
    }
    if ( v92 )
    {
      VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL),
        v87);
      v87 = v90;
    }
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 424LL)
                                                                           + 8LL)
                                                               + 480LL))(
      v87,
      0LL);
  }
  return (unsigned int)v25;
}
