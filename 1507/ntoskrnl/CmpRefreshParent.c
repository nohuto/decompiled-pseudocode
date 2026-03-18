/*
 * XREFs of CmpRefreshParent @ 0x140664730
 * Callers:
 *     <none>
 * Callees:
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404C87E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpReferenceKeyControlBlock @ 0x1404CBD60 (CmpReferenceKeyControlBlock.c)
 */

__int64 __fastcall CmpRefreshParent(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rbx
  ULONG_PTR v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  v3 = *(_DWORD **)a3;
  v5 = *(_QWORD *)(a3 + 8);
  if ( *(_QWORD *)(a1 + 72) == *(_QWORD *)a3 )
  {
    *(_QWORD *)(a1 + 72) = v5;
    if ( *v3 )
    {
      CmpReferenceKeyControlBlock(v5);
      CmpDereferenceKeyControlBlockWithLock((ULONG_PTR)v3, 0LL, v6, v7);
    }
  }
  return 0LL;
}
