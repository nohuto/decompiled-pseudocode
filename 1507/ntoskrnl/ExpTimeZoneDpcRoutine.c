/*
 * XREFs of ExpTimeZoneDpcRoutine @ 0x140139CAC
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     _local_unwind @ 0x140171E10 (_local_unwind.c)
 *     KiCustomAccessRoutine8 @ 0x14018D9E0 (KiCustomAccessRoutine8.c)
 */

void __fastcall ExpTimeZoneDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  __int64 v4; // r8
  _DWORD v5[24]; // [rsp+0h] [rbp-158h] BYREF
  __int64 v6; // [rsp+81h] [rbp-D7h]
  __int64 v7; // [rsp+B9h] [rbp-9Fh]
  unsigned __int64 v8; // [rsp+C9h] [rbp-8Fh]
  _DWORD *v9; // [rsp+118h] [rbp-40h]

  v9 = v5;
  if ( DeferredContext >> 47 != -1 && DeferredContext >> 47 != 0 )
  {
    v5[8] = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    v8 = SystemArgument1;
    v7 = __ROL8__(DeferredContext, SystemArgument1);
    v6 = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine8(DeferredContext);
    v4 = __ROL8__(v6, v8);
    DeferredContext = __ROR8__(v7, v8);
    *(_QWORD *)(v4 + 32) = DeferredContext;
    *(_BYTE *)v4 = 19;
  }
  if ( _InterlockedIncrement((volatile signed __int32 *)DeferredContext) == 1 )
    ExQueueWorkItem(&ExpTimeZoneWorkItem, DelayedWorkQueue);
}
