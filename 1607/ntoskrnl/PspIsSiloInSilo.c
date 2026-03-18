/*
 * XREFs of PspIsSiloInSilo @ 0x14067E9B8
 * Callers:
 *     PsIsThreadInSilo @ 0x140013600 (PsIsThreadInSilo.c)
 *     PsIsProcessInSilo @ 0x14001367C (PsIsProcessInSilo.c)
 *     PsRootSiloInformation @ 0x14067E078 (PsRootSiloInformation.c)
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
