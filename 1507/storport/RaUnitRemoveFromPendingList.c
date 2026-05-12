/*
 * XREFs of RaUnitRemoveFromPendingList @ 0x1C000ED80
 * Callers:
 *     RaidUnitReleaseIrp @ 0x1C000EBBC (RaidUnitReleaseIrp.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000F038 (RaidUnitCheckAndAcquirePoFx.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     StorRemoveEventQueueInternal @ 0x1C0026610 (StorRemoveEventQueueInternal.c)
 *     RaidUnitDisablePendingTimer @ 0x1C002B7E0 (RaidUnitDisablePendingTimer.c)
 *     Template_qcq @ 0x1C003458C (Template_qcq.c)
 */

void __fastcall RaUnitRemoveFromPendingList(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rbx
  int v7; // edx
  int v8; // ecx
  int v9; // r9d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-50h] BYREF
  int v11; // [rsp+50h] [rbp-38h] BYREF
  __int64 v12; // [rsp+54h] [rbp-34h]
  int v13; // [rsp+5Ch] [rbp-2Ch]

  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_BYTE *)(v4 + 2) == 40 )
    v5 = *(_QWORD *)(v4 + 96);
  else
    v5 = *(_QWORD *)(v4 + 48);
  if ( (*(_BYTE *)(v5 + 16) & 2) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 200) + 56LL * *(unsigned int *)(v5 + 84);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 40), &LockHandle);
    StorRemoveEventQueueInternal(v6, v5 + 48);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( StorEtwLoggingEnabled )
    {
      v11 = 0;
      v12 = 0LL;
      v13 = 0;
      IoGetActivityIdIrp(a2, &v11);
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800000) != 0 )
        Template_qcq(v8, v7, (unsigned int)&v11, v9, 4);
    }
    if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a1 + 1440) + 56LL), 0xFFFFFFFF) == 1 )
        RaidUnitDisablePendingTimer(a1);
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1432));
    }
  }
}
