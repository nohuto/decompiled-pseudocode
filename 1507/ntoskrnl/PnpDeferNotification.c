/*
 * XREFs of PnpDeferNotification @ 0x140561854
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x140561348 (IoRegisterPlugPlayNotification.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpDeferNotification(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // esi
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v9; // bl
  signed __int32 v10; // eax
  PVOID *PoolWithTag; // rax
  __int64 v13; // r9
  PVOID *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int8 v17; // bp
  PVOID **v18; // rax
  unsigned __int8 v19; // bl
  signed __int32 v20; // eax

  v5 = 0;
  v6 = KeAbPreAcquire((ULONG_PTR)&PnpNotificationInProgressLock, 0LL, 0LL, a4);
  v7 = v6;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PnpNotificationInProgressLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PnpNotificationInProgressLock, v6);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  qword_140349348 = (__int64)KeGetCurrentThread();
  dword_140349370 = CurrentIrql;
  if ( PnpNotificationInProgress )
  {
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x37706E50u);
    v14 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[2] = (PVOID)a1;
      ++*(_WORD *)(a1 + 56);
      *(_BYTE *)(a1 + 58) = 1;
      v15 = KeAbPreAcquire((ULONG_PTR)&PnpDeferredRegistrationLock, 0LL, 0LL, v13);
      v16 = v15;
      v17 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)&PnpDeferredRegistrationLock, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&PnpDeferredRegistrationLock, v15);
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      qword_14034B328 = (__int64)KeGetCurrentThread();
      dword_14034B350 = v17;
      v18 = (PVOID **)qword_14077EF40;
      *v14 = &PnpDeferredRegistrationList;
      v14[1] = v18;
      if ( *v18 != &PnpDeferredRegistrationList )
        __fastfail(3u);
      *v18 = v14;
      qword_14034B328 = 0LL;
      qword_14077EF40 = (__int64)v14;
      v19 = dword_14034B350;
      v20 = _InterlockedCompareExchange((volatile signed __int32 *)&PnpDeferredRegistrationLock, 1, 0);
      if ( v20 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&PnpDeferredRegistrationLock, v20);
      __writecr8(v19);
      KeAbPostRelease((ULONG_PTR)&PnpDeferredRegistrationLock);
    }
    else
    {
      v5 = -1073741670;
    }
  }
  qword_140349348 = 0LL;
  v9 = dword_140349370;
  v10 = _InterlockedCompareExchange((volatile signed __int32 *)&PnpNotificationInProgressLock, 1, 0);
  if ( v10 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PnpNotificationInProgressLock, v10);
  __writecr8(v9);
  KeAbPostRelease((ULONG_PTR)&PnpNotificationInProgressLock);
  return v5;
}
