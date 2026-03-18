/*
 * XREFs of ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x1C001A5F8
 * Callers:
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C0019C38 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0078A80 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGADAPTER::ScheduleAdapterActivityCheck(struct _KTHREAD **this, struct _KTHREAD *a2)
{
  struct _KTHREAD *v3; // rax
  struct _KTHREAD *v4; // rcx
  KSPIN_LOCK *v5; // [rsp+28h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  char v7; // [rsp+48h] [rbp-10h]

  v5 = (KSPIN_LOCK *)(this + 309);
  v7 = 0;
  if ( this[310] != KeGetCurrentThread() )
  {
    KeAcquireInStackQueuedSpinLock(v5, &LockHandle);
    v5[1] = (KSPIN_LOCK)KeGetCurrentThread();
    v7 = 1;
  }
  *((_QWORD *)this[296] + 49) = MEMORY[0xFFFFF78000000320];
  *((_QWORD *)this[296] + 49) += this[289];
  v3 = (struct _KTHREAD *)((char *)this[296] + 400);
  if ( !*(_QWORD *)v3 )
  {
    a2 = this[307];
    *(_QWORD *)v3 = a2;
    *((_QWORD *)v3 + 1) = this + 307;
    if ( *((struct _KTHREAD ***)a2 + 1) != this + 307 )
      __fastfail(3u);
    *((_QWORD *)a2 + 1) = v3;
    this[307] = v3;
  }
  if ( !*((_BYTE *)this + 2444) )
  {
    v4 = this[248];
    LOBYTE(a2) = 1;
    *((_BYTE *)this + 2444) = 1;
    (*(void (__fastcall **)(_QWORD, struct _KTHREAD *))(*(_QWORD *)(*((_QWORD *)v4 + 47) + 8LL) + 752LL))(
      *((_QWORD *)v4 + 48),
      a2);
  }
  if ( v7 )
  {
    v7 = 0;
    v5[1] = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
