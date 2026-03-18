/*
 * XREFs of HvlQueryHypervisorProcessorNodeNumber @ 0x1401AE9F4
 * Callers:
 *     <none>
 * Callees:
 *     sub_1401AF268 @ 0x1401AF268 (sub_1401AF268.c)
 */

__int64 __fastcall HvlQueryHypervisorProcessorNodeNumber(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  _WORD *v4; // r9

  if ( (HvlpFlags & 4) == 0 )
    return 3221225473LL;
  if ( (unsigned int)a1 >= 0x200 )
    return 3221225473LL;
  v3 = sub_1401AF268(a1, a2, a3, a2);
  if ( !v3 )
    return 3221225473LL;
  *v4 = *(_WORD *)(v3 + 12);
  return 0LL;
}
