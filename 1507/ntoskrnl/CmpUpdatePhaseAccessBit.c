/*
 * XREFs of CmpUpdatePhaseAccessBit @ 0x1405BF940
 * Callers:
 *     NtInitializeRegistry @ 0x140583714 (NtInitializeRegistry.c)
 * Callees:
 *     CmpGetNextActiveHive @ 0x140445EE8 (CmpGetNextActiveHive.c)
 *     CmpTrimHive @ 0x1404EA73C (CmpTrimHive.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1405BF98C (CmpUpdateReorganizeRegistryValues.c)
 */

void __fastcall CmpUpdatePhaseAccessBit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v6; // rbx

  if ( CmpAccessBitForPhase != 2 )
  {
    CmpAccessBitForPhase = 2;
    for ( i = 0LL; ; i = v6 )
    {
      NextActiveHive = CmpGetNextActiveHive(i, a2, a3, a4);
      v6 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
      if ( !NextActiveHive )
        break;
      if ( (NextActiveHive[18] & 0x10) == 0 )
        CmpTrimHive((__int64)NextActiveHive);
    }
    CmpUpdateReorganizeRegistryValues();
  }
}
