/*
 * XREFs of MiMakeZeroedPageTableRange @ 0x140020848
 * Callers:
 *     MiMakeZeroedPageTableRange @ 0x140020848 (MiMakeZeroedPageTableRange.c)
 *     MiMakeZeroedPageTables @ 0x140100034 (MiMakeZeroedPageTables.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMakeZeroedPageTableRange @ 0x140020848 (MiMakeZeroedPageTableRange.c)
 *     MiInitializeSystemPageTable @ 0x140020B3C (MiInitializeSystemPageTable.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MiInitializePageColorBase @ 0x1400E3F40 (MiInitializePageColorBase.c)
 *     MiReplicatePteChange @ 0x140148860 (MiReplicatePteChange.c)
 *     KeCopyPage @ 0x140162490 (KeCopyPage.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MxCopyPage @ 0x1407977D0 (MxCopyPage.c)
 */

void __fastcall MiMakeZeroedPageTableRange(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned __int64 v7; // r10
  unsigned int v8; // r11d
  __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // r10
  unsigned int v14; // r11d
  __int16 v15; // di
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // r11d
  __int64 v20; // rax
  __int64 v21; // r9
  _QWORD *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // edx
  int v29; // [rsp+30h] [rbp-21h]
  __int64 v30; // [rsp+38h] [rbp-19h] BYREF
  __int64 v31; // [rsp+40h] [rbp-11h]
  _QWORD *v32; // [rsp+48h] [rbp-9h]
  char v33[16]; // [rsp+50h] [rbp-1h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp+Fh] BYREF
  char v35; // [rsp+B0h] [rbp+5Fh] BYREF
  unsigned __int64 v36; // [rsp+B8h] [rbp+67h]
  __int64 v37; // [rsp+C0h] [rbp+6Fh]
  unsigned int v38; // [rsp+C8h] [rbp+77h]

  v38 = a4;
  v37 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  MiInitializePageColorBase(0LL, 0LL, v33);
  if ( a1 < *(_QWORD *)(a3 + 16LL * v8) )
    a1 = *(_QWORD *)(a3 + 16LL * v8);
  if ( v7 > *(_QWORD *)(a3 + 16LL * v8 + 8) )
    v7 = *(_QWORD *)(a3 + 16LL * v8 + 8);
  v36 = v7;
  if ( a1 <= v7 )
  {
    v9 = a5;
    do
    {
      if ( v8 < *(_DWORD *)(v9 + 40) )
        return;
      v29 = 0;
      v30 = MI_READ_PTE_LOCK_FREE(a1);
      v15 = v30;
      if ( v14 )
      {
        if ( v14 > 1 && *(_DWORD *)(v13 + 32) )
        {
          v29 = 1;
          KeAcquireInStackQueuedSpinLock(&qword_140326B00, &LockHandle);
          v17 = MI_READ_PTE_LOCK_FREE(a1);
          v13 = a5;
          v15 = v17;
          v30 = v17;
        }
      }
      else if ( v12 )
      {
        *(_QWORD *)a1 = 0LL;
        if ( (unsigned int)MiPteInShadowRange(a1, v10) )
          MiWritePteShadow(v16, 0LL);
        goto LABEL_40;
      }
      v31 = v15 & 1;
      if ( (v15 & 1) != 0
        && (v18 = MI_GET_PAGE_FRAME_FROM_PTE(&v30), v18 != MiState[v19 + 597])
        && (v20 = MI_GET_PAGE_FRAME_FROM_PTE(&v30), v20 != MiState[v21 + 593])
        && ((v15 & 0x800) != 0 || (v15 & 0x42) != 0) )
      {
        if ( v29 == 1 )
        {
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v8 = v38;
        }
        v9 = a5;
        if ( !v8 || (v15 & 0x80u) != 0 )
          goto LABEL_40;
      }
      else
      {
        v22 = *(_QWORD **)v13;
        v32 = v22;
        *(_QWORD *)v13 = *v22;
        v23 = (__int64)(v22 + 0xB000000000LL);
        v24 = v23 / 48;
        if ( v31 )
        {
          v31 = (__int64)(a1 << 25) >> 16;
          if ( KeGetCurrentPrcb()->HyperPte )
          {
            v25 = MiMapPageInHyperSpaceWorker(v23 / 48, &v35, 0x80000000LL);
            KeCopyPage(v25, v31);
            LOBYTE(v26) = v35;
            MiUnmapPageInHyperSpaceWorker(v25, v26);
          }
          else
          {
            MxCopyPage(v23 / 48);
          }
        }
        MiInitializeSystemPageTable(a1, v32, v11, v24);
        if ( v38 == 3 && *(_DWORD *)(a5 + 32) )
        {
          v27 = a1;
          v28 = 3;
          do
          {
            v27 = v27 << 25 >> 16;
            --v28;
          }
          while ( v28 );
          MiReplicatePteChange(v27, v27);
        }
        if ( v29 == 1 )
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        v9 = a5;
        v8 = v38;
        ++*(_QWORD *)(a5 + 24);
        if ( v8 == 1 && *(_DWORD *)(v9 + 40) )
          goto LABEL_40;
      }
      if ( v8 )
      {
        MiMakeZeroedPageTableRange((__int64)(a1 << 25) >> 16, ((__int64)(a1 << 25) >> 16) + 4088, v37, v8 - 1, v9);
        v9 = a5;
        v8 = v38;
      }
LABEL_40:
      a1 += 8LL;
    }
    while ( a1 <= v36 );
  }
}
