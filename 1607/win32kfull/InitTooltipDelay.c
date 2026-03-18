/*
 * XREFs of InitTooltipDelay @ 0x1C011F904
 * Callers:
 *     xxxTooltipWndProc @ 0x1C011F2F0 (xxxTooltipWndProc.c)
 *     _SetDoubleClickTime @ 0x1C011F860 (_SetDoubleClickTime.c)
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
    *(_DWORD *)(a1 + 360) = 3 * gdtDblClk;
    result = (unsigned int)(8 * v1);
    *(_DWORD *)(a1 + 364) = result;
  }
  return result;
}
