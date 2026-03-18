/*
 * XREFs of DpiSuspendAdapterDpc @ 0x1C0023510
 * Callers:
 *     <none>
 * Callees:
 *     DpiRequestDevicePowerState @ 0x1C00104C8 (DpiRequestDevicePowerState.c)
 */

void __fastcall DpiSuspendAdapterDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  _QWORD *v5; // rax

  v5 = (_QWORD *)WdLogNewEntry5_WdTrace(Dpc, DeferredContext, SystemArgument1, SystemArgument2);
  v5[3] = DeferredContext;
  v5[4] = *((int *)DeferredContext + 694);
  v5[5] = *((int *)DeferredContext + 695);
  WdLogEvent5_WdTrace(v5);
  if ( *((_DWORD *)DeferredContext + 694) != 4 && *((_DWORD *)DeferredContext + 695) == 1 )
    DpiRequestDevicePowerState(DeferredContext[3], 4, 1);
}
