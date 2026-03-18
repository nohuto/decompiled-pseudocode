/*
 * XREFs of ?PostWindowArrangementCheck@@YAXK@Z @ 0x1C012DF54
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall PostWindowArrangementCheck(int a1)
{
  if ( gSqmIsOptedIn
    && ((a1 & 1) != (dword_1C0321804 & 1) || (dword_1C0321804 & 1) != 0 && ((a1 ^ dword_1C0321804) & 0xFFFFFFFE) != 0) )
  {
    WinSqmSetDWORD(&SqmGlobalSessionGuid, 3527LL);
  }
}
