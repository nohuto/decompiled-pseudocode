/*
 * XREFs of VidSchiAllocateQueuePacket @ 0x1C002F130
 * Callers:
 *     VidSchSubmitDeviceCommand @ 0x1C0001048 (VidSchSubmitDeviceCommand.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0005320 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchWaitForSingleSyncObject @ 0x1C001D890 (VidSchWaitForSingleSyncObject.c)
 *     VidSchSubmitCommand @ 0x1C002E700 (VidSchSubmitCommand.c)
 *     VidSchEnqueueCpuEvent @ 0x1C0077DB0 (VidSchEnqueueCpuEvent.c)
 *     VidSchSubmitPagingCommand @ 0x1C00794D0 (VidSchSubmitPagingCommand.c)
 * Callees:
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0003310 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchIsWorkerThread @ 0x1C0005B30 (VidSchIsWorkerThread.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C0006280 (VidSchiInterlockedInsertTailList.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C001E478 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0078B5C (VidSchRegisterCompletionEvent.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0079BB0 (VidSchWaitForCompletionEvent.c)
 */

__int64 *__fastcall VidSchiAllocateQueuePacket(__int64 a1, int a2)
{
  _DWORD *v2; // r12
  __int64 **v3; // r13
  __int64 v6; // rsi
  unsigned int v7; // ebx
  __int64 *v8; // rax
  __int64 *v9; // rdi
  int v10; // r15d
  _DWORD *v11; // rcx
  __int64 *PoolWithTag; // rax
  bool IsWorkerThread; // al
  int v15; // ecx
  bool v16; // zf
  __int64 v17; // rax
  __int64 *v18; // rax
  _QWORD v19[20]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = (_DWORD *)(a1 + 728);
  v3 = (__int64 **)(a1 + 712);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  v7 = *(_DWORD *)(v6 + 52) * (56 * *(_DWORD *)(v6 + 124) + 8) + 632;
  if ( v7 <= 0x320 )
    v7 = 800;
  v8 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v6 + 1880), (__int64 **)(a1 + 712), (_DWORD *)(a1 + 728));
  if ( v8 )
  {
    v9 = v8 - 1;
LABEL_5:
    v10 = 1;
    goto LABEL_6;
  }
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)512, v7, 0x68536956u);
  v9 = PoolWithTag;
  if ( !a2 )
    goto LABEL_5;
  if ( !PoolWithTag )
  {
    memset(v19, 0, sizeof(v19));
    v10 = (_DWORD)v9 + 1;
    LODWORD(v19[2]) = (_DWORD)v9 + 1;
    IsWorkerThread = VidSchIsWorkerThread(v6);
    v15 = HIDWORD(v19[2]);
    v16 = !IsWorkerThread;
    v17 = *(_QWORD *)(a1 + 96);
    if ( !v16 )
      v15 = (_DWORD)v9 + 1;
    LODWORD(v19[4]) |= 0x20u;
    HIDWORD(v19[2]) = v15;
    LODWORD(v19[6]) = *(unsigned __int16 *)(v17 + 4);
    VidSchRegisterCompletionEvent(v6, v19);
    do
    {
      v18 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v6 + 1880), v3, v2);
      if ( v18 )
        v9 = v18 - 1;
      else
        VidSchWaitForCompletionEvent((struct _VIDSCH_GLOBAL *)v6);
    }
    while ( !v9 );
    VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v6 + 1888), v19, 0LL);
LABEL_6:
    if ( !v9 )
      return v9;
    goto LABEL_7;
  }
  v10 = 1;
LABEL_7:
  memset(v9, 0, v7);
  v9[7] = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v9 + 13) = v10;
  VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(v6 + 1880), a1 + 736, v9 + 1, (_DWORD *)(a1 + 752));
  v11 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 3136LL);
  if ( *v11 < *(_DWORD *)(a1 + 752) )
    *v11 = *(_DWORD *)(a1 + 752);
  return v9;
}
