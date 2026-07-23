/*
 * XREFs of PspIsSiloInSilo @ 0x14067EA9C
 * Callers:
 *     PsIsThreadInSilo @ 0x140013180 (PsIsThreadInSilo.c)
 *     PsIsProcessInSilo @ 0x1400131FC (PsIsProcessInSilo.c)
 *     PsRootSiloInformation @ 0x14067E15C (PsRootSiloInformation.c)
 * Callees:
 *     <none>
 */

char __fastcall PspIsSiloInSilo(__int64 a1, __int64 a2)
{
  if ( !a2 )
    return 1;
  while ( a1 )
  {
    a1 = *(_QWORD *)(a1 + 1064);
    if ( a1 == a2 )
      return 1;
  }
  return 0;
}
