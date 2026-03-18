/*
 * XREFs of VidSchiSubmitPagingCommand @ 0x1C0042840
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C006AC40 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00A0314 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C00070B0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiSendToExecutionQueue @ 0x1C00077C0 (VidSchiSendToExecutionQueue.c)
 *     VidSchIsTDRPending @ 0x1C000A130 (VidSchIsTDRPending.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0010D48 (VidSchiSchedulerNodeToDriverEngine.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1C001D21C (-DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0042284 (VidSchWaitForCompletionEvent.c)
 *     VidSchiDiscardQueuePacket @ 0x1C009FC70 (VidSchiDiscardQueuePacket.c)
 *     VidSchGetDriverPagingContext @ 0x1C00A0F80 (VidSchGetDriverPagingContext.c)
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
  struct _KEVENT *v15; // rcx
  int v16; // eax
  void (__fastcall *v17)(_QWORD); // rax
  unsigned int v18; // eax
  void *DriverPagingContext; // rax
  UINT HighPart; // edx
  UINT v21; // ecx
  void *v22; // rax
  UINT v23; // ecx
  __int64 v24; // rax
  UINT v25; // ecx
  const DXGK_ALLOCATIONLIST *v26; // r11
  UINT v27; // r9d
  ADAPTER_RENDER *v28; // r10
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r13
  _QWORD *v35; // rax
  _DXGKARG_PATCH v36; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v37[40]; // [rsp+A0h] [rbp-60h] BYREF

  v1 = a1[11];
  v3 = *(_QWORD *)(v1.QuadPart + 104);
  v4 = *(_QWORD *)(v1.QuadPart + 96);
  v5 = *(_QWORD *)(v3 + 32);
  if ( (*(_BYTE *)(v5 + 2828) & 1) != 0
    || VidSchIsTDRPending(*(_QWORD *)(v3 + 32))
    || *(_BYTE *)(v3 + 164)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 160), 0, 0) )
  {
    VidSchiDiscardQueuePacket((struct _VIDSCH_QUEUE_PACKET *)a1);
  }
  else
  {
    for ( i = *(_QWORD *)(v4 + 24); ; VidSchWaitForCompletionEvent(i, (__int64)v37, 20LL) )
    {
      *(_QWORD *)(i + 1600) = MEMORY[0xFFFFF78000000320];
      KeResetEvent((PRKEVENT)(i + 1560));
      v7 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(i + 1864), (__int64 **)(v4 + 2800), 0LL);
      if ( v7 )
        break;
      memset(v37, 0, sizeof(v37));
      v16 = *(unsigned __int16 *)(v4 + 4);
      v37[8] |= 0x11u;
      v37[12] = v16;
      v37[4] = 0;
      v37[5] = 1;
    }
    v8 = (__int64)(v7 - 2);
    memset(v7 - 2, 0, 0xE0uLL);
    v9 = *(_QWORD *)(v5 + 8LL * *(unsigned __int16 *)(v4 + 4) + 408);
    v10 = a1[11];
    v11 = ++*(_QWORD *)(v9 + 48);
    *(_QWORD *)(v8 + 104) = v11;
    *(_QWORD *)(v10.QuadPart + 432) = v11;
    a1[14] = *(LARGE_INTEGER *)(v8 + 104);
    *(_DWORD *)v8 = 1953189956;
    *(_DWORD *)(v8 + 88) = 1;
    *(_QWORD *)(v8 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v8 + 72) = 7;
    *(_DWORD *)(v8 + 92) = 0;
    *(_QWORD *)(v8 + 56) = a1;
    *(LARGE_INTEGER *)(v8 + 48) = v1;
    *(_DWORD *)(v8 + 92) = (a1[15].LowPart != 0) << 14;
    if ( *(_DWORD *)(v4 + 2788) != -1 )
    {
      v17 = *(void (__fastcall **)(_QWORD))(v5 + 2832);
      if ( v17 )
        v17(*(_QWORD *)(v5 + 2896));
    }
    *(_DWORD *)(v8 + 92) |= 0x400u;
    v12 = a1[34];
    *(LARGE_INTEGER *)(v8 + 64) = v12;
    v13 = *(void **)(*(_QWORD *)(v12.QuadPart + 56) + 376LL);
    if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL) + 2040LL)
                   + 48LL * *(unsigned __int16 *)(v4 + 6)
                   + 40) )
    {
      v18 = VidSchiSchedulerNodeToDriverEngine(v5, a1[39].HighPart);
      DriverPagingContext = (void *)VidSchGetDriverPagingContext(v5, v18, LOBYTE(a1[40].LowPart), v18);
      HighPart = a1[37].HighPart;
      v36.DmaBufferSegmentId = a1[36].LowPart;
      v36.DmaBufferPhysicalAddress = a1[35];
      v21 = *(_DWORD *)(v12.QuadPart + 40);
      v36.hDevice = DriverPagingContext;
      v22 = *(void **)(v12.QuadPart + 128);
      v36.DmaBufferSize = v21;
      v23 = a1[36].HighPart;
      v36.pDmaBufferPrivateData = v22;
      v24 = *(_QWORD *)(v12.QuadPart + 136);
      v36.DmaBufferSubmissionStartOffset = v23;
      v36.DmaBufferSubmissionEndOffset = a1[37].LowPart + v23;
      v36.pDmaBuffer = v13;
      v25 = *(_DWORD *)(v24 + 88);
      LODWORD(v24) = *(_DWORD *)(v8 + 104);
      v36.DmaBufferPrivateDataSubmissionStartOffset = HighPart;
      v36.DmaBufferPrivateDataSubmissionEndOffset = a1[38].LowPart + HighPart;
      v36.DmaBufferPrivateDataSize = v25;
      v36.pAllocationList = v26;
      v36.AllocationListSize = (unsigned int)v26;
      v36.pPatchLocationList = (const D3DDDI_PATCHLOCATIONLIST *)v26;
      *(_QWORD *)&v36.PatchLocationListSize = 0LL;
      v36.PatchLocationListSubmissionLength = (unsigned int)v26;
      v36.SubmissionFenceId = v24;
      v36.EngineOrdinal = v27;
      v36.Flags.Value = 1;
      v29 = ADAPTER_RENDER::DdiPatch(v28, &v36);
      v34 = v29;
      if ( v29 < 0 )
      {
        v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v31, v30, v32, v33);
        v35[6] = &v36;
        v35[3] = 270LL;
        v35[4] = 25LL;
        v35[5] = v12.QuadPart;
        v35[7] = v34;
        WdLogEvent5_WdCriticalError(v35);
      }
    }
    *(_QWORD *)(v8 + 120) = v13;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL) + 2040LL)
                  + 48LL * *(unsigned __int16 *)(v4 + 6)
                  + 40) )
    {
      *(_DWORD *)(v8 + 92) |= 0x2000u;
      v14 = *(_QWORD *)(a1[34].QuadPart + 96);
      *(_QWORD *)(v8 + 176) = v14;
      *(_QWORD *)(v8 + 176) = v14 + (unsigned int)a1[36].HighPart;
      *(_DWORD *)(v8 + 148) = a1[37].LowPart;
      *(_QWORD *)(v8 + 192) = *(_QWORD *)(a1[34].QuadPart + 128);
    }
    else
    {
      *(_DWORD *)(v8 + 128) = a1[36].LowPart;
      *(LARGE_INTEGER *)(v8 + 136) = a1[35];
      *(_DWORD *)(v8 + 144) = a1[36].HighPart;
      *(_DWORD *)(v8 + 148) = a1[36].HighPart + a1[37].LowPart;
    }
    *(_DWORD *)(v8 + 152) = a1[37].HighPart;
    *(_DWORD *)(v8 + 156) = a1[37].HighPart + a1[38].LowPart;
    *(_QWORD *)(v8 + 112) = *(_QWORD *)(v12.QuadPart + 160);
    *(_DWORD *)(v8 + 96) = a1[13].LowPart;
    *(_QWORD *)(v8 + 200) = 0LL;
    *(_DWORD *)(v8 + 92) ^= (*(_DWORD *)(v8 + 92) ^ (a1[33].LowPart >> 8)) & 1;
    *(_DWORD *)(v8 + 208) = a1[38].HighPart;
    *(_DWORD *)(v8 + 212) = a1[39].LowPart;
    v15 = *(struct _KEVENT **)(*(_QWORD *)(v8 + 48) + 96LL);
    *(_QWORD *)(v8 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v8 + 72) = 8;
    v15[11].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    KeResetEvent(v15 + 10);
    VidSchiSendToExecutionQueue(v8, 0);
  }
}
