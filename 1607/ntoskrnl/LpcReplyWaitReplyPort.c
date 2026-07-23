/*
 * XREFs of LpcReplyWaitReplyPort @ 0x140654878
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LpcReplyWaitReplyPort(int a1, char a2, __int64 a3)
{
  return LpcpReplyWaitReplyPort(a1, a3, 0, a2);
}
