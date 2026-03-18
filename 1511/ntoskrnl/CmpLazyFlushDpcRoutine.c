/*
 * XREFs of CmpLazyFlushDpcRoutine @ 0x1400EF370
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiCustomAccessRoutine5 @ 0x14015D400 (KiCustomAccessRoutine5.c)
 */

void __fastcall CmpLazyFlushDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // [rsp+126h] [rbp-42h]
  __int64 v7; // [rsp+12Eh] [rbp-3Ah]
  char v8; // [rsp+156h] [rbp-12h]

  v4 = DeferredContext;
  if ( v4 >> 47 != -1 && v4 >> 47 != 0 )
  {
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    v8 = SystemArgument1;
    v7 = __ROL8__(DeferredContext, SystemArgument1);
    v6 = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine5(DeferredContext);
    v5 = __ROL8__(v6, v8);
    v4 = __ROR8__(v7, v8);
    *(_QWORD *)(v5 + 32) = v4;
    *(_BYTE *)v5 = 19;
  }
  KxAcquireSpinLock((PKSPIN_LOCK)(v4 + 152));
  if ( CmpHoldLazyFlush )
    *(_QWORD *)(v4 + 168) = 0LL;
  else
    KeSetEvent((PRKEVENT)(v4 + 128), 0, 0);
  KxReleaseSpinLock((PKSPIN_LOCK)(v4 + 152));
}
