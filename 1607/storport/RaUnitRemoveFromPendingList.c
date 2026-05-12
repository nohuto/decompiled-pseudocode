/*
 * XREFs of RaUnitRemoveFromPendingList @ 0x1C000C928
 * Callers:
 *     RaidUnitReleaseIrp @ 0x1C000C880 (RaidUnitReleaseIrp.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0003544 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitDisablePendingTimer @ 0x1C0009F90 (RaidUnitDisablePendingTimer.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     StorRemoveEventQueue @ 0x1C002BC38 (StorRemoveEventQueue.c)
 *     Template_qcq @ 0x1C00391D4 (Template_qcq.c)
 */

void __fastcall RaUnitRemoveFromPendingList(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  int v6; // edx
  int v7; // ecx
  int v8; // r9d
  int v9; // [rsp+38h] [rbp-20h] BYREF
  __int64 v10; // [rsp+3Ch] [rbp-1Ch]
  int v11; // [rsp+44h] [rbp-14h]

  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_BYTE *)(v4 + 2) == 40 )
    v5 = *(_QWORD *)(v4 + 96);
  else
    v5 = *(_QWORD *)(v4 + 48);
  if ( (*(_BYTE *)(v5 + 16) & 2) != 0 )
  {
    StorRemoveEventQueue(*(_QWORD *)(a1 + 208), v5 + 48);
    if ( StorEtwLoggingEnabled )
    {
      v9 = 0;
      v10 = 0LL;
      v11 = 0;
      IoGetActivityIdIrp(a2, &v9);
      if ( (Microsoft_Windows_StorPortEnableBits & 0x800000) != 0 )
        Template_qcq(v7, v6, (unsigned int)&v9, v8, 4);
    }
    if ( RaidUnitCheckAndAcquirePoFx(a1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a1 + 1456) + 56LL), 0xFFFFFFFF) == 1 )
        RaidUnitDisablePendingTimer(a1);
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
    }
  }
}
