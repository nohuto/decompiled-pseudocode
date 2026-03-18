/*
 * XREFs of ACPIBusIrpQueryCapabilities @ 0x1C008E740
 * Callers:
 *     <none>
 * Callees:
 *     ACPIIrpInvokeDispatchRoutine @ 0x1C008E75C (ACPIIrpInvokeDispatchRoutine.c)
 */

__int64 __fastcall ACPIBusIrpQueryCapabilities(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // [rsp+20h] [rbp-18h]

  v4 = 1;
  return ACPIIrpInvokeDispatchRoutine(a1, a2, a3, ACPIBusAndFilterIrpQueryCapabilities, v4);
}
