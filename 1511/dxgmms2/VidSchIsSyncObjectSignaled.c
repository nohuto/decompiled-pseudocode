/*
 * XREFs of VidSchIsSyncObjectSignaled @ 0x1C0022550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall VidSchIsSyncObjectSignaled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  __int64 v6; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  if ( a1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 8) + 1824LL), &LockHandle);
    if ( *(_DWORD *)(a1 + 40) == 2 )
    {
      if ( *(_BYTE *)(a1 + 27) )
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 40LL);
      else
        v8 = *(_QWORD *)(a1 + 56);
      if ( *(_BYTE *)(a1 + 27) )
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 32LL);
      else
        v9 = *(_QWORD *)(a1 + 64);
      if ( v8 <= v9 )
        v4 = 1;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return v4;
  }
  else
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v6);
    return 0;
  }
}
