/*
 * XREFs of CmpFlushNotifiesOnKeyBodyList @ 0x14049FEF8
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x1400878C4 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x1401B5DB0 (CmDeleteLayeredKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403FD614 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x1403FF378 (CmDeleteKey.c)
 *     CmpSearchForOpenSubKeys @ 0x14049ACE4 (CmpSearchForOpenSubKeys.c)
 *     CmUnloadKey @ 0x14049F858 (CmUnloadKey.c)
 *     NtRenameKey @ 0x1405F9DF0 (NtRenameKey.c)
 *     CmRenameKey @ 0x1405FD4E8 (CmRenameKey.c)
 *     CmpFlushNotifiesPostCallback @ 0x14060BB90 (CmpFlushNotifiesPostCallback.c)
 *     CmpForceInvalidatePostCallback @ 0x14060BC20 (CmpForceInvalidatePostCallback.c)
 *     CmpRefreshWorkerRoutine @ 0x14060DA50 (CmpRefreshWorkerRoutine.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14060E464 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRecreateKeyUoW @ 0x14060E734 (CmpLightWeightCommitRecreateKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14060E7D8 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpFlushNotify @ 0x14049A0FC (CmpFlushNotify.c)
 */

void __fastcall CmpFlushNotifiesOnKeyBodyList(__int64 a1, __int16 a2, char a3)
{
  _QWORD *v3; // rdi
  __int64 v7; // rdi
  __int64 *v8; // r14
  __int64 v9; // rbx
  _QWORD *i; // rbx

  v3 = (_QWORD *)(a1 + 112);
  if ( (_QWORD *)*v3 != v3 )
  {
    for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
    {
      if ( *(i - 2) )
        CmpFlushNotify((__int64)(i - 4), a3, 0LL);
      *((_WORD *)i + 8) |= a2;
    }
  }
  v7 = 0LL;
  v8 = (__int64 *)(a1 + 128);
  do
  {
    v9 = *v8;
    if ( (unsigned __int64)*v8 >= 3
      && v9 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v7 + 128), 2LL, v9) )
    {
      if ( *(_QWORD *)(v9 + 16) )
        CmpFlushNotify(v9, a3, 0LL);
      *(_WORD *)(v9 + 48) |= a2;
      _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v7 + 128), v9, 2LL);
    }
    v7 = (unsigned int)(v7 + 1);
    ++v8;
  }
  while ( (unsigned int)v7 < 4 );
}
