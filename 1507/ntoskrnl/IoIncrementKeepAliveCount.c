/*
 * XREFs of IoIncrementKeepAliveCount @ 0x1401F6FAC
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401F737C (IopAdjustFileObjectKeepAliveCount.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     PspAdjustKeepAliveCountProcess @ 0x1406C00C8 (PspAdjustKeepAliveCountProcess.c)
 */

__int64 __fastcall IoIncrementKeepAliveCount(__int64 a1, void *a2)
{
  int v4; // esi
  __int64 v5; // r9
  unsigned __int8 CurrentIrql; // bl
  _BYTE *v7; // rax
  PVOID **v8; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v11; // [rsp+50h] [rbp+18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v4 = IopAdjustFileObjectKeepAliveCount(a1, (_DWORD)a2, 1, (unsigned int)&v11, (__int64)&v12);
  if ( v4 >= 0 && v11 == 1 )
  {
    if ( KeGetCurrentIrql() == 2 )
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
      v7 = (_BYTE *)v12;
      ++*(_DWORD *)(v12 + 32);
      if ( !v7[16] )
      {
        v8 = (PVOID **)qword_14034BB40;
        *(_QWORD *)v7 = qword_14034BB40;
        *((_QWORD *)v7 + 1) = &qword_14034BB40;
        if ( v8[1] != &qword_14034BB40 )
          __fastfail(3u);
        v8[1] = (PVOID *)v7;
        qword_14034BB40 = v7;
        v7[16] = 1;
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
    else
    {
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      LOBYTE(v5) = *(_BYTE *)(v12 + 18);
      PspAdjustKeepAliveCountProcess(a2, 1LL, a1, v5);
    }
  }
  return (unsigned int)v4;
}
