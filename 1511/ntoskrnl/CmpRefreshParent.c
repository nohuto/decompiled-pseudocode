/*
 * XREFs of CmpRefreshParent @ 0x1405EC198
 * Callers:
 *     <none>
 * Callees:
 *     CmpReferenceKeyControlBlock @ 0x1403FA9B0 (CmpReferenceKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1403FB7B0 (CmpDereferenceKeyControlBlockWithLock.c)
 */

__int64 __fastcall CmpRefreshParent(__int64 a1, __int64 a2, _DWORD **a3)
{
  _DWORD *v3; // rbx
  signed __int32 *v5; // rcx

  v3 = *a3;
  v5 = a3[1];
  if ( *(_DWORD **)(a1 + 72) == *a3 )
  {
    *(_QWORD *)(a1 + 72) = v5;
    if ( *v3 )
    {
      CmpReferenceKeyControlBlock(v5);
      CmpDereferenceKeyControlBlockWithLock((ULONG_PTR)v3, 0LL);
    }
  }
  return 0LL;
}
