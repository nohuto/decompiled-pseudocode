/*
 * XREFs of RtlpLookupLowBox @ 0x140099F58
 * Callers:
 *     RtlPinAtomInAtomTable @ 0x14045FA88 (RtlPinAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x14045FED4 (RtlDeleteAtomFromAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x14045FFD0 (RtlQueryAtomInAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x140648CEC (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     RtlpQueryLowBoxId @ 0x140038774 (RtlpQueryLowBoxId.c)
 *     RtlpAllowsLowBoxAccess @ 0x14009A1E4 (RtlpAllowsLowBoxAccess.c)
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
