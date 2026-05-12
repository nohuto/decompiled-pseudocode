/*
 * XREFs of RaidpLinkDown @ 0x1C002CF68
 * Callers:
 *     StorPortNotification @ 0x1C0002580 (StorPortNotification.c)
 * Callees:
 *     Template_pqq @ 0x1C002A7D0 (Template_pqq.c)
 *     StorPortPause @ 0x1C002DD50 (StorPortPause.c)
 */

__int64 __fastcall RaidpLinkDown(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-18h]
  int v4; // [rsp+28h] [rbp-10h]

  if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 2152);
    v3 = *(_DWORD *)(a1 + 56);
    Template_pqq(a1, &EventLinkDown, 0LL, *(_QWORD *)(a1 + 536) + 16LL, v3, v4);
  }
  result = StorPortPause(*(_QWORD *)(a1 + 536) + 16LL);
  if ( (_BYTE)result )
    _InterlockedExchange((volatile __int32 *)(a1 + 2156), 0);
  return result;
}
