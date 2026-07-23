/*
 * XREFs of CmpFindDrivers @ 0x1407B03C8
 * Callers:
 *     CmGetSystemDriverList @ 0x1407AF6CC (CmGetSystemDriverList.c)
 * Callees:
 *     CmpFindSubKeyByNumber @ 0x140437590 (CmpFindSubKeyByNumber.c)
 *     CmpFindSubKeyByName @ 0x1405603A4 (CmpFindSubKeyByName.c)
 *     CmpFindGroupOrderList @ 0x1407AFA98 (CmpFindGroupOrderList.c)
 *     CmpAddDriverToList @ 0x1407AFE90 (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x1407B04F8 (CmpIsLoadType.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x1407CDCF0 (CmpLoadManufacturingProfileServicesNode.c)
 */

char __fastcall CmpFindDrivers(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // r14d
  unsigned int v9; // esi
  __int64 v11; // rax
  unsigned int SubKeyByName; // edi
  _DWORD *v13; // r12
  __int64 v14; // rdi
  unsigned int GroupOrderList; // r15d
  unsigned int v16; // esi
  char ManufacturingProfileServicesNode; // al
  __int64 v19; // [rsp+28h] [rbp-8h]
  int v20; // [rsp+70h] [rbp+40h] BYREF
  int v21; // [rsp+74h] [rbp+44h]
  unsigned int v22; // [rsp+80h] [rbp+50h] BYREF
  __int64 v23; // [rsp+88h] [rbp+58h] BYREF

  v22 = a3;
  v8 = 0;
  v20 = -1;
  v21 = 0;
  v9 = a2;
  a6 = 0xFFFFFFFFLL;
  v23 = 0xFFFFFFFFLL;
  v11 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64 *))(BugCheckParameter3 + 8))(
          BugCheckParameter3,
          a2,
          &v23);
  if ( !v11 )
    return 0;
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3, v11, (__m128i *)&CmpServicesString);
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v23);
  if ( SubKeyByName == -1 )
    return 0;
  v13 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter3 + 8))(
                    BugCheckParameter3,
                    SubKeyByName,
                    &a6);
  if ( !v13 )
    return 0;
  v14 = 0LL;
  a8 = 0LL;
  if ( a7 )
  {
    ManufacturingProfileServicesNode = CmpLoadManufacturingProfileServicesNode(
                                         BugCheckParameter3,
                                         v9,
                                         a7,
                                         (unsigned int)&a8,
                                         (__int64)&v20);
    v14 = a8 & -(__int64)(ManufacturingProfileServicesNode != 0);
  }
  GroupOrderList = CmpFindGroupOrderList(BugCheckParameter3, v9);
  if ( GroupOrderList == -1 )
    return 0;
  while ( 1 )
  {
    CmpFindSubKeyByNumber(BugCheckParameter3, v13, v8, &v22);
    v16 = v22;
    ++v8;
    if ( v22 == -1 )
      break;
    if ( (unsigned __int8)CmpIsLoadType(BugCheckParameter3, v14, v19) )
      CmpAddDriverToList(BugCheckParameter3, v16, GroupOrderList);
  }
  if ( v14 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v20);
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &a6);
  return 1;
}
