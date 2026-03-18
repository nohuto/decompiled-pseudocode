/*
 * XREFs of FindSpb @ 0x1C01EA734
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0050400 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     OffsetChildren @ 0x1C00EFED0 (OffsetChildren.c)
 *     RestoreSpb @ 0x1C01EA75C (RestoreSpb.c)
 *     xxxDrawDragRectEx @ 0x1C020BDC8 (xxxDrawDragRectEx.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall FindSpb(__int64 *a1)
{
  __int64 **result; // rax

  for ( result = *(__int64 ***)(gpDispInfo + 72LL);
        result && (result[1] != a1 || ((_DWORD)result[6] & 2) != 0);
        result = (__int64 **)*result )
  {
    ;
  }
  return result;
}
