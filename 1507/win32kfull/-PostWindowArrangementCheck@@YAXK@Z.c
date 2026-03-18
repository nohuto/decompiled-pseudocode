/*
 * XREFs of ?PostWindowArrangementCheck@@YAXK@Z @ 0x1C0152208
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall PostWindowArrangementCheck(int a1)
{
  if ( gSqmIsOptedIn
    && ((a1 & 1) != (dword_1C031B11C & 1) || (dword_1C031B11C & 1) != 0 && ((a1 ^ dword_1C031B11C) & 0xFFFFFFFE) != 0) )
  {
    WinSqmSetDWORD(&SqmGlobalSessionGuid, 3527LL);
  }
}
