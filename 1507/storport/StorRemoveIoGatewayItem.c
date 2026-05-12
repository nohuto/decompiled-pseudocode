/*
 * XREFs of StorRemoveIoGatewayItem @ 0x1C0010B48
 * Callers:
 *     RaUnitStartIo @ 0x1C0003C00 (RaUnitStartIo.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0010838 (RaidUnitProcessBusyRequest.c)
 * Callees:
 *     RaidZeroXrb @ 0x1C000F074 (RaidZeroXrb.c)
 *     RaFreeIoResource @ 0x1C0010C34 (RaFreeIoResource.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
 *     StorSetIoGatewayNotBusy @ 0x1C0034C7C (StorSetIoGatewayNotBusy.c)
 */

char __fastcall StorRemoveIoGatewayItem(volatile signed __int32 *SpinLock, __int64 a2, KSPIN_LOCK *a3)
{
  char v6; // si
  char v7; // r15
  struct _KEVENT *v8; // rbp
  __int64 v9; // rdx
  PKSPIN_LOCK v11; // rcx
  KSPIN_LOCK v12; // rax
  KSPIN_LOCK v13; // rdx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  if ( (unsigned int)_InterlockedDecrement(SpinLock + 48) <= *((_DWORD *)SpinLock + 8) && *((int *)SpinLock + 10) > 0 )
  {
    StorSetIoGatewayNotBusy(SpinLock);
    v6 = 1;
  }
  if ( !*((_DWORD *)SpinLock + 48) )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)SpinLock, &LockHandle);
    if ( (*((_QWORD *)SpinLock + 25) || *((_BYTE *)SpinLock + 208)) && !*((_DWORD *)SpinLock + 48) )
    {
      v7 = *((_BYTE *)SpinLock + 208);
      v8 = (struct _KEVENT *)*((_QWORD *)SpinLock + 25);
      *((_BYTE *)SpinLock + 208) = 0;
      *((_QWORD *)SpinLock + 25) = 0LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  if ( *((_DWORD *)SpinLock + 6) && *((int *)SpinLock + 10) <= 0 && *((int *)SpinLock + 11) <= 0 && a3 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)SpinLock, &LockHandle);
    if ( *((int *)SpinLock + 10) <= 0 && *((int *)SpinLock + 11) <= 0 && *((_DWORD *)SpinLock + 6) )
    {
      v11 = (PKSPIN_LOCK)(SpinLock + 2);
      v12 = *((_QWORD *)SpinLock + 1);
      v13 = *(_QWORD *)v12;
      if ( *(volatile signed __int32 **)(v12 + 8) != SpinLock + 2 || *(_QWORD *)(v13 + 8) != v12 )
        __fastfail(3u);
      *v11 = v13;
      *(_QWORD *)(v13 + 8) = v11;
      *a3 = v12;
      _InterlockedIncrement(SpinLock + 48);
      v14 = *((_DWORD *)SpinLock + 48);
      v15 = *((_DWORD *)SpinLock + 9);
      if ( v14 > v15 )
        v15 = *((_DWORD *)SpinLock + 48);
      *((_DWORD *)SpinLock + 9) = v15;
      if ( v14 == *((_DWORD *)SpinLock + 7) )
      {
        *((_DWORD *)SpinLock + 10) = 1;
        v6 = 0;
      }
      --*((_DWORD *)SpinLock + 6);
    }
    else
    {
      RaFreeIoResource(SpinLock + 16, *(_QWORD *)(a2 + 16) - 16LL);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  else
  {
    RaFreeIoResource(SpinLock + 16, *(_QWORD *)(a2 + 16) - 16LL);
  }
  if ( a3 && *a3 )
    RaidZeroXrb(
      *(_QWORD *)(a2 + 16),
      v9,
      *(_DWORD *)(*(_QWORD *)(a2 + 16) + 728LL),
      *(void **)(*(_QWORD *)(a2 + 16) + 744LL));
  if ( v8 )
    KeSetEvent(v8, 0, 0);
  if ( v7 )
    (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD))SpinLock + 30))(
      *((_QWORD *)SpinLock + 29),
      *((_QWORD *)SpinLock + 27),
      *((_QWORD *)SpinLock + 28));
  return v6;
}
