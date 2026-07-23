/*
 * XREFs of CmpJoinClassOfTrust @ 0x1401B4600
 * Callers:
 *     CmpLoadKeyCommon @ 0x14010BB8C (CmpLoadKeyCommon.c)
 *     CmpResolveHiveLoadConflict @ 0x1405FF1D4 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     CmpPerformTrustClassAccessCheck @ 0x1401B4678 (CmpPerformTrustClassAccessCheck.c)
 *     CmpUnlockHiveList @ 0x1405183C8 (CmpUnlockHiveList.c)
 *     CmpLockHiveListExclusive @ 0x1405193C8 (CmpLockHiveListExclusive.c)
 */

__int64 __fastcall CmpJoinClassOfTrust(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rdi
  __int64 v5; // rcx
  __int64 result; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // rax

  v3 = a2;
  v5 = a2;
  LOBYTE(a2) = a3;
  result = CmpPerformTrustClassAccessCheck(v5, a2);
  if ( (int)result >= 0 )
  {
    if ( (*(_DWORD *)(v3 + 5360) & 1) != 0 )
    {
      CmpLockHiveListExclusive();
      v7 = *(_QWORD **)(v3 + 5376);
      v8 = (_QWORD *)(a1 + 5368);
      if ( *v7 != v3 + 5368 )
        __fastfail(3u);
      *v8 = v3 + 5368;
      *(_QWORD *)(a1 + 5376) = v7;
      *v7 = v8;
      *(_QWORD *)(v3 + 5376) = v8;
      CmpUnlockHiveList();
    }
    else
    {
      *(_DWORD *)(a1 + 5360) &= ~1u;
    }
    return 0LL;
  }
  return result;
}
