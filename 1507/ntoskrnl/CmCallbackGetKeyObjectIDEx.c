/*
 * XREFs of CmCallbackGetKeyObjectIDEx @ 0x1404255E0
 * Callers:
 *     <none>
 * Callees:
 *     CmpLockKcbShared @ 0x140427A50 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpConstructName @ 0x1404C5EC0 (CmpConstructName.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 */

__int64 __fastcall CmCallbackGetKeyObjectIDEx(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4, int a5)
{
  __int64 v5; // rdi
  __int64 v8; // rax
  _QWORD *v9; // rbx

  v5 = 0LL;
  if ( !a2 || *(_DWORD *)a2 != 1803104306 || !a1 || a5 )
    return 3221225485LL;
  v8 = *(_QWORD *)(a2 + 8);
  if ( a3 )
    *a3 = v8;
  if ( !a4 )
    return 0LL;
  if ( (v8 & 1) != 0 )
    return 3221225485LL;
  CmpLockRegistry();
  v9 = *(_QWORD **)(a2 + 8);
  CmpLockKcbShared(v9);
  if ( v9[10] )
    v5 = CmpConstructName(v9);
  CmpUnlockKcb(v9);
  CmpUnlockRegistry();
  if ( v5 )
  {
    *a4 = v5;
    return 0LL;
  }
  return 3221225626LL;
}
