/*
 * XREFs of ?CompareTableData@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@CA?AW4_RTL_GENERIC_COMPARE_RESULTS@@PEAU_RTL_GENERIC_TABLE@@PEAX1@Z @ 0x180041D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::CompareTableData(
        struct _RTL_GENERIC_TABLE *Table,
        _QWORD *FirstStruct,
        _QWORD *SecondStruct)
{
  __int64 result; // rax

  result = 0LL;
  if ( *FirstStruct >= *SecondStruct )
  {
    LOBYTE(result) = *FirstStruct == *SecondStruct;
    return (unsigned int)(result + 1);
  }
  return result;
}
