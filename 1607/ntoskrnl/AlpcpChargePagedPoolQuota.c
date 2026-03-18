/*
 * XREFs of AlpcpChargePagedPoolQuota @ 0x14040D6F4
 * Callers:
 *     AlpcpCreateSecurityContext @ 0x14040D720 (AlpcpCreateSecurityContext.c)
 *     AlpcpSendMessage @ 0x14044A880 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x14044C5B0 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpCaptureMessageData @ 0x1404B5DD8 (AlpcpCaptureMessageData.c)
 *     AlpcpCreateReserve @ 0x1404B5F8C (AlpcpCreateReserve.c)
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
