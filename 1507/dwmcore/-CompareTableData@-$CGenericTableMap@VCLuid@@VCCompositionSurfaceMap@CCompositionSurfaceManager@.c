/*
 * XREFs of ?CompareTableData@?$CGenericTableMap@VCLuid@@VCCompositionSurfaceMap@CCompositionSurfaceManager@@@@CA?AW4_RTL_GENERIC_COMPARE_RESULTS@@PEAU_RTL_GENERIC_TABLE@@PEAX1@Z @ 0x18005C1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGenericTableMap<CLuid,CCompositionSurfaceManager::CCompositionSurfaceMap>::CompareTableData(
        struct _RTL_GENERIC_TABLE *Table,
        _QWORD *FirstStruct,
        __int64 *SecondStruct)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *SecondStruct;
  if ( ((unsigned int)*FirstStruct | (unsigned __int64)((__int64)(int)HIDWORD(*FirstStruct) << 32)) < ((unsigned int)v3 | (unsigned __int64)((__int64)SHIDWORD(v3) << 32)) )
    return 0LL;
  if ( (unsigned int)*FirstStruct != (_DWORD)v3 )
    return 1LL;
  result = 2LL;
  if ( HIDWORD(*FirstStruct) != HIDWORD(v3) )
    return 1LL;
  return result;
}
