/*
 * XREFs of ExpTimerDpcRoutine @ 0x140001410
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     KeInsertQueueApc @ 0x1400C7E70 (KeInsertQueueApc.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     KeSetCoalescableTimer @ 0x1400EDA80 (KeSetCoalescableTimer.c)
 *     _local_unwind @ 0x14014D720 (_local_unwind.c)
 *     KiCustomAccessRoutine0 @ 0x1401693E0 (KiCustomAccessRoutine0.c)
 */

void __fastcall ExpTimerDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  int v6; // esi
  __int64 v7; // [rsp+0h] [rbp-1A8h] BYREF
  int v8; // [rsp+34h] [rbp-174h]
  __int64 v9; // [rsp+101h] [rbp-A7h]
  __int64 v10; // [rsp+149h] [rbp-5Fh]
  unsigned __int64 v11; // [rsp+151h] [rbp-57h]
  __int64 *v12; // [rsp+170h] [rbp-38h]

  v12 = &v7;
  if ( (unsigned __int64)((DeferredContext >> 47) + 1) > 1 )
  {
    v8 = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    v11 = SystemArgument1;
    v9 = __ROL8__(DeferredContext, SystemArgument1);
    v10 = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine0(DeferredContext);
  }
  v6 = 0;
  KxAcquireSpinLock((PKSPIN_LOCK)(DeferredContext + 64));
  if ( (*(_BYTE *)(DeferredContext + 244) & 1) != 0 )
  {
    v6 = (unsigned __int8)KeInsertQueueApc(
                            DeferredContext + 72,
                            MEMORY[0xFFFFF78000000014],
                            HIDWORD(MEMORY[0xFFFFF78000000014]),
                            0LL) == 0;
    if ( *(_DWORD *)(DeferredContext + 240) )
    {
      if ( --v6 < 0 )
      {
        ObfReferenceObjectWithTag((PVOID)DeferredContext, 0x746C6644u);
        v6 = 0;
      }
      if ( (*(_BYTE *)(DeferredContext + 244) & 2) == 0
        && KeSetCoalescableTimer(
             (PKTIMER)DeferredContext,
             (LARGE_INTEGER)(-10000LL * *(int *)(DeferredContext + 240)),
             0,
             *(_DWORD *)(DeferredContext + 304),
             Dpc) )
      {
        ++v6;
      }
    }
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(DeferredContext + 64));
  if ( v6 )
    ObfDereferenceObjectWithTag((PVOID)DeferredContext, 0x746C6644u);
}
