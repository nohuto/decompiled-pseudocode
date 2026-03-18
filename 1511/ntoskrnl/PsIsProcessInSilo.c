/*
 * XREFs of PsIsProcessInSilo @ 0x14009E1A0
 * Callers:
 *     PsIsThreadInSilo @ 0x14008E2F0 (PsIsThreadInSilo.c)
 *     ExpGetProcessInformation @ 0x140409F60 (ExpGetProcessInformation.c)
 *     PsOpenProcess @ 0x140476110 (PsOpenProcess.c)
 *     PsLookupProcessByProcessId @ 0x1404D42D0 (PsLookupProcessByProcessId.c)
 * Callees:
 *     PspGetJobSilo @ 0x1400776E8 (PspGetJobSilo.c)
 *     PsIsSiloInSilo @ 0x1401F5850 (PsIsSiloInSilo.c)
 */

char __fastcall PsIsProcessInSilo(struct _KPROCESS *a1, __int64 a2)
{
  __int64 JobSilo; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  char v6; // r8

  if ( !a2 || a1 == PsInitialSystemProcess || a1 == PsIdleProcess )
    return 1;
  JobSilo = PspGetJobSilo(a1[1].Affinity.Bitmap[16]);
  if ( JobSilo == v4 || (unsigned __int8)PsIsSiloInSilo(JobSilo, v4, v5) )
    return 1;
  return v6;
}
