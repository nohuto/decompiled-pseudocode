/*
 * XREFs of ?W32kCddSqmAddToStream@@YAXKKPEAX@Z @ 0x1C00B86A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall W32kCddSqmAddToStream(int a1, unsigned int a2, __int64 a3)
{
  WinSqmAddToStream(&SqmGlobalSessionGuid, a1, a2, a3);
}
