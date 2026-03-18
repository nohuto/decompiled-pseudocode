/*
 * XREFs of MiInitializeCfg @ 0x1407C84F4
 * Callers:
 *     MiInitSystem @ 0x1407C8BD0 (MiInitSystem.c)
 * Callees:
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     MmCreateSection @ 0x1404710D4 (MmCreateSection.c)
 *     PsIsSystemWideMitigationOptionSet @ 0x140584020 (PsIsSystemWideMitigationOptionSet.c)
 */

__int64 MiInitializeCfg()
{
  int v0; // eax
  __int64 result; // rax
  __int64 v2; // [rsp+50h] [rbp+8h] BYREF

  if ( PsIsSystemWideMitigationOptionSet(40, 0x20000000000LL) )
  {
    v0 = 0;
    dword_1403D00D4 = 0;
  }
  else
  {
    v0 = dword_1403D00D4;
  }
  if ( !v0 )
    return 0LL;
  v2 = 0x4000000LL;
  result = MmCreateSection((int)&qword_14034E988, 983071LL, 0, (int)&v2, 4, 0x4000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    qword_14034E990 = MiSectionControlArea(qword_14034E988);
    v2 = 0x20000000000LL;
    result = MmCreateSection((int)&qword_14034E998, 983071LL, 0, (int)&v2, 4, 0x4000000, 0LL, 0LL);
    if ( (int)result >= 0 )
    {
      qword_14034E9A0 = MiSectionControlArea(qword_14034E998);
      return 0LL;
    }
  }
  return result;
}
