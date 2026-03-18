/*
 * XREFs of CmpUpdatePhaseAccessBit @ 0x1405480E8
 * Callers:
 *     NtInitializeRegistry @ 0x14050C454 (NtInitializeRegistry.c)
 * Callees:
 *     CmpTrimHive @ 0x1403BAC40 (CmpTrimHive.c)
 *     CmpGetNextActiveHive @ 0x1403DE2DC (CmpGetNextActiveHive.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x140548134 (CmpUpdateReorganizeRegistryValues.c)
 */

void CmpUpdatePhaseAccessBit()
{
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  struct _EX_RUNDOWN_REF *v5; // rbx

  if ( CmpAccessBitForPhase != 2 )
  {
    CmpAccessBitForPhase = 2;
    for ( i = 0LL; ; i = v5 )
    {
      NextActiveHive = CmpGetNextActiveHive(i);
      v5 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
      if ( !NextActiveHive )
        break;
      if ( (NextActiveHive[18] & 0x10) == 0 )
        CmpTrimHive((__int64)NextActiveHive, v2, v3, v4);
    }
    CmpUpdateReorganizeRegistryValues();
  }
}
