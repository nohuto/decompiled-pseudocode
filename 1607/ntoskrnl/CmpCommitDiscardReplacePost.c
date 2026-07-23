/*
 * XREFs of CmpCommitDiscardReplacePost @ 0x14060BA04
 * Callers:
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14060B9BC (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 * Callees:
 *     CmpDiscardKcb @ 0x14000A96C (CmpDiscardKcb.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14010BF00 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1401B4AC0 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpRebuildKcbCache @ 0x1403FC920 (CmpRebuildKcbCache.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140403838 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140436A10 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpMarkKeyUnbacked @ 0x140518288 (CmpMarkKeyUnbacked.c)
 */

__int64 __fastcall CmpCommitDiscardReplacePost(ULONG_PTR BugCheckParameter4, __int64 a2)
{
  __int64 **v2; // rdx
  __int64 *v4; // rbx
  __int64 v5; // rax
  ULONG_PTR v6; // rbx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  _QWORD **v11; // rax
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdx
  _QWORD v16[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (__int64 **)(a2 + 16);
  v4 = *v2;
  v5 = **v2;
  if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v5 + 8) != v4 )
    __fastfail(3u);
  *v2 = (__int64 *)v5;
  v6 = (ULONG_PTR)(v4 - 14);
  *(_QWORD *)(v5 + 8) = v2;
  *(_QWORD *)(v6 + 120) = v6 + 112;
  *(_QWORD *)(v6 + 112) = v6 + 112;
  *(_QWORD *)(v6 + 184) = *(_QWORD *)(BugCheckParameter4 + 184);
  *(_QWORD *)(BugCheckParameter4 + 184) = 0LL;
  *(_WORD *)(BugCheckParameter4 + 58) = 0;
  *(_QWORD *)(*(_QWORD *)(v6 + 184) + 16LL) = v6;
  v7 = *(_DWORD *)(BugCheckParameter4 + 32);
  if ( v7 != -1 )
  {
    *(_DWORD *)(v6 + 32) = v7;
    CmpMarkKeyUnbacked(BugCheckParameter4);
    CmpRebuildKcbCache(v6);
  }
  CmpDiscardKcb(BugCheckParameter4);
  v8 = *(_QWORD *)(v6 + 24);
  v9 = *(_QWORD *)(v8 + 2800);
  v10 = 3
      * ((unsigned int)(*(_DWORD *)(v8 + 2808) - 1) & ((unsigned int)(101027
                                                                    * (*(_DWORD *)(v6 + 8) ^ (*(_DWORD *)(v6 + 8) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v6 + 8) ^ (*(_DWORD *)(v6 + 8) >> 9))) >> 9)));
  *(_QWORD *)(v6 + 16) = *(_QWORD *)(v9
                                   + 24
                                   * ((unsigned int)(*(_DWORD *)(v8 + 2808) - 1) & ((unsigned int)(101027
                                                                                                 * (*(_DWORD *)(v6 + 8) ^ (*(_DWORD *)(v6 + 8) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v6 + 8) ^ (*(_DWORD *)(v6 + 8) >> 9))) >> 9)))
                                   + 16);
  *(_QWORD *)(v9 + 8 * v10 + 16) = v6 + 8;
  v11 = (_QWORD **)(*(_QWORD *)(v6 + 184) + 32LL);
  v12 = *v11;
  while ( v12 != v11 )
  {
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int32 *)v6);
    CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)BugCheckParameter4);
    v12 = (_QWORD *)*v12;
    v11 = (_QWORD **)(*(_QWORD *)(v6 + 184) + 32LL);
  }
  v16[0] = BugCheckParameter4;
  v16[1] = v6;
  CmpSearchKeyControlBlockTreeEx(
    (__int64 (__fastcall *)(_QWORD *, ULONG_PTR, __int64))CmpRefreshParent,
    *(_QWORD *)(v6 + 24),
    (__int64)v16,
    0);
  LOBYTE(v13) = 1;
  CmpDereferenceKeyControlBlockWithLock(BugCheckParameter4, v13);
  LOBYTE(v14) = 1;
  CmpDereferenceKeyControlBlockWithLock(v6, v14);
  return 0LL;
}
