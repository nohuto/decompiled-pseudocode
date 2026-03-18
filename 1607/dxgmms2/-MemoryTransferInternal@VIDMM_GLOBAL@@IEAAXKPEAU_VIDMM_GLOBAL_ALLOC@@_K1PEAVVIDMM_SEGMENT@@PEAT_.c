/*
 * XREFs of ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234KU_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0051824
 * Callers:
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0051974 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C0097690 (-ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z.c)
 *     ?ValidateApertureCoherency@VIDMM_GLOBAL@@QEAAJK_KKPEAU_MDL@@PEAK12E@Z @ 0x1C009AF28 (-ValidateApertureCoherency@VIDMM_GLOBAL@@QEAAJK_KKPEAU_MDL@@PEAK12E@Z.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C000F8C0 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C00112E8 (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     Template_pppxxq @ 0x1C001E328 (Template_pppxxq.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C004E63C (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C004E7E8 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C004E920 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C004FB68 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004FC60 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@213KU_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C0051250 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x1C0068D7C (-ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z.c)
 *     ?MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234KU_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0089E38 (-MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEA.c)
 *     ?VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008C318 (-VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::MemoryTransferInternal(
        VIDMM_GLOBAL *this,
        __int64 a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        SIZE_T a4,
        unsigned __int64 a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7,
        struct _MDL *a8,
        struct VIDMM_SEGMENT *a9,
        union _LARGE_INTEGER *a10,
        struct _MDL *a11,
        unsigned int a12,
        DXGK_TRANSFERFLAGS a13)
{
  unsigned int v14; // r15d
  char *v17; // rdi
  LONGLONG QuadPart; // rdx
  LONGLONG v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  unsigned __int64 v25; // r15
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rax
  struct VIDMM_SEGMENT *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  _QWORD *v35; // rax
  UINT Value; // eax
  D3DGPU_VIRTUAL_ADDRESS v37; // rax
  __int64 v38; // rax
  struct _MDL *v39; // rax
  struct _MDL *v40; // rax
  bool v41; // cl
  UINT v42; // eax
  ADAPTER_RENDER *v43; // rcx
  signed int v44; // eax
  ADAPTER_RENDER *v45; // rcx
  __int64 v46; // rcx
  int v47; // eax
  int v48; // edi
  __int64 v49; // r15
  HANDLE CurrentProcessId; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  struct VIDMM_SEGMENT *v53; // [rsp+40h] [rbp-C0h]
  struct _DXGK_TRANSFERFLAGS v54; // [rsp+60h] [rbp-A0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v55; // [rsp+70h] [rbp-90h] BYREF
  __int64 v56; // [rsp+1F0h] [rbp+F0h]
  unsigned int v57; // [rsp+1F8h] [rbp+F8h]
  signed int v58; // [rsp+248h] [rbp+148h]

  v57 = a2;
  v14 = a2;
  v56 = (unsigned int)a2;
  if ( (*(_BYTE *)(456LL * (unsigned int)a2 + *((_QWORD *)this + 5017) + 420) & 4) == 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a3;
      v24 = WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
      v25 = a5;
      *(_QWORD *)(v24 + 24) = a4;
      *(_QWORD *)(v24 + 32) = a5;
      v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
      v31 = a6;
      v30[4] = a7;
      v30[5] = a8;
      v30[3] = a6;
      v35 = (_QWORD *)WdLogNewEntry5_WdTrace(a8, v32, v33, v34);
      v35[4] = a10;
      v35[5] = a11;
      v35[3] = a9;
    }
    else
    {
      v25 = a5;
      v31 = a6;
    }
    VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v57, a3, &v55);
    Value = a13.Value;
    v55.Transfer.Flags = a13;
    if ( a3 )
    {
      if ( !v25 )
      {
        Value = a13.Value | 8;
        v55.Transfer.Flags.Value = a13.Value | 8;
      }
      if ( a4 + v25 == *((_QWORD *)a3 + 2) )
        v55.Transfer.Flags.Value = Value | 0x10;
    }
    while ( 1 )
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v57, a3, &v55);
      if ( a3 )
      {
        v38 = *((_QWORD *)a3 + 5);
        if ( v38 )
          v37 = *(_QWORD *)(v38 + 16);
        else
          v37 = *((_QWORD *)a3 + 6);
      }
      else
      {
        v37 = 0LL;
      }
      v55.UpdateContextAllocation.ContextAllocation = v37;
      v55.Transfer.TransferSize = a4;
      v55.Operation = DXGK_OPERATION_TRANSFER;
      v55.Transfer.TransferOffset = v25;
      v55.Transfer.MdlOffset = 0;
      if ( v31 )
      {
        if ( (*((_DWORD *)v31 + 14) & 0x1000) != 0 )
          v55.Transfer.Source.SegmentId = 0;
        else
          v55.Transfer.Source.SegmentId = *((_DWORD *)v31 + 4) + 1;
        v39 = (struct _MDL *)(a7->QuadPart + *((_QWORD *)v31 + 3));
      }
      else
      {
        v39 = a8;
        v55.Transfer.Source.SegmentId = 0;
      }
      v55.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)v39;
      if ( a9 )
      {
        if ( (*((_DWORD *)a9 + 14) & 0x1000) != 0 )
          v55.Transfer.Destination.SegmentId = 0;
        else
          v55.Transfer.Destination.SegmentId = *((_DWORD *)a9 + 4) + 1;
        v40 = (struct _MDL *)(a10->QuadPart + *((_QWORD *)a9 + 3));
      }
      else
      {
        v40 = a11;
        v55.Transfer.Destination.SegmentId = 0;
      }
      v55.Transfer.Destination.SegmentAddress.QuadPart = (LONGLONG)v40;
      if ( a3 )
        v41 = !VIDMM_GLOBAL::IsPagingOperationPending(this, a3, 0);
      else
        v41 = 1;
      v42 = (LOBYTE(v55.Reserved.Reserved[14]) ^ (unsigned __int8)(4 * v41)) & 4 ^ v55.Transfer.Flags.Value;
      v43 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
      v55.Transfer.Flags.Value = v42;
      v44 = ADAPTER_RENDER::DdiBuildPagingBuffer(v43, &v55);
      v58 = v44;
      if ( a3 && v44 == -1071775486 )
      {
        VIDMM_GLOBAL::WaitForAllPagingEngines(this, a3);
        VIDMM_GLOBAL::VerifyAllocationIsIdle(this, a3);
        v45 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        v55.Transfer.Flags.Value |= 4u;
        v58 = ADAPTER_RENDER::DdiBuildPagingBuffer(v45, &v55);
      }
      v46 = *((_QWORD *)this + 805);
      if ( v46 && (!a9 || (*((_DWORD *)a9 + 14) & 0x1001) != 0) )
        VIDMM_PROCESS::ChargeEvictionTransfer(
          *(VIDMM_PROCESS **)(v46 + 8),
          *(_DWORD *)(*((_QWORD *)this + 3) + 200LL),
          a4);
      _InterlockedExchangeAdd64((volatile signed __int64 *)this + 980, a4);
      if ( !bTracingEnabled )
        goto LABEL_58;
      if ( !v31 )
        goto LABEL_54;
      v47 = *((_DWORD *)v31 + 14);
      if ( (v47 & 0x1001) == 0 )
      {
        if ( a9 && (*((_BYTE *)a9 + 56) & 2) != 0 )
          v48 = 4;
        else
          v48 = 2;
        goto LABEL_55;
      }
      v48 = 3;
      if ( (v47 & 2) == 0 )
LABEL_54:
        v48 = 1;
LABEL_55:
      v49 = *((_QWORD *)this + v56 + 143);
      CurrentProcessId = PsGetCurrentProcessId();
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      {
        LODWORD(v53) = v48;
        Template_pppxxq(a5, v51, v52, CurrentProcessId, a3, v49, a5, a4, v53);
      }
      VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)this + 7128), a4, v48);
      LODWORD(v25) = a5;
LABEL_58:
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, v57, a3, &v55, v58, 0, 0LL);
      v31 = a6;
      if ( v58 >= 0 )
        return;
    }
  }
  v17 = (char *)a3 + 352;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v17, 0LL);
  *((_QWORD *)v17 + 1) = KeGetCurrentThread();
  if ( *((struct _VIDMM_GLOBAL_ALLOC **)a3 + 24) == (struct _VIDMM_GLOBAL_ALLOC *)((char *)a3 + 192) )
  {
    *((_QWORD *)v17 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v17, 0LL);
    KeLeaveCriticalRegion();
    if ( a10 )
      QuadPart = a10->QuadPart;
    else
      QuadPart = 0LL;
    if ( a7 )
      v19 = a7->QuadPart;
    else
      v19 = 0LL;
    VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
      this,
      v14,
      (D3DGPU_VIRTUAL_ADDRESS *)a3,
      a4,
      a5,
      a6,
      v19,
      a8,
      a9,
      QuadPart,
      a11,
      0,
      v54,
      0LL);
  }
  else
  {
    VIDMM_GLOBAL::MemoryTransferUsingGpuVa(this, v14, a3, a4, a5, a6, a7, a8, a9, a10, a11, 0, a13);
    *((_QWORD *)v17 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v17, 0LL);
    KeLeaveCriticalRegion();
  }
}
