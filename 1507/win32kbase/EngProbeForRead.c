/*
 * XREFs of EngProbeForRead @ 0x1C00BD860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngProbeForRead(PVOID Address, SIZE_T Length, ULONG Alignment)
{
  char *v3; // rdx

  if ( Length )
  {
    if ( ((Alignment - 1) & (unsigned int)Address) != 0 )
      ExRaiseDatatypeMisalignment();
    v3 = (char *)Address + Length;
    if ( v3 > W32UserProbeAddress || v3 < Address )
      *(_BYTE *)W32UserProbeAddress = 0;
  }
}
