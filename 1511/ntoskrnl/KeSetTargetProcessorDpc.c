/*
 * XREFs of KeSetTargetProcessorDpc @ 0x1401C743C
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x14009DBD0 (KeQueryActiveProcessorCountEx.c)
 *     KeSetTargetProcessorDpcEx @ 0x1400ED984 (KeSetTargetProcessorDpcEx.c)
 */

void __stdcall KeSetTargetProcessorDpc(PRKDPC Dpc, CCHAR Number)
{
  unsigned __int16 v4; // bx
  _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp+10h] BYREF

  if ( KeForceGroupAwareness )
    v4 = KiActiveGroups - 1;
  else
    v4 = 0;
  if ( Number < KeQueryActiveProcessorCountEx(v4) )
  {
    ProcNumber.Group = v4;
    ProcNumber.Number = Number;
    ProcNumber.Reserved = 0;
    KeSetTargetProcessorDpcEx(Dpc, &ProcNumber);
  }
}
