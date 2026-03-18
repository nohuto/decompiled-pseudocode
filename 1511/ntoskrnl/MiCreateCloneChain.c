/*
 * XREFs of MiCreateCloneChain @ 0x14009ABD0
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14046100C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1400612C0 (PsChargeProcessNonPagedPoolQuota.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateCloneChain(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v4; // ebp
  _QWORD *v5; // rsi
  unsigned __int64 v6; // r14
  _KPROCESS *Process; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  KIRQL v10; // r13
  _QWORD *v11; // rdi
  _QWORD *i; // rax
  __int64 result; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v15; // rax
  _QWORD **v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rbx

  CurrentThread = KeGetCurrentThread();
  *a2 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  Process = CurrentThread->ApcState.Process;
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
  v11 = 0LL;
  for ( i = (_QWORD *)Process[1].Affinity.Bitmap[12]; i; i = (_QWORD *)*i )
    v11 = i;
  while ( v11 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x64436D4Du);
    if ( !PoolWithTag )
    {
      v4 = -1073741670;
      break;
    }
    *PoolWithTag = v5;
    v5 = PoolWithTag;
    PoolWithTag[8] = v11[8];
    v15 = v11;
    v6 += v11[8];
    v16 = (_QWORD **)v11[1];
    if ( v16 )
    {
      v17 = *v16;
      v11 = (_QWORD *)v11[1];
      while ( v17 )
      {
        v11 = v17;
        v17 = (_QWORD *)*v17;
      }
    }
    else
    {
      while ( 1 )
      {
        v11 = (_QWORD *)(v11[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v11 || (_QWORD *)*v11 == v15 )
          break;
        v15 = v11;
      }
    }
  }
  LOBYTE(v8) = v10;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v8, v9);
  if ( v4 < 0 )
    goto LABEL_21;
  if ( v6 )
    v4 = PsChargeProcessNonPagedPoolQuota(a1, v6);
  if ( v4 < 0 )
  {
LABEL_21:
    if ( v5 )
    {
      do
      {
        v18 = (_QWORD *)*v5;
        ExFreePoolWithTag(v5, 0);
        v5 = v18;
      }
      while ( v18 );
    }
    v5 = 0LL;
  }
  result = (unsigned int)v4;
  *a2 = v5;
  return result;
}
