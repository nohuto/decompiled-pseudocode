/*
 * XREFs of KeQueryGroupAffinity @ 0x1400F8D14
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 *     MmCreatePeb @ 0x14046AF88 (MmCreatePeb.c)
 *     PopProcessorInformation @ 0x140500E84 (PopProcessorInformation.c)
 *     PpmEnableWmiInterface @ 0x140576F28 (PpmEnableWmiInterface.c)
 *     EtwpProcessorRundown @ 0x1406A7BF8 (EtwpProcessorRundown.c)
 *     NtCreateProfile @ 0x1406B8244 (NtCreateProfile.c)
 * Callees:
 *     <none>
 */

KAFFINITY __stdcall KeQueryGroupAffinity(USHORT GroupNumber)
{
  if ( GroupNumber >= LOWORD(KeActiveProcessors[0]) )
    return 0LL;
  else
    return qword_1403AA618[GroupNumber];
}
