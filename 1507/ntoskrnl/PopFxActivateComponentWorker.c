/*
 * XREFs of PopFxActivateComponentWorker @ 0x14002775C
 * Callers:
 *     PopFxActivateComponent @ 0x1400276B4 (PopFxActivateComponent.c)
 *     PopFxIdleWorkerTail @ 0x1400279A0 (PopFxIdleWorkerTail.c)
 * Callees:
 *     PopFxCompleteComponentActivation @ 0x140027434 (PopFxCompleteComponentActivation.c)
 *     PopFxActivateComponent @ 0x1400276B4 (PopFxActivateComponent.c)
 *     PopFxAddRefDevice @ 0x1400277F0 (PopFxAddRefDevice.c)
 *     PopPluginComponentActive @ 0x140027B7C (PopPluginComponentActive.c)
 *     PopFxProcessWork @ 0x1400288DC (PopFxProcessWork.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

LONG __fastcall PopFxActivateComponentWorker(ULONG_PTR a1, __int64 a2, char a3, __int64 a4)
{
  LONG result; // eax
  __int64 v9; // r8
  bool v10; // bl
  volatile signed __int32 *v11; // rsi
  unsigned __int8 CurrentIrql; // r13
  int v13; // eax
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rbx
  void *retaddr; // [rsp+48h] [rbp+0h]

  result = PopFxAddRefDevice(a1);
  if ( *(_DWORD *)(a2 + 172) )
  {
    v11 = (volatile signed __int32 *)(a2 + 128);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(a2 + 128);
    }
    else if ( _interlockedbittestandset64(v11, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(a2 + 128);
    }
    v13 = *(_DWORD *)(a2 + 172);
    v14 = 0LL;
    *(_DWORD *)(a2 + 184) = v13;
    if ( v13 )
    {
      do
      {
        v15 = *(_QWORD *)(a2 + 176);
        v16 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8LL * *(unsigned int *)(v15 + 8 * v14));
        *(_BYTE *)(v15 + 8 * v14 + 4) = 1;
        PopFxActivateComponent(a1, (volatile signed __int32 *)v16, 2LL, a3);
        if ( *(int *)(v16 + 88) < 0 )
        {
          *(_BYTE *)(*(_QWORD *)(a2 + 176) + 8 * v14 + 4) = 0;
          --*(_DWORD *)(a2 + 184);
        }
        v14 = (unsigned int)(v14 + 1);
      }
      while ( (unsigned int)v14 < *(_DWORD *)(a2 + 172) );
      v11 = (volatile signed __int32 *)(a2 + 128);
    }
    v10 = *(_DWORD *)(a2 + 184) == 0;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v11, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  else
  {
    v10 = 1;
  }
  if ( a3 )
    return PopFxCompleteComponentActivation(a1, a2, 0);
  if ( v10 )
  {
    LOBYTE(v9) = 1;
    result = PopPluginComponentActive(a1, *(unsigned int *)(a2 + 16), v9, a4);
    if ( (_BYTE)result == 1 )
      return PopFxProcessWork(0LL);
  }
  return result;
}
