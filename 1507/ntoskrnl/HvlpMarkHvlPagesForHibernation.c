/*
 * XREFs of HvlpMarkHvlPagesForHibernation @ 0x1401EDA0C
 * Callers:
 *     HvlMarkHiberPhase @ 0x14014CE38 (HvlMarkHiberPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x14014D3AC (PoSetHiberRange.c)
 */

void HvlpMarkHvlPagesForHibernation()
{
  unsigned int v0; // esi
  unsigned int v1; // edi
  __int64 *v2; // rbx
  __int64 v3; // r8

  PoSetHiberRange(0LL, 0x10000u, HvlLpReadMultipleMsr, 0LL, 0x636C7648u);
  PoSetHiberRange(0LL, 0x10000u, &HvlpFlags, 0LL, 0x646C7648u);
  v0 = KeNumberProcessors_0;
  v1 = 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v2 = KiProcessorBlock;
    do
    {
      if ( v1 >= (unsigned int)KeNumberProcessors_0 )
        v3 = 0LL;
      else
        v3 = *v2;
      PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(v3 + 24576), 0x6000uLL, 0x646C7648u);
      ++v1;
      ++v2;
    }
    while ( v1 < v0 );
  }
}
