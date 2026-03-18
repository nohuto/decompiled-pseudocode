/*
 * XREFs of InitTooltipDelay @ 0x1C00C7594
 * Callers:
 *     xxxTooltipWndProc @ 0x1C00C6150 (xxxTooltipWndProc.c)
 *     _SetDoubleClickTime @ 0x1C00C74F0 (_SetDoubleClickTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitTooltipDelay(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  if ( a1 )
  {
    v1 = gdtDblClk;
    *(_DWORD *)(a1 + 376) = 3 * gdtDblClk;
    result = (unsigned int)(8 * v1);
    *(_DWORD *)(a1 + 380) = result;
  }
  return result;
}
