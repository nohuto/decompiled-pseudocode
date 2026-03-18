/*
 * XREFs of PnpFreeDevPropertyArray @ 0x140441B8C
 * Callers:
 *     PiDqQueryEvaluateFilter @ 0x140441A6C (PiDqQueryEvaluateFilter.c)
 *     PiDqActionDataFree @ 0x14045E9AC (PiDqActionDataFree.c)
 *     PiSwProcessRemove @ 0x140494C74 (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x140494D34 (PiSwDeviceFree.c)
 *     PiSwCompleteCreate @ 0x1404E4050 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1404E42CC (PiSwIrpStartCreateWorker.c)
 *     PiSwInterfaceFree @ 0x14061130C (PiSwInterfaceFree.c)
 *     PiSwQueuedCreateInfoFree @ 0x1406114FC (PiSwQueuedCreateInfoFree.c)
 * Callees:
 *     PnpFreeDevProperty @ 0x140441BE4 (PnpFreeDevProperty.c)
 */

void __fastcall PnpFreeDevPropertyArray(unsigned int a1, char *a2, ULONG a3)
{
  char *v5; // rbx
  __int64 v6; // rbp

  if ( a1 )
  {
    v5 = a2;
    v6 = a1;
    do
    {
      PnpFreeDevProperty(v5, a3);
      v5 += 48;
      --v6;
    }
    while ( v6 );
  }
  ExFreePoolWithTag(a2, a3);
}
