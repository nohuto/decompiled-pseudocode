/*
 * XREFs of BvgaGetResourceAddress @ 0x1401C406C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BvgaGetResourceAddress(unsigned int a1)
{
  if ( a1 > ResourceCount )
    return 0LL;
  else
    return ResourceList[a1 - 1];
}
