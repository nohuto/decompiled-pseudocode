/*
 * XREFs of PnpProcessDeferredRegistrations @ 0x14045FFE0
 * Callers:
 *     PnpDeviceEventWorker @ 0x14045FC1C (PnpDeviceEventWorker.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PnpDereferenceNotify @ 0x14046120C (PnpDereferenceNotify.c)
 */

void __fastcall PnpProcessDeferredRegistrations(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // di
  _QWORD *v8; // rdi
  unsigned __int8 v9; // bl
  signed __int32 v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  ULONG_PTR v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int8 v16; // bp
  unsigned __int8 v17; // di
  signed __int32 v18; // eax

  v4 = KeAbPreAcquire((ULONG_PTR)&PnpDeferredRegistrationLock, 0LL, 0LL, a4);
  v6 = v4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PnpDeferredRegistrationLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PnpDeferredRegistrationLock, v4);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  qword_14034B328 = (__int64)KeGetCurrentThread();
  dword_14034B350 = CurrentIrql;
  while ( 1 )
  {
    v8 = PnpDeferredRegistrationList;
    if ( PnpDeferredRegistrationList == &PnpDeferredRegistrationList )
      break;
    v11 = *(_QWORD *)PnpDeferredRegistrationList;
    if ( *((PVOID **)PnpDeferredRegistrationList + 1) != &PnpDeferredRegistrationList
      || *(PVOID *)(v11 + 8) != PnpDeferredRegistrationList )
    {
      __fastfail(3u);
    }
    PnpDeferredRegistrationList = *(PVOID *)PnpDeferredRegistrationList;
    *(_QWORD *)(v11 + 8) = &PnpDeferredRegistrationList;
    v12 = v8[2];
    v13 = *(_QWORD *)(v12 + 64);
    if ( v13 )
    {
      v14 = KeAbPreAcquire(*(_QWORD *)(v12 + 64), 0LL, 0LL, v5);
      v15 = v14;
      v16 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)v13, 0) )
        ExpAcquireFastMutexContended(v13, v14);
      if ( v15 )
        *(_BYTE *)(v15 + 26) |= 1u;
      *(_QWORD *)(v13 + 8) = KeGetCurrentThread();
      *(_DWORD *)(v13 + 48) = v16;
    }
    *(_BYTE *)(v8[2] + 58LL) = 0;
    PnpDereferenceNotify(v8[2]);
    ExFreePoolWithTag(v8, 0x37706E50u);
    if ( v13 )
    {
      *(_QWORD *)(v13 + 8) = 0LL;
      v17 = *(_BYTE *)(v13 + 48);
      v18 = _InterlockedCompareExchange((volatile signed __int32 *)v13, 1, 0);
      if ( v18 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)v13, v18);
      __writecr8(v17);
      KeAbPostRelease(v13);
    }
  }
  qword_14034B328 = 0LL;
  v9 = dword_14034B350;
  v10 = _InterlockedCompareExchange((volatile signed __int32 *)&PnpDeferredRegistrationLock, 1, 0);
  if ( v10 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PnpDeferredRegistrationLock, v10);
  __writecr8(v9);
  KeAbPostRelease((ULONG_PTR)&PnpDeferredRegistrationLock);
}
