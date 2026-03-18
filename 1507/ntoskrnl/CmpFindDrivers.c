/*
 * XREFs of CmpFindDrivers @ 0x1407BB424
 * Callers:
 *     CmGetSystemDriverList @ 0x1407BA76C (CmGetSystemDriverList.c)
 * Callees:
 *     CmpFindSubKeyByNumber @ 0x1404C7350 (CmpFindSubKeyByNumber.c)
 *     CmpFindSubKeyByName @ 0x140590DF0 (CmpFindSubKeyByName.c)
 *     CmpFindGroupOrderList @ 0x1407BAB2C (CmpFindGroupOrderList.c)
 *     CmpAddDriverToList @ 0x1407BAEFC (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x1407BB548 (CmpIsLoadType.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x1407F8A7C (CmpLoadManufacturingProfileServicesNode.c)
 */

char __fastcall CmpFindDrivers(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v7; // esi
  __int64 v9; // rax
  unsigned int SubKeyByName; // edi
  _DWORD *v11; // r13
  __int64 v12; // rdi
  unsigned int GroupOrderList; // r15d
  unsigned int v14; // r14d
  unsigned int v15; // esi
  char ManufacturingProfileServicesNode; // al
  int v18; // [rsp+28h] [rbp-8h]
  int v19; // [rsp+70h] [rbp+40h] BYREF
  int v20; // [rsp+80h] [rbp+50h] BYREF
  int v21; // [rsp+88h] [rbp+58h] BYREF
  int v22; // [rsp+8Ch] [rbp+5Ch]

  v22 = HIDWORD(a4);
  v21 = -1;
  v7 = a2;
  v19 = -1;
  v20 = -1;
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter3 + 8))(BugCheckParameter3, a2, &v20);
  if ( !v9 )
    return 0;
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3, v9, (unsigned __int16 *)&CmpServicesString);
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v20);
  if ( SubKeyByName == -1 )
    return 0;
  v11 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter3 + 8))(
                    BugCheckParameter3,
                    SubKeyByName,
                    &v19);
  if ( !v11 )
    return 0;
  v12 = 0LL;
  a6 = 0LL;
  if ( a7 )
  {
    ManufacturingProfileServicesNode = CmpLoadManufacturingProfileServicesNode(
                                         BugCheckParameter3,
                                         v7,
                                         a7,
                                         (unsigned int)&a6,
                                         (__int64)&v21);
    v12 = a6 & -(__int64)(ManufacturingProfileServicesNode != 0);
  }
  GroupOrderList = CmpFindGroupOrderList(BugCheckParameter3, v7);
  if ( GroupOrderList == -1 )
    return 0;
  v14 = 0;
  while ( 1 )
  {
    CmpFindSubKeyByNumber(BugCheckParameter3, v11, v14, &a6);
    v15 = a6;
    ++v14;
    if ( (_DWORD)a6 == -1 )
      break;
    if ( (unsigned __int8)CmpIsLoadType(BugCheckParameter3, v12, v18) )
      CmpAddDriverToList(BugCheckParameter3, v15, GroupOrderList);
  }
  if ( v12 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v21);
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v19);
  return 1;
}
