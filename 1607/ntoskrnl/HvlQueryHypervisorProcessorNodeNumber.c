/*
 * XREFs of HvlQueryHypervisorProcessorNodeNumber @ 0x1401BADF0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpGetLpcbByLpIndex @ 0x1401BB874 (HvlpGetLpcbByLpIndex.c)
 */

__int64 __fastcall HvlQueryHypervisorProcessorNodeNumber(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 LpcbByLpIndex; // rax
  _WORD *v4; // r9

  if ( (HvlpFlags & 2) == 0 )
    return 3221225473LL;
  if ( (unsigned int)a1 >= 0x200 )
    return 3221225473LL;
  LpcbByLpIndex = HvlpGetLpcbByLpIndex(a1, a2, a3, a2);
  if ( !LpcbByLpIndex )
    return 3221225473LL;
  *v4 = *(_WORD *)(LpcbByLpIndex + 12);
  return 0LL;
}
