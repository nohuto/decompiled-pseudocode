/*
 * XREFs of RtlULongAdd @ 0x1C000FBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongAdd(ULONG ulAugend, ULONG ulAddend, ULONG *pulResult)
{
  if ( ulAugend + ulAddend < ulAugend )
  {
    *pulResult = -1;
    return -1073741675;
  }
  else
  {
    *pulResult = ulAugend + ulAddend;
    return 0;
  }
}
