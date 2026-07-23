/*
 * XREFs of ExpSetProcessorMicrocodeUpdateInformation @ 0x1406AC3B4
 * Callers:
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 * Callees:
 *     ExpMicrocodeInformationLoad_0 @ 0x1400012F0 (ExpMicrocodeInformationLoad_0.c)
 *     ExpMicrocodeInformationUnload_0 @ 0x1400012F8 (ExpMicrocodeInformationUnload_0.c)
 */

__int64 __fastcall ExpSetProcessorMicrocodeUpdateInformation(int *a1, unsigned int a2)
{
  int v3; // ecx

  if ( a2 < 4 )
    return 3221225476LL;
  v3 = *a1;
  if ( v3 == 1 )
    return ExpMicrocodeInformationLoad_0();
  if ( v3 == 2 )
    return ExpMicrocodeInformationUnload_0();
  return 3221225485LL;
}
