/*
 * XREFs of PopAccumulateNonActivatedCpuTime @ 0x14023C8F0
 * Callers:
 *     PdcPoResiliencyClient @ 0x1406B76EC (PdcPoResiliencyClient.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x1406BD240 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     PpmReleaseLock @ 0x1400E70D0 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1400ED5A0 (PpmAcquireLock.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x140235158 (PpmIdleSnapConcurrencyIdleTime.c)
 */

int __fastcall PopAccumulateNonActivatedCpuTime(char a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 )
    v3 = KiProcessorBlock[0];
  v7 = 0LL;
  v8 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v9 = *(unsigned __int16 *)(*(_QWORD *)(v3 + 1600) + 146LL);
  if ( v9 <= PpmParkNumNodes )
  {
    v10 = *((_QWORD *)PpmParkNodes + 15 * (unsigned __int16)v9 + 6);
    if ( v10 )
    {
      PpmIdleSnapConcurrencyIdleTime(v10, &v14, &v13);
      v8 = v13;
      v7 = v14;
    }
  }
  LODWORD(v11) = PpmReleaseLock(&PpmPerfPolicyLock);
  if ( !a1 )
  {
    v11 = v7 - *a2 - v8;
    *a3 += v11;
  }
  *a2 = v7 - v8;
  return v11;
}
