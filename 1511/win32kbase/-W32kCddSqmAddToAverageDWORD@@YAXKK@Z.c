/*
 * XREFs of ?W32kCddSqmAddToAverageDWORD@@YAXKK@Z @ 0x1C00B8680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall W32kCddSqmAddToAverageDWORD(int a1, int a2)
{
  WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, a1, a2);
}
