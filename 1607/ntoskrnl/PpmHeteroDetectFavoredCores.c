/*
 * XREFs of PpmHeteroDetectFavoredCores @ 0x14056ADB4
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x14056AAC4 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeOrAffinityEx @ 0x1400960D0 (KeOrAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x1400D26B0 (KeIsEmptyAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x140144778 (KeIsEqualAffinityEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall PpmHeteroDetectFavoredCores(unsigned __int16 *a1, char *a2)
{
  unsigned int v4; // ebx
  __int64 v6; // rdi
  char v7; // al

  *(_QWORD *)a1 = 1310721LL;
  v4 = 0;
  memset(a1 + 4, 0, 0xA0uLL);
  *a2 = 0;
  if ( !(unsigned int)KeIsEmptyAffinityEx(PpmCheckRegistered)
    && (unsigned int)KeIsEqualAffinityEx(PpmPerfStatesRegistered, (unsigned __int16 *)PpmCheckRegistered)
    && PpmPerfDomainCount != 1 )
  {
    v6 = PpmPerfDomainHead;
    while ( (__int64 *)v6 != &PpmPerfDomainHead )
    {
      if ( !*(_BYTE *)(v6 + 198) )
        KeOrAffinityEx((unsigned __int16 *)(v6 + 24), a1, a1);
      v7 = *a2;
      if ( (unsigned __int8)*a2 <= *(_BYTE *)(v6 + 198) )
        v7 = *(_BYTE *)(v6 + 198);
      v6 = *(_QWORD *)v6;
      *a2 = v7;
    }
    if ( !(unsigned int)KeIsEqualAffinityEx(PpmPerfStatesRegistered, a1) )
      return 1;
  }
  return v4;
}
