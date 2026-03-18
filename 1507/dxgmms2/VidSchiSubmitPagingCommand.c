/*
 * XREFs of VidSchiSubmitPagingCommand @ 0x1C0076E90
 * Callers:
 *     VidSchiSubmitQueueCommand @ 0x1C002E270 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C00051E0 (VidSchIsTDRPending.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0005B44 (VidSchiSchedulerNodeToDriverEngine.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1C000E0BC (-DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C002E5A8 (VidSchiSendToExecutionQueueWithWait.c)
 *     VidSchiAllocateDmaPacket @ 0x1C002E664 (VidSchiAllocateDmaPacket.c)
 *     VidSchGetNewSubmissionFenceId @ 0x1C002F228 (VidSchGetNewSubmissionFenceId.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00765D0 (VidSchiDiscardQueuePacket.c)
 */

void __fastcall VidSchiSubmitPagingCommand(LARGE_INTEGER *a1)
{
  LARGE_INTEGER v1; // r15
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 *DmaPacket; // rbx
  void (__fastcall *v7)(_QWORD); // rax
  LARGE_INTEGER v8; // r15
  void *v9; // r12
  __int64 v10; // r8
  void *v11; // rax
  UINT HighPart; // edx
  UINT v13; // ecx
  __int64 v14; // rax
  UINT v15; // ecx
  const DXGK_ALLOCATIONLIST *v16; // r10
  ADAPTER_RENDER *v17; // r9
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r13
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  _DXGKARG_PATCH v25; // [rsp+28h] [rbp-49h] BYREF

  v1 = a1[10];
  v3 = *(_QWORD *)(v1.QuadPart + 104);
  v4 = *(_QWORD *)(v1.QuadPart + 96);
  v5 = *(_QWORD *)(v3 + 32);
  if ( (*(_BYTE *)(v5 + 2508) & 1) != 0
    || VidSchIsTDRPending(*(_QWORD *)(v3 + 32))
    || *(_BYTE *)(v3 + 172)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 168), 0, 0) )
  {
    VidSchiDiscardQueuePacket((struct _VIDSCH_QUEUE_PACKET *)a1);
  }
  else
  {
    DmaPacket = VidSchiAllocateDmaPacket(v4);
    VidSchGetNewSubmissionFenceId(v5, (__int64)a1, *(unsigned __int16 *)(v4 + 4), DmaPacket + 13);
    *(_DWORD *)DmaPacket = 1953189956;
    *((_DWORD *)DmaPacket + 22) = 1;
    DmaPacket[10] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)DmaPacket + 23) = 0;
    *((_DWORD *)DmaPacket + 18) = 7;
    DmaPacket[7] = (__int64)a1;
    DmaPacket[6] = v1.QuadPart;
    *((_DWORD *)DmaPacket + 23) = (a1[14].LowPart != 0) << 14;
    if ( *(_DWORD *)(v4 + 3080) != -1 )
    {
      v7 = *(void (__fastcall **)(_QWORD))(v5 + 2512);
      if ( v7 )
        v7(*(_QWORD *)(v5 + 2560));
    }
    *((_DWORD *)DmaPacket + 23) |= 0x400u;
    v8 = a1[33];
    DmaPacket[8] = v8.QuadPart;
    v9 = *(void **)(*(_QWORD *)(v8.QuadPart + 56) + 360LL);
    if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL) + 1896LL)
                   + 48LL * *(unsigned __int16 *)(v4 + 6)
                   + 40) )
    {
      v10 = (unsigned int)VidSchiSchedulerNodeToDriverEngine(v5, a1[38].HighPart);
      v11 = *(void **)(v8.QuadPart + 128);
      HighPart = a1[36].HighPart;
      v25.hDevice = *(HANDLE *)(*(_QWORD *)(*(_QWORD *)(v5 + 192) + 8 * v10) + 64LL);
      v25.DmaBufferSegmentId = a1[35].LowPart;
      v25.DmaBufferPhysicalAddress = a1[34];
      v25.DmaBufferSize = *(_DWORD *)(v8.QuadPart + 40);
      v13 = a1[35].HighPart;
      v25.pDmaBufferPrivateData = v11;
      v14 = *(_QWORD *)(v8.QuadPart + 136);
      v25.DmaBufferSubmissionStartOffset = v13;
      v25.DmaBufferSubmissionEndOffset = a1[36].LowPart + v13;
      v25.pDmaBuffer = v9;
      v15 = *(_DWORD *)(v14 + 88);
      LODWORD(v14) = *((_DWORD *)DmaPacket + 26);
      v25.DmaBufferPrivateDataSubmissionStartOffset = HighPart;
      v25.DmaBufferPrivateDataSubmissionEndOffset = a1[37].LowPart + HighPart;
      v25.DmaBufferPrivateDataSize = v15;
      v25.pAllocationList = v16;
      v25.AllocationListSize = (unsigned int)v16;
      v25.pPatchLocationList = (const D3DDDI_PATCHLOCATIONLIST *)v16;
      *(_QWORD *)&v25.PatchLocationListSize = 0LL;
      v25.PatchLocationListSubmissionLength = (unsigned int)v16;
      v25.SubmissionFenceId = v14;
      v25.EngineOrdinal = v10;
      v25.Flags.Value = 1;
      v18 = ADAPTER_RENDER::DdiPatch(v17, &v25);
      v21 = v18;
      if ( v18 < 0 )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19);
        v22[6] = &v25;
        v22[3] = 270LL;
        v22[4] = 25LL;
        v22[5] = v8.QuadPart;
        v22[7] = v21;
        WdLogEvent5_WdCriticalError(v22);
      }
    }
    DmaPacket[15] = (__int64)v9;
    v23 = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL);
    if ( *(_BYTE *)(*(_QWORD *)(v23 + 1896) + 48LL * *(unsigned __int16 *)(v4 + 6) + 40) )
    {
      *((_DWORD *)DmaPacket + 23) |= 0x2000u;
      v24 = *(_QWORD *)(a1[33].QuadPart + 96);
      DmaPacket[22] = v24;
      DmaPacket[22] = v24 + (unsigned int)a1[35].HighPart;
      *((_DWORD *)DmaPacket + 37) = a1[36].LowPart;
      DmaPacket[24] = *(_QWORD *)(a1[33].QuadPart + 128);
    }
    else
    {
      *((_DWORD *)DmaPacket + 32) = a1[35].LowPart;
      DmaPacket[17] = a1[34].QuadPart;
      *((_DWORD *)DmaPacket + 36) = a1[35].HighPart;
      *((_DWORD *)DmaPacket + 37) = a1[35].HighPart + a1[36].LowPart;
    }
    *((_DWORD *)DmaPacket + 38) = a1[36].HighPart;
    *((_DWORD *)DmaPacket + 39) = a1[36].HighPart + a1[37].LowPart;
    DmaPacket[14] = *(_QWORD *)(v8.QuadPart + 160);
    *((_DWORD *)DmaPacket + 24) = a1[12].LowPart;
    DmaPacket[25] = 0LL;
    *((_DWORD *)DmaPacket + 23) ^= (*((_DWORD *)DmaPacket + 23) ^ (a1[32].LowPart >> 9)) & 1;
    *((_DWORD *)DmaPacket + 52) = a1[37].HighPart;
    *((_DWORD *)DmaPacket + 53) = a1[38].LowPart;
    VidSchiSendToExecutionQueueWithWait((__int64)DmaPacket, v23, 0, 0);
  }
}
