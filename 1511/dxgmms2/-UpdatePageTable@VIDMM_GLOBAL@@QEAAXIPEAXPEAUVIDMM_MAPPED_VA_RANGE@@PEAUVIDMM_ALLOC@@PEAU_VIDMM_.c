/*
 * XREFs of ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_KIIPEAU_DXGK_PTE@@5II4W4_DXGK_PAGETABLEUPDATEMODE@@4U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0044F20
 * Callers:
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_K1@Z @ 0x1C003CD00 (-UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_K1@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C003D0B0 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C003D748 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C003DF00 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAUVIDMM_ALLOC@@W4VIDMM_UNCOMMIT_VA_TYPE@@@Z @ 0x1C003E4A0 (-UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAU.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C003EEF0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAXPEBUCOMMIT_VA_STATE@@1_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0079F8C (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAXPEBUCOMMIT_VA_STATE@@1.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0011590 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
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
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C0047410 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UpdatePageTable(
        VIDMM_GLOBAL *this,
        UINT a2,
        void *a3,
        struct VIDMM_MAPPED_VA_RANGE *a4,
        struct VIDMM_ALLOC *a5,
        struct _VIDMM_GLOBAL_ALLOC *a6,
        UINT64 a7,
        UINT a8,
        LONG a9,
        struct _DXGK_PTE *a10,
        struct _DXGK_PTE *a11,
        unsigned int a12,
        UINT a13,
        SIZE_T a14,
        enum _DXGK_PAGETABLEUPDATEMODE a15,
        unsigned __int64 a16,
        DXGK_UPDATEPAGETABLEFLAGS a17)
{
  bool v17; // zf
  struct _VIDMM_GLOBAL_ALLOC *v19; // r13
  SIZE_T v20; // rsi
  _OWORD *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // r12
  SIZE_T TransferSize; // rcx
  D3DGPU_VIRTUAL_ADDRESS v28; // r10
  __int64 v29; // rbx
  _QWORD *v30; // rax
  _QWORD *v31; // r8
  unsigned int NumPageTableEntries; // r9d
  __int64 v33; // rcx
  void *v34; // rcx
  void *v35; // rdx
  int v36; // eax
  char v37; // al
  UINT SegmentId; // r8d
  __int64 v39; // rdx
  char v40; // cl
  DXGK_PTE *pPageTableEntries64KB; // rdx
  __int64 v42; // rcx
  SIZE_T v43; // rcx
  __int64 v44; // rsi
  unsigned int v45; // r14d
  _OWORD *v46; // rbx
  void *v47; // rcx
  D3DGPU_VIRTUAL_ADDRESS FirstPteVirtualAddress; // xmm0_8
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rdx
  int v54; // ecx
  unsigned int v55; // esi
  unsigned int v56; // r12d
  unsigned __int64 v57; // rbx
  __int64 v58; // r13
  __int64 v59; // rbx
  D3DGPU_VIRTUAL_ADDRESS v60; // r15
  __int64 v61; // rdx
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // r14
  int v65; // ebx
  __int64 v66; // rsi
  _QWORD *v67; // rax
  _QWORD *v68; // rax
  _BOOL8 v69; // rdx
  UINT FillPattern; // r11d
  unsigned int v71; // r15d
  struct _DXGKARG_BUILDPAGINGBUFFER *v72; // rax
  __int64 v73; // rcx
  __int128 v74; // xmm0
  __int64 v75; // rbx
  _QWORD *v76; // rax
  char v77[8]; // [rsp+30h] [rbp-F8h]
  __int64 v78; // [rsp+38h] [rbp-F0h]
  __int64 v79; // [rsp+40h] [rbp-E8h]
  __int64 v80; // [rsp+48h] [rbp-E0h]
  __int64 v81; // [rsp+50h] [rbp-D8h]
  __int64 v82; // [rsp+58h] [rbp-D0h]
  __int64 v83; // [rsp+60h] [rbp-C8h]
  __int64 v84; // [rsp+70h] [rbp-B8h]
  __int64 v85; // [rsp+78h] [rbp-B0h]
  __int64 v86; // [rsp+80h] [rbp-A8h]
  __int64 v87; // [rsp+98h] [rbp-90h]
  int v88; // [rsp+ACh] [rbp-7Ch]
  struct _DXGKARG_BUILDPAGINGBUFFER v90; // [rsp+B8h] [rbp-70h] BYREF
  unsigned __int64 v91; // [rsp+1F8h] [rbp+D0h]
  DXGK_PTE *v92; // [rsp+200h] [rbp+D8h]
  struct _VIDMM_GLOBAL_ALLOC *v93; // [rsp+208h] [rbp+E0h]
  __int64 v94; // [rsp+210h] [rbp+E8h]
  void *v95; // [rsp+218h] [rbp+F0h]
  struct _DXGK_PTE *v96; // [rsp+220h] [rbp+F8h]
  struct VIDMM_MAPPED_VA_RANGE *v97; // [rsp+228h] [rbp+100h]
  _QWORD v98[2]; // [rsp+230h] [rbp+108h] BYREF
  enum _DXGK_PAGETABLEUPDATEMODE v99; // [rsp+308h] [rbp+1E0h]
  unsigned __int64 v100; // [rsp+310h] [rbp+1E8h]

  v17 = *((_BYTE *)this + 6464) == 0;
  v19 = a6;
  v20 = a14;
  v96 = a10;
  v92 = a11;
  v97 = a4;
  v95 = a3;
  v93 = a6;
  v91 = a14;
  if ( v17 )
  {
    if ( (*((_BYTE *)this + 40608) & 8) != 0 )
      a15 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    v99 = a15;
    memset(&v90, 0, sizeof(v90));
    v25 = *((_QWORD *)this + 2);
    v26 = a12;
    v94 = a12;
    TransferSize = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 408) + 200LL) + 8LL * a12);
    v28 = a16 << 12;
    v100 = a16 << 12;
    v90.hSystemContext = *(HANDLE *)(TransferSize + 64);
    v90.MultipassOffset = 0;
    while ( 1 )
    {
      v29 = *((_QWORD *)this + v26 + 79);
      if ( (*(_DWORD *)(v29 + 32) & 4) == 0 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v22, v23, v24);
        v30[3] = 270LL;
        v30[4] = 29LL;
        v30[5] = v29;
        v30[6] = 0LL;
        v30[7] = 0LL;
        WdLogEvent5_WdCriticalError(v30);
        v28 = v100;
      }
      v31 = (_QWORD *)*((_QWORD *)this + v26 + 143);
      NumPageTableEntries = a9;
      v33 = *(_QWORD *)(v31[7] + 360LL);
      *((_QWORD *)this + v26 + 335) = v33;
      v34 = (void *)(*((unsigned int *)this + v26 + 414) + v33);
      *((_QWORD *)this + v26 + 335) = v34;
      v90.pDmaBuffer = v34;
      v35 = (void *)(*((unsigned int *)this + v26 + 542) + v31[16]);
      *((_QWORD *)this + v26 + 399) = v35;
      v36 = *((_DWORD *)this + v26 + 29);
      LODWORD(v34) = *((_DWORD *)this + v26 + 93) - *((_DWORD *)this + v26 + 542);
      v90.pDmaBufferPrivateData = v35;
      LODWORD(v35) = *((_DWORD *)this + v26 + 414);
      v90.DmaSize = v36 - (_DWORD)v35;
      v90.DmaBufferPrivateDataSize = (unsigned int)v34;
      v90.DmaBufferGpuVirtualAddress = v31[12];
      v98[0] = 0LL;
      v98[1] = 0LL;
      v37 = (char)a17;
      v90.UpdatePageTable.Flags = a17;
      v90.DmaBufferWriteOffset = (unsigned int)v35;
      v90.Operation = DXGK_OPERATION_UPDATE_PAGE_TABLE;
      v90.UnmapApertureSegment.DummyPage.HighPart = a9;
      if ( a15 )
      {
        if ( a15 == DXGK_PAGETABLEUPDATE_GPU_VIRTUAL )
        {
          v90.Transfer.TransferSize = v20;
        }
        else
        {
          v90.Fill.FillPattern = a13;
          v90.MapApertureSegment.OffsetInPages = v20;
        }
      }
      else
      {
        v90.Transfer.TransferSize = v20;
      }
      SegmentId = a2;
      v90.Transfer.Destination.SegmentId = a8;
      v90.ReadPhysical.SegmentId = a2;
      if ( v96 )
      {
        v90.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)v96;
        v90.UpdatePageTable.pPageTableEntries64KB = v92;
      }
      else
      {
        v39 = *((_QWORD *)this + 5006);
        v90.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)v98;
        v40 = **(_BYTE **)(456 * v26 + v39 + 424);
        pPageTableEntries64KB = (DXGK_PTE *)v98;
        if ( (v40 & 0x80) == 0 )
          pPageTableEntries64KB = v90.UpdatePageTable.pPageTableEntries64KB;
        v37 = *(_BYTE *)&a17 | 1;
        v90.Transfer.Destination.SegmentAddress.HighPart = *(_DWORD *)&a17 | 1;
        v90.UpdatePageTable.pPageTableEntries64KB = pPageTableEntries64KB;
      }
      v90.Reserved.Reserved[20] = a15;
      v90.UpdatePageTable.FirstPteVirtualAddress = v28;
      if ( v97 )
        v90.TransferVirtual.DestinationPageTable = *((_QWORD *)v97 + 10);
      if ( v19 )
      {
        v42 = *((_QWORD *)v19 + 5);
        if ( v42 )
          v43 = *(_QWORD *)(v42 + 16);
        else
          v43 = *((_QWORD *)v19 + 6);
        v90.Fill.FillSize = v43;
        v90.UpdatePageTable.AllocationOffsetInBytes = a7;
      }
      v17 = *((_QWORD *)this + 5082) == 0LL;
      v90.UpdatePageTable.hProcess = v95;
      if ( !v17 )
        break;
LABEL_49:
      if ( *((_QWORD *)this + 5086) && !SegmentId && (v37 & 1) == 0 )
      {
        v54 = 4096;
        v55 = 0;
        if ( (v90.Reserved.Reserved[13] & 8) != 0 )
          v54 = 0x10000;
        v88 = v54;
        if ( NumPageTableEntries )
        {
          v56 = 0;
          do
          {
            v57 = *(_QWORD *)(v90.Transfer.Source.SegmentAddress.QuadPart + 16LL * v55);
            if ( (v57 & 1) != 0 )
            {
              v58 = *(_QWORD *)(v90.Transfer.Source.SegmentAddress.QuadPart + 16LL * v55 + 8);
              v59 = (v57 >> 5) & 0x1F;
              v60 = v90.UpdatePageTable.FirstPteVirtualAddress + v56;
              if ( *((_QWORD *)this + 5086) )
              {
                KeEnterCriticalRegion();
                ExAcquirePushLockExclusiveEx((char *)this + 40672, 0LL);
                *((_QWORD *)this + 5085) = KeGetCurrentThread();
                if ( *((_DWORD *)this + 10174) == dword_1C002F308 )
                  *((_DWORD *)this + 10174) = 0;
                v61 = *((_QWORD *)this + 5086) + 48LL * *((unsigned int *)this + 10174);
                *(_QWORD *)v61 = MEMORY[0xFFFFF78000000014];
                *(_QWORD *)(v61 + 24) = v60;
                *(_DWORD *)(v61 + 32) = 1;
                *(_QWORD *)(v61 + 16) = 1LL;
                *(_DWORD *)(v61 + 36) = v59;
                *(_QWORD *)(v61 + 8) = v58;
                *(_DWORD *)(v61 + 40) = *((_DWORD *)this + 10166);
                ++*((_DWORD *)this + 10174);
                *((_QWORD *)this + 5085) = 0LL;
                ExReleasePushLockExclusiveEx((char *)this + 40672, 0LL);
                KeLeaveCriticalRegion();
                NumPageTableEntries = v90.UpdatePageTable.NumPageTableEntries;
              }
            }
            v56 += v88;
            ++v55;
          }
          while ( v55 < NumPageTableEntries );
          v19 = v93;
          v26 = v94;
        }
      }
      v62 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v90);
      v64 = -1LL;
      TransferSize = (unsigned int)(LODWORD(v90.pDmaBuffer) - *((_DWORD *)this + 2 * v26 + 670));
      v65 = LODWORD(v90.pDmaBufferPrivateData) - *((_DWORD *)this + 2 * v26 + 798);
      v66 = v62;
      if ( LODWORD(v90.pDmaBuffer) != *((_DWORD *)this + 2 * v26 + 670) || v65 )
      {
        if ( !*((_DWORD *)this + v26 + 1155) )
        {
          *((_DWORD *)this + v26 + 1155) = 1;
          ++*((_QWORD *)this + v26 + 610);
        }
        v64 = *((_QWORD *)this + v26 + 610);
      }
      *((_DWORD *)this + v26 + 414) += TransferSize;
      if ( *((_DWORD *)this + v26 + 414) > *((_DWORD *)this + v26 + 29) )
      {
        v67 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v63, v23, v24);
        v67[3] = 270LL;
        v67[4] = 18LL;
        v67[5] = 0LL;
        v67[6] = 0LL;
        v67[7] = 0LL;
        WdLogEvent5_WdCriticalError(v67);
      }
      *((_DWORD *)this + v26 + 542) += v65;
      if ( *((_DWORD *)this + v26 + 542) > *((_DWORD *)this + v26 + 93) )
      {
        v68 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v63, v23, v24);
        v68[3] = 270LL;
        v68[4] = 19LL;
        v68[5] = 0LL;
        v68[6] = 0LL;
        v68[7] = 0LL;
        WdLogEvent5_WdCriticalError(v68);
      }
      if ( bTracingEnabled )
      {
        v23 = *((_QWORD *)this + v26 + 143);
        v24 = *((_QWORD *)this + 3);
        v69 = (_DWORD)v66 == -1071775743;
        switch ( v90.Operation )
        {
          case DXGK_OPERATION_TRANSFER:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LODWORD(v84) = v90.Transfer.Flags.0;
              LODWORD(v83) = v90.Transfer.Destination.SegmentId;
              LODWORD(v81) = v90.Transfer.Source.SegmentId;
              LODWORD(v79) = v90.Transfer.TransferOffset;
              *(_DWORD *)v77 = v66 == -1071775743;
              Template_pptpqxqxqxq(
                TransferSize,
                v69,
                v23,
                v24,
                v23,
                *(_QWORD *)v77,
                0LL,
                v79,
                v90.Transfer.TransferSize,
                v81,
                v90.Transfer.Source.SegmentAddress.QuadPart,
                v83,
                v90.Transfer.Destination.SegmentAddress.QuadPart,
                v84);
            }
            break;
          case DXGK_OPERATION_FILL:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LODWORD(v81) = v90.Transfer.Source.SegmentId;
              LODWORD(v80) = v90.Fill.FillPattern;
              *(_DWORD *)v77 = v66 == -1071775743;
              Template_pptpxqqx(
                TransferSize,
                v69,
                v23,
                v24,
                v23,
                *(_QWORD *)v77,
                0LL,
                v90.Fill.FillSize,
                v80,
                v81,
                v90.Transfer.Source.SegmentAddress.QuadPart);
            }
            break;
          case DXGK_OPERATION_DISCARD_CONTENT:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LODWORD(v80) = v90.DiscardContent.SegmentId;
              LODWORD(v79) = v90.Transfer.TransferOffset;
              *(_DWORD *)v77 = v66 == -1071775743;
              Template_pptpqqx(
                TransferSize,
                v69,
                v23,
                v24,
                v23,
                *(_QWORD *)v77,
                0LL,
                v79,
                v80,
                v90.Transfer.TransferSize);
            }
            break;
          case DXGK_OPERATION_READ_PHYSICAL:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LODWORD(v78) = v90.ReadPhysical.SegmentId;
              *(_DWORD *)v77 = v66 == -1071775743;
              Template_pptqx(
                TransferSize,
                &EventPagingOpReadPhysical,
                v23,
                v24,
                v23,
                *(_QWORD *)v77,
                v78,
                v90.Fill.FillSize);
            }
            break;
          case DXGK_OPERATION_WRITE_PHYSICAL:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LODWORD(v78) = v90.ReadPhysical.SegmentId;
              *(_DWORD *)v77 = v66 == -1071775743;
              Template_pptqx(
                TransferSize,
                &EventPagingOpWritePhysical,
                v23,
                v24,
                v23,
                *(_QWORD *)v77,
                v78,
                v90.Fill.FillSize);
            }
            break;
          case DXGK_OPERATION_MAP_APERTURE_SEGMENT:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LODWORD(v83) = 0;
              LODWORD(v82) = v90.Transfer.Destination.SegmentAddress.LowPart;
              LODWORD(v79) = v90.Fill.FillPattern;
              *(_DWORD *)v77 = v66 == -1071775743;
              Template_pptpqxxqt(
                TransferSize,
                v69,
                v23,
                v24,
                v23,
                *(_QWORD *)v77,
                0LL,
                v79,
                *(_OWORD *)&v90.Reserved.Reserved[6],
                v82,
                v83);
            }
            break;
          case DXGK_OPERATION_UNMAP_APERTURE_SEGMENT:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LODWORD(v82) = 0;
              LODWORD(v79) = v90.Fill.FillPattern;
              *(_DWORD *)v77 = v66 == -1071775743;
              Template_pptpqxxt(
                TransferSize,
                v69,
                v23,
                v24,
                v23,
                *(_QWORD *)v77,
                0LL,
                v79,
                *(_OWORD *)&v90.Reserved.Reserved[6],
                v82);
            }
            break;
          case DXGK_OPERATION_SPECIAL_LOCK_TRANSFER:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LODWORD(v86) = v90.SpecialLockTransfer.SwizzlingRangeData;
              LODWORD(v85) = v90.Transfer.MdlOffset;
              LODWORD(v84) = v90.Transfer.Flags.0;
              LODWORD(v83) = v90.Transfer.Destination.SegmentId;
              LODWORD(v81) = v90.Transfer.Source.SegmentId;
              LODWORD(v79) = v90.Transfer.TransferOffset;
              *(_DWORD *)v77 = v66 == -1071775743;
              Template_pptpqxqxqxqqq(
                TransferSize,
                v69,
                v23,
                v24,
                v23,
                *(_QWORD *)v77,
                0LL,
                v79,
                v90.Transfer.TransferSize,
                v81,
                v90.Transfer.Source.SegmentAddress.QuadPart,
                v83,
                v90.Transfer.Destination.SegmentAddress.QuadPart,
                v84,
                v85,
                v86);
            }
            break;
          case DXGK_OPERATION_VIRTUAL_TRANSFER:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LODWORD(v86) = v90.Transfer.Destination.SegmentAddress.HighPart;
              LODWORD(v85) = v90.Transfer.Destination.SegmentAddress.LowPart;
              LODWORD(v82) = MEMORY[4];
              LODWORD(v81) = MEMORY[0];
              *(_DWORD *)v77 = v66 == -1071775743;
              Template_pptpxxqqxxxqqx(
                TransferSize,
                v69,
                v23,
                v24,
                v23,
                *(_QWORD *)v77,
                0LL,
                *(_OWORD *)&v90.SpecialLockTransfer.TransferOffset,
                v81,
                v82,
                *(_OWORD *)&v90.Reserved.Reserved[6],
                v90.UnmapApertureSegment.DummyPage.QuadPart,
                v85,
                v86,
                v90.TransferVirtual.DestinationPageTable);
            }
            break;
          case DXGK_OPERATION_VIRTUAL_FILL:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LODWORD(v82) = MEMORY[0];
              LODWORD(v81) = v90.Transfer.Source.SegmentId;
              *(_DWORD *)v77 = v66 == -1071775743;
              Template_pptpxxqqx(
                TransferSize,
                v69,
                v23,
                v24,
                v23,
                *(_QWORD *)v77,
                0LL,
                *(_OWORD *)&v90.SpecialLockTransfer.TransferOffset,
                v81,
                v82,
                v90.Transfer.Source.SegmentAddress.QuadPart);
            }
            break;
          case DXGK_OPERATION_INIT_CONTEXT_RESOURCE:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LODWORD(v79) = v90.Transfer.TransferOffset;
              *(_DWORD *)v77 = v66 == -1071775743;
              Template_pptpqxpx(
                TransferSize,
                v69,
                v23,
                v24,
                v23,
                *(_QWORD *)v77,
                0LL,
                v79,
                *(_OWORD *)&v90.NotifyResidency.PhysicalAddress.SegmentOffset,
                v90.Transfer.Source.SegmentAddress.QuadPart);
            }
            break;
          case DXGK_OPERATION_UPDATE_PAGE_TABLE:
            FillPattern = 0;
            if ( v90.Reserved.Reserved[20] < 2 )
            {
              TransferSize = v90.Transfer.TransferSize;
            }
            else if ( v90.Reserved.Reserved[20] == 2 )
            {
              TransferSize = v90.MapApertureSegment.OffsetInPages;
              FillPattern = v90.Fill.FillPattern;
            }
            else
            {
              TransferSize = 0LL;
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LODWORD(v87) = v90.UpdatePageTable.UpdateMode;
              LODWORD(v85) = v90.Transfer.Destination.SegmentAddress.HighPart;
              LODWORD(v82) = v90.UnmapApertureSegment.DummyPage.HighPart;
              LODWORD(v84) = v90.Transfer.Destination.SegmentId;
              LODWORD(v81) = FillPattern;
              LODWORD(v79) = v90.ReadPhysical.SegmentId;
              *(_DWORD *)v77 = v66 == -1071775743;
              Template_pptpqxqqppqqxxpqx(
                TransferSize,
                v69,
                v23,
                v24,
                v23,
                *(_QWORD *)v77,
                0LL,
                v79,
                TransferSize,
                v81,
                v82,
                v90.Transfer.Source.SegmentAddress.QuadPart,
                v90.UpdatePageTable.pPageTableEntries64KB,
                v84,
                v85,
                *(_OWORD *)&v90.Reserved.Reserved[14],
                v90.UpdatePageTable.hProcess,
                v87,
                v90.UpdatePageTable.FirstPteVirtualAddress);
            }
            break;
          case DXGK_OPERATION_FLUSH_TLB:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LODWORD(v79) = v90.ReadPhysical.SegmentId;
              *(_DWORD *)v77 = v66 == -1071775743;
              Template_pptpqxpxx(
                TransferSize,
                v69,
                v23,
                v24,
                v23,
                *(_QWORD *)v77,
                0LL,
                v79,
                *(_OWORD *)&v90.SpecialLockTransfer.TransferOffset,
                *(_OWORD *)&v90.Reserved.Reserved[6]);
            }
            break;
          case DXGK_OPERATION_UPDATE_CONTEXT_ALLOCATION:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LODWORD(v82) = v90.Transfer.Source.SegmentId;
              *(_DWORD *)v77 = v66 == -1071775743;
              Template_pptpxxpq(
                TransferSize,
                v69,
                v23,
                v24,
                v23,
                *(_QWORD *)v77,
                0LL,
                *(_OWORD *)&v90.Transfer.hAllocation,
                v90.Transfer.TransferSize,
                v82);
            }
            break;
          case DXGK_OPERATION_NOTIFY_RESIDENCY:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LODWORD(v81) = v90.Transfer.Source.SegmentId;
              LODWORD(v79) = v90.Transfer.TransferOffset;
              *(_DWORD *)v77 = v66 == -1071775743;
              Template_pptpqxq(
                TransferSize,
                v69,
                v23,
                v24,
                v23,
                *(_QWORD *)v77,
                0LL,
                v79,
                v90.Transfer.TransferSize,
                v81);
            }
            break;
          default:
            break;
        }
      }
      v22 = (_OWORD *)*((_QWORD *)this + 972);
      if ( v22 )
      {
        *((_QWORD *)v22 + 45 * *((unsigned int *)this + 1946) + 1) = 0LL;
        *(_QWORD *)(360LL * *((unsigned int *)this + 1946) + *((_QWORD *)this + 972) + 16) = 0LL;
        v71 = a12;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1946) + *((_QWORD *)this + 972)) = a12;
        v72 = &v90;
        v22 = (_OWORD *)(360LL * *((unsigned int *)this + 1946) + *((_QWORD *)this + 972) + 24LL);
        v73 = 2LL;
        do
        {
          v22 += 8;
          v74 = *(_OWORD *)&v72->pDmaBuffer;
          v72 = (struct _DXGKARG_BUILDPAGINGBUFFER *)((char *)v72 + 128);
          *(v22 - 8) = v74;
          *(v22 - 7) = *(_OWORD *)&v72[-1].Reserved.Reserved[42];
          *(v22 - 6) = *(_OWORD *)&v72[-1].Reserved.Reserved[46];
          *(v22 - 5) = *(_OWORD *)&v72[-1].Reserved.Reserved[50];
          *(v22 - 4) = *(_OWORD *)&v72[-1].Reserved.Reserved[54];
          *(v22 - 3) = *(_OWORD *)&v72[-1].Reserved.Reserved[58];
          *(v22 - 2) = *(_OWORD *)&v72[-1].Reserved.Reserved[62];
          *(v22 - 1) = *(_OWORD *)&v72[-1].DmaBufferGpuVirtualAddress;
          --v73;
        }
        while ( v73 );
        *v22 = *(_OWORD *)&v72->pDmaBuffer;
        v22[1] = *(_OWORD *)&v72->pDmaBufferPrivateData;
        v22[2] = *(_OWORD *)&v72->MultipassOffset;
        v22[3] = *(_OWORD *)&v72->SpecialLockTransfer.TransferOffset;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1946) + *((_QWORD *)this + 972) + 344) = v66;
        TransferSize = 360LL * *((unsigned int *)this + 1946);
        *(_QWORD *)(TransferSize + *((_QWORD *)this + 972) + 352) = v64;
        if ( ++*((_DWORD *)this + 1946) >= *((_DWORD *)this + 1942) )
        {
          ++*((_DWORD *)this + 1947);
          *((_DWORD *)this + 1946) = 0;
        }
      }
      else
      {
        v71 = a12;
      }
      if ( (int)v66 >= 0 )
        goto LABEL_119;
      if ( (_DWORD)v66 == -1071775743 )
      {
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v71, 1u, 0LL, 0LL, 1);
        v28 = v100;
        v20 = v91;
        a15 = v99;
      }
      else
      {
        v75 = *((_QWORD *)this + 3);
        v76 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v22, v23, v24);
        v76[5] = &v90;
        v76[3] = 270LL;
        v76[4] = 11LL;
        v76[6] = v66;
        v76[7] = v75;
        WdLogEvent5_WdCriticalError(v76);
LABEL_119:
        a15 = v99;
        v17 = (_DWORD)v66 == -1071775743;
        v20 = v91;
        v28 = v100;
        if ( !v17 )
          return;
      }
    }
    if ( a5 )
      v44 = **(_QWORD **)(*(_QWORD *)a5 + 8LL);
    else
      v44 = 0LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 40672, 0LL);
    v45 = v90.UpdatePageTable.NumPageTableEntries;
    *((_QWORD *)this + 5085) = KeGetCurrentThread();
    if ( (v90.Reserved.Reserved[13] & 1) != 0 )
      v45 = 1;
    v46 = operator new(16 * (v45 - 1 + 10LL), 0x32356956u, PagedPool);
    if ( !v46 )
    {
LABEL_48:
      *((_QWORD *)this + 5085) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 40672, 0LL);
      KeLeaveCriticalRegion();
      v37 = v90.Reserved.Reserved[13];
      NumPageTableEntries = v90.UpdatePageTable.NumPageTableEntries;
      SegmentId = v90.ReadPhysical.SegmentId;
      goto LABEL_49;
    }
    if ( *((_DWORD *)this + 10166) == dword_1C002F304 )
      *((_DWORD *)this + 10166) = 0;
    v47 = *(void **)(*((_QWORD *)this + 5082) + 24LL * *((unsigned int *)this + 10166) + 16);
    if ( v47 )
      operator delete(v47);
    *v46 = *(_OWORD *)&v90.Transfer.hAllocation;
    v46[1] = *(_OWORD *)&v90.NotifyResidency.PhysicalAddress.SegmentOffset;
    v46[2] = *(_OWORD *)&v90.Reserved.Reserved[8];
    v46[3] = *(_OWORD *)&v90.Reserved.Reserved[12];
    v46[4] = *(_OWORD *)&v90.Reserved.Reserved[16];
    v46[5] = *(_OWORD *)&v90.Reserved.Reserved[20];
    FirstPteVirtualAddress = v90.UpdatePageTable.FirstPteVirtualAddress;
    *((_DWORD *)v46 + 34) = a12;
    *((_QWORD *)v46 + 12) = FirstPteVirtualAddress;
    *((_QWORD *)v46 + 14) = a5;
    *((_QWORD *)v46 + 15) = v19;
    *((_QWORD *)v46 + 13) = v44;
    if ( a5 && (v49 = *((_QWORD *)a5 + 2)) != 0 )
    {
      v50 = *(_QWORD *)(v49 + 32);
    }
    else
    {
      if ( !v19 )
      {
        v51 = 0LL;
        v50 = 0LL;
LABEL_44:
        *((_QWORD *)v46 + 16) = v50;
        if ( v45 )
        {
          v53 = v45;
          do
          {
            ++v51;
            v46[v51 + 8] = *(_OWORD *)(v51 * 16 + v90.Transfer.Source.SegmentAddress.QuadPart - 16);
            --v53;
          }
          while ( v53 );
        }
        *(_QWORD *)(*((_QWORD *)this + 5082) + 24LL * *((unsigned int *)this + 10166)) = MEMORY[0xFFFFF78000000014];
        *(_QWORD *)(*((_QWORD *)this + 5082) + 24LL * *((unsigned int *)this + 10166) + 16) = v46;
        *(_DWORD *)(*((_QWORD *)this + 5082) + 24LL * (unsigned int)(*((_DWORD *)this + 10166))++ + 8) = 4;
        goto LABEL_48;
      }
      v52 = *((_QWORD *)v19 + 5);
      if ( v52 )
        v50 = *(_QWORD *)(v52 + 16);
      else
        v50 = *((_QWORD *)v19 + 6);
    }
    v51 = 0LL;
    goto LABEL_44;
  }
}
