/*
 * XREFs of ?W32kCddSqmIncrementDWORD@@YAXKK@Z @ 0x1C00B5F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall W32kCddSqmIncrementDWORD(unsigned int a1, unsigned int a2)
{
  WinSqmIncrementDWORD(&SqmGlobalSessionGuid, a1, a2);
}
