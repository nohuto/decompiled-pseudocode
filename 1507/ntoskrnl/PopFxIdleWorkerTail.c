/*
 * XREFs of PopFxIdleWorkerTail @ 0x1400279A0
 * Callers:
 *     PopFxIdleWorker @ 0x140027888 (PopFxIdleWorker.c)
 *     PoFxCompleteIdleCondition @ 0x140130710 (PoFxCompleteIdleCondition.c)
 * Callees:
 *     PopFxCompleteComponentActivation @ 0x140027434 (PopFxCompleteComponentActivation.c)
 *     PoFxIdleComponent @ 0x1400274BC (PoFxIdleComponent.c)
 *     PopFxActivateComponentWorker @ 0x14002775C (PopFxActivateComponentWorker.c)
 *     PopFxAddRefDevice @ 0x1400277F0 (PopFxAddRefDevice.c)
 *     PopPluginComponentActive @ 0x140027B7C (PopPluginComponentActive.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x140028790 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopFxProcessWork @ 0x1400288DC (PopFxProcessWork.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

signed __int32 __fastcall PopFxIdleWorkerTail(_QWORD *BugCheckParameter2, unsigned int a2, __int64 a3)
{
  unsigned __int64 v6; // rbp
  __int64 v7; // rdi
  volatile signed __int32 *v8; // rbx
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned int i; // ebx
  signed __int32 result; // eax
  __int64 v15; // r8
  unsigned __int8 v16; // r15
  void (__fastcall *v17)(_QWORD, _QWORD); // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v6 = MEMORY[0xFFFFF78000000008];
  v7 = *(_QWORD *)(BugCheckParameter2[78] + 8LL * a2);
  v8 = (volatile signed __int32 *)(v7 + 200);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v7 + 200);
  }
  else if ( _interlockedbittestandset64(v8, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(v7 + 200);
  }
  if ( *(int *)(v7 + 216) > 0 )
  {
    v10 = *(_QWORD *)(v7 + 224);
    if ( v6 > v10 && *(_BYTE *)(v7 + 208) )
      *(_QWORD *)(v7 + 240) += v6 - v10;
    *(_BYTE *)(v7 + 208) = 0;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v7 + 200, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
  __writecr8(CurrentIrql);
  PopDiagTraceFxComponentLogicalCondition(BugCheckParameter2[6], a2, 0LL);
  v11 = BugCheckParameter2[59];
  while ( v11 < v6 )
  {
    v12 = v11;
    v11 = _InterlockedCompareExchange64(BugCheckParameter2 + 59, v6, v11);
    if ( v12 == v11 )
      break;
    _mm_pause();
  }
  _m_prefetchw((const void *)(v7 + 88));
  if ( _InterlockedOr((volatile signed __int32 *)(v7 + 88), 0) == 0x40000000 )
  {
    if ( (unsigned __int8)PopPluginComponentActive(BugCheckParameter2, a2, 0LL, a3) == 1 )
      PopFxProcessWork(0LL);
    for ( i = 0; i < *(_DWORD *)(v7 + 172); ++i )
      PoFxIdleComponent((ULONG_PTR)BugCheckParameter2, *(unsigned int *)(*(_QWORD *)(v7 + 176) + 8LL * i));
    result = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 88), 0, 0x40000000);
    if ( result != 0x40000000 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 88));
      _InterlockedAnd((volatile signed __int32 *)(v7 + 88), 0xBFFFFFFF);
      return PopFxActivateComponentWorker((ULONG_PTR)BugCheckParameter2, v7, 0, 0LL);
    }
  }
  else
  {
    PopFxAddRefDevice((ULONG_PTR)BugCheckParameter2);
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 88));
    _InterlockedAnd((volatile signed __int32 *)(v7 + 88), 0xBFFFFFFF);
    v16 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v7 + 200);
    }
    else if ( _interlockedbittestandset64(v8, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v7 + 200);
    }
    if ( *(int *)(v7 + 216) > 0 )
    {
      *(_QWORD *)(v7 + 224) = v6;
      *(_BYTE *)(v7 + 208) = 1;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v7 + 200, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
    __writecr8(v16);
    LOBYTE(v15) = 1;
    PopDiagTraceFxComponentLogicalCondition(BugCheckParameter2[6], a2, v15);
    v17 = (void (__fastcall *)(_QWORD, _QWORD))BugCheckParameter2[14];
    if ( v17 )
      v17(BugCheckParameter2[21], a2);
    return PopFxCompleteComponentActivation((ULONG_PTR)BugCheckParameter2, v7, 1);
  }
  return result;
}
