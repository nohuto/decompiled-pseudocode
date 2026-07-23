/*
 * XREFs of MiChangingSubsectionProtos @ 0x1401ED094
 * Callers:
 *     MmPurgeSection @ 0x140072630 (MmPurgeSection.c)
 *     MiAllocateFileExtents @ 0x14065A430 (MiAllocateFileExtents.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForGate @ 0x140097498 (KeWaitForGate.c)
 *     KeAbPostReleaseEx @ 0x1400C455C (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x1400C62F0 (KeAbPreWait.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x1401EDB84 (MiUnlinkSubsectionWaitBlock.c)
 */

__int64 __fastcall MiChangingSubsectionProtos(_QWORD *BugCheckParameter2, int a2, __int64 a3)
{
  int v3; // edi
  volatile LONG *v4; // rax
  unsigned int v5; // ebx
  bool v9; // zf
  __int64 **v10; // rdi
  unsigned __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v16; // [rsp+60h] [rbp+8h]
  KIRQL OldIrql; // [rsp+68h] [rbp+10h]
  volatile LONG *SpinLock; // [rsp+78h] [rbp+20h]

  v3 = a2 & 0x10;
  v4 = (volatile LONG *)(*BugCheckParameter2 + 72LL);
  v16 = v3;
  v5 = 0;
  SpinLock = v4;
  while ( 1 )
  {
    OldIrql = ExAcquireSpinLockExclusive(v4);
    if ( v3 )
    {
      MiUnlinkSubsectionWaitBlock(BugCheckParameter2, a3, 1LL);
      v9 = *(_DWORD *)(a3 + 12) == 2;
      *(_DWORD *)(a3 + 8) = 0;
      if ( v9 )
      {
        v5 = -1073740748;
        goto LABEL_21;
      }
    }
    *(_DWORD *)(a3 + 8) = a2;
    if ( BugCheckParameter2[1] && (a2 & 1) != 0 )
    {
      v5 = -1073741302;
      goto LABEL_21;
    }
    v10 = 0LL;
    v11 = 0LL;
    if ( (a2 & 8) == 0 )
    {
      v10 = (__int64 **)BugCheckParameter2[3];
      if ( v10 )
      {
        do
        {
          if ( ((_DWORD)v10[1] & 8) == 0 )
            break;
          v10 = (__int64 **)*v10;
        }
        while ( v10 );
        if ( v10 )
        {
          v12 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 2);
          v11 = v12;
          if ( v12 )
            KeAbPreWait(v12, v13);
        }
      }
    }
    *(_DWORD *)(a3 + 12) = 0;
    *(_WORD *)(a3 + 16) = 263;
    *(_BYTE *)(a3 + 18) = 6;
    *(_DWORD *)(a3 + 20) = 0;
    *(_QWORD *)(a3 + 32) = a3 + 24;
    *(_QWORD *)(a3 + 24) = a3 + 24;
    *(_QWORD *)a3 = BugCheckParameter2[3];
    BugCheckParameter2[3] = a3;
    if ( (a2 & 8) != 0 )
      goto LABEL_21;
    if ( !v10 )
      break;
    ExReleaseSpinLockExclusive(SpinLock, OldIrql);
    KeWaitForGate(a3 + 16, 0x12u);
    v4 = SpinLock;
    v3 = v16;
    if ( v11 )
    {
      KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, v11, 0);
      KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, v11);
      v4 = SpinLock;
    }
  }
  v14 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 2);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
LABEL_21:
  ExReleaseSpinLockExclusive(SpinLock, OldIrql);
  return v5;
}
