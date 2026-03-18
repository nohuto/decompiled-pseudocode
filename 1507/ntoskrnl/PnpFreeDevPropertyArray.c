/*
 * XREFs of PnpFreeDevPropertyArray @ 0x14043E844
 * Callers:
 *     PiDqQueryEvaluateFilter @ 0x14043E724 (PiDqQueryEvaluateFilter.c)
 *     PiDqActionDataFree @ 0x14044266C (PiDqActionDataFree.c)
 *     PiSwCompleteCreate @ 0x14045B4C4 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x14045BC94 (PiSwIrpStartCreateWorker.c)
 *     PiSwProcessRemove @ 0x140539C30 (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x140539E04 (PiSwDeviceFree.c)
 *     PiSwInterfaceFree @ 0x140691080 (PiSwInterfaceFree.c)
 *     PiSwQueuedCreateInfoFree @ 0x1406912C0 (PiSwQueuedCreateInfoFree.c)
 * Callees:
 *     PnpFreeDevProperty @ 0x14043E89C (PnpFreeDevProperty.c)
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
