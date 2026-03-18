/*
 * XREFs of GetThreadCurrentContext @ 0x1C00065C4
 * Callers:
 *     NestAsyncEvalObject @ 0x1C0046868 (NestAsyncEvalObject.c)
 *     SyncLoadDDB @ 0x1C0086180 (SyncLoadDDB.c)
 * Callees:
 *     <none>
 */

__int64 *GetThreadCurrentContext()
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 *v1; // rax
  __int64 v2; // rcx

  CurrentThread = KeGetCurrentThread();
  v1 = (__int64 *)RunningContextListHead;
  v2 = 0LL;
  while ( v1 != &RunningContextListHead )
  {
    if ( (struct _KTHREAD *)v1[2] == CurrentThread )
      return v1 - 49;
    v1 = (__int64 *)*v1;
  }
  return (__int64 *)v2;
}
