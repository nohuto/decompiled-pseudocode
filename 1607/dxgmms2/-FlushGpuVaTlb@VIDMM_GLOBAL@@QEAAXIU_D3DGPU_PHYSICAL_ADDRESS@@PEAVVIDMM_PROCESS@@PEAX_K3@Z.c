/*
 * XREFs of ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C004D0E0
 * Callers:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C000F7E0 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0048340 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C000F8C0 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     Template_pptpqqx @ 0x1C0013A8C (Template_pptpqqx.c)
 *     Template_pptpqxpx @ 0x1C0013B58 (Template_pptpqxpx.c)
 *     Template_pptpqxpxx @ 0x1C0013C1C (Template_pptpqxpxx.c)
 *     Template_pptpqxq @ 0x1C0013D0C (Template_pptpqxq.c)
 *     Template_pptpqxqqppqqxxpqx @ 0x1C0013DD8 (Template_pptpqxqqppqqxxpqx.c)
 *     Template_pptpqxqxqxq @ 0x1C0013F80 (Template_pptpqxqxqxq.c)
 *     Template_pptpqxqxqxqqq @ 0x1C0014094 (Template_pptpqxqxqxqqq.c)
 *     Template_pptpqxxqt @ 0x1C00141D8 (Template_pptpqxxqt.c)
 *     Template_pptpqxxt @ 0x1C00142C8 (Template_pptpqxxt.c)
 *     Template_pptpxqqx @ 0x1C0014390 (Template_pptpxqqx.c)
 *     Template_pptpxxpq @ 0x1C0014458 (Template_pptpxxpq.c)
 *     Template_pptpxxqqx @ 0x1C001451C (Template_pptpxxqqx.c)
 *     Template_pptpxxqqxxxqqx @ 0x1C001460C (Template_pptpxxqqxxxqqx.c)
 *     Template_pptqx @ 0x1C0014768 (Template_pptqx.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C004FC2C (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C0090AF0 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::FlushGpuVaTlb(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _D3DGPU_PHYSICAL_ADDRESS *a3,
        struct VIDMM_PROCESS *a4,
        void *a5,
        unsigned __int64 a6,
        unsigned __int64 a7)
{
  struct _D3DGPU_PHYSICAL_ADDRESS *v8; // r14
  __int64 v9; // r12
  _OWORD *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  SIZE_T TransferSize; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  _QWORD *v17; // r8
  struct _D3DGPU_PHYSICAL_ADDRESS v18; // xmm0
  __int64 v19; // rcx
  void *v20; // rcx
  void *v21; // rdx
  int v22; // eax
  bool v23; // zf
  __int64 v24; // r15
  _OWORD *v25; // r14
  void *v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r15
  int v30; // edi
  __int64 v31; // r14
  struct _DXGKARG_BUILDPAGINGBUFFER *v32; // rax
  __int64 v33; // rcx
  __int128 v34; // xmm0
  _DWORD *v35; // rcx
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  _BOOL8 v39; // rdx
  UINT FillPattern; // r11d
  __int64 v41; // rdi
  _QWORD *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  char v45[8]; // [rsp+30h] [rbp-F8h]
  char v46[8]; // [rsp+38h] [rbp-F0h]
  __int64 v47; // [rsp+40h] [rbp-E8h]
  __int64 v48; // [rsp+48h] [rbp-E0h]
  __int64 v49; // [rsp+50h] [rbp-D8h]
  __int64 v50; // [rsp+58h] [rbp-D0h]
  __int64 v51; // [rsp+60h] [rbp-C8h]
  __int64 v52; // [rsp+70h] [rbp-B8h]
  __int64 v53; // [rsp+78h] [rbp-B0h]
  __int64 v54; // [rsp+80h] [rbp-A8h]
  __int64 v55; // [rsp+98h] [rbp-90h]
  struct _DXGKARG_BUILDPAGINGBUFFER v56; // [rsp+A8h] [rbp-80h] BYREF

  v8 = a3;
  v9 = a2;
  if ( *((_BYTE *)this + 6496) || (*((_BYTE *)this + 40872) & 8) != 0 )
    return;
  memset(&v56, 0, sizeof(v56));
  TransferSize = *(_QWORD *)(*((_QWORD *)this + 2) + 384LL);
  if ( (*((_BYTE *)this + 40873) & 4) != 0 )
    v15 = *(_QWORD *)(TransferSize + 232);
  else
    v15 = *(_QWORD *)(TransferSize + 224);
  v56.hSystemContext = *(HANDLE *)(*(_QWORD *)(v15 + 8 * v9) + 64LL);
  v56.MultipassOffset = 0;
  do
  {
    while ( 1 )
    {
      v16 = *((_QWORD *)this + (unsigned int)v9 + 79);
      if ( (*(_DWORD *)(v16 + 32) & 4) == 0 )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v11, v12, v13);
        v36[3] = 270LL;
        v36[4] = 29LL;
        v36[5] = v16;
        v36[6] = 0LL;
        v36[7] = 0LL;
        WdLogEvent5_WdCriticalError(v36);
      }
      v17 = (_QWORD *)*((_QWORD *)this + (unsigned int)v9 + 143);
      v18 = *v8;
      v19 = *(_QWORD *)(v17[7] + 376LL);
      *((_QWORD *)this + (unsigned int)v9 + 335) = v19;
      v20 = (void *)(*((unsigned int *)this + (unsigned int)v9 + 414) + v19);
      *((_QWORD *)this + (unsigned int)v9 + 335) = v20;
      v56.pDmaBuffer = v20;
      v21 = (void *)(*((unsigned int *)this + (unsigned int)v9 + 542) + v17[16]);
      *((_QWORD *)this + (unsigned int)v9 + 399) = v21;
      v22 = *((_DWORD *)this + (unsigned int)v9 + 29);
      LODWORD(v20) = *((_DWORD *)this + (unsigned int)v9 + 93) - *((_DWORD *)this + (unsigned int)v9 + 542);
      v56.pDmaBufferPrivateData = v21;
      LODWORD(v21) = *((_DWORD *)this + (unsigned int)v9 + 414);
      v23 = *((_QWORD *)this + 5115) == 0LL;
      v56.DmaSize = v22 - (_DWORD)v21;
      v56.DmaBufferPrivateDataSize = (unsigned int)v20;
      v56.DmaBufferGpuVirtualAddress = v17[12];
      *(_OWORD *)&v56.NotifyResidency.PhysicalAddress.SegmentOffset = __PAIR128__(a6, (unsigned __int64)a5);
      v56.Transfer.Source.SegmentAddress.QuadPart = a7;
      v56.DmaBufferWriteOffset = (unsigned int)v21;
      v56.Operation = DXGK_OPERATION_FLUSH_TLB;
      v56.FlushTlb.RootPageTableAddress = v18;
      if ( !v23 )
      {
        v24 = *(_QWORD *)a4;
        v25 = operator new(0x38uLL, 0x32356956u, PagedPool);
        if ( v25 )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx((char *)this + 40936, 0LL);
          *((_QWORD *)this + 5118) = KeGetCurrentThread();
          if ( *((_DWORD *)this + 10232) == dword_1C0035314 )
            *((_DWORD *)this + 10232) = 0;
          v26 = *(void **)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16);
          if ( v26 )
            operator delete(v26);
          *v25 = *(_OWORD *)&v56.Transfer.hAllocation;
          v25[1] = *(_OWORD *)&v56.NotifyResidency.PhysicalAddress.SegmentOffset;
          *((_QWORD *)v25 + 4) = v56.Transfer.Source.SegmentAddress.QuadPart;
          *((_DWORD *)v25 + 12) = v9;
          *((_QWORD *)v25 + 5) = v24;
          *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232)) = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16) = v25;
          *(_DWORD *)(*((_QWORD *)this + 5115) + 24LL * (unsigned int)(*((_DWORD *)this + 10232))++ + 8) = 5;
          *((_QWORD *)this + 5118) = 0LL;
          ExReleasePushLockExclusiveEx((char *)this + 40936, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      v27 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v56);
      v29 = -1LL;
      TransferSize = (unsigned int)(LODWORD(v56.pDmaBuffer) - *((_DWORD *)this + 2 * (unsigned int)v9 + 670));
      v30 = LODWORD(v56.pDmaBufferPrivateData) - *((_DWORD *)this + 2 * (unsigned int)v9 + 798);
      v31 = v27;
      if ( LODWORD(v56.pDmaBuffer) != *((_DWORD *)this + 2 * (unsigned int)v9 + 670) || v30 )
      {
        if ( !*((_DWORD *)this + (unsigned int)v9 + 1155) )
        {
          *((_DWORD *)this + (unsigned int)v9 + 1155) = 1;
          ++*((_QWORD *)this + (unsigned int)v9 + 610);
        }
        v29 = *((_QWORD *)this + (unsigned int)v9 + 610);
      }
      *((_DWORD *)this + (unsigned int)v9 + 414) += TransferSize;
      if ( *((_DWORD *)this + (unsigned int)v9 + 414) > *((_DWORD *)this + (unsigned int)v9 + 29) )
      {
        v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v28, v12, v13);
        v37[5] = 0LL;
        v37[6] = 0LL;
        v37[7] = 0LL;
        v37[3] = 270LL;
        v37[4] = 18LL;
        WdLogEvent5_WdCriticalError(v37);
      }
      *((_DWORD *)this + (unsigned int)v9 + 542) += v30;
      if ( *((_DWORD *)this + (unsigned int)v9 + 542) > *((_DWORD *)this + (unsigned int)v9 + 93) )
      {
        v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v28, v12, v13);
        v38[3] = 270LL;
        v38[4] = 19LL;
        v38[5] = 0LL;
        v38[6] = 0LL;
        v38[7] = 0LL;
        WdLogEvent5_WdCriticalError(v38);
      }
      if ( bTracingEnabled )
      {
        v12 = *((_QWORD *)this + (unsigned int)v9 + 143);
        v13 = *((_QWORD *)this + 3);
        v39 = (_DWORD)v31 == -1071775743;
        switch ( v56.Operation )
        {
          case DXGK_OPERATION_TRANSFER:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v52) = v56.Transfer.Flags.0;
              LODWORD(v51) = v56.Transfer.Destination.SegmentId;
              LODWORD(v49) = v56.Transfer.Source.SegmentId;
              LODWORD(v47) = v56.Transfer.TransferOffset;
              *(_DWORD *)v45 = v31 == -1071775743;
              Template_pptpqxqxqxq(
                TransferSize,
                v39,
                v12,
                v13,
                v12,
                *(_QWORD *)v45,
                0LL,
                v47,
                v56.Transfer.TransferSize,
                v49,
                v56.Transfer.Source.SegmentAddress.QuadPart,
                v51,
                v56.Transfer.Destination.SegmentAddress.QuadPart,
                v52);
            }
            break;
          case DXGK_OPERATION_FILL:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v49) = v56.Transfer.Source.SegmentId;
              LODWORD(v48) = v56.Fill.FillPattern;
              *(_DWORD *)v45 = v31 == -1071775743;
              Template_pptpxqqx(
                TransferSize,
                v39,
                v12,
                v13,
                v12,
                *(_QWORD *)v45,
                0LL,
                v56.Fill.FillSize,
                v48,
                v49,
                v56.Transfer.Source.SegmentAddress.QuadPart);
            }
            break;
          case DXGK_OPERATION_DISCARD_CONTENT:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v48) = v56.DiscardContent.SegmentId;
              LODWORD(v47) = v56.Transfer.TransferOffset;
              *(_DWORD *)v45 = v31 == -1071775743;
              Template_pptpqqx(
                TransferSize,
                v39,
                v12,
                v13,
                v12,
                *(_QWORD *)v45,
                0LL,
                v47,
                v48,
                v56.Transfer.TransferSize);
            }
            break;
          case DXGK_OPERATION_READ_PHYSICAL:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_DWORD *)v46 = v56.ReadPhysical.SegmentId;
              *(_DWORD *)v45 = v31 == -1071775743;
              Template_pptqx(
                TransferSize,
                &EventPagingOpReadPhysical,
                v12,
                v13,
                v12,
                *(_QWORD *)v45,
                *(_QWORD *)v46,
                v56.Fill.FillSize);
            }
            break;
          case DXGK_OPERATION_WRITE_PHYSICAL:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_DWORD *)v46 = v56.ReadPhysical.SegmentId;
              *(_DWORD *)v45 = v31 == -1071775743;
              Template_pptqx(
                TransferSize,
                &EventPagingOpWritePhysical,
                v12,
                v13,
                v12,
                *(_QWORD *)v45,
                *(_QWORD *)v46,
                v56.Fill.FillSize);
            }
            break;
          case DXGK_OPERATION_MAP_APERTURE_SEGMENT:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v51) = 0;
              LODWORD(v50) = v56.Transfer.Destination.SegmentAddress.LowPart;
              LODWORD(v47) = v56.Fill.FillPattern;
              *(_DWORD *)v45 = v31 == -1071775743;
              Template_pptpqxxqt(
                TransferSize,
                v39,
                v12,
                v13,
                v12,
                *(_QWORD *)v45,
                0LL,
                v47,
                *(_OWORD *)&v56.Reserved.Reserved[6],
                v50,
                v51);
            }
            break;
          case DXGK_OPERATION_UNMAP_APERTURE_SEGMENT:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v50) = 0;
              LODWORD(v47) = v56.Fill.FillPattern;
              *(_DWORD *)v45 = v31 == -1071775743;
              Template_pptpqxxt(
                TransferSize,
                v39,
                v12,
                v13,
                v12,
                *(_QWORD *)v45,
                0LL,
                v47,
                *(_OWORD *)&v56.Reserved.Reserved[6],
                v50);
            }
            break;
          case DXGK_OPERATION_SPECIAL_LOCK_TRANSFER:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v54) = v56.SpecialLockTransfer.SwizzlingRangeData;
              LODWORD(v53) = v56.Transfer.MdlOffset;
              LODWORD(v52) = v56.Transfer.Flags.0;
              LODWORD(v51) = v56.Transfer.Destination.SegmentId;
              LODWORD(v49) = v56.Transfer.Source.SegmentId;
              LODWORD(v47) = v56.Transfer.TransferOffset;
              *(_DWORD *)v45 = v31 == -1071775743;
              Template_pptpqxqxqxqqq(
                TransferSize,
                v39,
                v12,
                v13,
                v12,
                *(_QWORD *)v45,
                0LL,
                v47,
                v56.Transfer.TransferSize,
                v49,
                v56.Transfer.Source.SegmentAddress.QuadPart,
                v51,
                v56.Transfer.Destination.SegmentAddress.QuadPart,
                v52,
                v53,
                v54);
            }
            break;
          case DXGK_OPERATION_VIRTUAL_TRANSFER:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v54) = v56.Transfer.Destination.SegmentAddress.HighPart;
              LODWORD(v53) = v56.Transfer.Destination.SegmentAddress.LowPart;
              LODWORD(v50) = MEMORY[4];
              LODWORD(v49) = MEMORY[0];
              *(_DWORD *)v45 = v31 == -1071775743;
              Template_pptpxxqqxxxqqx(
                TransferSize,
                v39,
                v12,
                v13,
                v12,
                *(_QWORD *)v45,
                0LL,
                *(_OWORD *)&v56.SpecialLockTransfer.TransferOffset,
                v49,
                v50,
                *(_OWORD *)&v56.Reserved.Reserved[6],
                v56.UnmapApertureSegment.DummyPage.QuadPart,
                v53,
                v54,
                v56.TransferVirtual.DestinationPageTable);
            }
            break;
          case DXGK_OPERATION_VIRTUAL_FILL:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v50) = MEMORY[0];
              LODWORD(v49) = v56.Transfer.Source.SegmentId;
              *(_DWORD *)v45 = v31 == -1071775743;
              Template_pptpxxqqx(
                TransferSize,
                v39,
                v12,
                v13,
                v12,
                *(_QWORD *)v45,
                0LL,
                *(_OWORD *)&v56.SpecialLockTransfer.TransferOffset,
                v49,
                v50,
                v56.Transfer.Source.SegmentAddress.QuadPart);
            }
            break;
          case DXGK_OPERATION_INIT_CONTEXT_RESOURCE:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v47) = v56.Transfer.TransferOffset;
              *(_DWORD *)v45 = v31 == -1071775743;
              Template_pptpqxpx(
                TransferSize,
                v39,
                v12,
                v13,
                v12,
                *(_QWORD *)v45,
                0LL,
                v47,
                *(_OWORD *)&v56.NotifyResidency.PhysicalAddress.SegmentOffset,
                v56.Transfer.Source.SegmentAddress.QuadPart);
            }
            break;
          case DXGK_OPERATION_UPDATE_PAGE_TABLE:
            FillPattern = 0;
            if ( v56.Reserved.Reserved[20] < 2 )
            {
              TransferSize = v56.Transfer.TransferSize;
            }
            else if ( v56.Reserved.Reserved[20] == 2 )
            {
              TransferSize = v56.MapApertureSegment.OffsetInPages;
              FillPattern = v56.Fill.FillPattern;
            }
            else
            {
              TransferSize = 0LL;
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v55) = v56.UpdatePageTable.UpdateMode;
              LODWORD(v53) = v56.Transfer.Destination.SegmentAddress.HighPart;
              LODWORD(v50) = v56.UnmapApertureSegment.DummyPage.HighPart;
              LODWORD(v52) = v56.Transfer.Destination.SegmentId;
              LODWORD(v49) = FillPattern;
              LODWORD(v47) = v56.ReadPhysical.SegmentId;
              *(_DWORD *)v45 = v31 == -1071775743;
              Template_pptpqxqqppqqxxpqx(
                TransferSize,
                v39,
                v12,
                v13,
                v12,
                *(_QWORD *)v45,
                0LL,
                v47,
                TransferSize,
                v49,
                v50,
                v56.Transfer.Source.SegmentAddress.QuadPart,
                v56.UpdatePageTable.pPageTableEntries64KB,
                v52,
                v53,
                *(_OWORD *)&v56.Reserved.Reserved[14],
                v56.UpdatePageTable.hProcess,
                v55,
                v56.UpdatePageTable.FirstPteVirtualAddress);
            }
            break;
          case DXGK_OPERATION_FLUSH_TLB:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v47) = v56.ReadPhysical.SegmentId;
              *(_DWORD *)v45 = v31 == -1071775743;
              Template_pptpqxpxx(
                TransferSize,
                v39,
                v12,
                v13,
                v12,
                *(_QWORD *)v45,
                0LL,
                v47,
                *(_OWORD *)&v56.SpecialLockTransfer.TransferOffset,
                *(_OWORD *)&v56.Reserved.Reserved[6]);
            }
            break;
          case DXGK_OPERATION_UPDATE_CONTEXT_ALLOCATION:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v50) = v56.Transfer.Source.SegmentId;
              *(_DWORD *)v45 = v31 == -1071775743;
              Template_pptpxxpq(
                TransferSize,
                v39,
                v12,
                v13,
                v12,
                *(_QWORD *)v45,
                0LL,
                *(_OWORD *)&v56.Transfer.hAllocation,
                v56.Transfer.TransferSize,
                v50);
            }
            break;
          case DXGK_OPERATION_NOTIFY_RESIDENCY:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v49) = v56.Transfer.Source.SegmentId;
              LODWORD(v47) = v56.Transfer.TransferOffset;
              *(_DWORD *)v45 = v31 == -1071775743;
              Template_pptpqxq(
                TransferSize,
                v39,
                v12,
                v13,
                v12,
                *(_QWORD *)v45,
                0LL,
                v47,
                v56.Transfer.TransferSize,
                v49);
            }
            break;
          default:
            break;
        }
      }
      v11 = (_OWORD *)*((_QWORD *)this + 978);
      if ( v11 )
      {
        *((_QWORD *)v11 + 45 * *((unsigned int *)this + 1958) + 1) = 0LL;
        *(_QWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978) + 16) = 0LL;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978)) = v9;
        v32 = &v56;
        v11 = (_OWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978) + 24LL);
        v33 = 2LL;
        do
        {
          v11 += 8;
          v34 = *(_OWORD *)&v32->pDmaBuffer;
          v32 = (struct _DXGKARG_BUILDPAGINGBUFFER *)((char *)v32 + 128);
          *(v11 - 8) = v34;
          *(v11 - 7) = *(_OWORD *)&v32[-1].Reserved.Reserved[42];
          *(v11 - 6) = *(_OWORD *)&v32[-1].Reserved.Reserved[46];
          *(v11 - 5) = *(_OWORD *)&v32[-1].Reserved.Reserved[50];
          *(v11 - 4) = *(_OWORD *)&v32[-1].Reserved.Reserved[54];
          *(v11 - 3) = *(_OWORD *)&v32[-1].Reserved.Reserved[58];
          *(v11 - 2) = *(_OWORD *)&v32[-1].Reserved.Reserved[62];
          *(v11 - 1) = *(_OWORD *)&v32[-1].DmaBufferGpuVirtualAddress;
          --v33;
        }
        while ( v33 );
        *v11 = *(_OWORD *)&v32->pDmaBuffer;
        v11[1] = *(_OWORD *)&v32->pDmaBufferPrivateData;
        v11[2] = *(_OWORD *)&v32->MultipassOffset;
        v11[3] = *(_OWORD *)&v32->SpecialLockTransfer.TransferOffset;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978) + 344) = v31;
        TransferSize = 360LL * *((unsigned int *)this + 1958);
        *(_QWORD *)(TransferSize + *((_QWORD *)this + 978) + 352) = v29;
        if ( ++*((_DWORD *)this + 1958) >= *((_DWORD *)this + 1954) )
        {
          ++*((_DWORD *)this + 1959);
          *((_DWORD *)this + 1958) = 0;
        }
      }
      if ( (int)v31 >= 0 )
        break;
      if ( (_DWORD)v31 != -1071775743 )
      {
        v41 = *((_QWORD *)this + 3);
        v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v11, v12, v13);
        v42[5] = &v56;
        v42[3] = 270LL;
        v42[4] = 11LL;
        v42[6] = v31;
        v42[7] = v41;
        WdLogEvent5_WdCriticalError(v42);
        break;
      }
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(TransferSize, v11, v12, v13);
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v9, 1u, 0LL, 0LL, 1, 0);
      v8 = a3;
    }
    v23 = (_DWORD)v31 == -1071775743;
    v8 = a3;
  }
  while ( v23 );
  v35 = *(_DWORD **)(456LL * (unsigned int)v9 + *((_QWORD *)this + 5017) + 424);
  if ( (*v35 & 0x20) != 0 && (*((_DWORD *)a4 + 12) & 2) == 0 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q((__int64)v35, &EventPerformanceWarning, v12, 23);
    if ( (qword_1C0035050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)v35, &EventProfilerEnter, v12, 8010);
    VIDMM_GLOBAL::FlushPagingBufferInternal(this, v9, 0, 0LL, 0LL, 0, 0);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, v9);
    if ( (*((_DWORD *)a4 + 12) & 4) == 0 )
    {
      VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(a4, *(_DWORD *)(*((_QWORD *)this + 3) + 200LL), 1);
      VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(a4, *(_DWORD *)(*((_QWORD *)this + 3) + 200LL), 0);
    }
    if ( (qword_1C0035050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v43, &EventProfilerExit, v44, 8010);
  }
}
