/*
 * XREFs of RtlQueryElevationFlags @ 0x1404AD20C
 * Callers:
 *     SeTokenCanImpersonate @ 0x140426A30 (SeTokenCanImpersonate.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlQueryElevationFlags(PRTL_ELEVATION_FLAGS Flags)
{
  ULONG v1; // eax

  Flags->Flags = 0;
  v1 = Flags->Flags;
  if ( (MEMORY[0xFFFFF780000002F0] & 2) != 0 )
    v1 = 1;
  Flags->Flags = v1;
  if ( (MEMORY[0xFFFFF780000002F0] & 4) != 0 )
    Flags->Flags |= 2u;
  if ( (MEMORY[0xFFFFF780000002F0] & 8) != 0 )
    Flags->Flags |= 4u;
  return 0;
}
