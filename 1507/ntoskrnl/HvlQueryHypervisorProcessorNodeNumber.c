/*
 * XREFs of HvlQueryHypervisorProcessorNodeNumber @ 0x1401E591C
 * Callers:
 *     <none>
 * Callees:
 *     sub_1401E65D4 @ 0x1401E65D4 (sub_1401E65D4.c)
 */

__int64 __fastcall HvlQueryHypervisorProcessorNodeNumber(__int64 a1)
{
  __int64 v1; // rax
  _WORD *v2; // r9

  if ( (HvlpFlags & 4) == 0 )
    return 3221225473LL;
  if ( (unsigned int)a1 >= 0x200 )
    return 3221225473LL;
  v1 = sub_1401E65D4(a1);
  if ( !v1 )
    return 3221225473LL;
  *v2 = *(_WORD *)(v1 + 12);
  return 0LL;
}
