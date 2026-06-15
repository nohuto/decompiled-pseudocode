/*
 * XREFs of ?OnConnectedToPump@CCrossProcessBaseServerEndpoint@@UEAAJ_J0@Z @ 0x140017AD0
 * Callers:
 *     ?OnConnectedToPump@CPipeInstance@@QEAAX_J0@Z @ 0x14000C240 (-OnConnectedToPump@CPipeInstance@@QEAAX_J0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossProcessBaseServerEndpoint::OnConnectedToPump(
        CCrossProcessBaseServerEndpoint *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax

  v3 = *((_QWORD *)this - 39);
  *((_QWORD *)this + 5) = a2;
  *((_QWORD *)this + 6) = a3;
  _InterlockedExchange64((volatile __int64 *)(v3 + 160), a3 + a2);
  return 0LL;
}
