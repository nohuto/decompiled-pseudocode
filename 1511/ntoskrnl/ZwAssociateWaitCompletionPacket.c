/*
 * XREFs of ZwAssociateWaitCompletionPacket @ 0x1401517A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAssociateWaitCompletionPacket(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
