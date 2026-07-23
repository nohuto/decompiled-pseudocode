/*
 * XREFs of ViDeadlockEmptyDatabase @ 0x1407151DC
 * Callers:
 *     ViDeadlockDetectionApplySettings @ 0x140715140 (ViDeadlockDetectionApplySettings.c)
 * Callees:
 *     ViLowerIrql @ 0x140223A70 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x140223A80 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x14071518C (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x1407151C0 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x140715474 (ViDeadlockFree.c)
 *     ViDeadlockRemoveResource @ 0x140715928 (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x140715AC4 (ViDeadlockRemoveThread.c)
 */

__int64 ViDeadlockEmptyDatabase()
{
  __int64 v0; // rdi
  _QWORD *v1; // r14
  _QWORD *v2; // rsi
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // r15
  _QWORD *v8; // rbp
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdi
  _QWORD *v12; // r15
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  __int64 result; // rax
  _QWORD *v16; // rbx
  _QWORD *v17; // rbx
  unsigned __int8 v18; // [rsp+60h] [rbp+8h]

  v0 = 0LL;
  v1 = 0LL;
  v2 = 0LL;
  v18 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(1);
  v3 = ViDeadlockGlobals;
  ViDeadlockDetectionEnabled = 0;
  if ( ViDeadlockGlobals )
  {
    v4 = *((_QWORD *)ViDeadlockGlobals + 2);
    v5 = 1023LL;
    v6 = 1023LL;
    v7 = 0LL;
    do
    {
      v8 = *(_QWORD **)(v7 + v4);
      while ( v8 != (_QWORD *)(v0 + v4) )
      {
        v9 = v8 - 5;
        v8 = (_QWORD *)*v8;
        ViDeadlockRemoveResource((ULONG_PTR)v9);
        v3 = ViDeadlockGlobals;
        *v9 = v2;
        v2 = v9;
        v4 = v3[2];
      }
      v0 += 16LL;
      v7 += 16LL;
      --v6;
    }
    while ( v6 );
    v10 = v3[2050];
    v11 = 0LL;
    do
    {
      v12 = *(_QWORD **)(v6 + v10);
      while ( v12 != (_QWORD *)(v11 + v10) )
      {
        v13 = v12 - 3;
        v12 = (_QWORD *)*v12;
        ViDeadlockRemoveThread((ULONG_PTR)v13);
        v14 = ViDeadlockGlobals;
        *v13 = v1;
        v1 = v13;
        v10 = v14[2050];
      }
      v11 += 16LL;
      v6 += 16LL;
      --v5;
    }
    while ( v5 );
  }
  ViDeadlockDetectionUnlock(1);
  result = ViLowerIrql(v18);
  if ( v1 )
  {
    do
    {
      v16 = (_QWORD *)*v1;
      result = ViDeadlockFree(v1);
      v1 = v16;
    }
    while ( v16 );
  }
  if ( v2 )
  {
    do
    {
      v17 = (_QWORD *)*v2;
      result = ViDeadlockFree(v2);
      v2 = v17;
    }
    while ( v17 );
  }
  return result;
}
