/*
 * XREFs of PopRunMaximumIrpWorkers @ 0x140147CEC
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PopCreateDynamicIrpWorker @ 0x140159898 (PopCreateDynamicIrpWorker.c)
 */

int __fastcall PopRunMaximumIrpWorkers(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rdi
  unsigned __int8 v8; // bl
  signed __int32 v9; // eax
  __int64 v10; // rbx
  _QWORD *v11; // rax
  _BYTE Object[4]; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+34h] [rbp-24h]
  _QWORD v15[2]; // [rsp+38h] [rbp-20h] BYREF
  int v16; // [rsp+48h] [rbp-10h]

  v4 = KeAbPreAcquire((ULONG_PTR)&PopIrpWorkerMutex, 0LL, 0LL, a4);
  v5 = v4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PopIrpWorkerMutex, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PopIrpWorkerMutex, v4);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  qword_14032D5E8 = 0LL;
  dword_14032D610 = CurrentIrql;
  v7 = (unsigned int)(15 - PopIrpWorkerPendingCount - PopIrpWorkerCount);
  v8 = dword_14032D610;
  PopIrpWorkerPendingCount += v7;
  PopCreateIrpWorkerAllowed = 0;
  v9 = _InterlockedCompareExchange((volatile signed __int32 *)&PopIrpWorkerMutex, 1, 0);
  if ( v9 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PopIrpWorkerMutex, v9);
  __writecr8(v8);
  KeAbPostRelease((ULONG_PTR)&PopIrpWorkerMutex);
  v14 = 0;
  v15[1] = v15;
  v10 = 0LL;
  Object[0] = 5;
  v11 = v15;
  v15[0] = v15;
  Object[2] = 8;
  v16 = v7;
  if ( (_DWORD)v7 )
  {
    do
    {
      LODWORD(v11) = PopCreateDynamicIrpWorker(Object);
      if ( (int)v11 >= 0 )
        v10 = (unsigned int)(v10 + 1);
      --v7;
    }
    while ( v7 );
  }
  if ( (_DWORD)v10 )
  {
    do
    {
      LODWORD(v11) = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      --v10;
    }
    while ( v10 );
  }
  return (int)v11;
}
