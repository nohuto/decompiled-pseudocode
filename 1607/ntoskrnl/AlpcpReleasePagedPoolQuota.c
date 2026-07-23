/*
 * XREFs of AlpcpReleasePagedPoolQuota @ 0x1404ACBE0
 * Callers:
 *     AlpcpCreateSecurityContext @ 0x14040C5E0 (AlpcpCreateSecurityContext.c)
 *     AlpcMessageDestroyProcedure @ 0x140447850 (AlpcMessageDestroyProcedure.c)
 *     AlpcpCaptureMessageDataSafe @ 0x14044B480 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpCaptureMessageData @ 0x1404A01B8 (AlpcpCaptureMessageData.c)
 *     AlpcpCreateReserve @ 0x1404A036C (AlpcpCreateReserve.c)
 *     AlpcSecurityDestroyProcedure @ 0x1404ACB64 (AlpcSecurityDestroyProcedure.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall AlpcpReleasePagedPoolQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  unsigned __int64 result; // rax

  if ( a1 )
  {
    result = a2 + *(_QWORD *)(a1 + 1640);
    if ( result >= 0x1000 )
      return PsReturnProcessPagedPoolQuota(a1, a2);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1640), a2);
  }
  return result;
}
