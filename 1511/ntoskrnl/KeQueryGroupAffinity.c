/*
 * XREFs of KeQueryGroupAffinity @ 0x14009B2D4
 * Callers:
 *     PopProcessorInformation @ 0x14046167C (PopProcessorInformation.c)
 *     MmCreatePeb @ 0x140463D38 (MmCreatePeb.c)
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 *     PpmEnableWmiInterface @ 0x140530A5C (PpmEnableWmiInterface.c)
 *     EtwpProcessorRundown @ 0x140666074 (EtwpProcessorRundown.c)
 *     NtCreateProfile @ 0x1406757B4 (NtCreateProfile.c)
 * Callees:
 *     <none>
 */

KAFFINITY __stdcall KeQueryGroupAffinity(USHORT GroupNumber)
{
  if ( GroupNumber >= LOWORD(KeActiveProcessors[0]) )
    return 0LL;
  else
    return qword_1403825B8[GroupNumber];
}
