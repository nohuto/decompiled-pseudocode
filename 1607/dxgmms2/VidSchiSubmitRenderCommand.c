/*
 * XREFs of VidSchiSubmitRenderCommand @ 0x1C00A03FC
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C006AC40 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00A0314 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C0001200 (VidSchiMarkDeviceAsError.c)
 *     VidSchIsTDRPending @ 0x1C000A130 (VidSchIsTDRPending.c)
 *     ?UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ @ 0x1C000C0C4 (-UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0010D48 (VidSchiSchedulerNodeToDriverEngine.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1C001D21C (-DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z.c)
 *     VidSchGetNewSubmissionFenceId @ 0x1C0040BF4 (VidSchGetNewSubmissionFenceId.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C0040CE4 (VidSchiSendToExecutionQueueWithWait.c)
 *     VidSchiAllocateDmaPacket @ 0x1C0040D44 (VidSchiAllocateDmaPacket.c)
 *     ?PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C008A5C8 (-PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_IN.c)
 *     VidSchiDiscardQueuePacket @ 0x1C009FC70 (VidSchiDiscardQueuePacket.c)
 */

__int64 __fastcall VidSchiSubmitRenderCommand(
        union _LARGE_INTEGER *a1,
        struct VIDMM_DEVICE *a2,
        __int64 a3,
        __int64 a4)
{
  union _LARGE_INTEGER v4; // r15
  union _LARGE_INTEGER v5; // rsi
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // rdi
  VIDMM_GLOBAL *v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r14
  _QWORD *v14; // rax
  void *v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rax
  UINT LowPart; // ecx
  unsigned int v19; // edx
  __int64 v20; // rax
  UINT v21; // ecx
  UINT v22; // ecx
  UINT v23; // ecx
  UINT v24; // eax
  DWORD v25; // edx
  unsigned int v26; // r8d
  ADAPTER_RENDER *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rax
  union _LARGE_INTEGER *DmaPacket; // r12
  union _LARGE_INTEGER v34; // rdx
  int v35; // ecx
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  bool v39; // zf
  int v40; // ecx
  DWORD v41; // ecx
  __int64 HighPart; // rax
  void (__fastcall *v43)(_QWORD); // rax
  signed __int32 v45[8]; // [rsp+0h] [rbp-89h] BYREF
  struct _DXGKARG_PATCH v46; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v47; // [rsp+F0h] [rbp+67h] BYREF
  union _LARGE_INTEGER v48; // [rsp+F8h] [rbp+6Fh] BYREF
  union _LARGE_INTEGER v49; // [rsp+100h] [rbp+77h] BYREF

  v4 = a1[11];
  v5 = a1[34];
  v7 = *(_QWORD *)(v4.QuadPart + 104);
  v8 = *(_QWORD *)(v4.QuadPart + 96);
  v9 = *(_QWORD *)(v7 + 32);
  if ( (*(_BYTE *)(v9 + 2828) & 1) != 0
    || VidSchIsTDRPending(*(_QWORD *)(v7 + 32))
    || *(_BYTE *)(v7 + 164)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 160), 0, 0) )
  {
    LODWORD(v13) = -1073741823;
  }
  else
  {
    v11 = VIDMM_GLOBAL::PrepareDmaBuffer(v10, a2, (struct _VIDMM_DMA_BUFFER *)v5.QuadPart, a1[40].HighPart, &v47, &v49);
    v13 = v11;
    if ( v11 >= 0 )
      goto LABEL_9;
    v14 = (_QWORD *)WdLogNewEntry5_WdWarning(v12);
    v14[3] = v9;
    v14[4] = v4.QuadPart;
    v14[5] = a1;
    v14[6] = v13;
    WdLogEvent5_WdWarning(v14);
    VidSchiMarkDeviceAsError(v7, 18);
  }
  if ( (int)v13 < 0 )
  {
LABEL_25:
    VidSchiDiscardQueuePacket((struct _VIDSCH_QUEUE_PACKET *)a1, (__int64)a2, a3, a4);
    return (unsigned int)v13;
  }
