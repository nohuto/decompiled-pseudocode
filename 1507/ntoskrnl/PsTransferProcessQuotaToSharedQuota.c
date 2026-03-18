/*
 * XREFs of PsTransferProcessQuotaToSharedQuota @ 0x14014C840
 * Callers:
 *     AlpcpCancelMessagesByRequestor @ 0x1404A41F0 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpCancelMessage @ 0x14052BBC4 (AlpcpCancelMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsTransferProcessQuotaToSharedQuota(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (PEPROCESS)a1 == PsInitialSystemProcess )
    return 1LL;
  result = *(_QWORD *)(a1 + 1040);
  if ( a2 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 792), -a2);
  _InterlockedIncrement((volatile signed __int32 *)(result + 512));
  return result;
}
