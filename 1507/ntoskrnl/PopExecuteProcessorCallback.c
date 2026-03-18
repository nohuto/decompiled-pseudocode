/*
 * XREFs of PopExecuteProcessorCallback @ 0x1400139F0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 */

__int64 __fastcall PopExecuteProcessorCallback(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  int v5; // eax
  int v6; // edi

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = (*(__int64 (__fastcall **)(struct _KPRCB *, _QWORD, _QWORD))a2)(
         CurrentPrcb,
         *(_QWORD *)(a2 + 8),
         *(_QWORD *)(a2 + 16));
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( (PoDebug & 0xD0000) != 0 )
      DbgPrint("PopExecuteProcessorCallback() Cpu %u Failed! rc=0x%x\n", CurrentPrcb->Number, v5);
    *(_DWORD *)(a2 + 40) = v6;
  }
  return PopQueueTargetDpc(a1, a2);
}
