/*
 * XREFs of PsGetProcessJob @ 0x140124AE4
 * Callers:
 *     AlpcpDispatchNewMessage @ 0x14047E410 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessJob(__int64 a1)
{
  return *(_QWORD *)(a1 + 944);
}
