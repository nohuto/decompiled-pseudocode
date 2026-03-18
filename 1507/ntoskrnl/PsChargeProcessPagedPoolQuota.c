/*
 * XREFs of PsChargeProcessPagedPoolQuota @ 0x140524018
 * Callers:
 *     AlpcpCreateSecurityContext @ 0x140475880 (AlpcpCreateSecurityContext.c)
 *     AlpcpSendMessage @ 0x14047CF50 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x14049CC90 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpCreateReserve @ 0x140522DD0 (AlpcpCreateReserve.c)
 *     AlpcpCaptureMessageData @ 0x140523318 (AlpcpCaptureMessageData.c)
 *     ExpAllocateHandleTable @ 0x140523D44 (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x140523FC0 (ExpAllocateTablePagedPoolNoZero.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsChargeProcessPagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].ActiveProcessors.Bitmap[4], (__int64)a1, 1, a2);
}
