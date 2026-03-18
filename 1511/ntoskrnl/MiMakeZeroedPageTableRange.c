/*
 * XREFs of MiMakeZeroedPageTableRange @ 0x140017CAC
 * Callers:
 *     MiMakeZeroedPageTables @ 0x140017868 (MiMakeZeroedPageTables.c)
 *     MiMakeZeroedPageTableRange @ 0x140017CAC (MiMakeZeroedPageTableRange.c)
 * Callees:
 *     MiMakeZeroedPageTableRange @ 0x140017CAC (MiMakeZeroedPageTableRange.c)
 *     MiInitializeSystemPageTable @ 0x140017F70 (MiInitializeSystemPageTable.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReplicatePteChange @ 0x14013F8C8 (MiReplicatePteChange.c)
 *     KeCopyPage @ 0x140157550 (KeCopyPage.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MxCopyPage @ 0x140747934 (MxCopyPage.c)
 */

void __fastcall MiMakeZeroedPageTableRange(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v7; // r10
  unsigned __int64 v8; // r11
  __int64 v9; // rax
  __int64 v10; // r8
  __int16 v11; // di
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  _QWORD *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  int v23; // [rsp+30h] [rbp-50h]
  unsigned int v24; // [rsp+38h] [rbp-48h]
  __int64 v25; // [rsp+38h] [rbp-48h]
  __int64 v26; // [rsp+40h] [rbp-40h] BYREF
  __int64 v27; // [rsp+48h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-30h] BYREF
  _QWORD *v29; // [rsp+68h] [rbp-18h]
  char v30[16]; // [rsp+70h] [rbp-10h] BYREF
  char v31; // [rsp+A0h] [rbp+20h] BYREF
  unsigned __int64 i; // [rsp+A8h] [rbp+28h]
  __int64 v33; // [rsp+B0h] [rbp+30h]
  unsigned int v34; // [rsp+B8h] [rbp+38h]

  v34 = a4;
  v33 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  MI_INITIALIZE_COLOR_BASE(0LL, 0LL, v30);
  v27 = v7;
  if ( a1 < *(_QWORD *)(a3 + 16LL * (unsigned int)v7) )
    a1 = *(_QWORD *)(a3 + 16LL * (unsigned int)v7);
  if ( v8 > *(_QWORD *)(a3 + 16LL * (unsigned int)v7 + 8) )
    v8 = *(_QWORD *)(a3 + 16LL * (unsigned int)v7 + 8);
  for ( i = v8; a1 <= i; a1 += 8LL )
  {
    v24 = *(_DWORD *)(a5 + 40);
    if ( (unsigned int)v7 < v24 )
      return;
    v23 = 0;
    v9 = MI_READ_PTE_LOCK_FREE(a1);
    v11 = v9;
    v26 = v9;
    if ( v34 )
    {
      if ( v34 > 1 && *(_DWORD *)(a5 + 32) )
      {
        v23 = 1;
        KeAcquireInStackQueuedSpinLock(&qword_1402FE780, &LockHandle);
        v12 = MI_READ_PTE_LOCK_FREE(a1);
        v11 = v12;
        v26 = v12;
      }
    }
    else if ( v24 )
    {
      *(_QWORD *)a1 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(a1) )
        MiWritePteShadow(a1, 0LL);
      goto LABEL_39;
    }
    v25 = v11 & 1;
    if ( (v11 & 1) != 0
      && (v13 = MI_GET_PAGE_FRAME_FROM_PTE(&v26), v13 != MiState[v27 + 545])
      && (v14 = MI_GET_PAGE_FRAME_FROM_PTE(&v26), v14 != MiState[v27 + 541])
      && ((v11 & 0x800) != 0 || (v11 & 0x42) != 0) )
    {
      if ( v23 == 1 )
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      LODWORD(v7) = v34;
      if ( v34 == 1 )
      {
        if ( (v11 & 0x80u) != 0 )
          continue;
LABEL_38:
        MiMakeZeroedPageTableRange((__int64)(a1 << 25) >> 16, ((__int64)(a1 << 25) >> 16) + 4088, v33, v7 - 1, a5);
LABEL_39:
        LODWORD(v7) = v34;
        continue;
      }
    }
    else
    {
      v15 = a5;
      v16 = *(_QWORD **)a5;
      v29 = v16;
      *(_QWORD *)a5 = *v16;
      v17 = (__int64)(v16 + 0xB000000000LL);
      v18 = v17 / 48;
      if ( v25 )
      {
        if ( KeGetCurrentPrcb()->HyperPte )
        {
          v19 = MiMapPageInHyperSpaceWorker(v17 / 48, &v31, 0x80000000LL);
          KeCopyPage(v19, (__int64)(a1 << 25) >> 16);
          LOBYTE(v20) = v31;
          MiUnmapPageInHyperSpaceWorker(v19, v20, 0x80000000LL);
          v15 = a5;
        }
        else
        {
          MxCopyPage(v17 / 48, (__int64)(a1 << 25) >> 16);
        }
      }
      MiInitializeSystemPageTable(a1, v29, v10, v18);
      if ( v34 == 3 && *(_DWORD *)(v15 + 32) )
      {
        v21 = a1;
        v22 = 3;
        do
        {
          v21 = v21 << 25 >> 16;
          --v22;
        }
        while ( v22 );
        MiReplicatePteChange(v21, v21);
      }
      if ( v23 == 1 )
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      ++*(_QWORD *)(v15 + 24);
      LODWORD(v7) = v34;
      if ( v34 == 1 && *(_DWORD *)(v15 + 40) )
        continue;
    }
    if ( (_DWORD)v7 )
      goto LABEL_38;
  }
}
