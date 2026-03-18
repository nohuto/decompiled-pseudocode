/*
 * XREFs of AlpcpChargePagedPoolQuota @ 0x14047C8C8
 * Callers:
 *     AlpcpSendMessage @ 0x140429460 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x14042BA70 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpCreateSecurityContext @ 0x14047C700 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateReserve @ 0x1404A723C (AlpcpCreateReserve.c)
 *     AlpcpCaptureMessageData @ 0x1404A7424 (AlpcpCaptureMessageData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpChargePagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rtt

  _m_prefetchw(&a1[2].Affinity.Bitmap[10]);
  while ( 1 )
  {
    v2 = a1[2].Affinity.Bitmap[10];
    if ( v2 < a2 )
      break;
    v3 = a1[2].Affinity.Bitmap[10];
    if ( v3 == _InterlockedCompareExchange64((volatile signed __int64 *)&a1[2].Affinity.Bitmap[10], v2 - a2, v2) )
      return 0LL;
  }
  return PsChargeProcessPagedPoolQuota(a1, a2);
}
