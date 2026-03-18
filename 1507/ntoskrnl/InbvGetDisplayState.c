/*
 * XREFs of InbvGetDisplayState @ 0x1401F0ADC
 * Callers:
 *     InbvRotateGuiBootDisplay @ 0x1401F0C90 (InbvRotateGuiBootDisplay.c)
 *     RotBarUpdate @ 0x1401F0DC4 (RotBarUpdate.c)
 *     StartFirstUserProcess @ 0x1407BC5B4 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 InbvGetDisplayState()
{
  __int64 (*v0)(void); // rcx

  if ( qword_140353AD8 && (v0 = *(__int64 (**)(void))(qword_140353AD8 + 144)) != 0LL )
    return v0();
  else
    return 2LL;
}
