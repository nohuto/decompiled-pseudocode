/*
 * XREFs of SepNotifyFileSystems @ 0x140558C4C
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 */

void __fastcall SepNotifyFileSystems(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbx
  void (__fastcall *v9)(__int64); // rbx
  void (__fastcall **i)(__int64, _QWORD); // rbx
  signed __int32 v11; // eax
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax
  void *v14; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeGetCurrentThread();
  v7 = KeAbPreAcquire((ULONG_PTR)&SepRmNotifyMutex, 0LL, 0LL, a4);
  v8 = v7;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&SepRmNotifyMutex, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&SepRmNotifyMutex, v7);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = (void (__fastcall *)(__int64))SeFileSystemNotifyRoutinesHead;
  qword_14036A8E0 = (__int64)v6;
  while ( v9 )
  {
    (*((void (__fastcall **)(_QWORD *))v9 + 1))(a1 + 4);
    v9 = *(void (__fastcall **)(__int64))v9;
  }
  for ( i = (void (__fastcall **)(__int64, _QWORD))SeFileSystemNotifyRoutinesExHead;
        i;
        i = (void (__fastcall **)(__int64, _QWORD))*i )
  {
    i[1]((__int64)(a1 + 4), a1[5]);
  }
  qword_14036A8E0 = 0LL;
  v11 = _InterlockedCompareExchange((volatile signed __int32 *)&SepRmNotifyMutex, 1, 0);
  if ( v11 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&SepRmNotifyMutex, v11);
  KeAbPostRelease((ULONG_PTR)&SepRmNotifyMutex);
  v12 = KeGetCurrentThread();
  v13 = v12->KernelApcDisable + 1;
  v12->KernelApcDisable = v13;
  if ( !v13
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
    && !v12->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  v14 = (void *)a1[5];
  if ( v14 )
    PspDereferenceSiloObject(v14);
  ExFreePoolWithTag(a1, 0);
}
