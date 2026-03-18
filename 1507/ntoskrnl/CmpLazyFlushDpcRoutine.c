/*
 * XREFs of CmpLazyFlushDpcRoutine @ 0x14012C398
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiCustomAccessRoutine5 @ 0x14018CD50 (KiCustomAccessRoutine5.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __fastcall CmpLazyFlushDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  __int64 v4; // rbx
  volatile signed __int32 *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // [rsp+126h] [rbp-42h]
  __int64 v8; // [rsp+12Eh] [rbp-3Ah]
  char v9; // [rsp+156h] [rbp-12h]
  void *retaddr; // [rsp+168h] [rbp+0h]

  v4 = DeferredContext;
  if ( v4 >> 47 != -1 && v4 >> 47 != 0 )
  {
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    v9 = SystemArgument1;
    v8 = __ROL8__(DeferredContext, SystemArgument1);
    v7 = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine5(DeferredContext);
    v6 = __ROL8__(v7, v9);
    v4 = __ROR8__(v8, v9);
    *(_QWORD *)(v6 + 32) = v4;
    *(_BYTE *)v6 = 19;
  }
  v5 = (volatile signed __int32 *)(v4 + 152);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v4 + 152);
  }
  else if ( _interlockedbittestandset64(v5, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v4 + 152));
  }
  if ( CmpHoldLazyFlush )
    *(_QWORD *)(v4 + 168) = 0LL;
  else
    KeSetEvent((PRKEVENT)(v4 + 128), 0, 0);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v4 + 152, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v5, 0LL);
}
