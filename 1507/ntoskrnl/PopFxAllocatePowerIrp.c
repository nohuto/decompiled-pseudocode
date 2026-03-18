/*
 * XREFs of PopFxAllocatePowerIrp @ 0x140137708
 * Callers:
 *     PopAllocateIrp @ 0x140137024 (PopAllocateIrp.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x14002782C (IoAcquireRemoveLockEx.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall PopFxAllocatePowerIrp(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *a7,
        _QWORD *a8)
{
  volatile signed __int32 *v8; // rsi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v13; // ebx
  signed __int32 v14; // eax
  __int64 v15; // rbx
  NTSTATUS v16; // edi
  char v18; // al
  bool v19; // zf
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  signed __int32 v22; // ett
  unsigned int v23; // edx
  __int64 v24; // rax
  unsigned int v25; // edx
  void *retaddr; // [rsp+58h] [rbp+0h]

  v8 = (volatile signed __int32 *)(a1 + 88);
  *a7 = 0LL;
  *a8 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 88);
  }
  else
  {
    v13 = 0;
    if ( _interlockedbittestandset(v8, 0x1Fu) )
      v13 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 88));
    while ( 1 )
    {
      v14 = *v8;
      if ( (*v8 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v14 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v8, v14 | 0x40000000, v14);
      if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v13);
    }
  }
  v15 = *(_QWORD *)(a1 + 80);
  if ( !v15 )
  {
    v16 = -1073741130;
    goto LABEL_7;
  }
  if ( a6 )
  {
    v16 = 0;
  }
  else
  {
    v16 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v15 + 208), 0LL, &File, 1u, 0x20u);
    if ( v16 < 0 )
      goto LABEL_7;
  }
  _m_prefetchw((const void *)(v15 + 32));
  v18 = _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0);
  _m_prefetchw((const void *)(v15 + 32));
  v19 = (v18 & 0x10) == 0;
  v20 = *(_DWORD *)(v15 + 32);
  if ( v19 )
  {
    do
    {
      v21 = v20;
      v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 32), v20, v20);
    }
    while ( v21 != v20 );
    if ( (v20 & 0x10) == 0 )
    {
      _m_prefetchw((const void *)(v15 + 32));
      if ( (_InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) & 0x20) != 0 )
      {
        if ( a6 )
        {
          _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0);
          _InterlockedXor((volatile signed __int32 *)(v15 + 32), 0x100u);
          _m_prefetchw((const void *)(v15 + 32));
          v25 = ((unsigned int)_InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) >> 8) & 1;
          _m_prefetchw((const void *)(v15 + 32));
          if ( v25 == (((unsigned int)_InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) >> 9) & 1) )
            _InterlockedAnd((volatile signed __int32 *)(v15 + 32), 0xFFFFFFDF);
          _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0x10u);
          v16 = 0;
          *a7 = *(_QWORD *)(v15 + 16);
          *a8 = *(_QWORD *)(v15 + 24);
        }
        else
        {
          v16 = -1073741670;
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 212), 0xFFFFFFFF) == 1 )
          KeSetEvent((PRKEVENT)(v15 + 216), 0, 0);
      }
      else
      {
        _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0x10u);
        KeResetEvent((PRKEVENT)(v15 + 536));
        *a7 = *(_QWORD *)(v15 + 16);
        v16 = 0;
        *a8 = *(_QWORD *)(v15 + 24);
      }
    }
  }
  else
  {
    do
    {
      v22 = v20;
      v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 32), v20, v20);
    }
    while ( v22 != v20 );
    if ( (v20 & 0x20) != 0
      && (_m_prefetchw((const void *)(v15 + 32)),
          v23 = ((unsigned int)_InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) >> 8) & 1,
          _m_prefetchw((const void *)(v15 + 32)),
          v23 == (((unsigned int)_InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) >> 9) & 1)) )
    {
      v16 = -1073741670;
    }
    else
    {
      _m_prefetchw((const void *)(v15 + 32));
      v24 = ((unsigned int)_InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) >> 9) & 1;
      _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0x20u);
      _InterlockedXor((volatile signed __int32 *)(v15 + 32), 0x200u);
      v16 = 259;
      *(_QWORD *)(v15 + 8 * v24 + 480) = a2;
      *(_DWORD *)(v15 + 4LL * (unsigned int)v24 + 496) = a3;
      *(_QWORD *)(v15 + 8LL * (unsigned int)v24 + 520) = a5;
      *(_QWORD *)(v15 + 8LL * (unsigned int)v24 + 504) = a4;
    }
  }
LABEL_7:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8, retaddr);
  else
    *v8 = 0;
  __writecr8(CurrentIrql);
  return (unsigned int)v16;
}
