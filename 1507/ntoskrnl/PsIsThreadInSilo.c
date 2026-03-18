/*
 * XREFs of PsIsThreadInSilo @ 0x140243ECC
 * Callers:
 *     PsOpenThread @ 0x140432090 (PsOpenThread.c)
 *     PsLookupThreadByThreadId @ 0x1405115F0 (PsLookupThreadByThreadId.c)
 * Callees:
 *     PsIsSiloInSilo @ 0x140243EB0 (PsIsSiloInSilo.c)
 */

bool __fastcall PsIsThreadInSilo(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  char v5; // r8

  if ( !a2 )
    return 1;
  v3 = *(_QWORD *)(a1 + 1976);
  if ( v3 == -3 )
    return PsIsProcessInSilo(*(struct _KPROCESS **)(a1 + 544), a2);
  if ( v3 == a2 || PsIsSiloInSilo(v3, a2) )
    return 1;
  return v5;
}
