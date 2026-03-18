/*
 * XREFs of CmpRemoveSecurityCellList @ 0x14012AF2C
 * Callers:
 *     CmpTransMgrFreeVolatileData @ 0x1404480CC (CmpTransMgrFreeVolatileData.c)
 *     CmpFreeSecurityDescriptor @ 0x14044A4C8 (CmpFreeSecurityDescriptor.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14044B704 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1404AE5EC (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpCommitSetSecurityUoW @ 0x14058E3F0 (CmpCommitSetSecurityUoW.c)
 *     CmpCopySaclToVirtualKey @ 0x140659314 (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     CmpRemoveFromSecurityCache @ 0x14054E720 (CmpRemoveFromSecurityCache.c)
 */

__int64 __fastcall CmpRemoveSecurityCellList(__int64 a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // r14
  int v8; // [rsp+50h] [rbp+30h] BYREF
  int v9; // [rsp+60h] [rbp+40h] BYREF
  int v10; // [rsp+68h] [rbp+48h] BYREF

  v9 = -1;
  v2 = a2;
  v10 = -1;
  v8 = -1;
  v4 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, a2, &v8);
  v6 = result;
  if ( result )
  {
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, *(unsigned int *)(result + 4), &v9);
    v7 = result;
    if ( result )
    {
      result = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, *(unsigned int *)(v6 + 8), &v10);
      v4 = result;
      if ( result )
      {
        *(_DWORD *)(v7 + 8) = *(_DWORD *)(v6 + 8);
        *(_DWORD *)(result + 4) = *(_DWORD *)(v6 + 4);
        (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v9);
        (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v10);
        (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v8);
        v7 = 0LL;
        v4 = 0LL;
        v6 = 0LL;
        result = CmpRemoveFromSecurityCache(a1, v2);
      }
    }
    if ( v6 )
      result = (*(__int64 (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v8);
    if ( v7 )
      result = (*(__int64 (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v9);
    if ( v4 )
      return (*(__int64 (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v10);
  }
  return result;
}
