/*
 * XREFs of PnpOrphanNotification @ 0x140539200
 * Callers:
 *     PpDevNodeRemoveFromTree @ 0x14011C260 (PpDevNodeRemoveFromTree.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

void __fastcall PnpOrphanNotification(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 **v8; // rdi
  unsigned __int8 v9; // bl
  signed __int32 v10; // eax
  __int64 *v11; // rbx
  __int64 v12; // rax
  void *v13; // rcx

  v5 = KeAbPreAcquire((ULONG_PTR)&PnpTargetDeviceNotifyLock, 0LL, 0LL, a4);
  v6 = v5;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PnpTargetDeviceNotifyLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PnpTargetDeviceNotifyLock, v5);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v8 = (__int64 **)(a1 + 472);
  qword_14034B2A8 = (__int64)KeGetCurrentThread();
  dword_14034B2D0 = CurrentIrql;
  while ( *v8 != (__int64 *)v8 )
  {
    v11 = *v8;
    v12 = **v8;
    if ( (__int64 **)(*v8)[1] != v8 || *(__int64 **)(v12 + 8) != v11 )
      __fastfail(3u);
    *v8 = (__int64 *)v12;
    *(_QWORD *)(v12 + 8) = v8;
    v13 = (void *)v11[11];
    v11[1] = (__int64)v11;
    *v11 = (__int64)v11;
    if ( v13 )
    {
      ObfDereferenceObject(v13);
      v11[11] = 0LL;
    }
  }
  qword_14034B2A8 = 0LL;
  v9 = dword_14034B2D0;
  v10 = _InterlockedCompareExchange((volatile signed __int32 *)&PnpTargetDeviceNotifyLock, 1, 0);
  if ( v10 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PnpTargetDeviceNotifyLock, v10);
  __writecr8(v9);
  KeAbPostRelease((ULONG_PTR)&PnpTargetDeviceNotifyLock);
}
