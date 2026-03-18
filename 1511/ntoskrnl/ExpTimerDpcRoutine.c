/*
 * XREFs of ExpTimerDpcRoutine @ 0x1400ED4E0
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueApc @ 0x1400313A0 (KeInsertQueueApc.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     KeSetCoalescableTimer @ 0x140091250 (KeSetCoalescableTimer.c)
 *     _local_unwind @ 0x140143D90 (_local_unwind.c)
 *     KiCustomAccessRoutine0 @ 0x14015E210 (KiCustomAccessRoutine0.c)
 */

void __fastcall ExpTimerDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  int *v4; // rbx
  struct _KDPC *v5; // rdi
  int v6; // esi
  __int64 v7; // [rsp+0h] [rbp-1A8h] BYREF
  int v8; // [rsp+34h] [rbp-174h]
  __int64 v9; // [rsp+101h] [rbp-A7h]
  __int64 v10; // [rsp+149h] [rbp-5Fh]
  unsigned __int64 v11; // [rsp+151h] [rbp-57h]
  __int64 *v12; // [rsp+178h] [rbp-30h]

  v12 = &v7;
  v4 = (int *)DeferredContext;
  v5 = Dpc;
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
    v5 = (struct _KDPC *)__ROL8__(v10, v11);
    v4 = (int *)__ROR8__(v9, v11);
    v5->DeferredContext = v4;
    v5->Type = 19;
  }
  v6 = 0;
  KxAcquireSpinLock((PKSPIN_LOCK)v4 + 8);
  if ( (v4[61] & 1) != 0 )
  {
    v6 = (unsigned __int8)KeInsertQueueApc(
                            (__int64)(v4 + 18),
                            MEMORY[0xFFFFF78000000014],
                            HIDWORD(MEMORY[0xFFFFF78000000014]),
                            0) == 0;
    if ( v4[60] )
    {
      if ( --v6 < 0 )
      {
        ObfReferenceObjectWithTag(v4, 0x746C6644u);
        v6 = 0;
      }
      if ( (v4[61] & 2) == 0 && KeSetCoalescableTimer((PKTIMER)v4, (LARGE_INTEGER)(-10000LL * v4[60]), 0, v4[76], v5) )
        ++v6;
    }
  }
  KxReleaseSpinLock((PKSPIN_LOCK)v4 + 8);
  if ( v6 )
    ObfDereferenceObjectWithTag(v4, 0x746C6644u);
}
