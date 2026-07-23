/*
 * XREFs of PsGetProcessJob @ 0x1400A620C
 * Callers:
 *     AlpcpDispatchNewMessage @ 0x14044A430 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchConnectionRequest @ 0x14049CF64 (AlpcpDispatchConnectionRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessJob(__int64 a1)
{
  return *(_QWORD *)(a1 + 944);
}
