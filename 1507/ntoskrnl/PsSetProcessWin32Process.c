/*
 * XREFs of PsSetProcessWin32Process @ 0x14053E204
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PsSetProcessWin32Process(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v5; // r15d
  unsigned __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // r14
  __int16 v13; // ax

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  v9 = (unsigned __int64 *)(a1 + 728);
  v10 = KeAbPreAcquire(a1 + 728, 0LL, 0LL, a4);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx(v9, v10, (ULONG_PTR)v9, v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  if ( a2 )
  {
    if ( (*(_DWORD *)(a1 + 772) & 8) != 0 || *(_QWORD *)(a1 + 936) )
      v5 = -1073741558;
    else
      *(_QWORD *)(a1 + 936) = a2;
  }
  else if ( *(_QWORD *)(a1 + 936) == a3 )
  {
    *(_QWORD *)(a1 + 936) = 0LL;
  }
  else
  {
    v5 = -1073741823;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v9);
  KeAbPostRelease((ULONG_PTR)v9);
  v13 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v13;
  if ( !v13
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v5;
}
