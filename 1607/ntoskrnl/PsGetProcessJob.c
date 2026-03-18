/*
 * XREFs of PsGetProcessJob @ 0x1400A7C94
 * Callers:
 *     AlpcpDispatchNewMessage @ 0x14044B560 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchConnectionRequest @ 0x1404B2B84 (AlpcpDispatchConnectionRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessJob(__int64 a1)
{
  return *(_QWORD *)(a1 + 944);
}
