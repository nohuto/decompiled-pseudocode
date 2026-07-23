/*
 * XREFs of CmpFreeSecurityDescriptor @ 0x1404BCD30
 * Callers:
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 *     CmpFreeKeyByCell @ 0x1403FF488 (CmpFreeKeyByCell.c)
 *     CmpCopySaclToVirtualKey @ 0x140602258 (CmpCopySaclToVirtualKey.c)
 *     CmpSyncKeyValues @ 0x14060990C (CmpSyncKeyValues.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x1400A9B6C (CmpRemoveSecurityCellList.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 */

__int64 __fastcall CmpFreeSecurityDescriptor(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v5; // rbp
  unsigned int v6; // esi
  __int64 v7; // rax
  int v8; // eax
  int v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+44h] [rbp+Ch]
  int v11; // [rsp+50h] [rbp+18h] BYREF
  int v12; // [rsp+54h] [rbp+1Ch]

  v11 = -1;
  v9 = -1;
  v12 = 0;
  v2 = 0LL;
  v10 = 0;
  result = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v11);
  v5 = result;
  if ( result )
  {
    v6 = *(_DWORD *)(result + 44);
    if ( v6 != -1 )
    {
      v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, v6, &v9);
      v2 = v7;
      if ( v7 )
      {
        v8 = *(_DWORD *)(v7 + 12);
        if ( v8 == 1 )
        {
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v9);
          v2 = 0LL;
          CmpRemoveSecurityCellList(BugCheckParameter2, v6);
          HvFreeCell(BugCheckParameter2, v6);
        }
        else
        {
          *(_DWORD *)(v2 + 12) = v8 - 1;
        }
        *(_DWORD *)(v5 + 44) = -1;
      }
    }
    result = (*(__int64 (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v11);
    if ( v2 )
      return (*(__int64 (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v9);
  }
  return result;
}
