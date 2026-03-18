/*
 * XREFs of AlpcpReleasePagedPoolQuota @ 0x1403F4A84
 * Callers:
 *     AlpcSecurityDestroyProcedure @ 0x1403F4A08 (AlpcSecurityDestroyProcedure.c)
 *     AlpcMessageDestroyProcedure @ 0x140426FA0 (AlpcMessageDestroyProcedure.c)
 *     AlpcpCaptureMessageDataSafe @ 0x14042BA70 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpCreateSecurityContext @ 0x14047C700 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateReserve @ 0x1404A723C (AlpcpCreateReserve.c)
 *     AlpcpCaptureMessageData @ 0x1404A7424 (AlpcpCaptureMessageData.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall AlpcpReleasePagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  if ( a1 )
  {
    result = a2 + a1[2].Affinity.Bitmap[10];
    if ( result >= 0x1000 )
      return PsReturnProcessPagedPoolQuota(a1, a2);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)&a1[2].Affinity.Bitmap[10], a2);
  }
  return result;
}
