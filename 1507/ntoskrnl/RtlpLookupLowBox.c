/*
 * XREFs of RtlpLookupLowBox @ 0x1400EE2A4
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x1405048B0 (RtlDeleteAtomFromAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x140504970 (RtlQueryAtomInAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x14054E7E4 (RtlPinAtomInAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x1406CBD70 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     RtlpQueryLowBoxId @ 0x140010304 (RtlpQueryLowBoxId.c)
 *     RtlpAllowsLowBoxAccess @ 0x14012F0C8 (RtlpAllowsLowBoxAccess.c)
 */

__int64 *__fastcall RtlpLookupLowBox(__int64 a1, __int64 a2, char a3)
{
  int LowBoxId; // ecx
  __int64 *result; // rax

  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
    LowBoxId = 0;
  else
    LowBoxId = RtlpQueryLowBoxId();
  if ( !LowBoxId )
    return (__int64 *)(a2 + 16);
  for ( result = *(__int64 **)(a2 + 16); result != (__int64 *)(a2 + 16); result = (__int64 *)*result )
  {
    if ( *((_DWORD *)result + 4) == LowBoxId )
      return result;
  }
  if ( !(unsigned __int8)RtlpAllowsLowBoxAccess(a2) || a3 )
    return 0LL;
  else
    return (__int64 *)(a2 + 16);
}
