/*
 * XREFs of PfpScenCtxPrefetchStateSet @ 0x1403EFAB0
 * Callers:
 *     PfpScenCtxScenarioSet @ 0x1403F69DC (PfpScenCtxScenarioSet.c)
 *     PfSetSuperfetchInformation @ 0x140454728 (PfSetSuperfetchInformation.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PfpScenCtxPrefetchStateSet(ULONG_PTR BugCheckParameter2, int a2, int a3, __int64 a4)
{
  int v4; // r14d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rsi
  unsigned int v12; // esi
  struct _KTHREAD *v13; // rdx
  __int16 v14; // ax

  v4 = a4;
  if ( !(_DWORD)a4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL, a4);
    v11 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v9, BugCheckParameter2, v10);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 48) == a2 )
  {
    if ( a3 == 1 && (*(_DWORD *)(BugCheckParameter2 + 8) & 0xC) == 8 )
    {
      v12 = -1073741431;
    }
    else
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0xC) == 4 )
      {
        KeSetEvent((PRKEVENT)(BugCheckParameter2 + 16), 1, 0);
        *(_DWORD *)(BugCheckParameter2 + 8) &= 0xFFFFFFF3;
      }
      v12 = 0;
      *(_DWORD *)(BugCheckParameter2 + 8) ^= ((unsigned __int8)a3 ^ (unsigned __int8)*(_DWORD *)(BugCheckParameter2 + 8)) & 3;
    }
  }
  else
  {
    v12 = -1073741735;
  }
  if ( !v4 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    v13 = KeGetCurrentThread();
    v14 = v13->KernelApcDisable + 1;
    v13->KernelApcDisable = v14;
    if ( !v14
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
      && !v13->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v12;
}
