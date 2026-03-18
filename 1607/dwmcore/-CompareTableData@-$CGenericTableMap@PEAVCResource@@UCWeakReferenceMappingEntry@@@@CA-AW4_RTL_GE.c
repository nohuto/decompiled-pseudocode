/*
 * XREFs of ?CompareTableData@?$CGenericTableMap@PEAVCResource@@UCWeakReferenceMappingEntry@@@@CA?AW4_RTL_GENERIC_COMPARE_RESULTS@@PEAU_RTL_GENERIC_TABLE@@PEAX1@Z @ 0x1800AE390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::CompareTableData(
        struct _RTL_GENERIC_TABLE *Table,
        _QWORD *FirstStruct,
        _QWORD *SecondStruct)
{
  unsigned __int64 v3; // rcx
  __int64 result; // rax

  v3 = SecondStruct[1];
  result = 0LL;
  if ( FirstStruct[1] >= v3 )
  {
    LOBYTE(result) = FirstStruct[1] == v3;
    return (unsigned int)(result + 1);
  }
  return result;
}