LABEL_9:
  v15 = *(void **)(*(_QWORD *)(v5.QuadPart + 56) + 376LL);
  a1[7].QuadPart = MEMORY[0xFFFFF78000000320];
  a1[6].HighPart = 7;
  VidSchGetNewSubmissionFenceId(v9, (__int64)a1, *(unsigned __int16 *)(v8 + 4), (__int64 *)&v48);
  _VIDSCH_QUEUE_PACKET::UpdateHistoryBuffer((_VIDSCH_QUEUE_PACKET *)a1);
  v16 = *(_QWORD *)(v4.QuadPart + 56);
  if ( ((*(_DWORD *)(v16 + 200) & 1) == 0
     || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL) + 16LL) + 2072LL) & 1) == 0)
    && ((*(_DWORD *)(v5.QuadPart + 28) & 4) == 0
     || (v17 = *(_QWORD *)(**(_QWORD **)(v5.QuadPart + 136) + 40LL),
         _InterlockedOr(v45, 0),
         *(_QWORD *)(v5.QuadPart + 152) != v17))
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 408LL) + 6464LL) & 1) != 0 )
  {
    LowPart = a1[39].LowPart;
    v19 = *(unsigned __int16 *)(v8 + 4);
    v46.hDevice = *(HANDLE *)(v4.QuadPart + 64);
    v46.DmaBufferSegmentId = v47;
    v46.DmaBufferPhysicalAddress = v49;
    v46.DmaBufferSize = *(_DWORD *)(v5.QuadPart + 40);
    v46.pDmaBufferPrivateData = *(void **)(v5.QuadPart + 128);
    v20 = *(_QWORD *)(v5.QuadPart + 136);
    v46.DmaBufferSubmissionStartOffset = LowPart;
    v46.DmaBufferSubmissionEndOffset = a1[39].HighPart + LowPart;
    v46.pDmaBuffer = v15;
    v21 = *(_DWORD *)(v20 + 88);
    v46.pAllocationList = *(const DXGK_ALLOCATIONLIST **)(v5.QuadPart + 112);
    v46.AllocationListSize = a1[40].HighPart;
    v46.pPatchLocationList = *(const D3DDDI_PATCHLOCATIONLIST **)(v5.QuadPart + 120);
    LODWORD(v20) = *(_DWORD *)(v5.QuadPart + 52);
    v46.DmaBufferPrivateDataSize = v21;
    v22 = a1[42].LowPart;
    v46.PatchLocationListSize = v20;
    LODWORD(v20) = a1[41].LowPart;
    v46.DmaBufferPrivateDataSubmissionStartOffset = v22;
    v23 = a1[42].HighPart + v22;
    v46.PatchLocationListSubmissionStart = v20;
    v46.PatchLocationListSubmissionLength = a1[41].HighPart;
    v46.DmaBufferPrivateDataSubmissionEndOffset = v23;
    v46.SubmissionFenceId = v48.LowPart;
    v24 = VidSchiSchedulerNodeToDriverEngine(v9, v19);
    v25 = a1[9].LowPart;
    v46.EngineOrdinal = v24;
    v26 = (v25 & 0x20 | (v25 >> 1) & 0x40) >> 4;
    v27 = *(ADAPTER_RENDER **)(v9 + 8);
    v46.Flags.Value = ((unsigned __int8)v26 ^ (unsigned __int8)(8
                                                              * ((*(_DWORD *)(v4.QuadPart + 112) & 2) != 0
                                                              || (v25 & 0x8000) != 0))) & 8 ^ v26;
    LODWORD(v13) = ADAPTER_RENDER::DdiPatch(v27, &v46);
    if ( (int)v13 < 0 )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v28, v30, v31);
      v32[3] = 281LL;
      v32[4] = 3LL;
      v32[5] = v9;
      v32[6] = v4.QuadPart;
      v32[7] = a1;
      WdLogEvent5_WdCriticalError(v32);
      __debugbreak();
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v5.QuadPart + 56) + 136LL) + 56LL))(*(_QWORD *)(*(_QWORD *)(v5.QuadPart + 56) + 136LL));
  }
  DmaPacket = (union _LARGE_INTEGER *)VidSchiAllocateDmaPacket(v8);
  DmaPacket[6] = v4;
  DmaPacket[7].QuadPart = (LONGLONG)a1;
  DmaPacket->LowPart = 1953189956;
  DmaPacket[8] = v5;
  v34 = DmaPacket[7];
  DmaPacket[10].QuadPart = MEMORY[0xFFFFF78000000320];
  DmaPacket[11].HighPart = 0;
  DmaPacket[9].LowPart = 7;
  v35 = (*(_DWORD *)(v34.QuadPart + 72) >> 3) & 4;
  DmaPacket[11].HighPart = v35;
  v36 = v35 ^ ((unsigned __int8)v35 ^ (unsigned __int8)(*(_DWORD *)(v34.QuadPart + 72) >> 4)) & 8;
  DmaPacket[11].HighPart = v36;
  v37 = v36 ^ (v36 ^ (*(_DWORD *)(v34.QuadPart + 72) >> 8)) & 0x100;
  DmaPacket[11].HighPart = v37;
  v38 = v37 ^ ((unsigned __int8)v37 ^ (unsigned __int8)(4 * *(_DWORD *)(v34.QuadPart + 72))) & 0x10;
  DmaPacket[11].HighPart = v38;
  v39 = a1[15].LowPart == 0;
  DmaPacket[11].LowPart = 0;
  v40 = v38 ^ ((unsigned __int16)v38 ^ (!v39 << 14)) & 0x4000;
  DmaPacket[13] = v48;
  DmaPacket[11].HighPart = v40;
  DmaPacket[12].LowPart = a1[13].LowPart;
  DmaPacket[16].LowPart = v47;
  DmaPacket[17] = v49;
  DmaPacket[15].QuadPart = (LONGLONG)v15;
  DmaPacket[18].LowPart = a1[39].LowPart;
  DmaPacket[18].HighPart = a1[39].LowPart + a1[39].HighPart;
  DmaPacket[19].LowPart = a1[42].LowPart;
  DmaPacket[19].HighPart = a1[42].LowPart + a1[42].HighPart;
  DmaPacket[20].LowPart = a1[40].LowPart;
  DmaPacket[20].HighPart = a1[40].HighPart;
  DmaPacket[21].LowPart = a1[41].LowPart;
  DmaPacket[21].HighPart = a1[41].HighPart;
  DmaPacket[14] = *(union _LARGE_INTEGER *)(v5.QuadPart + 160);
  DmaPacket[11].HighPart = v40 & 0xFFFFFFFE | ((a1[9].LowPart & 0x100 | 0x200) >> 8);
  v41 = a1[9].LowPart;
  if ( (v41 & 1) != 0 )
  {
    HighPart = (unsigned int)a1[47].HighPart;
    if ( (_DWORD)HighPart != -1 && (v41 & 0x40000) == 0 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v9 + 8 * HighPart + 2968) + 18872LL) != -1 )
      {
        v43 = *(void (__fastcall **)(_QWORD))(v9 + 2832);
        if ( v43 )
          v43(*(_QWORD *)(v9 + 2896));
      }
      DmaPacket[11].HighPart |= 0x800u;
    }
  }
  VidSchiSendToExecutionQueueWithWait((__int64)DmaPacket, 0);
  if ( (int)v13 < 0 )
    goto LABEL_25;
  return (unsigned int)v13;
}
