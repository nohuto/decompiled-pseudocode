/*
 * XREFs of PopFxCompleteComponentActivation @ 0x140027434
 * Callers:
 *     PopFxActivateComponentWorker @ 0x14002775C (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x1400279A0 (PopFxIdleWorkerTail.c)
 *     PopFxProcessWork @ 0x1400288DC (PopFxProcessWork.c)
 * Callees:
 *     PopFxIdleComponent @ 0x1400274D0 (PopFxIdleComponent.c)
 *     PopPluginComponentActive @ 0x140027B7C (PopPluginComponentActive.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

LONG __fastcall PopFxCompleteComponentActivation(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  __int64 v6; // r8
  __int64 i; // rbp
  LONG result; // eax
  __int64 v9; // rax
  bool v10; // r14
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // r15
  volatile signed __int32 *v14; // rbx
  __int64 v15; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int8 CurrentIrql; // [rsp+60h] [rbp+8h]

  _InterlockedOr((volatile signed __int32 *)(a2 + 88), 0x80000000);
  KeSetEvent((PRKEVENT)(a2 + 104), 0, 0);
  if ( a3 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 188); i = (unsigned int)(i + 1) )
    {
      v9 = *(_QWORD *)(a2 + 192);
      v10 = 0;
      v11 = *(unsigned int *)(v9 + 8 * i);
      v12 = *(unsigned int *)(v9 + 8 * i + 4);
      v13 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 624) + 8 * v11);
      v14 = (volatile signed __int32 *)(v13 + 128);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v13 + 128);
      }
      else if ( _interlockedbittestandset64(v14, 0LL) )
      {
        KxWaitForSpinLockAndAcquire(v13 + 128);
      }
      v15 = *(_QWORD *)(v13 + 176);
      if ( *(_BYTE *)(v15 + 8 * v12 + 4) == 1 )
      {
        *(_BYTE *)(v15 + 8 * v12 + 4) = 0;
        v10 = --*(_DWORD *)(v13 + 184) == 0;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v13 + 128, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v14, 0LL);
      __writecr8(CurrentIrql);
      if ( v10 )
      {
        LOBYTE(v6) = 1;
        PopPluginComponentActive(BugCheckParameter2, (unsigned int)v11, v6, 0LL);
      }
    }
  }
  PopFxIdleComponent(BugCheckParameter2, *(unsigned int *)(a2 + 16));
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 212), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(BugCheckParameter2 + 216), 0, 0);
  return result;
}
