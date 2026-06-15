/*
 * XREFs of ?OnDisconnectedFromPump@CCrossProcessBaseServerEndpoint@@UEAAJXZ @ 0x1400170A0
 * Callers:
 *     ?OnDisconnectedFromPump@CPipeInstance@@QEAAXXZ @ 0x140007AD0 (-OnDisconnectedFromPump@CPipeInstance@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossProcessBaseServerEndpoint::OnDisconnectedFromPump(CCrossProcessBaseServerEndpoint *this)
{
  __int64 v1; // rdx
  __int64 v2; // rax

  _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 39) + 156LL), 0xFFFFFFFD);
  _InterlockedExchange((volatile __int32 *)this - 60, 1);
  v1 = *((_QWORD *)this - 39);
  v2 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 6) = 0LL;
  _InterlockedExchange64((volatile __int64 *)(v1 + 160), v2);
  return 0LL;
}
