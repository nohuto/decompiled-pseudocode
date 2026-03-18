/*
 * XREFs of ExpWorkerFactoryCompletionPacketRoutine @ 0x1400C5340
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x1400C6540 (KxWaitForLockChainValid.c)
 *     IoSetIoCompletionEx @ 0x1400C6954 (IoSetIoCompletionEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401C49A4 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IoFreeMiniCompletionPacket @ 0x140487948 (IoFreeMiniCompletionPacket.c)
 */

void __fastcall ExpWorkerFactoryCompletionPacketRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // al
  _QWORD *v5; // rdx
  int v6; // edi
  __int64 v8; // rax
  __int64 v9; // [rsp+40h] [rbp-28h] BYREF
  volatile signed __int64 *v10; // [rsp+48h] [rbp-20h]
  unsigned __int8 v11; // [rsp+50h] [rbp-18h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  v10 = (volatile signed __int64 *)a2;
  v9 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v11 = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v9);
  }
  else
  {
    v5 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)a2, (__int64)&v9);
    if ( v5 )
      KxWaitForLockOwnerShip((__int64)&v9, v5, a3);
  }
  v6 = 0;
  if ( *(_BYTE *)(a2 + 34) )
  {
    v6 = 2;
    goto LABEL_7;
  }
  if ( *(_BYTE *)(a2 + 33) )
  {
    if ( !*(_DWORD *)(a2 + 28) )
      goto LABEL_7;
    v6 = 1;
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 24))-- == 1 )
    {
LABEL_7:
      *(_BYTE *)(a2 + 32) = 0;
      goto LABEL_8;
    }
    v6 = 1;
  }
LABEL_8:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v9, retaddr);
  }
  else
  {
    _m_prefetchw(&v9);
    v8 = v9;
    if ( !v9 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v10, 0LL, (signed __int64)&v9) == &v9 )
        goto LABEL_11;
      v8 = KxWaitForLockChainValid(&v9);
    }
    v9 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v8 + 8), 1uLL);
  }
LABEL_11:
  __writecr8(v11);
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      IoSetIoCompletionEx(*(_QWORD *)(a2 + 8), 0, 0, 0, 0LL, 0, *(_QWORD *)(a2 + 16));
    }
    else
    {
      IoFreeMiniCompletionPacket(*(_QWORD *)(a2 + 16));
      ExFreePoolWithTag((PVOID)a2, 0);
    }
  }
}
