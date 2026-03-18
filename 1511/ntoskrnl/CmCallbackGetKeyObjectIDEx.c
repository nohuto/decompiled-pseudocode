/*
 * XREFs of CmCallbackGetKeyObjectIDEx @ 0x1404A9258
 * Callers:
 *     <none>
 * Callees:
 *     CmpConstructName @ 0x1403FC9B0 (CmpConstructName.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140423B90 (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 */

__int64 __fastcall CmCallbackGetKeyObjectIDEx(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, int a5)
{
  _QWORD *v5; // rdi
  __int64 v8; // rax
  __int64 v9; // rbx

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
  v9 = *(_QWORD *)(a2 + 8);
  CmpLockKcbShared(v9);
  if ( *(_QWORD *)(v9 + 80) )
    v5 = CmpConstructName(v9);
  CmpUnlockKcb((char *)v9);
  CmpUnlockRegistry();
  if ( v5 )
  {
    *a4 = v5;
    return 0LL;
  }
  return 3221225626LL;
}
