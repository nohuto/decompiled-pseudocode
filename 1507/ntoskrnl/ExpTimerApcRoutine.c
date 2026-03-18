/*
 * XREFs of ExpTimerApcRoutine @ 0x14012A4E4
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

LONG_PTR __fastcall ExpTimerApcRoutine(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // rdi
  volatile signed __int32 *v4; // rsi
  unsigned __int8 CurrentIrql; // bp
  volatile signed __int32 *p_StackBase; // rbx
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  CurrentThread = KeGetCurrentThread();
  v3 = a1 - 72;
  v4 = (volatile signed __int32 *)(a1 - 72 + 64);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(a1 - 72 + 64);
  }
  else if ( _interlockedbittestandset64(v4, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 - 72 + 64));
  }
  if ( (*(_BYTE *)(v3 + 244) & 1) != 0 && CurrentThread == *(struct _KTHREAD **)(v3 + 80) )
  {
    if ( !*(_DWORD *)(v3 + 240) )
    {
      p_StackBase = (volatile signed __int32 *)&CurrentThread[1].StackBase;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(p_StackBase);
      }
      else if ( _interlockedbittestandset64(p_StackBase, 0LL) )
      {
        KxWaitForSpinLockAndAcquire(p_StackBase);
      }
      v8 = *(_QWORD *)(v3 + 224);
      v9 = *(_QWORD **)(v3 + 232);
      if ( *(_QWORD *)(v8 + 8) != v3 + 224 || *v9 != v3 + 224 )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(p_StackBase, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)p_StackBase, 0LL);
      *(_BYTE *)(v3 + 244) &= ~1u;
    }
  }
  else
  {
    *a2 = 0LL;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v4, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
  __writecr8(CurrentIrql);
  return ObfDereferenceObjectWithTag((PVOID)v3, 0x746C6644u);
}
