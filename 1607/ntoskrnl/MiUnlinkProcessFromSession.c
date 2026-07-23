/*
 * XREFs of MiUnlinkProcessFromSession @ 0x140075F18
 * Callers:
 *     MiDeleteFinalPageTables @ 0x140075B18 (MiDeleteFinalPageTables.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall MiUnlinkProcessFromSession(__int64 a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rdx
  __int64 *v4; // rcx
  __int64 **v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140327780, &LockHandle);
  v2 = *(_QWORD *)(a1 + 1024);
  if ( v2 )
  {
    v3 = (__int64 *)(a1 + 832);
    if ( *(_QWORD *)(a1 + 832) )
    {
      if ( (*(_BYTE *)(a1 + 1465) & 1) != 0 && !*(_QWORD *)(v2 + 3360) )
        *(_QWORD *)(v2 + 3360) = 1LL;
      v4 = (__int64 *)*v3;
      v5 = *(__int64 ***)(a1 + 840);
      if ( *(__int64 **)(*v3 + 8) != v3 || *v5 != v3 )
        __fastfail(3u);
      *v5 = v4;
      v4[1] = (__int64)v5;
    }
  }
  v6 = *(_QWORD *)(a1 + 1552);
  v7 = *(_QWORD **)(a1 + 1560);
  if ( *(_QWORD *)(v6 + 8) != a1 + 1552 || *v7 != a1 + 1552 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
