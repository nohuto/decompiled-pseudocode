/*
 * XREFs of VidSchiSubmitRenderCommand @ 0x1C008ABB8
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C006A810 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C008AAD0 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ @ 0x1C0007448 (-UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ.c)
 *     VidSchIsTDRPending @ 0x1C000B6A0 (VidSchIsTDRPending.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C00132E0 (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0013E38 (VidSchiMarkDeviceAsError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1C001C444 (-DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C005F448 (VidSchiSendToExecutionQueueWithWait.c)
 *     VidSchiAllocateDmaPacket @ 0x1C005F4A8 (VidSchiAllocateDmaPacket.c)
 *     VidSchGetNewSubmissionFenceId @ 0x1C005F540 (VidSchGetNewSubmissionFenceId.c)
 *     ?PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C007BB44 (-PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_IN.c)
 *     VidSchiDiscardQueuePacket @ 0x1C008A4A8 (VidSchiDiscardQueuePacket.c)
 */

__int64 __fastcall VidSchiSubmitRenderCommand(union _LARGE_INTEGER *a1, struct VIDMM_DEVICE *a2, __int64 a3)
{
  union _LARGE_INTEGER v3; // r15
  union _LARGE_INTEGER v4; // rsi
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rdi
  VIDMM_GLOBAL *v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r14
  _QWORD *v13; // rax
  void *v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rax
  UINT LowPart; // ecx
  unsigned int v18; // edx
  __int64 v19; // rax
  UINT v20; // ecx
  UINT v21; // ecx
  UINT v22; // ecx
  UINT v23; // eax
  DWORD v24; // edx
  unsigned int v25; // r8d
  ADAPTER_RENDER *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // rax
  union _LARGE_INTEGER *DmaPacket; // r12
  union _LARGE_INTEGER v33; // rdx
  int v34; // ecx
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  bool v38; // zf
  int v39; // ecx
  DWORD v40; // ecx
  __int64 HighPart; // rax
  void (__fastcall *v42)(_QWORD); // rax
  signed __int32 v44[8]; // [rsp+0h] [rbp-89h] BYREF
  struct _DXGKARG_PATCH v45; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v46; // [rsp+F0h] [rbp+67h] BYREF
  union _LARGE_INTEGER v47; // [rsp+F8h] [rbp+6Fh] BYREF
  union _LARGE_INTEGER v48; // [rsp+100h] [rbp+77h] BYREF

  v3 = a1[10];
  v4 = a1[33];
  v6 = *(_QWORD *)(v3.QuadPart + 104);
  v7 = *(_QWORD *)(v3.QuadPart + 96);
  v8 = *(_QWORD *)(v6 + 32);
  if ( (*(_BYTE *)(v8 + 2468) & 1) != 0
    || VidSchIsTDRPending(*(_QWORD *)(v6 + 32))
    || *(_BYTE *)(v6 + 172)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 168), 0, 0) )
  {
    LODWORD(v12) = -1073741823;
  }
  else
  {
    v10 = VIDMM_GLOBAL::PrepareDmaBuffer(v9, a2, (struct _VIDMM_DMA_BUFFER *)v4.QuadPart, a1[39].HighPart, &v46, &v48);
    v12 = v10;
    if ( v10 >= 0 )
      goto LABEL_9;
    v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v11);
    v13[3] = v8;
    v13[4] = v3.QuadPart;
    v13[5] = a1;
    v13[6] = v12;
    WdLogEvent5_WdWarning(v13);
    VidSchiMarkDeviceAsError(v6, 18);
  }
  if ( (int)v12 < 0 )
  {
LABEL_25:
    VidSchiDiscardQueuePacket((struct _VIDSCH_QUEUE_PACKET *)a1, (__int64)a2, a3);
    return (unsigned int)v12;
  }
