/*
 * XREFs of AlpcpChargePagedPoolQuota @ 0x14040C5B4
 * Callers:
 *     AlpcpCreateSecurityContext @ 0x14040C5E0 (AlpcpCreateSecurityContext.c)
 *     AlpcpSendMessage @ 0x140449750 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x14044B480 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpCaptureMessageData @ 0x1404A01B8 (AlpcpCaptureMessageData.c)
 *     AlpcpCreateReserve @ 0x1404A036C (AlpcpCreateReserve.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpChargePagedPoolQuota(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 1640));
  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 1640);
    if ( v2 < a2 )
      break;
    v3 = *(_QWORD *)(a1 + 1640);
    if ( v3 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1640), v2 - a2, v2) )
      return 0LL;
  }
  return PsChargeProcessPagedPoolQuota();
}
