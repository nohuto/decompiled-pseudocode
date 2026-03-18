/*
 * XREFs of ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C0044320
 * Callers:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0011448 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0040240 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0011590 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     Template_pptpqqx @ 0x1C0015900 (Template_pptpqqx.c)
 *     Template_pptpqxpx @ 0x1C00159CC (Template_pptpqxpx.c)
 *     Template_pptpqxpxx @ 0x1C0015A90 (Template_pptpqxpxx.c)
 *     Template_pptpqxq @ 0x1C0015B80 (Template_pptpqxq.c)
 *     Template_pptpqxqqppqqxxpqx @ 0x1C0015C4C (Template_pptpqxqqppqqxxpqx.c)
 *     Template_pptpqxqxqxq @ 0x1C0015DF4 (Template_pptpqxqxqxq.c)
 *     Template_pptpqxqxqxqqq @ 0x1C0015F08 (Template_pptpqxqxqxqqq.c)
 *     Template_pptpqxxqt @ 0x1C001604C (Template_pptpqxxqt.c)
 *     Template_pptpqxxt @ 0x1C001613C (Template_pptpqxxt.c)
 *     Template_pptpxqqx @ 0x1C0016204 (Template_pptpxqqx.c)
 *     Template_pptpxxpq @ 0x1C00162CC (Template_pptpxxpq.c)
 *     Template_pptpxxqqx @ 0x1C0016390 (Template_pptpxxqqx.c)
 *     Template_pptpxxqqxxxqqx @ 0x1C0016480 (Template_pptpxxqqxxxqqx.c)
 *     Template_pptqx @ 0x1C00165DC (Template_pptqx.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00472BC (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C0047410 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     ?SuspendResumeProcess@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C007F774 (-SuspendResumeProcess@VIDMM_PROCESS@@QEAAXI_N@Z.c)
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
  struct _D3DGPU_PHYSICAL_ADDRESS *v8; // rsi
  __int64 v9; // r12
  _OWORD *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  SIZE_T TransferSize; // rcx
  __int64 v15; // rbx
  _QWORD *v16; // rax
  _QWORD *v17; // r8
  struct _D3DGPU_PHYSICAL_ADDRESS v18; // xmm0
  __int64 v19; // rcx
  void *v20; // rcx
  void *v21; // rdx
  int v22; // eax
  bool v23; // zf
  __int64 v24; // r14
  _OWORD *v25; // rsi
  void *v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r14
  int v30; // ebx
  __int64 v31; // rsi
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  _BOOL8 v34; // rdx
  UINT FillPattern; // r11d
  struct _DXGKARG_BUILDPAGINGBUFFER *v36; // rax
  __int64 v37; // rcx
  __int128 v38; // xmm0
  __int64 v39; // rbx
  _QWORD *v40; // rax
  _DWORD *v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // r8
  char v44[8]; // [rsp+30h] [rbp-F8h]
  __int64 v45; // [rsp+38h] [rbp-F0h]
  __int64 v46; // [rsp+40h] [rbp-E8h]
  __int64 v47; // [rsp+48h] [rbp-E0h]
  __int64 v48; // [rsp+50h] [rbp-D8h]
  __int64 v49; // [rsp+58h] [rbp-D0h]
  __int64 v50; // [rsp+60h] [rbp-C8h]
  __int64 v51; // [rsp+70h] [rbp-B8h]
  __int64 v52; // [rsp+78h] [rbp-B0h]
  __int64 v53; // [rsp+80h] [rbp-A8h]
  __int64 v54; // [rsp+98h] [rbp-90h]
  struct _DXGKARG_BUILDPAGINGBUFFER v55; // [rsp+A8h] [rbp-80h] BYREF

  v8 = a3;
  v9 = a2;
  if ( *((_BYTE *)this + 6464) || (*((_BYTE *)this + 40608) & 8) != 0 )
    return;
  memset(&v55, 0, sizeof(v55));
  TransferSize = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 408LL) + 200LL) + 8 * v9);
  v55.hSystemContext = *(HANDLE *)(TransferSize + 64);
  v55.MultipassOffset = 0;
  do
  {
    while ( 1 )
    {
      v15 = *((_QWORD *)this + v9 + 79);
      if ( (*(_DWORD *)(v15 + 32) & 4) == 0 )
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v11, v12, v13);
        v16[3] = 270LL;
        v16[4] = 29LL;
        v16[5] = v15;
        v16[6] = 0LL;
        v16[7] = 0LL;
        WdLogEvent5_WdCriticalError(v16);
      }
      v17 = (_QWORD *)*((_QWORD *)this + v9 + 143);
      v18 = *v8;
      v19 = *(_QWORD *)(v17[7] + 360LL);
      *((_QWORD *)this + v9 + 335) = v19;
      v20 = (void *)(*((unsigned int *)this + v9 + 414) + v19);
      *((_QWORD *)this + v9 + 335) = v20;
      v55.pDmaBuffer = v20;
      v21 = (void *)(*((unsigned int *)this + v9 + 542) + v17[16]);
      *((_QWORD *)this + v9 + 399) = v21;
      v22 = *((_DWORD *)this + v9 + 29);
      LODWORD(v20) = *((_DWORD *)this + v9 + 93) - *((_DWORD *)this + v9 + 542);
      v55.pDmaBufferPrivateData = v21;
      LODWORD(v21) = *((_DWORD *)this + v9 + 414);
      v23 = *((_QWORD *)this + 5082) == 0LL;
      v55.DmaSize = v22 - (_DWORD)v21;
      v55.DmaBufferPrivateDataSize = (unsigned int)v20;
      v55.DmaBufferGpuVirtualAddress = v17[12];
      *(_OWORD *)&v55.NotifyResidency.PhysicalAddress.SegmentOffset = __PAIR128__(a6, (unsigned __int64)a5);
      v55.Transfer.Source.SegmentAddress.QuadPart = a7;
      v55.DmaBufferWriteOffset = (unsigned int)v21;
      v55.Operation = DXGK_OPERATION_FLUSH_TLB;
      v55.FlushTlb.RootPageTableAddress = v18;
      if ( !v23 )
      {
        v24 = *(_QWORD *)a4;
        v25 = operator new(0x38uLL, 0x32356956u, PagedPool);
        if ( v25 )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx((char *)this + 40672, 0LL);
          *((_QWORD *)this + 5085) = KeGetCurrentThread();
          if ( *((_DWORD *)this + 10166) == dword_1C002F304 )
            *((_DWORD *)this + 10166) = 0;
          v26 = *(void **)(*((_QWORD *)this + 5082) + 24LL * *((unsigned int *)this + 10166) + 16);
          if ( v26 )
            operator delete(v26);
          *v25 = *(_OWORD *)&v55.Transfer.hAllocation;
          v25[1] = *(_OWORD *)&v55.NotifyResidency.PhysicalAddress.SegmentOffset;
          *((_QWORD *)v25 + 4) = v55.Transfer.Source.SegmentAddress.QuadPart;
          *((_DWORD *)v25 + 12) = v9;
          *((_QWORD *)v25 + 5) = v24;
          *(_QWORD *)(*((_QWORD *)this + 5082) + 24LL * *((unsigned int *)this + 10166)) = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(*((_QWORD *)this + 5082) + 24LL * *((unsigned int *)this + 10166) + 16) = v25;
          *(_DWORD *)(*((_QWORD *)this + 5082) + 24LL * (unsigned int)(*((_DWORD *)this + 10166))++ + 8) = 5;
          *((_QWORD *)this + 5085) = 0LL;
          ExReleasePushLockExclusiveEx((char *)this + 40672, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      v27 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v55);
      v29 = -1LL;
      TransferSize = (unsigned int)(LODWORD(v55.pDmaBuffer) - *((_DWORD *)this + 2 * v9 + 670));
      v30 = LODWORD(v55.pDmaBufferPrivateData) - *((_DWORD *)this + 2 * v9 + 798);
      v31 = v27;
      if ( LODWORD(v55.pDmaBuffer) != *((_DWORD *)this + 2 * v9 + 670) || v30 )
      {
        if ( !*((_DWORD *)this + v9 + 1155) )
        {
          *((_DWORD *)this + v9 + 1155) = 1;
          ++*((_QWORD *)this + v9 + 610);
        }
        v29 = *((_QWORD *)this + v9 + 610);
      }
      *((_DWORD *)this + v9 + 414) += TransferSize;
      if ( *((_DWORD *)this + v9 + 414) > *((_DWORD *)this + v9 + 29) )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v28, v12, v13);
        v32[5] = 0LL;
        v32[6] = 0LL;
        v32[7] = 0LL;
        v32[3] = 270LL;
        v32[4] = 18LL;
        WdLogEvent5_WdCriticalError(v32);
      }
      *((_DWORD *)this + v9 + 542) += v30;
      if ( *((_DWORD *)this + v9 + 542) > *((_DWORD *)this + v9 + 93) )
      {
        v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v28, v12, v13);
        v33[3] = 270LL;
        v33[4] = 19LL;
        v33[5] = 0LL;
        v33[6] = 0LL;
        v33[7] = 0LL;
        WdLogEvent5_WdCriticalError(v33);
      }
      if ( bTracingEnabled )
      {
        v12 = *((_QWORD *)this + v9 + 143);
        v13 = *((_QWORD *)this + 3);
        v34 = (_DWORD)v31 == -1071775743;
        switch ( v55.Operation )
        {
          case DXGK_OPERATION_TRANSFER:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LODWORD(v51) = v55.Transfer.Flags.0;
              LODWORD(v50) = v55.Transfer.Destination.SegmentId;
              LODWORD(v48) = v55.Transfer.Source.SegmentId;
              LODWORD(v46) = v55.Transfer.TransferOffset;
              *(_DWORD *)v44 = v31 == -1071775743;
              Template_pptpqxqxqxq(
                TransferSize,
                v34,
                v12,
                v13,
                v12,
                *(_QWORD *)v44,
                0LL,
                v46,
                v55.Transfer.TransferSize,
                v48,
                v55.Transfer.Source.SegmentAddress.QuadPart,
                v50,
                v55.Transfer.Destination.SegmentAddress.QuadPart,
                v51);
            }
            break;
          case DXGK_OPERATION_FILL:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LODWORD(v48) = v55.Transfer.Source.SegmentId;
              LODWORD(v47) = v55.Fill.FillPattern;
              *(_DWORD *)v44 = v31 == -1071775743;
              Template_pptpxqqx(
                TransferSize,
                v34,
                v12,
                v13,
                v12,
                *(_QWORD *)v44,
                0LL,
                v55.Fill.FillSize,
                v47,
                v48,
                v55.Transfer.Source.SegmentAddress.QuadPart);
            }
            break;
          case DXGK_OPERATION_DISCARD_CONTENT:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LODWORD(v47) = v55.DiscardContent.SegmentId;
              LODWORD(v46) = v55.Transfer.TransferOffset;
              *(_DWORD *)v44 = v31 == -1071775743;
              Template_pptpqqx(
                TransferSize,
                v34,
                v12,
                v13,
                v12,
                *(_QWORD *)v44,
                0LL,
                v46,
                v47,
                v55.Transfer.TransferSize);
            }
            break;
          case DXGK_OPERATION_READ_PHYSICAL:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LODWORD(v45) = v55.ReadPhysical.SegmentId;
              *(_DWORD *)v44 = v31 == -1071775743;
              Template_pptqx(
                TransferSize,
                &EventPagingOpReadPhysical,
                v12,
                v13,
                v12,
                *(_QWORD *)v44,
                v45,
                v55.Fill.FillSize);
            }
            break;
          case DXGK_OPERATION_WRITE_PHYSICAL:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LODWORD(v45) = v55.ReadPhysical.SegmentId;
              *(_DWORD *)v44 = v31 == -1071775743;
              Template_pptqx(
                TransferSize,
                &EventPagingOpWritePhysical,
                v12,
                v13,
                v12,
                *(_QWORD *)v44,
                v45,
                v55.Fill.FillSize);
            }
            break;
          case DXGK_OPERATION_MAP_APERTURE_SEGMENT:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LODWORD(v50) = 0;
              LODWORD(v49) = v55.Transfer.Destination.SegmentAddress.LowPart;
              LODWORD(v46) = v55.Fill.FillPattern;
              *(_DWORD *)v44 = v31 == -1071775743;
              Template_pptpqxxqt(
                TransferSize,
                v34,
                v12,
                v13,
                v12,
                *(_QWORD *)v44,
                0LL,
                v46,
                *(_OWORD *)&v55.Reserved.Reserved[6],
                v49,
                v50);
            }
            break;
          case DXGK_OPERATION_UNMAP_APERTURE_SEGMENT:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LODWORD(v49) = 0;
              LODWORD(v46) = v55.Fill.FillPattern;
              *(_DWORD *)v44 = v31 == -1071775743;
              Template_pptpqxxt(
                TransferSize,
                v34,
                v12,
                v13,
                v12,
                *(_QWORD *)v44,
                0LL,
                v46,
                *(_OWORD *)&v55.Reserved.Reserved[6],
                v49);
            }
            break;
          case DXGK_OPERATION_SPECIAL_LOCK_TRANSFER:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LODWORD(v53) = v55.SpecialLockTransfer.SwizzlingRangeData;
              LODWORD(v52) = v55.Transfer.MdlOffset;
              LODWORD(v51) = v55.Transfer.Flags.0;
              LODWORD(v50) = v55.Transfer.Destination.SegmentId;
              LODWORD(v48) = v55.Transfer.Source.SegmentId;
              LODWORD(v46) = v55.Transfer.TransferOffset;
              *(_DWORD *)v44 = v31 == -1071775743;
              Template_pptpqxqxqxqqq(
                TransferSize,
                v34,
                v12,
                v13,
                v12,
                *(_QWORD *)v44,
                0LL,
                v46,
                v55.Transfer.TransferSize,
                v48,
                v55.Transfer.Source.SegmentAddress.QuadPart,
                v50,
                v55.Transfer.Destination.SegmentAddress.QuadPart,
                v51,
                v52,
                v53);
            }
            break;
          case DXGK_OPERATION_VIRTUAL_TRANSFER:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LODWORD(v53) = v55.Transfer.Destination.SegmentAddress.HighPart;
              LODWORD(v52) = v55.Transfer.Destination.SegmentAddress.LowPart;
              LODWORD(v49) = MEMORY[4];
              LODWORD(v48) = MEMORY[0];
              *(_DWORD *)v44 = v31 == -1071775743;
              Template_pptpxxqqxxxqqx(
                TransferSize,
                v34,
                v12,
                v13,
                v12,
                *(_QWORD *)v44,
                0LL,
                *(_OWORD *)&v55.SpecialLockTransfer.TransferOffset,
                v48,
                v49,
                *(_OWORD *)&v55.Reserved.Reserved[6],
                v55.UnmapApertureSegment.DummyPage.QuadPart,
                v52,
                v53,
                v55.TransferVirtual.DestinationPageTable);
            }
            break;
          case DXGK_OPERATION_VIRTUAL_FILL:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LODWORD(v49) = MEMORY[0];
              LODWORD(v48) = v55.Transfer.Source.SegmentId;
              *(_DWORD *)v44 = v31 == -1071775743;
              Template_pptpxxqqx(
                TransferSize,
                v34,
                v12,
                v13,
                v12,
                *(_QWORD *)v44,
                0LL,
                *(_OWORD *)&v55.SpecialLockTransfer.TransferOffset,
                v48,
                v49,
                v55.Transfer.Source.SegmentAddress.QuadPart);
            }
            break;
          case DXGK_OPERATION_INIT_CONTEXT_RESOURCE:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LODWORD(v46) = v55.Transfer.TransferOffset;
              *(_DWORD *)v44 = v31 == -1071775743;
              Template_pptpqxpx(
                TransferSize,
                v34,
                v12,
                v13,
                v12,
                *(_QWORD *)v44,
                0LL,
                v46,
                *(_OWORD *)&v55.NotifyResidency.PhysicalAddress.SegmentOffset,
                v55.Transfer.Source.SegmentAddress.QuadPart);
            }
            break;
          case DXGK_OPERATION_UPDATE_PAGE_TABLE:
            FillPattern = 0;
            if ( v55.Reserved.Reserved[20] < 2 )
            {
              TransferSize = v55.Transfer.TransferSize;
            }
            else if ( v55.Reserved.Reserved[20] == 2 )
            {
              TransferSize = v55.MapApertureSegment.OffsetInPages;
              FillPattern = v55.Fill.FillPattern;
            }
            else
            {
              TransferSize = 0LL;
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LODWORD(v54) = v55.UpdatePageTable.UpdateMode;
              LODWORD(v52) = v55.Transfer.Destination.SegmentAddress.HighPart;
              LODWORD(v49) = v55.UnmapApertureSegment.DummyPage.HighPart;
              LODWORD(v51) = v55.Transfer.Destination.SegmentId;
              LODWORD(v48) = FillPattern;
              LODWORD(v46) = v55.ReadPhysical.SegmentId;
              *(_DWORD *)v44 = v31 == -1071775743;
              Template_pptpqxqqppqqxxpqx(
                TransferSize,
                v34,
                v12,
                v13,
                v12,
                *(_QWORD *)v44,
                0LL,
                v46,
                TransferSize,
                v48,
                v49,
                v55.Transfer.Source.SegmentAddress.QuadPart,
                v55.UpdatePageTable.pPageTableEntries64KB,
                v51,
                v52,
                *(_OWORD *)&v55.Reserved.Reserved[14],
                v55.UpdatePageTable.hProcess,
                v54,
                v55.UpdatePageTable.FirstPteVirtualAddress);
            }
            break;
          case DXGK_OPERATION_FLUSH_TLB:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LODWORD(v46) = v55.ReadPhysical.SegmentId;
              *(_DWORD *)v44 = v31 == -1071775743;
              Template_pptpqxpxx(
                TransferSize,
                v34,
                v12,
                v13,
                v12,
                *(_QWORD *)v44,
                0LL,
                v46,
                *(_OWORD *)&v55.SpecialLockTransfer.TransferOffset,
                *(_OWORD *)&v55.Reserved.Reserved[6]);
            }
            break;
          case DXGK_OPERATION_UPDATE_CONTEXT_ALLOCATION:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LODWORD(v49) = v55.Transfer.Source.SegmentId;
              *(_DWORD *)v44 = v31 == -1071775743;
              Template_pptpxxpq(
                TransferSize,
                v34,
                v12,
                v13,
                v12,
                *(_QWORD *)v44,
                0LL,
                *(_OWORD *)&v55.Transfer.hAllocation,
                v55.Transfer.TransferSize,
                v49);
            }
            break;
          case DXGK_OPERATION_NOTIFY_RESIDENCY:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LODWORD(v48) = v55.Transfer.Source.SegmentId;
              LODWORD(v46) = v55.Transfer.TransferOffset;
              *(_DWORD *)v44 = v31 == -1071775743;
              Template_pptpqxq(
                TransferSize,
                v34,
                v12,
                v13,
                v12,
                *(_QWORD *)v44,
                0LL,
                v46,
                v55.Transfer.TransferSize,
                v48);
            }
            break;
          default:
            break;
        }
      }
      v11 = (_OWORD *)*((_QWORD *)this + 972);
      if ( v11 )
      {
        *((_QWORD *)v11 + 45 * *((unsigned int *)this + 1946) + 1) = 0LL;
        *(_QWORD *)(360LL * *((unsigned int *)this + 1946) + *((_QWORD *)this + 972) + 16) = 0LL;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1946) + *((_QWORD *)this + 972)) = v9;
        v36 = &v55;
        v11 = (_OWORD *)(360LL * *((unsigned int *)this + 1946) + *((_QWORD *)this + 972) + 24LL);
        v37 = 2LL;
        do
        {
          v11 += 8;
          v38 = *(_OWORD *)&v36->pDmaBuffer;
          v36 = (struct _DXGKARG_BUILDPAGINGBUFFER *)((char *)v36 + 128);
          *(v11 - 8) = v38;
          *(v11 - 7) = *(_OWORD *)&v36[-1].Reserved.Reserved[42];
          *(v11 - 6) = *(_OWORD *)&v36[-1].Reserved.Reserved[46];
          *(v11 - 5) = *(_OWORD *)&v36[-1].Reserved.Reserved[50];
          *(v11 - 4) = *(_OWORD *)&v36[-1].Reserved.Reserved[54];
          *(v11 - 3) = *(_OWORD *)&v36[-1].Reserved.Reserved[58];
          *(v11 - 2) = *(_OWORD *)&v36[-1].Reserved.Reserved[62];
          *(v11 - 1) = *(_OWORD *)&v36[-1].DmaBufferGpuVirtualAddress;
          --v37;
        }
        while ( v37 );
        *v11 = *(_OWORD *)&v36->pDmaBuffer;
        v11[1] = *(_OWORD *)&v36->pDmaBufferPrivateData;
        v11[2] = *(_OWORD *)&v36->MultipassOffset;
        v11[3] = *(_OWORD *)&v36->SpecialLockTransfer.TransferOffset;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1946) + *((_QWORD *)this + 972) + 344) = v31;
        TransferSize = 360LL * *((unsigned int *)this + 1946);
        *(_QWORD *)(TransferSize + *((_QWORD *)this + 972) + 352) = v29;
        if ( ++*((_DWORD *)this + 1946) >= *((_DWORD *)this + 1942) )
        {
          ++*((_DWORD *)this + 1947);
          *((_DWORD *)this + 1946) = 0;
        }
      }
      if ( (int)v31 >= 0 )
        break;
      if ( (_DWORD)v31 != -1071775743 )
      {
        v39 = *((_QWORD *)this + 3);
        v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v11, v12, v13);
        v40[5] = &v55;
        v40[3] = 270LL;
        v40[4] = 11LL;
        v40[6] = v31;
        v40[7] = v39;
        WdLogEvent5_WdCriticalError(v40);
        break;
      }
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v9, 1u, 0LL, 0LL, 1);
      v8 = a3;
    }
    v23 = (_DWORD)v31 == -1071775743;
    v8 = a3;
  }
  while ( v23 );
  v41 = *(_DWORD **)(456LL * (unsigned int)v9 + *((_QWORD *)this + 5006) + 424);
  if ( (*v41 & 0x20) != 0 && (*((_DWORD *)a4 + 12) & 2) == 0 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q((__int64)v41, &EventPerformanceWarning, v12, 23);
    if ( (qword_1C002F070 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q((__int64)v41, &EventProfilerEnter, v12, 8010);
    VIDMM_GLOBAL::FlushPagingBufferInternal(this, v9, 0, 0LL, 0LL, 0);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, v9);
    if ( (*((_DWORD *)a4 + 12) & 4) == 0 )
    {
      VIDMM_PROCESS::SuspendResumeProcess(a4, *(_DWORD *)(*((_QWORD *)this + 3) + 184LL), 1);
      VIDMM_PROCESS::SuspendResumeProcess(a4, *(_DWORD *)(*((_QWORD *)this + 3) + 184LL), 0);
    }
    if ( (qword_1C002F070 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v42, &EventProfilerExit, v43, 8010);
  }
}
