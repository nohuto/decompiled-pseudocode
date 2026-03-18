/*
 * XREFs of InbvGetDisplayState @ 0x1401C36B0
 * Callers:
 *     InbvRotateGuiBootDisplay @ 0x1401C3864 (InbvRotateGuiBootDisplay.c)
 *     RotBarUpdate @ 0x1401C3998 (RotBarUpdate.c)
 *     StartFirstUserProcess @ 0x1407A263C (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 InbvGetDisplayState()
{
  __int64 (*v0)(void); // rcx

  if ( qword_140328DD0 && (v0 = *(__int64 (**)(void))(qword_140328DD0 + 144)) != 0LL )
    return v0();
  else
    return 2LL;
}
