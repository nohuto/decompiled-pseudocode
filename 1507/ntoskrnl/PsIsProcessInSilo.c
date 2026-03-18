/*
 * XREFs of PsIsProcessInSilo @ 0x140050120
 * Callers:
 *     PsIsThreadInSilo @ 0x140243ECC (PsIsThreadInSilo.c)
 *     PsOpenProcess @ 0x140433500 (PsOpenProcess.c)
 *     ExpGetProcessInformation @ 0x140497410 (ExpGetProcessInformation.c)
 *     PsLookupProcessByProcessId @ 0x1405114D8 (PsLookupProcessByProcessId.c)
 * Callees:
 *     PsIsSiloInSilo @ 0x140243EB0 (PsIsSiloInSilo.c)
 */

bool __fastcall PsIsProcessInSilo(struct _KPROCESS *a1, __int64 a2)
{
  if ( !a2 || a1 == PsInitialSystemProcess || a1 == PsIdleProcess )
    return 1;
  return a1[2].ActiveProcessors.Bitmap[12] == a2 || (unsigned __int8)PsIsSiloInSilo();
}
