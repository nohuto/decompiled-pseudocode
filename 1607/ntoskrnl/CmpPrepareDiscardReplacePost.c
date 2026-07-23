/*
 * XREFs of CmpPrepareDiscardReplacePost @ 0x14060BEC4
 * Callers:
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14060BE64 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 * Callees:
 *     CmpCloneToUnbackedKcb @ 0x1401B4730 (CmpCloneToUnbackedKcb.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140436A10 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpReferenceKeyControlBlock @ 0x140518944 (CmpReferenceKeyControlBlock.c)
 */

__int64 __fastcall CmpPrepareDiscardReplacePost(ULONG_PTR BugCheckParameter4, __int64 a2)
{
  unsigned int v2; // ebx
  char v5; // si
  int v6; // edi
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v10 = 0LL;
  v5 = CmpReferenceKeyControlBlock(BugCheckParameter4);
  if ( v5 )
  {
    v6 = CmpCloneToUnbackedKcb(BugCheckParameter4, &v10);
    if ( v6 >= 0 )
    {
      v7 = *(_QWORD **)(a2 + 24);
      v8 = (_QWORD *)(v10 + 112);
      if ( *v7 != a2 + 16 )
        __fastfail(3u);
      *v8 = a2 + 16;
      v5 = 0;
      v8[1] = v7;
      v6 = 0;
      *v7 = v8;
      *(_QWORD *)(a2 + 24) = v8;
    }
    if ( v5 )
    {
      LOBYTE(v7) = 1;
      CmpDereferenceKeyControlBlockWithLock(BugCheckParameter4, (__int64)v7);
    }
  }
  else
  {
    v6 = -1073741670;
  }
  *(_DWORD *)(a2 + 8) = v6;
  LOBYTE(v2) = v6 < 0;
  return v2;
}
