/*
 * XREFs of PoHandleIrp @ 0x1401216F8
 * Callers:
 *     IopPoHandleIrp @ 0x1401216B4 (IopPoHandleIrp.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     PoDeviceReleaseIrp @ 0x1401217F0 (PoDeviceReleaseIrp.c)
 *     PoDeviceAcquireIrp @ 0x1401218C4 (PoDeviceAcquireIrp.c)
 *     PopDispatchQuerySetIrp @ 0x1401219F8 (PopDispatchQuerySetIrp.c)
 */

char __fastcall PoHandleIrp(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // r14
  __int64 v5; // rbp
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r8
  int v10; // eax
  char v11; // di
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  v5 = *(_QWORD *)(a1 + 184);
  v7 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
  v8 = *(_QWORD *)(v5 + 40);
  v9 = *(_QWORD *)(v7 + 40);
  if ( !v9
    || (LOBYTE(a2) = *(_BYTE *)(v7 + 184),
        PoDeviceReleaseIrp(a1, a2, v9),
        v10 = *(_DWORD *)(v8 + 48),
        (v10 & 0x8000) != 0)
    || (v10 & 0x2000) != 0 && KeGetCurrentIrql() == 2 )
  {
    v11 = 1;
    if ( (*(_DWORD *)(v8 + 48) & 0x8000) == 0 )
    {
LABEL_8:
      KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
      PopIrpLockThread = (__int64)KeGetCurrentThread();
      PopDispatchQuerySetIrp(a1);
      PopIrpLockThread = 0LL;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      *v4 = 259;
      return v11;
    }
  }
  else
  {
    v11 = 0;
  }
  LOBYTE(a2) = *(_BYTE *)(v5 + 1);
  PoDeviceAcquireIrp(a1, a2, v8, a4);
  if ( v11 )
  {
    if ( (*(_DWORD *)(v8 + 48) & 0x8000) != 0 )
    {
      *(_DWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 56) = 0LL;
      pIofCompleteRequest(a1, 0LL);
      *v4 = 0;
      return v11;
    }
    goto LABEL_8;
  }
  return v11;
}
