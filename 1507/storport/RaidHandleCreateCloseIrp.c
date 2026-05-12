/*
 * XREFs of RaidHandleCreateCloseIrp @ 0x1C0005ADC
 * Callers:
 *     RaUnitCreateIrp @ 0x1C0005AD4 (RaUnitCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1C004C610 (RaDriverCloseIrp.c)
 *     RaDriverCreateIrp @ 0x1C004C6B0 (RaDriverCreateIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidHandleCreateCloseIrp(int a1, IRP *a2)
{
  unsigned int v2; // r8d

  if ( (unsigned int)(a1 - 6) <= 1 )
  {
    a2->IoStatus.Information = 0LL;
    v2 = -1073741738;
  }
  else
  {
    v2 = 0;
  }
  return RaidCompleteRequestEx(a2, 0, v2);
}
