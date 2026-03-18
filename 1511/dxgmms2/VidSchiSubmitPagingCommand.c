/*
 * XREFs of VidSchiSubmitPagingCommand @ 0x1C003AA00
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C006A810 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C008AAD0 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0007FC0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiSendToExecutionQueue @ 0x1C00086D0 (VidSchiSendToExecutionQueue.c)
 *     VidSchIsTDRPending @ 0x1C000B6A0 (VidSchIsTDRPending.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C00132E0 (VidSchiSchedulerNodeToDriverEngine.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1C001C444 (-DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z.c)
 *     VidSchWaitForCompletionEvent @ 0x1C003C908 (VidSchWaitForCompletionEvent.c)
 *     VidSchiDiscardQueuePacket @ 0x1C008A4A8 (VidSchiDiscardQueuePacket.c)
 */

void __fastcall VidSchiSubmitPagingCommand(LARGE_INTEGER *a1)
{
  LARGE_INTEGER v1; // r15
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 i; // rbx
  __int64 *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  LARGE_INTEGER v10; // rcx
  __int64 v11; // rax
  LARGE_INTEGER v12; // r15
  void *v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  void (__fastcall *v17)(_QWORD); // rax
  __int64 v18; // r8
  void *v19; // rax
  UINT HighPart; // edx
  UINT v21; // ecx
  __int64 v22; // rax
  UINT v23; // ecx
  const DXGK_ALLOCATIONLIST *v24; // r10
  ADAPTER_RENDER *v25; // r9
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r13
  _QWORD *v32; // rax
  _DXGKARG_PATCH v33; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v34[40]; // [rsp+A0h] [rbp-60h] BYREF

  v1 = a1[10];
  v3 = *(_QWORD *)(v1.QuadPart + 104);
  v4 = *(_QWORD *)(v1.QuadPart + 96);
  v5 = *(_QWORD *)(v3 + 32);
  if ( (*(_BYTE *)(v5 + 2468) & 1) != 0
    || VidSchIsTDRPending(*(_QWORD *)(v3 + 32))
    || *(_BYTE *)(v3 + 172)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 168), 0, 0) )
  {
    VidSchiDiscardQueuePacket((struct _VIDSCH_QUEUE_PACKET *)a1);
  }
  else
  {
    for ( i = *(_QWORD *)(v4 + 24); ; VidSchWaitForCompletionEvent(i, v34, 20LL) )
    {
      *(_QWORD *)(i + 1568) = MEMORY[0xFFFFF78000000320];
      KeResetEvent((PRKEVENT)(i + 1528));
      v7 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(i + 1832), (__int64 **)(v4 + 2960), 0LL);
      if ( v7 )
        break;
      memset(v34, 0, sizeof(v34));
      v16 = *(unsigned __int16 *)(v4 + 4);
      v34[8] |= 0x11u;
      v34[12] = v16;
      v34[4] = 0;
      v34[5] = 1;
    }
    v8 = (__int64)(v7 - 2);
    memset(v7 - 2, 0, 0xE0uLL);
    v9 = *(_QWORD *)(v5 + 8LL * *(unsigned __int16 *)(v4 + 4) + 376);
    v10 = a1[10];
    v11 = ++*(_QWORD *)(v9 + 48);
    *(_QWORD *)(v8 + 104) = v11;
    *(_QWORD *)(v10.QuadPart + 432) = v11;
    a1[13] = *(LARGE_INTEGER *)(v8 + 104);
    *(_DWORD *)v8 = 1953189956;
    *(_DWORD *)(v8 + 88) = 1;
    *(_QWORD *)(v8 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v8 + 72) = 7;
    *(_DWORD *)(v8 + 92) = 0;
    *(_QWORD *)(v8 + 56) = a1;
    *(LARGE_INTEGER *)(v8 + 48) = v1;
    *(_DWORD *)(v8 + 92) = (a1[14].LowPart != 0) << 14;
    if ( *(_DWORD *)(v4 + 2952) != -1 )
    {
      v17 = *(void (__fastcall **)(_QWORD))(v5 + 2472);
      if ( v17 )
        v17(*(_QWORD *)(v5 + 2520));
    }
    *(_DWORD *)(v8 + 92) |= 0x400u;
    v12 = a1[33];
    *(LARGE_INTEGER *)(v8 + 64) = v12;
    v13 = *(void **)(*(_QWORD *)(v12.QuadPart + 56) + 360LL);
    if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL) + 1904LL)
                   + 48LL * *(unsigned __int16 *)(v4 + 6)
                   + 40) )
    {
      v18 = (unsigned int)VidSchiSchedulerNodeToDriverEngine(v5, a1[38].HighPart);
      v19 = *(void **)(v12.QuadPart + 128);
      HighPart = a1[36].HighPart;
      v33.hDevice = *(HANDLE *)(*(_QWORD *)(*(_QWORD *)(v5 + 200) + 8 * v18) + 64LL);
      v33.DmaBufferSegmentId = a1[35].LowPart;
      v33.DmaBufferPhysicalAddress = a1[34];
      v33.DmaBufferSize = *(_DWORD *)(v12.QuadPart + 40);
      v21 = a1[35].HighPart;
      v33.pDmaBufferPrivateData = v19;
      v22 = *(_QWORD *)(v12.QuadPart + 136);
      v33.DmaBufferSubmissionStartOffset = v21;
      v33.DmaBufferSubmissionEndOffset = a1[36].LowPart + v21;
      v33.pDmaBuffer = v13;
      v23 = *(_DWORD *)(v22 + 88);
      LODWORD(v22) = *(_DWORD *)(v8 + 104);
      v33.DmaBufferPrivateDataSubmissionStartOffset = HighPart;
      v33.DmaBufferPrivateDataSubmissionEndOffset = a1[37].LowPart + HighPart;
      v33.DmaBufferPrivateDataSize = v23;
      v33.pAllocationList = v24;
      v33.AllocationListSize = (unsigned int)v24;
      v33.pPatchLocationList = (const D3DDDI_PATCHLOCATIONLIST *)v24;
      *(_QWORD *)&v33.PatchLocationListSize = 0LL;
      v33.PatchLocationListSubmissionLength = (unsigned int)v24;
      v33.SubmissionFenceId = v22;
      v33.EngineOrdinal = v18;
      v33.Flags.Value = 1;
      v26 = ADAPTER_RENDER::DdiPatch(v25, &v33);
      v31 = v26;
      if ( v26 < 0 )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v27, v29, v30);
        v32[6] = &v33;
        v32[3] = 270LL;
        v32[4] = 25LL;
        v32[5] = v12.QuadPart;
        v32[7] = v31;
        WdLogEvent5_WdCriticalError(v32);
      }
    }
    *(_QWORD *)(v8 + 120) = v13;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL) + 1904LL)
                  + 48LL * *(unsigned __int16 *)(v4 + 6)
                  + 40) )
    {
      *(_DWORD *)(v8 + 92) |= 0x2000u;
      v14 = *(_QWORD *)(a1[33].QuadPart + 96);
      *(_QWORD *)(v8 + 176) = v14;
      *(_QWORD *)(v8 + 176) = v14 + (unsigned int)a1[35].HighPart;
      *(_DWORD *)(v8 + 148) = a1[36].LowPart;
      *(_QWORD *)(v8 + 192) = *(_QWORD *)(a1[33].QuadPart + 128);
    }
    else
    {
      *(_DWORD *)(v8 + 128) = a1[35].LowPart;
      *(LARGE_INTEGER *)(v8 + 136) = a1[34];
      *(_DWORD *)(v8 + 144) = a1[35].HighPart;
      *(_DWORD *)(v8 + 148) = a1[35].HighPart + a1[36].LowPart;
    }
    *(_DWORD *)(v8 + 152) = a1[36].HighPart;
    *(_DWORD *)(v8 + 156) = a1[36].HighPart + a1[37].LowPart;
    *(_QWORD *)(v8 + 112) = *(_QWORD *)(v12.QuadPart + 160);
    *(_DWORD *)(v8 + 96) = a1[12].LowPart;
    *(_QWORD *)(v8 + 200) = 0LL;
    *(_DWORD *)(v8 + 92) ^= (*(_DWORD *)(v8 + 92) ^ (a1[32].LowPart >> 8)) & 1;
    *(_DWORD *)(v8 + 208) = a1[37].HighPart;
    *(_DWORD *)(v8 + 212) = a1[38].LowPart;
    v15 = *(_QWORD *)(*(_QWORD *)(v8 + 48) + 96LL);
    *(_QWORD *)(v8 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v8 + 72) = 8;
    *(_QWORD *)(v15 + 240) = MEMORY[0xFFFFF78000000320];
    KeResetEvent((PRKEVENT)(v15 + 200));
    VidSchiSendToExecutionQueue(v8, 0);
  }
}
