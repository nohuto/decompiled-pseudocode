/*
 * XREFs of CmpFreeSecurityDescriptor @ 0x1403DA6FC
 * Callers:
 *     CmpFreeKeyByCell @ 0x1403D84C4 (CmpFreeKeyByCell.c)
 *     CmpSyncKeyValues @ 0x14050F5B0 (CmpSyncKeyValues.c)
 *     CmpCopySaclToVirtualKey @ 0x1405E2E88 (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x1400EE0DC (CmpRemoveSecurityCellList.c)
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 */

__int64 __fastcall CmpFreeSecurityDescriptor(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rsi
  unsigned int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // eax
  int v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = -1;
  v9 = -1;
  result = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v10);
  v4 = result;
  if ( result )
  {
    v5 = *(_DWORD *)(result + 44);
    v6 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, v5, &v9);
    v7 = v6;
    if ( v6 )
    {
      v8 = *(_DWORD *)(v6 + 12);
      if ( v8 == 1 )
      {
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v9);
        v7 = 0LL;
        CmpRemoveSecurityCellList(BugCheckParameter2, v5);
        HvFreeCell(BugCheckParameter2, v5);
      }
      else
      {
        *(_DWORD *)(v7 + 12) = v8 - 1;
      }
      *(_DWORD *)(v4 + 44) = -1;
    }
    result = (*(__int64 (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v10);
    if ( v7 )
      return (*(__int64 (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v9);
  }
  return result;
}
