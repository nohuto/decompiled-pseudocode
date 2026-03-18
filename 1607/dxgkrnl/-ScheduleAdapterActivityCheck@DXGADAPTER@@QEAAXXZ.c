/*
 * XREFs of ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x1C0008D30
 * Callers:
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C0010FA4 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C009FB04 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGADAPTER::ScheduleAdapterActivityCheck(struct _KTHREAD **this, struct _KTHREAD *a2)
{
  struct _KTHREAD **v3; // rax
  struct _KTHREAD ***v4; // rcx
  struct _KTHREAD *v5; // rcx
  KSPIN_LOCK *v6; // [rsp+28h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  char v8; // [rsp+48h] [rbp-10h]

  v6 = (KSPIN_LOCK *)(this + 329);
  v8 = 0;
  if ( this[330] != KeGetCurrentThread() )
  {
    KeAcquireInStackQueuedSpinLock(v6, &LockHandle);
    v6[1] = (KSPIN_LOCK)KeGetCurrentThread();
    v8 = 1;
  }
  *((_QWORD *)this[316] + 49) = MEMORY[0xFFFFF78000000320];
  *((_QWORD *)this[316] + 49) += this[309];
  v3 = (struct _KTHREAD **)((char *)this[316] + 400);
  if ( !*v3 )
  {
    v4 = (struct _KTHREAD ***)(this + 327);
    a2 = this[327];
    if ( *((struct _KTHREAD ***)a2 + 1) != this + 327 )
      __fastfail(3u);
    *v3 = a2;
    v3[1] = (struct _KTHREAD *)v4;
    *((_QWORD *)a2 + 1) = v3;
    *v4 = v3;
  }
  if ( !*((_BYTE *)this + 2604) )
  {
    v5 = this[267];
    LOBYTE(a2) = 1;
    *((_BYTE *)this + 2604) = 1;
    (*(void (__fastcall **)(_QWORD, struct _KTHREAD *))(*(_QWORD *)(*((_QWORD *)v5 + 47) + 8LL) + 752LL))(
      *((_QWORD *)v5 + 48),
      a2);
  }
  if ( v8 )
  {
    v8 = 0;
    v6[1] = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
