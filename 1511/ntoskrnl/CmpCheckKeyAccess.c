/*
 * XREFs of CmpCheckKeyAccess @ 0x1405E2E0C
 * Callers:
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmpDoAccessCheckOnSubtree @ 0x1405E30DC (CmpDoAccessCheckOnSubtree.c)
 * Callees:
 *     CmpCheckSecurityCellAccess @ 0x1404BFEE8 (CmpCheckSecurityCellAccess.c)
 */

__int64 __fastcall CmpCheckKeyAccess(__int64 a1, __int64 a2, KPROCESSOR_MODE a3, ACCESS_MASK a4)
{
  __int64 v7; // rax
  unsigned int v9; // ebx
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = -1;
  if ( !a1 || (unsigned int)(a2 - 1) > 0xFFFFFFFD )
    return 3221225852LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, a2, &v10);
  if ( !v7 )
    return 3221225626LL;
  v9 = *(_DWORD *)(v7 + 44);
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v10);
  return CmpCheckSecurityCellAccess(a1, v9, a3, a4);
}
