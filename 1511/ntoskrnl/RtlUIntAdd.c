/*
 * XREFs of RtlUIntAdd @ 0x14008FE90
 * Callers:
 *     ExpGetProcessInformation @ 0x140409F60 (ExpGetProcessInformation.c)
 *     sub_1404667A0 @ 0x1404667A0 (sub_1404667A0.c)
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
