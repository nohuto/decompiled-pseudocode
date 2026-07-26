/*
 * XREFs of PplDestroyLookasideList @ 0x1C0073D38
 * Callers:
 *     ndisDereferenceDmaAdapter @ 0x1C005F880 (ndisDereferenceDmaAdapter.c)
 *     ndisMInitializeScatterGatherDma @ 0x1C00B1620 (ndisMInitializeScatterGatherDma.c)
 * Callees:
 *     PplpFreeOneLookasideList @ 0x1C0073F70 (PplpFreeOneLookasideList.c)
 */

void __fastcall PplDestroyLookasideList(_QWORD *P)
{
  char *v1; // r14
  signed int MaximumProcessorCount; // eax
  int v4; // ebx
  char *v5; // rdi

  if ( P )
  {
    v1 = (char *)P[4];
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    v4 = MaximumProcessorCount;
    if ( MaximumProcessorCount >= 0 )
    {
      v5 = &v1[8 * MaximumProcessorCount];
      do
      {
        if ( *(_QWORD *)v5 )
        {
          PplpFreeOneLookasideList(*(_QWORD *)v5, 1650738254LL);
          *(_QWORD *)v5 = 0LL;
        }
        v5 -= 8;
        --v4;
      }
      while ( v4 >= 0 );
    }
    ExFreePoolWithTag(v1, 0x6264444Eu);
    ExFreePoolWithTag(P, 0x6264444Eu);
  }
}
