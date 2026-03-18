/*
 * XREFs of ProbeForRead @ 0x1404A7598
 * Callers:
 *     VerifierProbeForRead @ 0x1406C0BD4 (VerifierProbeForRead.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

void __stdcall ProbeForRead(volatile void *Address, SIZE_T Length, ULONG Alignment)
{
  if ( Length )
  {
    if ( ((Alignment - 1) & (unsigned int)Address) != 0 )
      ExRaiseDatatypeMisalignment();
  }
}
