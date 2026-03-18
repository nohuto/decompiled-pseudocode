/*
 * XREFs of ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C004D610
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0045FA0 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0046974 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00493F0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C004B120 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0087D3C (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C000F8C0 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
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
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UpdatePageTable(
        VIDMM_GLOBAL *this,
        UINT a2,
        struct VIDMM_PROCESS *a3,
        D3DGPU_VIRTUAL_ADDRESS a4,
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
        DXGK_UPDATEPAGETABLEFLAGS a17,
        unsigned __int64 a18)
{
  bool v18; // zf
  UINT v19; // r14d
  struct _VIDMM_GLOBAL_ALLOC *v21; // rdi
  unsigned int v22; // r12d
  _OWORD *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r15
  __int64 v28; // rax
  SIZE_T TransferSize; // rcx
  __int64 v30; // rax
  D3DGPU_VIRTUAL_ADDRESS v31; // r11
  __int64 v32; // rbx
  _QWORD *v33; // r8
  unsigned int v34; // r9d
  __int64 v35; // rcx
  void *v36; // rcx
  void *v37; // rdx
  int v38; // eax
  LONG v39; // eax
  UINT SegmentId; // r10d
  __int64 v41; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int NumPageTableEntries; // edi
  SIZE_T v44; // rcx
  _OWORD *v45; // rsi
  void *v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  DXGK_PTE *pPageTableEntries64KB; // r8
  unsigned int v51; // edx
  __int64 v52; // r9
  __int128 v53; // xmm0
  __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rsi
  int v58; // ebx
  __int64 v59; // rdi
  struct _DXGKARG_BUILDPAGINGBUFFER *v60; // rax
  __int64 v61; // rcx
  __int128 v62; // xmm0
  int v63; // eax
  unsigned int v64; // edi
  unsigned int v65; // r15d
  unsigned __int64 v66; // rbx
  __int64 v67; // r12
  __int64 v68; // rbx
  D3DGPU_VIRTUAL_ADDRESS v69; // r14
  __int64 v70; // rdx
  __int64 v71; // rcx
  SIZE_T v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  _BOOL8 v78; // rdx
  UINT FillPattern; // r11d
  __int64 v80; // rbx
  _QWORD *v81; // rax
  char v82[8]; // [rsp+30h] [rbp-F8h]
  char v83[8]; // [rsp+38h] [rbp-F0h]
  __int64 v84; // [rsp+40h] [rbp-E8h]
  __int64 v85; // [rsp+48h] [rbp-E0h]
  __int64 v86; // [rsp+50h] [rbp-D8h]
  __int64 v87; // [rsp+58h] [rbp-D0h]
  __int64 v88; // [rsp+60h] [rbp-C8h]
  __int64 v89; // [rsp+70h] [rbp-B8h]
  __int64 v90; // [rsp+78h] [rbp-B0h]
  __int64 v91; // [rsp+80h] [rbp-A8h]
  __int64 v92; // [rsp+98h] [rbp-90h]
  enum _DXGK_PAGETABLEUPDATEMODE v93; // [rsp+A8h] [rbp-80h]
  int v95; // [rsp+B0h] [rbp-78h]
  struct _DXGKARG_BUILDPAGINGBUFFER v96; // [rsp+C8h] [rbp-60h] BYREF
  __int64 v97; // [rsp+208h] [rbp+E0h]
  struct _DXGK_PTE *v98; // [rsp+210h] [rbp+E8h]
  DXGK_PTE *v99; // [rsp+218h] [rbp+F0h]
  D3DGPU_VIRTUAL_ADDRESS v100; // [rsp+220h] [rbp+F8h]
  struct VIDMM_PROCESS *v101; // [rsp+228h] [rbp+100h]
  _QWORD v102[2]; // [rsp+230h] [rbp+108h] BYREF
  unsigned __int64 v103; // [rsp+310h] [rbp+1E8h]

  v18 = *((_BYTE *)this + 6496) == 0;
  v19 = a2;
  v21 = a6;
  v22 = a12;
  v98 = a10;
  v99 = a11;
  v100 = a4;
  v101 = a3;
  if ( v18 )
  {
    if ( (*((_BYTE *)this + 40872) & 8) != 0 )
      a15 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    v93 = a15;
    memset(&v96, 0, sizeof(v96));
    v18 = (*((_BYTE *)this + 40873) & 4) == 0;
    v27 = a12;
    v28 = *((_QWORD *)this + 2);
    v97 = a12;
    TransferSize = *(_QWORD *)(v28 + 384);
    if ( v18 )
      v30 = *(_QWORD *)(TransferSize + 224);
    else
      v30 = *(_QWORD *)(TransferSize + 232);
    v31 = a16 << 12;
    v103 = a16 << 12;
    v96.hSystemContext = *(HANDLE *)(*(_QWORD *)(v30 + 8LL * a12) + 64LL);
    v96.MultipassOffset = 0;
    while ( 1 )
    {
      v32 = *((_QWORD *)this + v27 + 79);
      if ( (*(_DWORD *)(v32 + 32) & 4) == 0 )
      {
        v75 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v24, v25, v26);
        v75[3] = 270LL;
        v75[4] = 29LL;
        v75[5] = v32;
        v75[6] = 0LL;
        v75[7] = 0LL;
        WdLogEvent5_WdCriticalError(v75);
        v31 = v103;
      }
      v33 = (_QWORD *)*((_QWORD *)this + v27 + 143);
      v34 = a9;
      v35 = *(_QWORD *)(v33[7] + 376LL);
      *((_QWORD *)this + v27 + 335) = v35;
      v36 = (void *)(*((unsigned int *)this + v27 + 414) + v35);
      *((_QWORD *)this + v27 + 335) = v36;
      v96.pDmaBuffer = v36;
      v37 = (void *)(*((unsigned int *)this + v27 + 542) + v33[16]);
      *((_QWORD *)this + v27 + 399) = v37;
      v38 = *((_DWORD *)this + v27 + 29);
      LODWORD(v36) = *((_DWORD *)this + v27 + 93) - *((_DWORD *)this + v27 + 542);
      v96.pDmaBufferPrivateData = v37;
      LODWORD(v37) = *((_DWORD *)this + v27 + 414);
      v96.DmaSize = v38 - (_DWORD)v37;
      v96.DmaBufferPrivateDataSize = (unsigned int)v36;
      v96.DmaBufferGpuVirtualAddress = v33[12];
      v102[0] = 0LL;
      v102[1] = 0LL;
      v39 = (LONG)a17;
      v96.DmaBufferWriteOffset = (unsigned int)v37;
      v96.Operation = DXGK_OPERATION_UPDATE_PAGE_TABLE;
      v96.UpdatePageTable.Flags = a17;
      v96.UnmapApertureSegment.DummyPage.HighPart = a9;
      if ( a15 )
      {
        if ( a15 == DXGK_PAGETABLEUPDATE_GPU_VIRTUAL )
        {
          v96.Transfer.TransferSize = a14;
        }
        else
        {
          v96.Fill.FillPattern = a13;
          v96.MapApertureSegment.OffsetInPages = a14;
        }
      }
      else
      {
        v96.Transfer.TransferSize = a14;
      }
      SegmentId = v19;
      v96.Transfer.Destination.SegmentId = a8;
      v96.ReadPhysical.SegmentId = v19;
      if ( v98 )
      {
        v96.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)v98;
        v96.UpdatePageTable.pPageTableEntries64KB = v99;
      }
      else
      {
        v96.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)v102;
        if ( (**(_DWORD **)(456 * v27 + *((_QWORD *)this + 5017) + 424) & 0x80u) != 0 )
          v96.UpdatePageTable.pPageTableEntries64KB = (DXGK_PTE *)v102;
        v39 = *(_DWORD *)&a17 | 1;
        v96.Transfer.Destination.SegmentAddress.HighPart = *(_DWORD *)&a17 | 1;
      }
      v96.Reserved.Reserved[20] = a15;
      v96.UpdatePageTable.FirstPteVirtualAddress = v31;
      if ( !v19 )
      {
        if ( a18 == 16 )
        {
          if ( (*(_BYTE *)&a17 & 8) != 0 )
            goto LABEL_96;
        }
        else if ( a18 == 1 && (*(_BYTE *)&a17 & 8) == 0 )
        {
LABEL_96:
          v39 |= 1u;
          v96.Transfer.Destination.SegmentAddress.HighPart = v39;
        }
      }
      v96.TransferVirtual.DestinationPageTable = v100;
      if ( v21 )
      {
        v71 = *((_QWORD *)v21 + 5);
        if ( v71 )
          v72 = *(_QWORD *)(v71 + 16);
        else
          v72 = *((_QWORD *)v21 + 6);
        v96.Fill.FillSize = v72;
        v96.UpdatePageTable.AllocationOffsetInBytes = a7;
      }
      v18 = *((_QWORD *)this + 5115) == 0LL;
      v96.UpdatePageTable.hProcess = *(HANDLE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v101 + 4) + 40LL)
                                                           + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 200LL))
                                               + 16LL);
      if ( !v18 )
      {
        v41 = *(_QWORD *)v101;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)this + 40936, 0LL);
        CurrentThread = KeGetCurrentThread();
        NumPageTableEntries = v96.UpdatePageTable.NumPageTableEntries;
        if ( (v96.Reserved.Reserved[13] & 1) != 0 )
          NumPageTableEntries = 1;
        *((_QWORD *)this + 5118) = CurrentThread;
        v44 = 16 * (NumPageTableEntries - 1 + 10LL);
        if ( v96.UpdatePageTable.pPageTableEntries64KB )
          v44 += 16LL * NumPageTableEntries;
        v45 = operator new(v44, 0x32356956u, PagedPool);
        if ( v45 )
        {
          if ( *((_DWORD *)this + 10232) == dword_1C0035314 )
            *((_DWORD *)this + 10232) = 0;
          v46 = *(void **)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16);
          if ( v46 )
            operator delete(v46);
          *v45 = *(_OWORD *)&v96.Transfer.hAllocation;
          v45[1] = *(_OWORD *)&v96.NotifyResidency.PhysicalAddress.SegmentOffset;
          v45[2] = *(_OWORD *)&v96.Reserved.Reserved[8];
          v45[3] = *(_OWORD *)&v96.Reserved.Reserved[12];
          v45[4] = *(_OWORD *)&v96.Reserved.Reserved[16];
          v45[5] = *(_OWORD *)&v96.Reserved.Reserved[20];
          *((_QWORD *)v45 + 12) = v96.UpdatePageTable.FirstPteVirtualAddress;
          *((_DWORD *)v45 + 34) = v22;
          *((_QWORD *)v45 + 14) = a5;
          *((_QWORD *)v45 + 15) = a6;
          *((_QWORD *)v45 + 13) = v41;
          if ( a5 && (v73 = *((_QWORD *)a5 + 2)) != 0 )
          {
            v47 = *(_QWORD *)(v73 + 32);
          }
          else if ( a6 )
          {
            v74 = *((_QWORD *)a6 + 5);
            if ( v74 )
              v47 = *(_QWORD *)(v74 + 16);
            else
              v47 = *((_QWORD *)a6 + 6);
          }
          else
          {
            v47 = 0LL;
          }
          *((_QWORD *)v45 + 16) = v47;
          if ( NumPageTableEntries )
          {
            v48 = 0LL;
            v49 = NumPageTableEntries;
            do
            {
              ++v48;
              v45[v48 + 8] = *(_OWORD *)(v48 * 16 + v96.Transfer.Source.SegmentAddress.QuadPart - 16);
              --v49;
            }
            while ( v49 );
          }
          pPageTableEntries64KB = v96.UpdatePageTable.pPageTableEntries64KB;
          if ( v96.UpdatePageTable.pPageTableEntries64KB )
          {
            v51 = 0;
            if ( NumPageTableEntries )
            {
              v52 = 0LL;
              while ( 1 )
              {
                v53 = *(_OWORD *)&pPageTableEntries64KB[v52].0;
                v54 = v51 + NumPageTableEntries;
                ++v51;
                ++v52;
                v45[v54 + 9] = v53;
                if ( v51 >= NumPageTableEntries )
                  break;
                pPageTableEntries64KB = v96.UpdatePageTable.pPageTableEntries64KB;
              }
            }
          }
          *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232)) = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16) = v45;
          *(_DWORD *)(*((_QWORD *)this + 5115) + 24LL * (unsigned int)(*((_DWORD *)this + 10232))++ + 8) = 4;
        }
        *((_QWORD *)this + 5118) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 40936, 0LL);
        KeLeaveCriticalRegion();
        LOBYTE(v39) = v96.Reserved.Reserved[13];
        v34 = v96.UpdatePageTable.NumPageTableEntries;
        SegmentId = v96.ReadPhysical.SegmentId;
      }
      if ( *((_QWORD *)this + 5119) && !SegmentId && (v39 & 1) == 0 )
      {
        v63 = 4096;
        if ( (v96.Reserved.Reserved[13] & 8) != 0 )
          v63 = 0x10000;
        v64 = 0;
        v95 = v63;
        if ( v34 )
        {
          v65 = 0;
          do
          {
            v66 = *(_QWORD *)(v96.Transfer.Source.SegmentAddress.QuadPart + 16LL * v64);
            if ( (v66 & 1) != 0 )
            {
              v67 = *(_QWORD *)(v96.Transfer.Source.SegmentAddress.QuadPart + 16LL * v64 + 8);
              v68 = (v66 >> 5) & 0x1F;
              v69 = v96.UpdatePageTable.FirstPteVirtualAddress + v65;
              if ( *((_QWORD *)this + 5119) )
              {
                KeEnterCriticalRegion();
                ExAcquirePushLockExclusiveEx((char *)this + 40936, 0LL);
                *((_QWORD *)this + 5118) = KeGetCurrentThread();
                if ( *((_DWORD *)this + 10240) == dword_1C0035318 )
                  *((_DWORD *)this + 10240) = 0;
                v70 = *((_QWORD *)this + 5119) + 48LL * *((unsigned int *)this + 10240);
                *(_QWORD *)v70 = MEMORY[0xFFFFF78000000014];
                *(_DWORD *)(v70 + 32) = 1;
                *(_QWORD *)(v70 + 16) = 1LL;
                *(_DWORD *)(v70 + 36) = v68;
                *(_QWORD *)(v70 + 8) = v67;
                *(_QWORD *)(v70 + 24) = v69;
                *(_DWORD *)(v70 + 40) = *((_DWORD *)this + 10232);
                ++*((_DWORD *)this + 10240);
                *((_QWORD *)this + 5118) = 0LL;
                ExReleasePushLockExclusiveEx((char *)this + 40936, 0LL);
                KeLeaveCriticalRegion();
                v34 = v96.UpdatePageTable.NumPageTableEntries;
              }
            }
            v65 += v95;
            ++v64;
          }
          while ( v64 < v34 );
          v27 = v97;
          v22 = a12;
        }
      }
      v55 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v96);
      v57 = -1LL;
      TransferSize = (unsigned int)(LODWORD(v96.pDmaBuffer) - *((_DWORD *)this + 2 * v27 + 670));
      v58 = LODWORD(v96.pDmaBufferPrivateData) - *((_DWORD *)this + 2 * v27 + 798);
      v59 = v55;
      if ( LODWORD(v96.pDmaBuffer) != *((_DWORD *)this + 2 * v27 + 670) || v58 )
      {
        if ( !*((_DWORD *)this + v27 + 1155) )
        {
          *((_DWORD *)this + v27 + 1155) = 1;
          ++*((_QWORD *)this + v27 + 610);
        }
        v57 = *((_QWORD *)this + v27 + 610);
      }
      *((_DWORD *)this + v27 + 414) += TransferSize;
      if ( *((_DWORD *)this + v27 + 414) > *((_DWORD *)this + v27 + 29) )
      {
        v76 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v56, v25, v26);
        v76[3] = 270LL;
        v76[4] = 18LL;
        v76[5] = 0LL;
        v76[6] = 0LL;
        v76[7] = 0LL;
        WdLogEvent5_WdCriticalError(v76);
      }
      *((_DWORD *)this + v27 + 542) += v58;
      if ( *((_DWORD *)this + v27 + 542) > *((_DWORD *)this + v27 + 93) )
      {
        v77 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v56, v25, v26);
        v77[3] = 270LL;
        v77[4] = 19LL;
        v77[5] = 0LL;
        v77[6] = 0LL;
        v77[7] = 0LL;
        WdLogEvent5_WdCriticalError(v77);
      }
      if ( bTracingEnabled )
      {
        v25 = *((_QWORD *)this + v27 + 143);
        v26 = *((_QWORD *)this + 3);
        v78 = (_DWORD)v59 == -1071775743;
        switch ( v96.Operation )
        {
          case DXGK_OPERATION_TRANSFER:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v89) = v96.Transfer.Flags.0;
              LODWORD(v88) = v96.Transfer.Destination.SegmentId;
              LODWORD(v86) = v96.Transfer.Source.SegmentId;
              LODWORD(v84) = v96.Transfer.TransferOffset;
              *(_DWORD *)v82 = v59 == -1071775743;
              Template_pptpqxqxqxq(
                TransferSize,
                v78,
                v25,
                v26,
                v25,
                *(_QWORD *)v82,
                0LL,
                v84,
                v96.Transfer.TransferSize,
                v86,
                v96.Transfer.Source.SegmentAddress.QuadPart,
                v88,
                v96.Transfer.Destination.SegmentAddress.QuadPart,
                v89);
            }
            break;
          case DXGK_OPERATION_FILL:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v86) = v96.Transfer.Source.SegmentId;
              LODWORD(v85) = v96.Fill.FillPattern;
              *(_DWORD *)v82 = v59 == -1071775743;
              Template_pptpxqqx(
                TransferSize,
                v78,
                v25,
                v26,
                v25,
                *(_QWORD *)v82,
                0LL,
                v96.Fill.FillSize,
                v85,
                v86,
                v96.Transfer.Source.SegmentAddress.QuadPart);
            }
            break;
          case DXGK_OPERATION_DISCARD_CONTENT:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v85) = v96.DiscardContent.SegmentId;
              LODWORD(v84) = v96.Transfer.TransferOffset;
              *(_DWORD *)v82 = v59 == -1071775743;
              Template_pptpqqx(
                TransferSize,
                v78,
                v25,
                v26,
                v25,
                *(_QWORD *)v82,
                0LL,
                v84,
                v85,
                v96.Transfer.TransferSize);
            }
            break;
          case DXGK_OPERATION_READ_PHYSICAL:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_DWORD *)v83 = v96.ReadPhysical.SegmentId;
              *(_DWORD *)v82 = v59 == -1071775743;
              Template_pptqx(
                TransferSize,
                &EventPagingOpReadPhysical,
                v25,
                v26,
                v25,
                *(_QWORD *)v82,
                *(_QWORD *)v83,
                v96.Fill.FillSize);
            }
            break;
          case DXGK_OPERATION_WRITE_PHYSICAL:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_DWORD *)v83 = v96.ReadPhysical.SegmentId;
              *(_DWORD *)v82 = v59 == -1071775743;
              Template_pptqx(
                TransferSize,
                &EventPagingOpWritePhysical,
                v25,
                v26,
                v25,
                *(_QWORD *)v82,
                *(_QWORD *)v83,
                v96.Fill.FillSize);
            }
            break;
          case DXGK_OPERATION_MAP_APERTURE_SEGMENT:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v88) = 0;
              LODWORD(v87) = v96.Transfer.Destination.SegmentAddress.LowPart;
              LODWORD(v84) = v96.Fill.FillPattern;
              *(_DWORD *)v82 = v59 == -1071775743;
              Template_pptpqxxqt(
                TransferSize,
                v78,
                v25,
                v26,
                v25,
                *(_QWORD *)v82,
                0LL,
                v84,
                *(_OWORD *)&v96.Reserved.Reserved[6],
                v87,
                v88);
            }
            break;
          case DXGK_OPERATION_UNMAP_APERTURE_SEGMENT:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v87) = 0;
              LODWORD(v84) = v96.Fill.FillPattern;
              *(_DWORD *)v82 = v59 == -1071775743;
              Template_pptpqxxt(
                TransferSize,
                v78,
                v25,
                v26,
                v25,
                *(_QWORD *)v82,
                0LL,
                v84,
                *(_OWORD *)&v96.Reserved.Reserved[6],
                v87);
            }
            break;
          case DXGK_OPERATION_SPECIAL_LOCK_TRANSFER:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v91) = v96.SpecialLockTransfer.SwizzlingRangeData;
              LODWORD(v90) = v96.Transfer.MdlOffset;
              LODWORD(v89) = v96.Transfer.Flags.0;
              LODWORD(v88) = v96.Transfer.Destination.SegmentId;
              LODWORD(v86) = v96.Transfer.Source.SegmentId;
              LODWORD(v84) = v96.Transfer.TransferOffset;
              *(_DWORD *)v82 = v59 == -1071775743;
              Template_pptpqxqxqxqqq(
                TransferSize,
                v78,
                v25,
                v26,
                v25,
                *(_QWORD *)v82,
                0LL,
                v84,
                v96.Transfer.TransferSize,
                v86,
                v96.Transfer.Source.SegmentAddress.QuadPart,
                v88,
                v96.Transfer.Destination.SegmentAddress.QuadPart,
                v89,
                v90,
                v91);
            }
            break;
          case DXGK_OPERATION_VIRTUAL_TRANSFER:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v91) = v96.Transfer.Destination.SegmentAddress.HighPart;
              LODWORD(v90) = v96.Transfer.Destination.SegmentAddress.LowPart;
              LODWORD(v87) = MEMORY[4];
              LODWORD(v86) = MEMORY[0];
              *(_DWORD *)v82 = v59 == -1071775743;
              Template_pptpxxqqxxxqqx(
                TransferSize,
                v78,
                v25,
                v26,
                v25,
                *(_QWORD *)v82,
                0LL,
                *(_OWORD *)&v96.SpecialLockTransfer.TransferOffset,
                v86,
                v87,
                *(_OWORD *)&v96.Reserved.Reserved[6],
                v96.UnmapApertureSegment.DummyPage.QuadPart,
                v90,
                v91,
                v96.TransferVirtual.DestinationPageTable);
            }
            break;
          case DXGK_OPERATION_VIRTUAL_FILL:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v87) = MEMORY[0];
              LODWORD(v86) = v96.Transfer.Source.SegmentId;
              *(_DWORD *)v82 = v59 == -1071775743;
              Template_pptpxxqqx(
                TransferSize,
                v78,
                v25,
                v26,
                v25,
                *(_QWORD *)v82,
                0LL,
                *(_OWORD *)&v96.SpecialLockTransfer.TransferOffset,
                v86,
                v87,
                v96.Transfer.Source.SegmentAddress.QuadPart);
            }
            break;
          case DXGK_OPERATION_INIT_CONTEXT_RESOURCE:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v84) = v96.Transfer.TransferOffset;
              *(_DWORD *)v82 = v59 == -1071775743;
              Template_pptpqxpx(
                TransferSize,
                v78,
                v25,
                v26,
                v25,
                *(_QWORD *)v82,
                0LL,
                v84,
                *(_OWORD *)&v96.NotifyResidency.PhysicalAddress.SegmentOffset,
                v96.Transfer.Source.SegmentAddress.QuadPart);
            }
            break;
          case DXGK_OPERATION_UPDATE_PAGE_TABLE:
            FillPattern = 0;
            if ( v96.Reserved.Reserved[20] < 2 )
            {
              TransferSize = v96.Transfer.TransferSize;
            }
            else if ( v96.Reserved.Reserved[20] == 2 )
            {
              TransferSize = v96.MapApertureSegment.OffsetInPages;
              FillPattern = v96.Fill.FillPattern;
            }
            else
            {
              TransferSize = 0LL;
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v92) = v96.UpdatePageTable.UpdateMode;
              LODWORD(v90) = v96.Transfer.Destination.SegmentAddress.HighPart;
              LODWORD(v87) = v96.UnmapApertureSegment.DummyPage.HighPart;
              LODWORD(v89) = v96.Transfer.Destination.SegmentId;
              LODWORD(v86) = FillPattern;
              LODWORD(v84) = v96.ReadPhysical.SegmentId;
              *(_DWORD *)v82 = v59 == -1071775743;
              Template_pptpqxqqppqqxxpqx(
                TransferSize,
                v78,
                v25,
                v26,
                v25,
                *(_QWORD *)v82,
                0LL,
                v84,
                TransferSize,
                v86,
                v87,
                v96.Transfer.Source.SegmentAddress.QuadPart,
                v96.UpdatePageTable.pPageTableEntries64KB,
                v89,
                v90,
                *(_OWORD *)&v96.Reserved.Reserved[14],
                v96.UpdatePageTable.hProcess,
                v92,
                v96.UpdatePageTable.FirstPteVirtualAddress);
            }
            break;
          case DXGK_OPERATION_FLUSH_TLB:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v84) = v96.ReadPhysical.SegmentId;
              *(_DWORD *)v82 = v59 == -1071775743;
              Template_pptpqxpxx(
                TransferSize,
                v78,
                v25,
                v26,
                v25,
                *(_QWORD *)v82,
                0LL,
                v84,
                *(_OWORD *)&v96.SpecialLockTransfer.TransferOffset,
                *(_OWORD *)&v96.Reserved.Reserved[6]);
            }
            break;
          case DXGK_OPERATION_UPDATE_CONTEXT_ALLOCATION:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v87) = v96.Transfer.Source.SegmentId;
              *(_DWORD *)v82 = v59 == -1071775743;
              Template_pptpxxpq(
                TransferSize,
                v78,
                v25,
                v26,
                v25,
                *(_QWORD *)v82,
                0LL,
                *(_OWORD *)&v96.Transfer.hAllocation,
                v96.Transfer.TransferSize,
                v87);
            }
            break;
          case DXGK_OPERATION_NOTIFY_RESIDENCY:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v86) = v96.Transfer.Source.SegmentId;
              LODWORD(v84) = v96.Transfer.TransferOffset;
              *(_DWORD *)v82 = v59 == -1071775743;
              Template_pptpqxq(
                TransferSize,
                v78,
                v25,
                v26,
                v25,
                *(_QWORD *)v82,
                0LL,
                v84,
                v96.Transfer.TransferSize,
                v86);
            }
            break;
          default:
            break;
        }
      }
      v24 = (_OWORD *)*((_QWORD *)this + 978);
      if ( v24 )
      {
        *((_QWORD *)v24 + 45 * *((unsigned int *)this + 1958) + 1) = 0LL;
        *(_QWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978) + 16) = 0LL;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978)) = v22;
        v60 = &v96;
        v24 = (_OWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978) + 24LL);
        v61 = 2LL;
        do
        {
          v24 += 8;
          v62 = *(_OWORD *)&v60->pDmaBuffer;
          v60 = (struct _DXGKARG_BUILDPAGINGBUFFER *)((char *)v60 + 128);
          *(v24 - 8) = v62;
          *(v24 - 7) = *(_OWORD *)&v60[-1].Reserved.Reserved[42];
          *(v24 - 6) = *(_OWORD *)&v60[-1].Reserved.Reserved[46];
          *(v24 - 5) = *(_OWORD *)&v60[-1].Reserved.Reserved[50];
          *(v24 - 4) = *(_OWORD *)&v60[-1].Reserved.Reserved[54];
          *(v24 - 3) = *(_OWORD *)&v60[-1].Reserved.Reserved[58];
          *(v24 - 2) = *(_OWORD *)&v60[-1].Reserved.Reserved[62];
          *(v24 - 1) = *(_OWORD *)&v60[-1].DmaBufferGpuVirtualAddress;
          --v61;
        }
        while ( v61 );
        *v24 = *(_OWORD *)&v60->pDmaBuffer;
        v24[1] = *(_OWORD *)&v60->pDmaBufferPrivateData;
        v24[2] = *(_OWORD *)&v60->MultipassOffset;
        v24[3] = *(_OWORD *)&v60->SpecialLockTransfer.TransferOffset;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978) + 344) = v59;
        TransferSize = 360LL * *((unsigned int *)this + 1958);
        *(_QWORD *)(TransferSize + *((_QWORD *)this + 978) + 352) = v57;
        if ( ++*((_DWORD *)this + 1958) >= *((_DWORD *)this + 1954) )
        {
          ++*((_DWORD *)this + 1959);
          *((_DWORD *)this + 1958) = 0;
        }
      }
      if ( (int)v59 >= 0 )
        goto LABEL_60;
      if ( (_DWORD)v59 == -1071775743 )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(TransferSize, v24, v25, v26);
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v22, 1u, 0LL, 0LL, 1, 0);
        v31 = v103;
        v21 = a6;
        a15 = v93;
        v19 = a2;
      }
      else
      {
        v80 = *((_QWORD *)this + 3);
        v81 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v24, v25, v26);
        v81[5] = &v96;
        v81[3] = 270LL;
        v81[4] = 11LL;
        v81[6] = v59;
        v81[7] = v80;
        WdLogEvent5_WdCriticalError(v81);
LABEL_60:
        a15 = v93;
        v18 = (_DWORD)v59 == -1071775743;
        v21 = a6;
        v19 = a2;
        v31 = v103;
        if ( !v18 )
          return;
      }
    }
  }
}
