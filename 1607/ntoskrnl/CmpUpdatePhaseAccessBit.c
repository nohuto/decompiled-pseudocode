/*
 * XREFs of CmpUpdatePhaseAccessBit @ 0x14057C880
 * Callers:
 *     NtInitializeRegistry @ 0x140547164 (NtInitializeRegistry.c)
 * Callees:
 *     CmpGetNextActiveHive @ 0x1403FB6D0 (CmpGetNextActiveHive.c)
 *     CmpTrimHive @ 0x1404A1058 (CmpTrimHive.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14057C8C8 (CmpUpdateReorganizeRegistryValues.c)
 */

void CmpUpdatePhaseAccessBit()
{
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v2; // rbx

  if ( CmpAccessBitForPhase != 2 )
  {
    CmpAccessBitForPhase = 2;
    for ( i = 0LL; ; i = v2 )
    {
      NextActiveHive = CmpGetNextActiveHive(i);
      v2 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
      if ( !NextActiveHive )
        break;
      if ( (NextActiveHive[18] & 0x10) == 0 )
        CmpTrimHive((__int64)NextActiveHive);
    }
    CmpUpdateReorganizeRegistryValues();
  }
}
