/*
 * XREFs of PsIsThreadInSilo @ 0x14008E2F0
 * Callers:
 *     PsLookupThreadByThreadId @ 0x140436060 (PsLookupThreadByThreadId.c)
 * Callees:
 *     PsIsSiloInSilo @ 0x1401F5850 (PsIsSiloInSilo.c)
 */

char __fastcall PsIsThreadInSilo(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  char v5; // r8

  if ( !a2 )
    return 1;
  v4 = *(_QWORD *)(a1 + 1976);
  if ( v4 == -3 )
    return PsIsProcessInSilo(*(_QWORD *)(a1 + 544), a2, 0LL);
  if ( v4 == a2 || (unsigned __int8)PsIsSiloInSilo(v4, a2, 0LL) )
    return 1;
  return v5;
}
