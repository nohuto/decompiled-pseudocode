/*
 * XREFs of IoDecrementKeepAliveCount @ 0x1401F6E78
 * Callers:
 *     <none>
 * Callees:
 *     KeAlertThread @ 0x14000C1F0 (KeAlertThread.c)
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401F737C (IopAdjustFileObjectKeepAliveCount.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall IoDecrementKeepAliveCount(int a1, int a2)
{
  int v2; // edi
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // rcx
  PVOID **v5; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v2 = IopAdjustFileObjectKeepAliveCount(a1, a2, 0, (unsigned int)&v8, (__int64)&v9);
  if ( v2 >= 0 && !v8 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(qword_14034BB50);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)qword_14034BB50, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)qword_14034BB50);
    }
    v4 = v9;
    *(_QWORD *)(v9 + 48) = MEMORY[0xFFFFF78000000014] + 50000000LL;
    --*(_DWORD *)(v4 + 32);
    if ( *(_BYTE *)(v4 + 16) )
    {
      if ( qword_14034BB80 )
        KeAlertThread(qword_14034BB80, 0);
    }
    else
    {
      v5 = (PVOID **)qword_14034BB48;
      *(_QWORD *)v4 = &qword_14034BB40;
      *(_QWORD *)(v4 + 8) = v5;
      if ( *v5 != &qword_14034BB40 )
        __fastfail(3u);
      *v5 = (PVOID *)v4;
      qword_14034BB48 = v4;
      *(_BYTE *)(v4 + 16) = 1;
      if ( !byte_14034BB78 )
      {
        byte_14034BB78 = 1;
        ExQueueWorkItem(&IopKeepAliveTracker, DelayedWorkQueue);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(qword_14034BB50, retaddr);
    else
      _InterlockedAnd64(qword_14034BB50, 0LL);
    __writecr8(CurrentIrql);
  }
  return (unsigned int)v2;
}
