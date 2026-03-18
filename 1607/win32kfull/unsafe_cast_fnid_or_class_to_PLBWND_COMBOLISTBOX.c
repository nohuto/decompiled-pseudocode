/*
 * XREFs of unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX @ 0x1C01463C8
 * Callers:
 *     xxxGetComboBoxInfo @ 0x1C01462D4 (xxxGetComboBoxInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX(__int64 a1)
{
  __int64 v1; // r10

  v1 = 0LL;
  if ( !a1 )
    return 0LL;
  if ( (*(_WORD *)(a1 + 66) & 0x3FFF) == 0x2A3 )
    return a1;
  if ( *(_WORD *)(*(_QWORD *)(a1 + 152) + 8LL) == *(_WORD *)(gpsi + 866LL) )
    return a1;
  return v1;
}
