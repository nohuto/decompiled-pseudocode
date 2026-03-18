/*
 * XREFs of PsIsSiloInSilo @ 0x1401F5850
 * Callers:
 *     PsIsThreadInSilo @ 0x14008E2F0 (PsIsThreadInSilo.c)
 *     PsIsProcessInSilo @ 0x14009E1A0 (PsIsProcessInSilo.c)
 *     PsRootSiloInformation @ 0x14063FBD4 (PsRootSiloInformation.c)
 * Callees:
 *     <none>
 */

char __fastcall PsIsSiloInSilo(__int64 a1, __int64 a2)
{
  if ( !a2 )
    return 1;
  while ( a1 )
  {
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 1248) + 128LL);
    if ( a1 == a2 )
      return 1;
  }
  return 0;
}
