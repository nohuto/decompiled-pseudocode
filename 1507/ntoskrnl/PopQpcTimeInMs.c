/*
 * XREFs of PopQpcTimeInMs @ 0x1403EF040
 * Callers:
 *     PopPowerTransitionTimesInMs @ 0x140148B80 (PopPowerTransitionTimesInMs.c)
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     PopDiagTracePerfTrackData @ 0x140566E28 (PopDiagTracePerfTrackData.c)
 *     PopDiagTraceHiberStats @ 0x140566F50 (PopDiagTraceHiberStats.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopQpcTimeInMs(_QWORD *a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  unsigned __int64 v3; // r9

  v2 = 0;
  if ( *a2 )
  {
    v3 = *a2 - *a1;
    if ( is_mul_ok(v3, 0x3E8uLL) )
      return (unsigned int)(v3 * (unsigned __int128)0x3E8uLL / (unsigned __int64)PopQpcFrequency);
    else
      return (unsigned int)(v3 / (PopQpcFrequency / 0x3E8uLL));
  }
  return v2;
}
