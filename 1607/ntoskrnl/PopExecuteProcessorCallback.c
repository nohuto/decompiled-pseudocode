/*
 * XREFs of PopExecuteProcessorCallback @ 0x14000D190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PopExecuteProcessorCallback(ULONG_PTR a1, __int64 a2)
{
  int v4; // eax

  v4 = (*(__int64 (__fastcall **)(struct _KPRCB *, _QWORD, _QWORD))a2)(
         KeGetCurrentPrcb(),
         *(_QWORD *)(a2 + 8),
         *(_QWORD *)(a2 + 16));
  if ( v4 < 0 )
    *(_DWORD *)(a2 + 40) = v4;
  return PopQueueTargetDpc(a1);
}
