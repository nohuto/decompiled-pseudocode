/*
 * XREFs of InbvGetDisplayState @ 0x1401C3594
 * Callers:
 *     InbvRotateGuiBootDisplay @ 0x1401C3748 (InbvRotateGuiBootDisplay.c)
 *     RotBarUpdate @ 0x1401C387C (RotBarUpdate.c)
 *     StartFirstUserProcess @ 0x1407A263C (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 InbvGetDisplayState()
{
  __int64 (*v0)(void); // rcx

  if ( qword_140328E10 && (v0 = *(__int64 (**)(void))(qword_140328E10 + 144)) != 0LL )
    return v0();
  else
    return 2LL;
}
