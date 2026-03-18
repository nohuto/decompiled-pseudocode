/*
 * XREFs of CmpFlushNotifiesOnKeyBodyList @ 0x140449F10
 * Callers:
 *     CmDeleteKey @ 0x1404468EC (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404480CC (CmpTransMgrFreeVolatileData.c)
 *     CmpSearchForOpenSubKeys @ 0x1404ED9B4 (CmpSearchForOpenSubKeys.c)
 *     CmUnloadKey @ 0x1404EE348 (CmUnloadKey.c)
 *     CmpCommitDeleteKeyUoW @ 0x1404F3380 (CmpCommitDeleteKeyUoW.c)
 *     NtRenameKey @ 0x140650A88 (NtRenameKey.c)
 *     CmpSyncKcbCacheForHive @ 0x14065914C (CmpSyncKcbCacheForHive.c)
 *     CmpRefreshWorkerRoutine @ 0x140662748 (CmpRefreshWorkerRoutine.c)
 *     CmpCommitRecreateKeyUoW @ 0x140664354 (CmpCommitRecreateKeyUoW.c)
 *     CmpCommitRenameKeyUoW @ 0x140664408 (CmpCommitRenameKeyUoW.c)
 * Callees:
 *     CmpFlushNotify @ 0x1404ECD18 (CmpFlushNotify.c)
 */

__int64 __fastcall CmpFlushNotifiesOnKeyBodyList(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v3; // rdi
  __int16 v5; // r15
  __int64 v7; // rdi
  signed __int64 *v8; // r14
  signed __int64 v9; // rbx
  __int64 result; // rax
  _QWORD *i; // rbx

  v3 = (_QWORD *)(a1 + 120);
  v5 = a2;
  if ( (_QWORD *)*v3 != v3 )
  {
    for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
    {
      if ( *(i - 2) )
      {
        LOBYTE(a2) = a3;
        result = CmpFlushNotify(i - 4, a2, 0LL);
      }
      *((_WORD *)i + 8) |= v5;
    }
  }
  v7 = 0LL;
  v8 = (signed __int64 *)(a1 + 136);
  do
  {
    v9 = *v8;
    if ( (unsigned __int64)*v8 >= 3 )
    {
      result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v7 + 136), 2LL, v9);
      if ( v9 == result )
      {
        if ( *(_QWORD *)(v9 + 16) )
        {
          LOBYTE(a2) = a3;
          CmpFlushNotify(v9, a2, 0LL);
        }
        *(_WORD *)(v9 + 48) |= v5;
        result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v7 + 136), v9, 2LL);
      }
    }
    v7 = (unsigned int)(v7 + 1);
    ++v8;
  }
  while ( (unsigned int)v7 < 4 );
  return result;
}
