/*
 * XREFs of ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234KU_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00490BC
 * Callers:
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0049524 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C0083F40 (-ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z.c)
 *     ?ValidateApertureCoherency@VIDMM_GLOBAL@@QEAAJK_KKPEAU_MDL@@PEAK12E@Z @ 0x1C0085C50 (-ValidateApertureCoherency@VIDMM_GLOBAL@@QEAAJK_KKPEAU_MDL@@PEAK12E@Z.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0011590 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C001345C (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     Template_pppxxq @ 0x1C001CFB4 (Template_pppxxq.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C00462E4 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0046554 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0046704 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C00471FC (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00472F0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@213KU_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C0048A3C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x1C0053FE8 (-ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z.c)
 *     ?MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234KU_DXGK_TRANSFERFLAGS@@@Z @ 0x1C007B854 (-MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEA.c)
 *     ?VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C007D130 (-VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::MemoryTransferInternal(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        D3DGPU_VIRTUAL_ADDRESS *a3,
        SIZE_T a4,
        char *a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7,
        struct _MDL *a8,
        struct VIDMM_SEGMENT *a9,
        union _LARGE_INTEGER *a10,
        struct _MDL *a11,
        unsigned int a12,
        DXGK_TRANSFERFLAGS a13)
{
  unsigned int v14; // r14d
  LONGLONG QuadPart; // rdx
  LONGLONG v18; // rcx
  UINT Value; // eax
  UINT v20; // r15d
  D3DGPU_VIRTUAL_ADDRESS v21; // rax
  D3DGPU_VIRTUAL_ADDRESS v22; // rax
  struct _MDL *v23; // rax
  struct _MDL *v24; // rax
  bool v25; // cl
  UINT v26; // eax
  ADAPTER_RENDER *v27; // rcx
  signed int v28; // eax
  ADAPTER_RENDER *v29; // rcx
  __int64 v30; // rcx
  int v31; // eax
  int v32; // r14d
  __int64 v33; // r15
  HANDLE CurrentProcessId; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  struct VIDMM_SEGMENT *v37; // [rsp+40h] [rbp-C0h]
  unsigned int v38; // [rsp+58h] [rbp-A8h]
  struct _DXGK_TRANSFERFLAGS v39; // [rsp+60h] [rbp-A0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v40; // [rsp+70h] [rbp-90h] BYREF
  __int64 v41; // [rsp+1F0h] [rbp+F0h]
  signed int v43; // [rsp+248h] [rbp+148h]

  v14 = a2;
  v41 = a2;
  if ( (*(_BYTE *)(456LL * a2 + *((_QWORD *)this + 5006) + 420) & 4) == 0 )
  {
    VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, a2, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v40);
    Value = a13.Value;
    v20 = (unsigned int)a5;
    v40.Transfer.Flags = a13;
    if ( a3 )
    {
      if ( !a5 )
      {
        Value = a13.Value | 8;
        v40.Transfer.Flags.Value = a13.Value | 8;
      }
      if ( &a5[a4] == (char *)a3[2] )
        v40.Transfer.Flags.Value = Value | 0x10;
    }
    while ( 1 )
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v14, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v40);
      if ( a3 )
      {
        v22 = a3[5];
        if ( v22 )
          v21 = *(_QWORD *)(v22 + 16);
        else
          v21 = a3[6];
      }
      else
      {
        v21 = 0LL;
      }
      v40.UpdateContextAllocation.ContextAllocation = v21;
      v40.Transfer.TransferSize = a4;
      v40.Operation = DXGK_OPERATION_TRANSFER;
      v40.Transfer.TransferOffset = v20;
      v40.Transfer.MdlOffset = 0;
      if ( a6 )
      {
        if ( (*((_DWORD *)a6 + 14) & 0x1000) != 0 )
          v40.Transfer.Source.SegmentId = 0;
        else
          v40.Transfer.Source.SegmentId = *((_DWORD *)a6 + 4) + 1;
        v23 = (struct _MDL *)(a7->QuadPart + *((_QWORD *)a6 + 3));
      }
      else
      {
        v23 = a8;
        v40.Transfer.Source.SegmentId = 0;
      }
      v40.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)v23;
      if ( a9 )
      {
        if ( (*((_DWORD *)a9 + 14) & 0x1000) != 0 )
          v40.Transfer.Destination.SegmentId = 0;
        else
          v40.Transfer.Destination.SegmentId = *((_DWORD *)a9 + 4) + 1;
        v24 = (struct _MDL *)(a10->QuadPart + *((_QWORD *)a9 + 3));
      }
      else
      {
        v24 = a11;
        v40.Transfer.Destination.SegmentId = 0;
      }
      v40.Transfer.Destination.SegmentAddress.QuadPart = (LONGLONG)v24;
      if ( a3 )
        v25 = !VIDMM_GLOBAL::IsPagingOperationPending(this, (struct _VIDMM_GLOBAL_ALLOC *)a3, 0);
      else
        v25 = 1;
      v26 = (LOBYTE(v40.Reserved.Reserved[14]) ^ (unsigned __int8)(4 * v25)) & 4 ^ v40.Transfer.Flags.Value;
      v27 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
      v40.Transfer.Flags.Value = v26;
      v28 = ADAPTER_RENDER::DdiBuildPagingBuffer(v27, &v40);
      v43 = v28;
      if ( a3 && v28 == -1071775486 )
      {
        VIDMM_GLOBAL::WaitForAllPagingEngines(this, (struct _VIDMM_GLOBAL_ALLOC *)a3);
        VIDMM_GLOBAL::VerifyAllocationIsIdle(this, (struct _VIDMM_GLOBAL_ALLOC *)a3);
        v29 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        v40.Transfer.Flags.Value |= 4u;
        v43 = ADAPTER_RENDER::DdiBuildPagingBuffer(v29, &v40);
      }
      v30 = *((_QWORD *)this + 805);
      if ( v30 && (!a9 || (*((_DWORD *)a9 + 14) & 0x1001) != 0) )
        VIDMM_PROCESS::ChargeEvictionTransfer(
          *(VIDMM_PROCESS **)(v30 + 8),
          *(_DWORD *)(*((_QWORD *)this + 3) + 184LL),
          a4);
      _InterlockedExchangeAdd64((volatile signed __int64 *)this + 974, a4);
      if ( !bTracingEnabled )
        goto LABEL_55;
      if ( !a6 )
        goto LABEL_51;
      v31 = *((_DWORD *)a6 + 14);
      if ( (v31 & 0x1001) == 0 )
      {
        if ( a9 && (*((_BYTE *)a9 + 56) & 2) != 0 )
          v32 = 4;
        else
          v32 = 2;
        goto LABEL_52;
      }
      v32 = 3;
      if ( (v31 & 2) == 0 )
LABEL_51:
        v32 = 1;
LABEL_52:
      v33 = *((_QWORD *)this + v41 + 143);
      CurrentProcessId = PsGetCurrentProcessId();
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      {
        LODWORD(v37) = v32;
        Template_pppxxq((__int64)a5, v35, v36, CurrentProcessId, a3, v33, a5, a4, v37);
      }
      VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)this + 7128), a4, v32);
      v20 = (unsigned int)a5;
LABEL_55:
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, a2, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v40, v43, 0, 0LL);
      v14 = a2;
      if ( v43 >= 0 )
        return;
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a3 + 43, 0LL);
  if ( (D3DGPU_VIRTUAL_ADDRESS *)a3[23] == a3 + 23 )
  {
    ExReleasePushLockExclusiveEx(a3 + 43, 0LL);
    KeLeaveCriticalRegion();
    if ( a10 )
      QuadPart = a10->QuadPart;
    else
      QuadPart = 0LL;
    if ( a7 )
      v18 = a7->QuadPart;
    else
      v18 = 0LL;
    VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(this, v14, a3, a4, a5, a6, v18, a8, a9, QuadPart, a11, 0, v39, 0LL);
  }
  else
  {
    VIDMM_GLOBAL::MemoryTransferUsingGpuVa(
      this,
      v14,
      (struct _VIDMM_GLOBAL_ALLOC *)a3,
      a4,
      (unsigned __int64)a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      a11,
      v38,
      a13);
    ExReleasePushLockExclusiveEx(a3 + 43, 0LL);
    KeLeaveCriticalRegion();
  }
}
