/*
 * XREFs of KeStartDynamicProcessor @ 0x140698E60
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PnpInitializeProcessor @ 0x1401F9E50 (PnpInitializeProcessor.c)
 *     KiStartDynamicProcessor @ 0x14069849C (KiStartDynamicProcessor.c)
 *     PsUpdateActiveProcessAffinity @ 0x1406BFE5C (PsUpdateActiveProcessAffinity.c)
 */

__int64 __fastcall KeStartDynamicProcessor(__int64 a1, unsigned int a2, unsigned __int16 a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  unsigned int v11; // r9d
  int started; // ebx
  signed __int32 v13; // eax

  if ( KeGetCurrentThread()->ApcState.Process != PsInitialSystemProcess || !KeDynamicPartitioningSupported )
    return 3221225473LL;
  CurrentThread = KeGetCurrentThread();
  v8 = KeAbPreAcquire((ULONG_PTR)&KiDynamicProcessorLock, 0LL, 0LL, (__int64)a4);
  v10 = v8;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&KiDynamicProcessorLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&KiDynamicProcessorLock, v8);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  qword_140338E48 = (__int64)CurrentThread;
  if ( (unsigned int)KeNumberProcessors_0 >= KeMaximumProcessors )
  {
    started = -1073741223;
  }
  else
  {
    v11 = KeNumberProcessors_0;
    *a4 = KeNumberProcessors_0;
    started = KiStartDynamicProcessor(v9, a2, a3, v11);
  }
  qword_140338E48 = 0LL;
  v13 = _InterlockedCompareExchange((volatile signed __int32 *)&KiDynamicProcessorLock, 1, 0);
  if ( v13 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&KiDynamicProcessorLock, v13);
  KeAbPostRelease((ULONG_PTR)&KiDynamicProcessorLock);
  if ( started >= 0 )
  {
    PnpInitializeProcessor();
    PsUpdateActiveProcessAffinity();
  }
  return (unsigned int)started;
}
