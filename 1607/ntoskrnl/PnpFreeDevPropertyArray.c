/*
 * XREFs of PnpFreeDevPropertyArray @ 0x140502730
 * Callers:
 *     PiDqActionDataFree @ 0x14048BEE8 (PiDqActionDataFree.c)
 *     PiSwProcessRemove @ 0x1404C36B0 (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x1404C3B98 (PiSwDeviceFree.c)
 *     PiSwCompleteCreate @ 0x1404C6A1C (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1404C6CB4 (PiSwIrpStartCreateWorker.c)
 *     PiDqQueryEvaluateFilter @ 0x140502614 (PiDqQueryEvaluateFilter.c)
 *     PiSwInterfaceFree @ 0x140645718 (PiSwInterfaceFree.c)
 *     PiSwQueuedCreateInfoFree @ 0x140645918 (PiSwQueuedCreateInfoFree.c)
 * Callees:
 *     PnpFreeDevProperty @ 0x140502788 (PnpFreeDevProperty.c)
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
