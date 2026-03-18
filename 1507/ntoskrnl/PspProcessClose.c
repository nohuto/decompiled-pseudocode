/*
 * XREFs of PspProcessClose @ 0x14052D5C0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     PspRundownProcess @ 0x14040A4F4 (PspRundownProcess.c)
 *     PsTerminateProcess @ 0x1405579A8 (PsTerminateProcess.c)
 */

void __fastcall PspProcessClose(__int64 a1, signed __int64 a2, __int64 a3, unsigned __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  signed __int32 v6; // r15d
  unsigned __int64 *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // r14
  __int16 v11; // ax

  if ( a4 > 1 || *(_DWORD *)(a2 + 1168) )
  {
    if ( *(_QWORD *)(a1 + 744) == *(_QWORD *)(a2 + 1008) && (*(_DWORD *)(a1 + 772) & 0x40000008) != 0 )
      PsTerminateProcess(a2, 3221225738LL);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0x2000000;
    --CurrentThread->KernelApcDisable;
    v7 = (unsigned __int64 *)(a2 + 728);
    v8 = KeAbPreAcquire(a2 + 728, 0LL, 0LL, a4);
    v10 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7, v9);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    if ( !*(_DWORD *)(a2 + 1168) )
    {
      _m_prefetchw((const void *)(a2 + 772));
      v6 = _InterlockedOr((volatile signed __int32 *)(a2 + 772), 8u);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v7);
    KeAbPostRelease((ULONG_PTR)v7);
    v11 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v11;
    if ( !v11
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( (v6 & 0x2000000) == 0 )
      PspRundownProcess(a2);
  }
}
