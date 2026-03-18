/*
 * XREFs of MiCreateCloneChain @ 0x140001300
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140406774 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14008B6A0 (PsChargeProcessNonPagedPoolQuota.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiCreateCloneChain(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // esi
  _QWORD *v4; // rdi
  __int64 v6; // r15
  _KPROCESS *Process; // rbp
  volatile signed __int32 *v8; // r14
  unsigned __int8 CurrentIrql; // r13
  unsigned int v10; // ebx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  __int64 result; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v16; // rax
  _QWORD **v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  *a2 = 0LL;
  v4 = 0LL;
  v6 = 0LL;
  Process = CurrentThread->ApcState.Process;
  v8 = (volatile signed __int32 *)&Process[1].IdealNode[8];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&Process[1].IdealNode[8]);
  }
  else
  {
    v10 = 0;
    if ( _interlockedbittestandset(v8, 0x1Fu) )
      v10 = ExpWaitForSpinLockExclusiveAndAcquire(&Process[1].IdealNode[8]);
    while ( 1 )
    {
      v11 = *(unsigned int *)v8;
      if ( (*v8 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v11 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v8, v11 | 0x40000000, v11);
      if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v10);
    }
  }
  v12 = (_QWORD *)Process[1].Affinity.Bitmap[12];
  v13 = 0LL;
  while ( v12 )
  {
    v13 = v12;
    v12 = (_QWORD *)*v12;
  }
  while ( v13 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x64436D4Du);
    if ( !PoolWithTag )
    {
      v3 = -1073741670;
      break;
    }
    *PoolWithTag = v4;
    v4 = PoolWithTag;
    PoolWithTag[8] = v13[8];
    v16 = v13;
    v6 += v13[8];
    v17 = (_QWORD **)v13[1];
    if ( v17 )
    {
      v18 = *v17;
      v13 = (_QWORD *)v13[1];
      while ( v18 )
      {
        v13 = v18;
        v18 = (_QWORD *)*v18;
      }
    }
    else
    {
      while ( 1 )
      {
        v13 = (_QWORD *)(v13[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v13 || (_QWORD *)*v13 == v16 )
          break;
        v16 = v13;
      }
    }
  }
  LOBYTE(v11) = CurrentIrql;
  MiUnlockWorkingSetExclusive(&Process[1].IdealNode[8], v11);
  if ( v3 < 0 )
    goto LABEL_32;
  if ( v6 )
    v3 = PsChargeProcessNonPagedPoolQuota(a1, v6);
  if ( v3 < 0 )
  {
LABEL_32:
    if ( v4 )
    {
      do
      {
        v19 = (_QWORD *)*v4;
        ExFreePoolWithTag(v4, 0);
        v4 = v19;
      }
      while ( v19 );
    }
    v4 = 0LL;
  }
  result = (unsigned int)v3;
  *a2 = v4;
  return result;
}
