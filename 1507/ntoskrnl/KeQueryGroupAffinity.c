/*
 * XREFs of KeQueryGroupAffinity @ 0x14002B0B4
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 *     MmCreatePeb @ 0x140465AC4 (MmCreatePeb.c)
 *     PopProcessorInformation @ 0x1405541D8 (PopProcessorInformation.c)
 *     PpmEnableWmiInterface @ 0x140599EB0 (PpmEnableWmiInterface.c)
 *     EtwpProcessorRundown @ 0x1406E9204 (EtwpProcessorRundown.c)
 *     NtCreateProfile @ 0x1406F9F78 (NtCreateProfile.c)
 * Callees:
 *     <none>
 */

KAFFINITY __stdcall KeQueryGroupAffinity(USHORT GroupNumber)
{
  if ( GroupNumber >= (unsigned __int16)KeActiveProcessors )
    return 0LL;
  else
    return qword_1403D15E8[GroupNumber];
}
