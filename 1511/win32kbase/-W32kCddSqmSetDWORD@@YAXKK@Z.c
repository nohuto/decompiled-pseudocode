/*
 * XREFs of ?W32kCddSqmSetDWORD@@YAXKK@Z @ 0x1C00B86E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall W32kCddSqmSetDWORD(unsigned int a1, unsigned int a2)
{
  WinSqmSetDWORD(&SqmGlobalSessionGuid, a1, a2);
}
