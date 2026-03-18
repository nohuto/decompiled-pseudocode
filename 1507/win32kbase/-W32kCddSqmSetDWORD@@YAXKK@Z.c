/*
 * XREFs of ?W32kCddSqmSetDWORD@@YAXKK@Z @ 0x1C00B5F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall W32kCddSqmSetDWORD(int a1, int a2)
{
  WinSqmSetDWORD(&SqmGlobalSessionGuid, a1, a2);
}
