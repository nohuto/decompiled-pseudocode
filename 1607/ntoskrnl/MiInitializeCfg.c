/*
 * XREFs of MiInitializeCfg @ 0x1407A6890
 * Callers:
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 * Callees:
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     MmCreateSection @ 0x14042BAE0 (MmCreateSection.c)
 */

__int64 MiInitializeCfg()
{
  __int64 result; // rax
  __int64 v1; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0x4000000LL;
  result = MmCreateSection((int)&qword_1403267C8, 983071LL, 0, (int)&v1, 4, 0x4000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    qword_1403267D0 = MiSectionControlArea(qword_1403267C8);
    v1 = 0x20000000000LL;
    result = MmCreateSection((int)&qword_1403267D8, 983071LL, 0, (int)&v1, 4, 0x4000000, 0LL, 0LL);
    if ( (int)result >= 0 )
    {
      qword_1403267E0 = MiSectionControlArea(qword_1403267D8);
      return 0LL;
    }
  }
  return result;
}
