/*
 * XREFs of IovpCancelRoutine @ 0x1406BEFB8
 * Callers:
 *     IoCancelIrp @ 0x1400C97FC (IoCancelIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IovpCancelRoutine(__int64 a1, __int64 a2, __int64 (*a3)(void))
{
  if ( (MmVerifierData & 0x7A0000) != 0
    && a1
    && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL) + 64LL)
    && pXdvDRIVER_CANCEL )
  {
    return pXdvDRIVER_CANCEL();
  }
  else
  {
    return a3();
  }
}
