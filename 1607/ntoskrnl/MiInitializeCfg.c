/*
 * XREFs of MiInitializeCfg @ 0x1407A6890
 * Callers:
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 * Callees:
 *     MiSectionControlArea @ 0x14002C4D0 (MiSectionControlArea.c)
 *     MmCreateSection @ 0x14042CC10 (MmCreateSection.c)
 */

__int64 MiInitializeCfg()
{
  __int64 result; // rax
  __int64 v1; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0x4000000LL;
  result = MmCreateSection((int)&qword_140326788, 983071LL, 0, (int)&v1, 4, 0x4000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    qword_140326790 = MiSectionControlArea(qword_140326788);
    v1 = 0x20000000000LL;
    result = MmCreateSection((int)&qword_140326798, 983071LL, 0, (int)&v1, 4, 0x4000000, 0LL, 0LL);
    if ( (int)result >= 0 )
    {
      qword_1403267A0 = MiSectionControlArea(qword_140326798);
      return 0LL;
    }
  }
  return result;
}
