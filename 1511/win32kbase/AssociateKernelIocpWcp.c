/*
 * XREFs of AssociateKernelIocpWcp @ 0x1C0078C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AssociateKernelIocpWcp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ZwAssociateWaitCompletionPacket(a1, a2, a3, a4);
}
