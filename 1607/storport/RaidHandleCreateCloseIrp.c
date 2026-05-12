/*
 * XREFs of RaidHandleCreateCloseIrp @ 0x1C00095EC
 * Callers:
 *     RaUnitCreateIrp @ 0x1C00095E4 (RaUnitCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1C0057620 (RaDriverCloseIrp.c)
 *     RaDriverCreateIrp @ 0x1C00576C0 (RaDriverCreateIrp.c)
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