LABEL_9:
  v14 = *(void **)(*(_QWORD *)(v4.QuadPart + 56) + 360LL);
  a1[7].QuadPart = MEMORY[0xFFFFF78000000320];
  a1[6].HighPart = 7;
  VidSchGetNewSubmissionFenceId(v8, (__int64)a1, *(unsigned __int16 *)(v7 + 4), (__int64 *)&v47);
  _VIDSCH_QUEUE_PACKET::UpdateHistoryBuffer((_VIDSCH_QUEUE_PACKET *)a1);
  v15 = *(_QWORD *)(v3.QuadPart + 56);
  if ( ((*(_DWORD *)(v15 + 200) & 1) == 0
     || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 16LL) + 1936LL) & 1) == 0)
    && ((*(_DWORD *)(v4.QuadPart + 28) & 4) == 0
     || (v16 = *(_QWORD *)(**(_QWORD **)(v4.QuadPart + 136) + 40LL),
         _InterlockedOr(v44, 0),
         *(_QWORD *)(v4.QuadPart + 152) != v16))
    || (VIDMM_GLOBAL::_Config & 0x400) != 0 )
  {
    LowPart = a1[38].LowPart;
    v18 = *(unsigned __int16 *)(v7 + 4);
    v45.hDevice = *(HANDLE *)(v3.QuadPart + 64);
    v45.DmaBufferSegmentId = v46;
    v45.DmaBufferPhysicalAddress = v48;
    v45.DmaBufferSize = *(_DWORD *)(v4.QuadPart + 40);
    v45.pDmaBufferPrivateData = *(void **)(v4.QuadPart + 128);
    v19 = *(_QWORD *)(v4.QuadPart + 136);
    v45.DmaBufferSubmissionStartOffset = LowPart;
    v45.DmaBufferSubmissionEndOffset = a1[38].HighPart + LowPart;
    v45.pDmaBuffer = v14;
    v20 = *(_DWORD *)(v19 + 88);
    v45.pAllocationList = *(const DXGK_ALLOCATIONLIST **)(v4.QuadPart + 112);
    v45.AllocationListSize = a1[39].HighPart;
    v45.pPatchLocationList = *(const D3DDDI_PATCHLOCATIONLIST **)(v4.QuadPart + 120);
    LODWORD(v19) = *(_DWORD *)(v4.QuadPart + 52);
    v45.DmaBufferPrivateDataSize = v20;
    v21 = a1[41].LowPart;
    v45.PatchLocationListSize = v19;
    LODWORD(v19) = a1[40].LowPart;
    v45.DmaBufferPrivateDataSubmissionStartOffset = v21;
    v22 = a1[41].HighPart + v21;
    v45.PatchLocationListSubmissionStart = v19;
    v45.PatchLocationListSubmissionLength = a1[40].HighPart;
    v45.DmaBufferPrivateDataSubmissionEndOffset = v22;
    v45.SubmissionFenceId = v47.LowPart;
    v23 = VidSchiSchedulerNodeToDriverEngine(v8, v18);
    v24 = a1[9].LowPart;
    v45.EngineOrdinal = v23;
    v25 = (v24 & 0x20 | (v24 >> 1) & 0x40) >> 4;
    v26 = *(ADAPTER_RENDER **)(v8 + 8);
    v45.Flags.Value = ((unsigned __int8)v25 ^ (unsigned __int8)(8
                                                              * ((*(_DWORD *)(v3.QuadPart + 112) & 2) != 0
                                                              || (v24 & 0x8000) != 0))) & 8 ^ v25;
    LODWORD(v12) = ADAPTER_RENDER::DdiPatch(v26, &v45);
    if ( (int)v12 < 0 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v27, v29, v30);
      v31[3] = 281LL;
      v31[4] = 3LL;
      v31[5] = v8;
      v31[6] = v3.QuadPart;
      v31[7] = a1;
      WdLogEvent5_WdCriticalError(v31);
      __debugbreak();
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v4.QuadPart + 56) + 128LL) + 56LL))(*(_QWORD *)(*(_QWORD *)(v4.QuadPart + 56) + 128LL));
  }
  DmaPacket = (union _LARGE_INTEGER *)VidSchiAllocateDmaPacket(v7);
  DmaPacket[6] = v3;
  DmaPacket[7].QuadPart = (LONGLONG)a1;
  DmaPacket->LowPart = 1953189956;
  DmaPacket[8] = v4;
  v33 = DmaPacket[7];
  DmaPacket[10].QuadPart = MEMORY[0xFFFFF78000000320];
  DmaPacket[11].HighPart = 0;
  DmaPacket[9].LowPart = 7;
  v34 = (*(_DWORD *)(v33.QuadPart + 72) >> 3) & 4;
  DmaPacket[11].HighPart = v34;
  v35 = v34 ^ ((unsigned __int8)v34 ^ (unsigned __int8)(*(_DWORD *)(v33.QuadPart + 72) >> 4)) & 8;
  DmaPacket[11].HighPart = v35;
  v36 = v35 ^ (v35 ^ (*(_DWORD *)(v33.QuadPart + 72) >> 8)) & 0x100;
  DmaPacket[11].HighPart = v36;
  v37 = v36 ^ ((unsigned __int8)v36 ^ (unsigned __int8)(4 * *(_DWORD *)(v33.QuadPart + 72))) & 0x10;
  DmaPacket[11].HighPart = v37;
  v38 = a1[14].LowPart == 0;
  DmaPacket[11].LowPart = 0;
  v39 = v37 ^ ((unsigned __int16)v37 ^ (!v38 << 14)) & 0x4000;
  DmaPacket[13] = v47;
  DmaPacket[11].HighPart = v39;
  DmaPacket[12].LowPart = a1[12].LowPart;
  DmaPacket[16].LowPart = v46;
  DmaPacket[17] = v48;
  DmaPacket[15].QuadPart = (LONGLONG)v14;
  DmaPacket[18].LowPart = a1[38].LowPart;
  DmaPacket[18].HighPart = a1[38].LowPart + a1[38].HighPart;
  DmaPacket[19].LowPart = a1[41].LowPart;
  DmaPacket[19].HighPart = a1[41].LowPart + a1[41].HighPart;
  DmaPacket[20].LowPart = a1[39].LowPart;
  DmaPacket[20].HighPart = a1[39].HighPart;
  DmaPacket[21].LowPart = a1[40].LowPart;
  DmaPacket[21].HighPart = a1[40].HighPart;
  DmaPacket[14] = *(union _LARGE_INTEGER *)(v4.QuadPart + 160);
  DmaPacket[11].HighPart = v39 & 0xFFFFFFFE | ((a1[9].LowPart & 0x100 | 0x200) >> 8);
  v40 = a1[9].LowPart;
  if ( (v40 & 1) != 0 )
  {
    HighPart = (unsigned int)a1[46].HighPart;
    if ( (_DWORD)HighPart != -1 && (v40 & 0x40000) == 0 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v8 + 8 * HighPart + 2592) + 14768LL) != -1 )
      {
        v42 = *(void (__fastcall **)(_QWORD))(v8 + 2472);
        if ( v42 )
          v42(*(_QWORD *)(v8 + 2520));
      }
      DmaPacket[11].HighPart |= 0x800u;
    }
  }
  VidSchiSendToExecutionQueueWithWait((__int64)DmaPacket, 0);
  if ( (int)v12 < 0 )
    goto LABEL_25;
  return (unsigned int)v12;
}
