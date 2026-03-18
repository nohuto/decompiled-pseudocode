/*
 * XREFs of AlpcpReleasePagedPoolQuota @ 0x1404C0EB0
 * Callers:
 *     AlpcpCreateSecurityContext @ 0x14040D720 (AlpcpCreateSecurityContext.c)
 *     AlpcMessageDestroyProcedure @ 0x140448980 (AlpcMessageDestroyProcedure.c)
 *     AlpcpCaptureMessageDataSafe @ 0x14044C5B0 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpCaptureMessageData @ 0x1404B5DD8 (AlpcpCaptureMessageData.c)
 *     AlpcpCreateReserve @ 0x1404B5F8C (AlpcpCreateReserve.c)
 *     AlpcSecurityDestroyProcedure @ 0x1404C0E34 (AlpcSecurityDestroyProcedure.c)
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
