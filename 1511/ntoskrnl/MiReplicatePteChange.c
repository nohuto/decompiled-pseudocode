/*
 * XREFs of MiReplicatePteChange @ 0x14013F8C8
 * Callers:
 *     MiMakeZeroedPageTableRange @ 0x140017CAC (MiMakeZeroedPageTableRange.c)
 *     MiDeletePteRange @ 0x1400A1370 (MiDeletePteRange.c)
 *     MiPfnRangeIsZero @ 0x140132700 (MiPfnRangeIsZero.c)
 *     MiInitializeShadowPageTable @ 0x1406260E8 (MiInitializeShadowPageTable.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiShadowTopLevelPxes @ 0x1401DEB30 (MiShadowTopLevelPxes.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

void __fastcall MiReplicatePteChange(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // rax
  _KPROCESS *Process; // r14
  unsigned __int64 v6; // r13
  __int64 *v7; // rbx
  __int64 *v8; // r15
  __int64 *v9; // rsi
  _KPROCESS *v10; // rdi
  int DirectoryTableBase_high; // eax
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r15
  __int64 v15; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-68h] BYREF
  __int64 *v17; // [rsp+90h] [rbp+8h]
  unsigned __int64 v18; // [rsp+A0h] [rbp+18h]
  _KPROCESS *v19; // [rsp+A8h] [rbp+20h]

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
  v19 = Process;
  while ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
    a1 = (__int64)(a1 << 25) >> 16;
  if ( a1 + 0x70000000000LL > 0x7FFFFFFFFFLL )
  {
    v6 = 0LL;
    v7 = &qword_1402FE698;
  }
  else
  {
    v6 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v7 = (__int64 *)(v6 + 16);
  }
  v17 = v7;
  v8 = v7;
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v9 = (__int64 *)*v7;
  if ( (__int64 *)*v7 != v7 )
  {
    do
    {
      v10 = (_KPROCESS *)(v9 - 192);
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
            v18 = v13;
            if ( v3 <= a2 )
            {
              v14 = (v3 & 0xFFF) - v3 + v13;
              do
              {
                v15 = MI_READ_PTE_LOCK_FREE(v12);
                *(_QWORD *)(v14 + v12) = v15;
                if ( (unsigned int)MiPteInShadowRange(v14 + v12) )
                  MiWritePteShadow(v14 + v12, v15);
                MiShadowTopLevelPxes(v10, v12, 1LL);
                v12 += 8LL;
              }
              while ( v12 <= a2 );
              v8 = v17;
              v13 = v18;
            }
            MiUnmapPageInHyperSpaceWorker(v13, 0x11u);
            Process = v19;
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
