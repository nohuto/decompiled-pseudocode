/*
 * XREFs of KeQueryGroupAffinity @ 0x1400FAF88
 * Callers:
 *     ExpQuerySystemInformation @ 0x140415620 (ExpQuerySystemInformation.c)
 *     MmCreatePeb @ 0x14046C0B8 (MmCreatePeb.c)
 *     PopProcessorInformation @ 0x14051DE1C (PopProcessorInformation.c)
 *     PpmEnableWmiInterface @ 0x1405769E8 (PpmEnableWmiInterface.c)
 *     EtwpProcessorRundown @ 0x1406A7AC0 (EtwpProcessorRundown.c)
 *     NtCreateProfile @ 0x1406B810C (NtCreateProfile.c)
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
