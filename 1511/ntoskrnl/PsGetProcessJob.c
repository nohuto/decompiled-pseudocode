/*
 * XREFs of PsGetProcessJob @ 0x1400E836C
 * Callers:
 *     AlpcpDispatchNewMessage @ 0x14042A040 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchConnectionRequest @ 0x14047FE08 (AlpcpDispatchConnectionRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessJob(__int64 a1)
{
  return *(_QWORD *)(a1 + 944);
}
