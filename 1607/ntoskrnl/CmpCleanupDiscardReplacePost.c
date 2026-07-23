/*
 * XREFs of CmpCleanupDiscardReplacePost @ 0x14060B910
 * Callers:
 *     CmpCleanupDiscardReplaceContext @ 0x1403FAEDC (CmpCleanupDiscardReplaceContext.c)
 * Callees:
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140436A10 (CmpDereferenceKeyControlBlockWithLock.c)
 */

_BOOL8 __fastcall CmpCleanupDiscardReplacePost(ULONG_PTR a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx

  v2 = (_QWORD *)(a2 + 16);
  v3 = *(__int64 **)(a2 + 16);
  v4 = *v3;
  if ( v3[1] != a2 + 16 || *(__int64 **)(v4 + 8) != v3 )
    __fastfail(3u);
  *v2 = v4;
  LOBYTE(a2) = 1;
  *(_QWORD *)(v4 + 8) = v2;
  CmpDereferenceKeyControlBlockWithLock(a1, a2);
  LOBYTE(v5) = 1;
  CmpDereferenceKeyControlBlockWithLock((ULONG_PTR)(v3 - 14), v5);
  return *v2 == (_QWORD)v2;
}
