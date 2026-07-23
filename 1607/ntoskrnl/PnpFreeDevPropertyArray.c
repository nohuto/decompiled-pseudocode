/*
 * XREFs of PnpFreeDevPropertyArray @ 0x1404E56C0
 * Callers:
 *     PiSwProcessRemove @ 0x140483A18 (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x140483DD0 (PiSwDeviceFree.c)
 *     PiSwCompleteCreate @ 0x140487650 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1404880D0 (PiSwIrpStartCreateWorker.c)
 *     PiDqActionDataFree @ 0x14048C44C (PiDqActionDataFree.c)
 *     PiDqQueryEvaluateFilter @ 0x1404E55A4 (PiDqQueryEvaluateFilter.c)
 *     PiSwInterfaceFree @ 0x1406457FC (PiSwInterfaceFree.c)
 *     PiSwQueuedCreateInfoFree @ 0x1406459FC (PiSwQueuedCreateInfoFree.c)
 * Callees:
 *     PnpFreeDevProperty @ 0x1404E5718 (PnpFreeDevProperty.c)
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
