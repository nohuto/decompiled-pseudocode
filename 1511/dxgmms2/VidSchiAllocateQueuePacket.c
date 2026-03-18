/*
 * XREFs of VidSchiAllocateQueuePacket @ 0x1C0039D10
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0006F20 (VidSchWaitForSingleSyncObject.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0008030 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSubmitDeviceCommand @ 0x1C00121A0 (VidSchSubmitDeviceCommand.c)
 *     VidSchEnqueueCpuEvent @ 0x1C00382C0 (VidSchEnqueueCpuEvent.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0007F60 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0007FC0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C000F96C (VidSchiInterlockedRemoveEntryList.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     VidSchRegisterCompletionEvent @ 0x1C003C834 (VidSchRegisterCompletionEvent.c)
 *     VidSchWaitForCompletionEvent @ 0x1C003C908 (VidSchWaitForCompletionEvent.c)
 */

__int64 *__fastcall VidSchiAllocateQueuePacket(__int64 a1, int a2)
{
  __int64 v4; // rbp
  unsigned int v5; // edi
  __int64 *v6; // rax
  __int64 *v7; // rbx
  unsigned int *v8; // rcx
  unsigned int v9; // eax
  __int64 *PoolWithTag; // rax
  __int64 v12; // rax
  __int64 *v13; // rax
  _QWORD v14[20]; // [rsp+20h] [rbp-C8h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  v5 = *(_DWORD *)(v4 + 52) * ((*(_DWORD *)(v4 + 124) << 6) + 8) + 632;
  if ( v5 <= 0x320 )
    v5 = 800;
  v6 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v4 + 1832), (__int64 **)(a1 + 712), (_DWORD *)(a1 + 728));
  if ( v6 )
  {
    v7 = v6 - 1;
    goto LABEL_5;
  }
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)512, v5, 0x68536956u);
  v7 = PoolWithTag;
  if ( !a2 )
  {
LABEL_5:
    if ( !v7 )
      return v7;
    goto LABEL_6;
  }
  if ( !PoolWithTag )
  {
    memset(v14, 0, sizeof(v14));
    v12 = *(_QWORD *)(a1 + 96);
    LODWORD(v14[4]) |= 0x10u;
    LODWORD(v14[2]) = 1;
    LODWORD(v14[6]) = *(unsigned __int16 *)(v12 + 4);
    VidSchRegisterCompletionEvent(v4, v14);
    do
    {
      v13 = VidSchiInterlockedRemoveHeadListIfExist(
              (KSPIN_LOCK *)(v4 + 1832),
              (__int64 **)(a1 + 712),
              (_DWORD *)(a1 + 728));
      if ( v13 )
        v7 = v13 - 1;
      else
        VidSchWaitForCompletionEvent(v4, v14, 19LL);
    }
    while ( !v7 );
    VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v4 + 1840), v14, 0LL);
    goto LABEL_5;
  }
LABEL_6:
  memset(v7, 0, v5);
  v7[7] = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v7 + 13) = 1;
  VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(v4 + 1832), a1 + 736, v7 + 1, (_DWORD *)(a1 + 752));
  v8 = *(unsigned int **)(*(_QWORD *)(v4 + 16) + 3152LL);
  v9 = *(_DWORD *)(a1 + 752);
  if ( *v8 < v9 )
    *v8 = v9;
  return v7;
}
