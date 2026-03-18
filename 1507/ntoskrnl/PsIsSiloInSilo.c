/*
 * XREFs of PsIsSiloInSilo @ 0x140243EB0
 * Callers:
 *     PsIsProcessInSilo @ 0x140050120 (PsIsProcessInSilo.c)
 *     PsIsThreadInSilo @ 0x140243ECC (PsIsThreadInSilo.c)
 *     PsRootSiloInformation @ 0x140243F20 (PsRootSiloInformation.c)
 * Callees:
 *     <none>
 */

char __fastcall PsIsSiloInSilo(__int64 a1, __int64 a2)
{
  bool i; // zf

  for ( i = a2 == 0; !i; i = a1 == a2 )
  {
    if ( !a1 )
      return 0;
    a1 = *(_QWORD *)(a1 + 152);
  }
  return 1;
}
