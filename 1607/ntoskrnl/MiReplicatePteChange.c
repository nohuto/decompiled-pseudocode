/*
 * XREFs of MiReplicatePteChange @ 0x140148860
 * Callers:
 *     MiMakeZeroedPageTableRange @ 0x140020848 (MiMakeZeroedPageTableRange.c)
 *     MiDeletePteRange @ 0x1400FE550 (MiDeletePteRange.c)
 *     MiPfnRangeIsZero @ 0x14013EC44 (MiPfnRangeIsZero.c)
 *     MiInitializeShadowPageTable @ 0x14065BA6C (MiInitializeShadowPageTable.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiShadowTopLevelPxes @ 0x1401EF40C (MiShadowTopLevelPxes.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiReplicatePteChange(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rdx
  _KPROCESS *Process; // rbp
  unsigned __int64 v6; // r15
  __int64 *v7; // rbx
  __int64 *v8; // r14
  __int64 *v9; // rdi
  _KPROCESS *v10; // rbx
  int DirectoryTableBase_high; // eax
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r9
  unsigned __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  _KPROCESS *v21; // [rsp+70h] [rbp+8h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = a1;
  v4 = 3LL;
  do
  {
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v4;
  }
  while ( v4 );
  Process = KeGetCurrentThread()->ApcState.Process;
  v21 = Process;
  while ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
    a1 = (__int64)(a1 << 25) >> 16;
  if ( a1 < qword_140326950 || a1 >= qword_140326950 + 0x8000000000LL )
  {
    v6 = 0LL;
    v7 = &qword_1403269B8;
  }
  else
  {
    v6 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v7 = (__int64 *)(v6 + 16);
  }
  v8 = v7;
  KeAcquireInStackQueuedSpinLock(&qword_140327780, &LockHandle);
  v9 = (__int64 *)*v7;
  if ( (__int64 *)*v7 != v7 )
  {
    do
    {
      v10 = (_KPROCESS *)(v9 - 194);
      if ( v6 )
        v10 = (_KPROCESS *)(v9 - 104);
      DirectoryTableBase_high = HIDWORD(v10[1].DirectoryTableBase);
      if ( (DirectoryTableBase_high & 0x800000) == 0 )
      {
        if ( (DirectoryTableBase_high & 0xC00) != 0 && (DirectoryTableBase_high & 0x80u) == 0 )
        {
          if ( v10 != Process )
          {
            v12 = v3;
            v13 = MiMapPageInHyperSpaceWorker(v10->DirectoryTableBase >> 12, 0LL, 0x80000000);
            v15 = v13;
            if ( v3 <= a2 )
            {
              v16 = (v3 & 0xFFF) - v3 + v13;
              do
              {
                v17 = MI_READ_PTE_LOCK_FREE(v12);
                *(_QWORD *)(v16 + v12) = v17;
                if ( (unsigned int)MiPteInShadowRange(v16 + v12, v17) )
                  MiWritePteShadow(v19, v18);
                MiShadowTopLevelPxes(v10, v12, 1LL);
                v12 += 8LL;
              }
              while ( v12 <= a2 );
            }
            LOBYTE(v14) = 17;
            MiUnmapPageInHyperSpaceWorker(v15, v14);
            Process = v21;
          }
        }
        else
        {
          _InterlockedOr((volatile signed __int32 *)&v10[1].DirectoryTableBase + 1, 0x800000u);
        }
      }
      v9 = (__int64 *)*v9;
    }
    while ( v9 != v8 );
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
