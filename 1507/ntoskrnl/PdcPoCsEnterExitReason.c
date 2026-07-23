/*
 * XREFs of PdcPoCsEnterExitReason @ 0x1406B7514
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryInterruptTimePrecise @ 0x140154870 (KeQueryInterruptTimePrecise.c)
 */

void __fastcall PdcPoCsEnterExitReason(char a1, int a2)
{
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 )
  {
    PopPdcLastCsEnterReason = a2;
  }
  else
  {
    PopPdcLastCsExitReason = a2;
    PopPdcLastCsExitTime = KeQueryInterruptTimePrecise(&PerformanceCounter).QuadPart;
  }
}
