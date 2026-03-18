/*
 * XREFs of ACPIBusIrpSetLock @ 0x1C0079790
 * Callers:
 *     <none>
 * Callees:
 *     ACPIIrpInvokeDispatchRoutine @ 0x1C007164C (ACPIIrpInvokeDispatchRoutine.c)
 */

__int64 __fastcall ACPIBusIrpSetLock(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  return ACPIIrpInvokeDispatchRoutine(
           a1,
           a2,
           a3,
           (__int64 (__fastcall *)(ULONG_PTR, IRP *, _QWORD, _QWORD))ACPIBusAndFilterIrpSetLock,
           1);
}
