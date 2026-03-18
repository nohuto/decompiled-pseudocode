/*
 * XREFs of MiInitializeCfg @ 0x14074DF4C
 * Callers:
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 * Callees:
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     MmCreateSection @ 0x14044E98C (MmCreateSection.c)
 *     PsIsSystemWideMitigationOptionSet @ 0x14050CD24 (PsIsSystemWideMitigationOptionSet.c)
 */

int MiInitializeCfg()
{
  int v0; // eax
  int result; // eax
  __int64 v2; // [rsp+50h] [rbp+8h] BYREF

  if ( PsIsSystemWideMitigationOptionSet(40, 0x20000000000LL) )
  {
    v0 = 0;
    dword_1403810E4 = 0;
  }
  else
  {
    v0 = dword_1403810E4;
  }
  if ( !v0 )
    return 0;
  v2 = 0x4000000LL;
  result = MmCreateSection(&qword_1402FE4C0, 983071LL, 0, (__int64)&v2, 4u, 0x4000000u, 0LL, 0LL);
  if ( result >= 0 )
  {
    qword_1402FE4C8 = MiSectionControlArea(*(__int64 *)&qword_1402FE4C0);
    v2 = 0x20000000000LL;
    result = MmCreateSection(&qword_1402FE4D0, 983071LL, 0, (__int64)&v2, 4u, 0x4000000u, 0LL, 0LL);
    if ( result >= 0 )
    {
      qword_1402FE4D8 = MiSectionControlArea(*(__int64 *)&qword_1402FE4D0);
      return 0;
    }
  }
  return result;
}
