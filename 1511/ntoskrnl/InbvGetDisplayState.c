/*
 * XREFs of InbvGetDisplayState @ 0x1401B5BC8
 * Callers:
 *     InbvRotateGuiBootDisplay @ 0x1401B5D7C (InbvRotateGuiBootDisplay.c)
 *     RotBarUpdate @ 0x1401B5EB0 (RotBarUpdate.c)
 *     StartFirstUserProcess @ 0x14075BB50 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 InbvGetDisplayState()
{
  __int64 (*v0)(void); // rcx

  if ( qword_140305D60 && (v0 = *(__int64 (**)(void))(qword_140305D60 + 144)) != 0LL )
    return v0();
  else
    return 2LL;
}
