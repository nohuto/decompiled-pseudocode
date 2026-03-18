/*
 * XREFs of VidSchiSubmitRenderCommand @ 0x1C00772CC
 * Callers:
 *     VidSchiSubmitQueueCommand @ 0x1C002E270 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C0003ED4 (VidSchiMarkDeviceAsError.c)
 *     VidSchIsTDRPending @ 0x1C00051E0 (VidSchIsTDRPending.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0005B44 (VidSchiSchedulerNodeToDriverEngine.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1C000E0BC (-DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C002E5A8 (VidSchiSendToExecutionQueueWithWait.c)
 *     VidSchiAllocateDmaPacket @ 0x1C002E664 (VidSchiAllocateDmaPacket.c)
 *     VidSchGetNewSubmissionFenceId @ 0x1C002F228 (VidSchGetNewSubmissionFenceId.c)
 *     ?PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C0051194 (-PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_IN.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00765D0 (VidSchiDiscardQueuePacket.c)
 */

__int64 __fastcall VidSchiSubmitRenderCommand(union _LARGE_INTEGER *a1)
{
  union _LARGE_INTEGER v1; // r15
  union _LARGE_INTEGER v2; // rsi
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // rdi
  struct VIDMM_DEVICE *v7; // rdx
  VIDMM_GLOBAL *v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r14
  _QWORD *v14; // rax
  void *v15; // r13
  unsigned int v16; // r10d
  unsigned int i; // r9d
  __int64 **v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  UINT LowPart; // ecx
  unsigned int v24; // edx
  __int64 v25; // rax
  UINT v26; // ecx
  UINT v27; // ecx
  UINT v28; // ecx
  UINT v29; // eax
  DWORD v30; // edx
  unsigned int v31; // r8d
  ADAPTER_RENDER *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  _QWORD *v35; // rax
  union _LARGE_INTEGER *DmaPacket; // r12
  __int64 QuadPart; // rdx
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  bool v42; // zf
  int v43; // ecx
  DWORD v44; // ecx
  __int64 HighPart; // rax
  void (__fastcall *v46)(_QWORD); // rax
  signed __int32 v48[8]; // [rsp+0h] [rbp-89h] BYREF
  struct _DXGKARG_PATCH v49; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v50; // [rsp+F0h] [rbp+67h] BYREF
  union _LARGE_INTEGER v51; // [rsp+F8h] [rbp+6Fh] BYREF
  union _LARGE_INTEGER v52; // [rsp+100h] [rbp+77h] BYREF

  v1 = a1[10];
  v2 = a1[33];
  v4 = *(_QWORD *)(v1.QuadPart + 104);
  v5 = *(_QWORD *)(v1.QuadPart + 96);
  v6 = *(_QWORD *)(v4 + 32);
  if ( (*(_BYTE *)(v6 + 2508) & 1) != 0
    || VidSchIsTDRPending(*(_QWORD *)(v4 + 32))
    || *(_BYTE *)(v4 + 172)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 168), 0, 0) )
  {
    LODWORD(v13) = -1073741823;
  }
  else
  {
    v9 = VIDMM_GLOBAL::PrepareDmaBuffer(v8, v7, (struct _VIDMM_DMA_BUFFER *)v2.QuadPart, a1[39].HighPart, &v50, &v52);
    v13 = v9;
    if ( v9 >= 0 )
      goto LABEL_9;
    v14 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
    v14[3] = v6;
    v14[4] = v1.QuadPart;
    v14[5] = a1;
    v14[6] = v13;
    WdLogEvent5_WdWarning(v14);
    VidSchiMarkDeviceAsError(v4, 18);
  }
  if ( (int)v13 < 0 )
  {
LABEL_29:
    VidSchiDiscardQueuePacket((struct _VIDSCH_QUEUE_PACKET *)a1);
    return (unsigned int)v13;
  }
