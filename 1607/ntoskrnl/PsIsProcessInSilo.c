/*
 * XREFs of PsIsProcessInSilo @ 0x1400131FC
 * Callers:
 *     PsIsThreadInSilo @ 0x140013180 (PsIsThreadInSilo.c)
 *     PsLookupProcessByProcessId @ 0x14041F5C0 (PsLookupProcessByProcessId.c)
 *     ExpGetProcessInformation @ 0x1404502B0 (ExpGetProcessInformation.c)
 * Callees:
 *     PspGetJobSilo @ 0x1400767A8 (PspGetJobSilo.c)
 *     PspIsSiloInSilo @ 0x14067EA9C (PspIsSiloInSilo.c)
 */

char __fastcall PsIsProcessInSilo(struct _KPROCESS *a1, __int64 a2)
{
  __int64 JobSilo; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  char v6; // r8

  if ( !a2 || a1 == PsInitialSystemProcess || a1 == PsIdleProcess )
    return 1;
  JobSilo = PspGetJobSilo(a1[1].Affinity.Bitmap[16], a2, 0LL);
  if ( JobSilo == v4 || (unsigned __int8)PspIsSiloInSilo(JobSilo, v4, v5) )
    return 1;
  return v6;
}
