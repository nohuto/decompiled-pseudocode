/*
 * XREFs of PsGetJobEffectiveFreezeCount @ 0x140171924
 * Callers:
 *     AlpcpDispatchNewMessage @ 0x14044B560 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchConnectionRequest @ 0x1404B2B84 (AlpcpDispatchConnectionRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetJobEffectiveFreezeCount(__int64 a1)
{
  return *(unsigned int *)(a1 + 856);
}
