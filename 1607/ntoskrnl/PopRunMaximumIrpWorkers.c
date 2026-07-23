/*
 * XREFs of PopRunMaximumIrpWorkers @ 0x14012520C
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     PopCreateDynamicIrpWorker @ 0x1401252C0 (PopCreateDynamicIrpWorker.c)
 */

int PopRunMaximumIrpWorkers()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  _QWORD *v2; // rax
  _BYTE Object[4]; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+34h] [rbp-24h]
  _QWORD v6[2]; // [rsp+38h] [rbp-20h] BYREF
  int v7; // [rsp+48h] [rbp-10h]

  ExAcquireFastMutex(&PopIrpWorkerMutex);
  PopCreateIrpWorkerAllowed = 0;
  v0 = (unsigned int)(15 - PopIrpWorkerPendingCount - PopIrpWorkerCount);
  PopIrpWorkerPendingCount += v0;
  KeReleaseGuardedMutex(&PopIrpWorkerMutex);
  v5 = 0;
  v6[1] = v6;
  v1 = 0LL;
  Object[0] = 5;
  v2 = v6;
  v6[0] = v6;
  Object[2] = 8;
  v7 = v0;
  if ( (_DWORD)v0 )
  {
    do
    {
      LODWORD(v2) = PopCreateDynamicIrpWorker(Object);
      if ( (int)v2 >= 0 )
        v1 = (unsigned int)(v1 + 1);
      --v0;
    }
    while ( v0 );
  }
  if ( (_DWORD)v1 )
  {
    do
    {
      LODWORD(v2) = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      --v1;
    }
    while ( v1 );
  }
  return (int)v2;
}
