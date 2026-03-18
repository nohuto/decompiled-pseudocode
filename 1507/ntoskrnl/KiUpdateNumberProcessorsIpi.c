/*
 * XREFs of KiUpdateNumberProcessorsIpi @ 0x140401B08
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateProcessorCount @ 0x1403FA6B8 (KiUpdateProcessorCount.c)
 */

ULONG_PTR __fastcall KiUpdateNumberProcessorsIpi(ULONG_PTR Argument)
{
  if ( *(_DWORD *)(Argument + 4) == KeGetPcr()->Prcb.Number )
  {
    while ( *(_DWORD *)(Argument + 8) )
      _mm_pause();
    KiUpdateProcessorCount();
    *(_DWORD *)(Argument + 16) = 1;
    while ( *(_DWORD *)(Argument + 12) )
      _mm_pause();
  }
  else
  {
    _InterlockedDecrement((volatile signed __int32 *)(Argument + 8));
    while ( !*(_DWORD *)(Argument + 16) )
      _mm_pause();
    _InterlockedDecrement((volatile signed __int32 *)(Argument + 12));
  }
  return 0LL;
}
