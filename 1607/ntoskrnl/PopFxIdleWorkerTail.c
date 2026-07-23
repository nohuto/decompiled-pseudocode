/*
 * XREFs of PopFxIdleWorkerTail @ 0x1400BF6F0
 * Callers:
 *     PoFxCompleteIdleCondition @ 0x1400AB20C (PoFxCompleteIdleCondition.c)
 *     PopFxIdleWorker @ 0x1400BF61C (PopFxIdleWorker.c)
 * Callees:
 *     PopFxProcessWork @ 0x1400BF0DC (PopFxProcessWork.c)
 *     PopFxActivateComponentWorker @ 0x1400BF4F0 (PopFxActivateComponentWorker.c)
 *     PopFxAddRefDevice @ 0x1400BF584 (PopFxAddRefDevice.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x1400BF87C (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopFxCompleteComponentActivation @ 0x1400BF8F4 (PopFxCompleteComponentActivation.c)
 *     PoFxIdleComponent @ 0x1400BF988 (PoFxIdleComponent.c)
 *     PpmInterlockedUpdateTimeNoFence @ 0x1400BFB20 (PpmInterlockedUpdateTimeNoFence.c)
 *     PopPluginComponentActive @ 0x1400BFFEC (PopPluginComponentActive.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopFxIdleWorkerTail(_QWORD *BugCheckParameter2, unsigned int a2, int *a3)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // r14
  KIRQL v8; // dl
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r8
  unsigned int i; // edi
  KIRQL v13; // al
  __int64 v14; // r8
  void (__fastcall *v15)(_QWORD, _QWORD); // rax

  v6 = *(_QWORD *)(BugCheckParameter2[78] + 8LL * a2);
  v7 = MEMORY[0xFFFFF78000000008];
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 200));
  if ( *(int *)(v6 + 216) > 0 )
  {
    v9 = *(_QWORD *)(v6 + 224);
    if ( v7 > v9 && *(_BYTE *)(v6 + 208) )
      *(_QWORD *)(v6 + 240) += v7 - v9;
    *(_BYTE *)(v6 + 208) = 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 200), v8);
  PopDiagTraceFxComponentLogicalCondition(BugCheckParameter2[6], a2, 0LL);
  PpmInterlockedUpdateTimeNoFence(BugCheckParameter2 + 59, v7, 0LL);
  _m_prefetchw((const void *)(v6 + 88));
  if ( _InterlockedOr((volatile signed __int32 *)(v6 + 88), 0) == 0x40000000 )
  {
    if ( (unsigned __int8)PopPluginComponentActive(BugCheckParameter2, a2, v10, a3) == 1 )
      PopFxProcessWork(0LL, a3, v11);
    for ( i = 0; i < *(_DWORD *)(v6 + 172); ++i )
      PoFxIdleComponent(BugCheckParameter2, *(unsigned int *)(*(_QWORD *)(v6 + 176) + 8LL * i), 2LL);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 88), 0, 0x40000000) != 0x40000000 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 88));
      _InterlockedAnd((volatile signed __int32 *)(v6 + 88), 0xBFFFFFFF);
      PopFxActivateComponentWorker((ULONG_PTR)BugCheckParameter2, v6, 0, 0LL);
    }
  }
  else
  {
    PopFxAddRefDevice((ULONG_PTR)BugCheckParameter2);
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 88));
    _InterlockedAnd((volatile signed __int32 *)(v6 + 88), 0xBFFFFFFF);
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 200));
    if ( *(int *)(v6 + 216) > 0 )
    {
      *(_QWORD *)(v6 + 224) = v7;
      *(_BYTE *)(v6 + 208) = 1;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 200), v13);
    LOBYTE(v14) = 1;
    PopDiagTraceFxComponentLogicalCondition(BugCheckParameter2[6], a2, v14);
    v15 = (void (__fastcall *)(_QWORD, _QWORD))BugCheckParameter2[14];
    if ( v15 )
      v15(BugCheckParameter2[21], a2);
    PopFxCompleteComponentActivation((ULONG_PTR)BugCheckParameter2);
  }
}
