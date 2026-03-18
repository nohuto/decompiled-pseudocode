/*
 * XREFs of MiPrefetchNormally @ 0x14007C9E0
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1400FCDE0 (MiPfPutPagesInTransition.c)
 *     MiPfPrepareReadList @ 0x14042D190 (MiPfPrepareReadList.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x14007CA30 (MiGetAvailablePagesBelowPriority.c)
 */

_BOOL8 __fastcall MiPrefetchNormally(__int64 *a1, unsigned int a2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  _BOOL8 result; // rax

  result = 0;
  if ( a1[744] >= 160 )
  {
    v3 = a1[765];
    v4 = a1[745];
    if ( v4 <= v3 && v3 - v4 >= 0x1080 && MiGetAvailablePagesBelowPriority(a1, a2) )
      return 1;
  }
  return result;
}
