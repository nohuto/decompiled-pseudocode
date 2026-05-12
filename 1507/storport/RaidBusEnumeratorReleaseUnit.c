/*
 * XREFs of RaidBusEnumeratorReleaseUnit @ 0x1C000C394
 * Callers:
 *     RaidBusEnumeratorVisitUnit @ 0x1C000BDD8 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x1C000BFC4 (RaidBusEnumeratorProbeLunZero.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C000C160 (RaidBusEnumeratorGetLunList.c)
 * Callees:
 *     RaidAdapterRemoveUnit @ 0x1C000C3DC (RaidAdapterRemoveUnit.c)
 */

__int64 __fastcall RaidBusEnumeratorReleaseUnit(_QWORD *a1, __int64 a2)
{
  struct _KTIMER *v3; // rdi
  __int64 result; // rax

  v3 = *(struct _KTIMER **)(a2 + 8);
  if ( *(_BYTE *)(a2 + 84) )
  {
    RaidAdapterRemoveUnit(*a1, *(_QWORD *)(a2 + 8));
    KeCancelTimer(v3 + 12);
    result = *(_QWORD *)(a2 + 8);
    *(_DWORD *)(result + 428) = 0;
  }
  return result;
}
