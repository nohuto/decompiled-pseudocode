/*
 * XREFs of CmpFindNameInListWithStatus @ 0x140402B1C
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14000B4B0 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401B4234 (CmQueryMultipleValueForLayeredKey.c)
 *     CmDeleteValueKey @ 0x1403FAE34 (CmDeleteValueKey.c)
 *     CmpFindNameInList @ 0x140402A54 (CmpFindNameInList.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140402E58 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmSetValueKey @ 0x1404037B0 (CmSetValueKey.c)
 *     CmQueryValueKey @ 0x14043F420 (CmQueryValueKey.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x14002D3E8 (HvpGetCellContextReinitialize.c)
 *     CmpFindNameInListCellWithStatus @ 0x140402BC0 (CmpFindNameInListCellWithStatus.c)
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
