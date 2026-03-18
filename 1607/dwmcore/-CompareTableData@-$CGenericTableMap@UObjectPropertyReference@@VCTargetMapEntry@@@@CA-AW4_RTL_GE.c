/*
 * XREFs of ?CompareTableData@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@CA?AW4_RTL_GENERIC_COMPARE_RESULTS@@PEAU_RTL_GENERIC_TABLE@@PEAX1@Z @ 0x1800AC2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::CompareTableData(
        struct _RTL_GENERIC_TABLE *Table,
        _DWORD *FirstStruct,
        _DWORD *SecondStruct)
{
  unsigned int v3; // ecx
  unsigned int v4; // r10d
  unsigned int v5; // eax

  v3 = FirstStruct[1];
  v4 = FirstStruct[2];
  v5 = SecondStruct[1];
  if ( *FirstStruct < *SecondStruct )
    return 0LL;
  if ( *FirstStruct != *SecondStruct )
    return 1LL;
  if ( v3 < v5 )
    return 0LL;
  if ( v3 != v5 )
    return 1LL;
  if ( v4 < SecondStruct[2] )
    return 0LL;
  if ( v3 != v5 || v4 != SecondStruct[2] )
    return 1LL;
  return 2LL;
}
