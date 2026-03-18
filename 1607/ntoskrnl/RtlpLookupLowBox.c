/*
 * XREFs of RtlpLookupLowBox @ 0x140013E94
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x140425460 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1404A3568 (RtlDeleteAtomFromAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1404E1468 (RtlPinAtomInAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x1406882B0 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     RtlpQueryLowBoxId @ 0x14000F2C8 (RtlpQueryLowBoxId.c)
 *     RtlpAllowsLowBoxAccess @ 0x1400AF76C (RtlpAllowsLowBoxAccess.c)
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
