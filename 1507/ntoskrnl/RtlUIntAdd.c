/*
 * XREFs of RtlUIntAdd @ 0x1400F4D30
 * Callers:
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUIntAdd(UINT uAugend, UINT uAddend, UINT *puResult)
{
  if ( uAugend + uAddend < uAugend )
  {
    *puResult = -1;
    return -1073741675;
  }
  else
  {
    *puResult = uAugend + uAddend;
    return 0;
  }
}
