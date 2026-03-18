/*
 * XREFs of MiReplicatePteChange @ 0x14016D0F4
 * Callers:
 *     MiDeletePteRange @ 0x140038650 (MiDeletePteRange.c)
 *     MiMakeZeroedPageTableRange @ 0x140069E70 (MiMakeZeroedPageTableRange.c)
 *     MiInitializeShadowPageTable @ 0x1406A7E80 (MiInitializeShadowPageTable.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiShadowTopLevelPxes @ 0x140225870 (MiShadowTopLevelPxes.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

void __fastcall MiReplicatePteChange(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  _KPROCESS *Process; // r14
  unsigned __int64 v6; // r13
  __int64 *v7; // rbx
  __int64 *v8; // r15
  __int64 *v9; // rsi
  _KPROCESS *v10; // rbx
  int DirectoryTableBase_high; // eax
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r12
  unsigned __int64 v16; // rdx
  __int64 v17; // r13
  unsigned __int64 v18; // r15
  __int64 v19; // rdx
  _QWORD *v20; // r9
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // r11
  __int64 v23; // r8
  __int64 v24; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  __int64 *v26; // [rsp+80h] [rbp+8h]
  unsigned __int64 v27; // [rsp+88h] [rbp+10h]
  _KPROCESS *v28; // [rsp+90h] [rbp+18h]

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
  v28 = Process;
  while ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
    a1 = (__int64)(a1 << 25) >> 16;
  if ( a1 + 0x70000000000LL > 0x7FFFFFFFFFLL )
  {
    v6 = 0LL;
    v7 = &qword_14034EB48;
  }
  else
  {
    v6 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v7 = (__int64 *)(v6 + 16);
  }
  v26 = v7;
  v27 = v6;
  v8 = v7;
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v9 = (__int64 *)*v7;
  if ( (__int64 *)*v7 != v7 )
  {
    do
    {
      v10 = (_KPROCESS *)(v9 - 191);
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
            v13 = MiMapPageInHyperSpaceWorker(v10->DirectoryTableBase >> 12, 0LL);
            v15 = v13;
            if ( v3 <= a2 )
            {
              v16 = v3 & 0xFFF;
              v17 = v3 - v16 - v13 + 0x90482413000LL;
              v18 = v16 - v3 + v13;
              do
              {
                v19 = *(_QWORD *)v12;
                v20 = (_QWORD *)(v18 + v12);
                v21 = v18 + v12 + v17;
                v22 = 2040LL;
                if ( v21 <= 0x7F8
                  && (unsigned int)MiPteHasShadow(v14, v19)
                  && (v19 & 1) != 0
                  && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
                {
                  v23 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
                  if ( v23 )
                  {
                    v24 = *(_QWORD *)(v23 + 8 * ((v12 >> 3) & 0x1FF));
                    if ( (v24 & 0x20) != 0 )
                      v19 |= 0x20uLL;
                    if ( (v24 & 0x42) != 0 )
                      v19 |= 0x42uLL;
                  }
                }
                *v20 = v19;
                if ( v21 + v18 <= v22 )
                  MiWritePteShadow(v20, v19);
                MiShadowTopLevelPxes(v10, v12, 1LL);
                v12 += 8LL;
              }
              while ( v12 <= a2 );
              v8 = v26;
              v6 = v27;
            }
            MiUnmapPageInHyperSpaceWorker(v15, 0x11u);
            Process = v28;
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
