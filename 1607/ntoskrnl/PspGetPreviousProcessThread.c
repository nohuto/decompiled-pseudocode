/*
 * XREFs of PspGetPreviousProcessThread @ 0x1404EC8D0
 * Callers:
 *     PspTerminateAllThreads @ 0x1404EC680 (PspTerminateAllThreads.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14006A940 (ObReferenceObjectSafeWithTag.c)
 *     PspUnlockProcessShared @ 0x1400C7AE4 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x1400C7B28 (PspLockProcessShared.c)
 */

__int64 __fastcall PspGetPreviousProcessThread(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v3; // rbp
  __int64 v6; // r14
  int v7; // esi
  __int64 v8; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = a1 + 1160;
  v6 = 0LL;
  v7 = 0;
  PspLockProcessShared(a1, (__int64)CurrentThread);
  if ( a2 )
    v8 = a2[212];
  else
    v8 = *(_QWORD *)(v3 + 8);
  while ( v8 != v3 )
  {
    v6 = v8 - 1688;
    if ( ObReferenceObjectSafeWithTag(v8 - 1688) )
    {
      v7 = 1;
      break;
    }
    v8 = *(_QWORD *)(v8 + 8);
  }
  PspUnlockProcessShared(a1, (__int64)CurrentThread);
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  return v6 & -(__int64)(v7 != 0);
}
