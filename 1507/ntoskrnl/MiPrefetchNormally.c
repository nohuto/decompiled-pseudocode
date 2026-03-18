/*
 * XREFs of MiPrefetchNormally @ 0x1400552D0
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1400356F0 (MiPfPutPagesInTransition.c)
 *     MiPfPrepareReadList @ 0x14049E0C0 (MiPfPrepareReadList.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x140055320 (MiGetAvailablePagesBelowPriority.c)
 */

_BOOL8 __fastcall MiPrefetchNormally(__int64 *a1, unsigned int a2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  _BOOL8 result; // rax

  result = 0;
  if ( a1[696] >= 128 )
  {
    v3 = a1[717];
    v4 = a1[697];
    if ( v4 <= v3 && v3 - v4 >= 0x1000 && MiGetAvailablePagesBelowPriority(a1, a2) )
      return 1;
  }
  return result;
}
