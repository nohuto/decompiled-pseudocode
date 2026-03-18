/*
 * XREFs of ExEnableHandleExceptions @ 0x1405517F8
 * Callers:
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     PspApplyMitigationOptions @ 0x140469EBC (PspApplyMitigationOptions.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

bool __fastcall ExEnableHandleExceptions(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  bool v7; // r14
  unsigned __int64 *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // r15
  __int64 v12; // rcx
  char v13; // cl
  __int16 v14; // ax
  int v16; // eax

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  --CurrentThread->KernelApcDisable;
  v8 = (unsigned __int64 *)(a1 + 56);
  v9 = KeAbPreAcquire(a1 + 56, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8, v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v12 = *(_QWORD *)(a1 + 96);
  if ( v12 )
  {
    v16 = *(_DWORD *)(v12 + 8);
    if ( (v16 & 8) != 0 )
    {
      if ( !a2 )
        v7 = 1;
    }
    else if ( a2 )
    {
      *(_DWORD *)(v12 + 8) = v16 | 8;
    }
  }
  else
  {
    v13 = *(_BYTE *)(a1 + 44);
    if ( (v13 & 2) != 0 )
      v7 = a2 == 0;
    else
      *(_BYTE *)(a1 + 44) = v13 ^ (v13 ^ (2 * (a2 != 0))) & 2;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v8);
  KeAbPostRelease((ULONG_PTR)v8);
  v14 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return !v7;
}
