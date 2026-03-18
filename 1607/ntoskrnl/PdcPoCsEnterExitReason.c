/*
 * XREFs of PdcPoCsEnterExitReason @ 0x14066F990
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryInterruptTimePrecise @ 0x14012A430 (KeQueryInterruptTimePrecise.c)
 */

void __fastcall PdcPoCsEnterExitReason(char a1, int a2)
{
  LARGE_INTEGER v2; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 )
  {
    PopPdcLastCsEnterReason = a2;
  }
  else
  {
    PopPdcLastCsExitReason = a2;
    PopPdcLastCsExitTime = KeQueryInterruptTimePrecise(&v2);
  }
}
