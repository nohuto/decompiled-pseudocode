/*
 * XREFs of CmpFlushNotifiesOnKeyBodyList @ 0x140518304
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x14010BABC (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x1401B5C94 (CmDeleteLayeredKey.c)
 *     CmpSearchForOpenSubKeys @ 0x1403E3C04 (CmpSearchForOpenSubKeys.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403FC4D4 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x1403FE238 (CmDeleteKey.c)
 *     CmUnloadKey @ 0x140517C64 (CmUnloadKey.c)
 *     NtRenameKey @ 0x1405F9EA4 (NtRenameKey.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmpFlushNotifiesPostCallback @ 0x14060BC44 (CmpFlushNotifiesPostCallback.c)
 *     CmpForceInvalidatePostCallback @ 0x14060BCD4 (CmpForceInvalidatePostCallback.c)
 *     CmpRefreshWorkerRoutine @ 0x14060DB04 (CmpRefreshWorkerRoutine.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14060E518 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRecreateKeyUoW @ 0x14060E7E8 (CmpLightWeightCommitRecreateKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14060E88C (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpFlushNotify @ 0x1403E435C (CmpFlushNotify.c)
 */

void __fastcall CmpFlushNotifiesOnKeyBodyList(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v3; // rdi
  __int16 v5; // r15
  __int64 v7; // rdi
  __int64 *v8; // r14
  __int64 v9; // rbx
  _QWORD *i; // rbx

  v3 = (_QWORD *)(a1 + 112);
  v5 = a2;
  if ( (_QWORD *)*v3 != v3 )
  {
    for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
    {
      if ( *(i - 2) )
      {
        LOBYTE(a2) = a3;
        CmpFlushNotify((__int64)(i - 4), a2, 0LL);
      }
      *((_WORD *)i + 8) |= v5;
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
      {
        LOBYTE(a2) = a3;
        CmpFlushNotify(v9, a2, 0LL);
      }
      *(_WORD *)(v9 + 48) |= v5;
      _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v7 + 128), v9, 2LL);
    }
    v7 = (unsigned int)(v7 + 1);
    ++v8;
  }
  while ( (unsigned int)v7 < 4 );
}
