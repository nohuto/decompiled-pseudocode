/*
 * XREFs of CmpFindNameInListWithStatus @ 0x1404019DC
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14000B030 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401B4118 (CmQueryMultipleValueForLayeredKey.c)
 *     CmDeleteValueKey @ 0x1403F9CF4 (CmDeleteValueKey.c)
 *     CmpFindNameInList @ 0x140401914 (CmpFindNameInList.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140401D18 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     CmQueryValueKey @ 0x14043E2F0 (CmQueryValueKey.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x14002CF68 (HvpGetCellContextReinitialize.c)
 *     CmpFindNameInListCellWithStatus @ 0x140401A80 (CmpFindNameInListCellWithStatus.c)
 */

__int64 __fastcall CmpFindNameInListWithStatus(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v10; // rsi
  _DWORD *v11; // rdx
  unsigned int NameInListCellWithStatus; // edi
  char v14; // [rsp+68h] [rbp+10h] BYREF

  v10 = 0LL;
  HvpGetCellContextReinitialize((__int64)&v14);
  if ( *v11 )
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(a1 + 8))(a1, (unsigned int)v11[1], &v14);
  NameInListCellWithStatus = CmpFindNameInListCellWithStatus(a1, v10, *a2, a3, a4, a5, a6);
  if ( v10 )
    (*(void (__fastcall **)(__int64, char *))(a1 + 16))(a1, &v14);
  return NameInListCellWithStatus;
}
