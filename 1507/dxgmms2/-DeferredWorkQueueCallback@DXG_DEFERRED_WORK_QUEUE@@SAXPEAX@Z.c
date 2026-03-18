/*
 * XREFs of ?DeferredWorkQueueCallback@DXG_DEFERRED_WORK_QUEUE@@SAXPEAX@Z @ 0x1C000EBF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXG_DEFERRED_WORK_QUEUE::DeferredWorkQueueCallback(char *a1)
{
  __int64 **v2; // rdi
  __int64 *v3; // rsi
  __int64 v4; // rax

  v2 = (__int64 **)(a1 + 16);
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(a1, 0LL);
    *((_QWORD *)a1 + 1) = KeGetCurrentThread();
    v3 = *v2;
    v4 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v4 + 8) != v3 )
      __fastfail(3u);
    *v2 = (__int64 *)v4;
    *(_QWORD *)(v4 + 8) = v2;
    if ( v3 == (__int64 *)v2 )
      break;
    *((_QWORD *)a1 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(a1, 0LL);
    KeLeaveCriticalRegion();
    ((void (__fastcall *)(__int64))v3[2])(v3[3]);
    operator delete(v3);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(a1, 0LL);
    *((_QWORD *)a1 + 1) = KeGetCurrentThread();
    --*((_DWORD *)a1 + 8);
    *((_QWORD *)a1 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(a1, 0LL);
    KeLeaveCriticalRegion();
  }
  KeSetEvent((PRKEVENT)(a1 + 40), 0, 0);
  *((_QWORD *)a1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
}