LABEL_9:
  v15 = *(void **)(*(_QWORD *)(v2.QuadPart + 56) + 360LL);
  a1[7].QuadPart = MEMORY[0xFFFFF78000000320];
  a1[6].HighPart = 7;
  VidSchGetNewSubmissionFenceId(v6, (__int64)a1, *(unsigned __int16 *)(v5 + 4), (__int64 *)&v51);
  for ( i = v16; i < a1[75].LowPart; ++i )
  {
    v18 = *(__int64 ***)(a1[74].QuadPart + 8LL * i);
    if ( v18 )
    {
      v19 = 2LL * i;
      v20 = **v18;
      *(_QWORD *)(a1[31].QuadPart + 8 * v19) = *(_QWORD *)(v20 + 360);
      *(_DWORD *)(a1[31].QuadPart + 8 * v19 + 8) = *(_DWORD *)(v20 + 16);
    }
  }
  v21 = *(_QWORD *)(v1.QuadPart + 56);
  if ( ((*(_DWORD *)(v21 + 200) & 1) == 0
     || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 16LL) + 1928LL) & 1) == 0)
    && ((*(_DWORD *)(v2.QuadPart + 28) & 4) == 0
     || (v22 = *(_QWORD *)(**(_QWORD **)(v2.QuadPart + 136) + 40LL),
         _InterlockedOr(v48, v16),
         *(_QWORD *)(v2.QuadPart + 152) != v22))
    || (VIDMM_GLOBAL::_Config & 0x400) != 0 )
  {
    LowPart = a1[38].LowPart;
    v24 = *(unsigned __int16 *)(v5 + 4);
    v49.hDevice = *(HANDLE *)(v1.QuadPart + 64);
    v49.DmaBufferSegmentId = v50;
    v49.DmaBufferPhysicalAddress = v52;
    v49.DmaBufferSize = *(_DWORD *)(v2.QuadPart + 40);
    v49.pDmaBufferPrivateData = *(void **)(v2.QuadPart + 128);
    v25 = *(_QWORD *)(v2.QuadPart + 136);
    v49.DmaBufferSubmissionStartOffset = LowPart;
    v49.DmaBufferSubmissionEndOffset = a1[38].HighPart + LowPart;
    v49.pDmaBuffer = v15;
    v26 = *(_DWORD *)(v25 + 88);
    v49.pAllocationList = *(const DXGK_ALLOCATIONLIST **)(v2.QuadPart + 112);
    v49.AllocationListSize = a1[39].HighPart;
    v49.pPatchLocationList = *(const D3DDDI_PATCHLOCATIONLIST **)(v2.QuadPart + 120);
    LODWORD(v25) = *(_DWORD *)(v2.QuadPart + 52);
    v49.DmaBufferPrivateDataSize = v26;
    v27 = a1[41].LowPart;
    v49.PatchLocationListSize = v25;
    LODWORD(v25) = a1[40].LowPart;
    v49.DmaBufferPrivateDataSubmissionStartOffset = v27;
    v28 = a1[41].HighPart + v27;
    v49.PatchLocationListSubmissionStart = v25;
    v49.PatchLocationListSubmissionLength = a1[40].HighPart;
    v49.DmaBufferPrivateDataSubmissionEndOffset = v28;
    v49.SubmissionFenceId = v51.LowPart;
    v29 = VidSchiSchedulerNodeToDriverEngine(v6, v24);
    v30 = a1[9].LowPart;
    v49.EngineOrdinal = v29;
    v31 = (v30 & 0x40 | (v30 >> 1) & 0x80) >> 5;
    v32 = *(ADAPTER_RENDER **)(v6 + 8);
    v49.Flags.Value = ((unsigned __int8)v31 ^ (unsigned __int8)(8
                                                              * ((*(_DWORD *)(v1.QuadPart + 112) & 2) != 0
                                                              || (v30 & 0x10000) != 0))) & 8 ^ v31;
    LODWORD(v13) = ADAPTER_RENDER::DdiPatch(v32, &v49);
    if ( (int)v13 < 0 )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34, v33);
      v35[3] = 281LL;
      v35[4] = 3LL;
      v35[5] = v6;
      v35[6] = v1.QuadPart;
      v35[7] = a1;
      WdLogEvent5_WdCriticalError(v35);
      __debugbreak();
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v2.QuadPart + 56) + 128LL) + 56LL))(*(_QWORD *)(*(_QWORD *)(v2.QuadPart + 56) + 128LL));
  }
  DmaPacket = (union _LARGE_INTEGER *)VidSchiAllocateDmaPacket(v5);
  DmaPacket[6] = v1;
  DmaPacket[7].QuadPart = (LONGLONG)a1;
  DmaPacket->LowPart = 1953189956;
  DmaPacket[8] = v2;
  QuadPart = DmaPacket[7].QuadPart;
  DmaPacket[10].QuadPart = MEMORY[0xFFFFF78000000320];
  DmaPacket[11].HighPart = 0;
  DmaPacket[9].LowPart = 7;
  v38 = (*(_DWORD *)(QuadPart + 72) >> 4) & 4;
  DmaPacket[11].HighPart = v38;
  v39 = v38 ^ ((unsigned __int8)v38 ^ (unsigned __int8)(*(_DWORD *)(QuadPart + 72) >> 5)) & 8;
  DmaPacket[11].HighPart = v39;
  v40 = v39 ^ ((unsigned __int16)v39 ^ (unsigned __int16)(*(_DWORD *)(QuadPart + 72) >> 9)) & 0x100;
  DmaPacket[11].HighPart = v40;
  v41 = v40 ^ ((unsigned __int8)v40 ^ (unsigned __int8)(2 * *(_DWORD *)(QuadPart + 72))) & 0x10;
  DmaPacket[11].HighPart = v41;
  v42 = a1[14].LowPart == 0;
  DmaPacket[11].LowPart = 0;
  v43 = v41 ^ ((unsigned __int16)v41 ^ (!v42 << 14)) & 0x4000;
  DmaPacket[13] = v51;
  DmaPacket[11].HighPart = v43;
  DmaPacket[12].LowPart = a1[12].LowPart;
  DmaPacket[16].LowPart = v50;
  DmaPacket[17] = v52;
  DmaPacket[15].QuadPart = (LONGLONG)v15;
  DmaPacket[18].LowPart = a1[38].LowPart;
  DmaPacket[18].HighPart = a1[38].LowPart + a1[38].HighPart;
  DmaPacket[19].LowPart = a1[41].LowPart;
  DmaPacket[19].HighPart = a1[41].LowPart + a1[41].HighPart;
  DmaPacket[20].LowPart = a1[39].LowPart;
  DmaPacket[20].HighPart = a1[39].HighPart;
  DmaPacket[21].LowPart = a1[40].LowPart;
  DmaPacket[21].HighPart = a1[40].HighPart;
  DmaPacket[14] = *(union _LARGE_INTEGER *)(v2.QuadPart + 160);
  DmaPacket[11].HighPart = v43 & 0xFFFFFFFE | ((a1[9].LowPart & 0x200 | 0x400) >> 9);
  v44 = a1[9].LowPart;
  if ( (v44 & 1) != 0 )
  {
    HighPart = (unsigned int)a1[46].HighPart;
    if ( (_DWORD)HighPart != -1 && (v44 & 0x80000) == 0 )
    {
      QuadPart = *(unsigned int *)(*(_QWORD *)(v6 + 8 * HighPart + 2640) + 14736LL);
      if ( (_DWORD)QuadPart != -1 )
      {
        v46 = *(void (__fastcall **)(_QWORD))(v6 + 2512);
        if ( v46 )
          v46(*(_QWORD *)(v6 + 2560));
      }
      DmaPacket[11].HighPart |= 0x800u;
    }
  }
  VidSchiSendToExecutionQueueWithWait((__int64)DmaPacket, QuadPart, 0, 0);
  if ( (int)v13 < 0 )
    goto LABEL_29;
  return (unsigned int)v13;
}
