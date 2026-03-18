/*
 * XREFs of CmpFlushNotifiesOnKeyBodyList @ 0x1403DA798
 * Callers:
 *     CmpCommitDeleteKeyUoW @ 0x1403B4CF0 (CmpCommitDeleteKeyUoW.c)
 *     CmDeleteKey @ 0x1403DAB34 (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403DE534 (CmpTransMgrFreeVolatileData.c)
 *     CmUnloadKey @ 0x140498EAC (CmUnloadKey.c)
 *     CmpSearchForOpenSubKeys @ 0x140499670 (CmpSearchForOpenSubKeys.c)
 *     NtRenameKey @ 0x1405DC010 (NtRenameKey.c)
 *     CmpSyncKcbCacheForHive @ 0x1405E2CC8 (CmpSyncKcbCacheForHive.c)
 *     CmpRefreshWorkerRoutine @ 0x1405EAD40 (CmpRefreshWorkerRoutine.c)
 *     CmpCommitRenameKeyUoW @ 0x1405EBE70 (CmpCommitRenameKeyUoW.c)
 * Callees:
 *     CmpFlushNotify @ 0x140499B90 (CmpFlushNotify.c)
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
