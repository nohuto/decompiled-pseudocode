/*
 * XREFs of MiMakeZeroedPageTableRange @ 0x140069E70
 * Callers:
 *     MiMakeZeroedPageTables @ 0x1400697D8 (MiMakeZeroedPageTables.c)
 *     MiMakeZeroedPageTableRange @ 0x140069E70 (MiMakeZeroedPageTableRange.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMakeZeroedPageTableRange @ 0x140069E70 (MiMakeZeroedPageTableRange.c)
 *     MiInitializeSystemPageTable @ 0x14006A1F8 (MiInitializeSystemPageTable.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     MiReplicatePteChange @ 0x14016D0F4 (MiReplicatePteChange.c)
 *     KeCopyPage @ 0x140186CC0 (KeCopyPage.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MxCopyPage @ 0x1407C648C (MxCopyPage.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiMakeZeroedPageTableRange(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 result; // rax
  __int64 *v8; // rdx
  unsigned int v9; // r11d
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 PteShadow; // rbx
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r10
  unsigned __int64 *v16; // r9
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rbx
  _QWORD *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rbx
  __int64 v25; // rcx
  int v26; // eax
  int v27; // [rsp+30h] [rbp-21h]
  __int64 v28; // [rsp+38h] [rbp-19h] BYREF
  unsigned __int64 v29; // [rsp+40h] [rbp-11h]
  _QWORD *v30; // [rsp+48h] [rbp-9h]
  char v31[16]; // [rsp+50h] [rbp-1h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp+Fh] BYREF
  unsigned __int8 v33; // [rsp+B0h] [rbp+5Fh] BYREF
  unsigned __int64 v34; // [rsp+B8h] [rbp+67h]
  __int64 v35; // [rsp+C0h] [rbp+6Fh]
  unsigned int v36; // [rsp+C8h] [rbp+77h]

  v36 = a4;
  v35 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  result = (__int64)MI_INITIALIZE_COLOR_BASE(0LL, 0, (__int64)v31);
  if ( a1 < *(_QWORD *)(v35 + 16LL * v9) )
    a1 = *(_QWORD *)(v35 + 16LL * v9);
  if ( a2 > *(_QWORD *)(v35 + 16LL * v9 + 8) )
    a2 = *(_QWORD *)(v35 + 16LL * v9 + 8);
  v34 = a2;
  if ( a1 <= a2 )
  {
    result = 0x90482413000LL;
    do
    {
      v10 = a5;
      v11 = *(unsigned int *)(a5 + 40);
      if ( v9 < (unsigned int)v11 )
        return result;
      PteShadow = *(_QWORD *)a1;
      v13 = a1 + 0x90482413000LL;
      v27 = 0;
      v29 = a1 + 0x90482413000LL;
      if ( a1 + 0x90482413000LL <= 0x7F8 )
      {
        if ( (unsigned int)MiPteHasShadow(a5, v8)
          && (PteShadow & 1) != 0
          && ((PteShadow & 0x20) == 0 || (PteShadow & 0x42) == 0) )
        {
          v8 = *(__int64 **)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v8 )
          {
            v14 = v8[(a1 >> 3) & 0x1FF];
            if ( (v14 & 0x20) != 0 )
              PteShadow |= 0x20uLL;
            if ( (v14 & 0x42) != 0 )
              PteShadow |= 0x42uLL;
          }
        }
        v13 = v29;
        v10 = a5;
      }
      v28 = PteShadow;
      if ( v9 )
      {
        if ( v9 > 1 && *(_DWORD *)(v10 + 32) )
        {
          v27 = 1;
          KeAcquireInStackQueuedSpinLock(&qword_14034EC40, &LockHandle);
          PteShadow = *(_QWORD *)a1;
          if ( v29 <= 0x7F8 )
            PteShadow = MiReadPteShadow(a1, *(_QWORD *)a1);
          v9 = v36;
          v28 = PteShadow;
        }
      }
      else if ( (_DWORD)v11 )
      {
        *(_QWORD *)a1 = 0LL;
        if ( v13 <= 0x7F8 )
        {
          MiWritePteShadow(a1, 0LL);
          goto LABEL_57;
        }
        goto LABEL_58;
      }
      v15 = PteShadow & 1;
      if ( (PteShadow & 1) == 0 )
        goto LABEL_42;
      v16 = &STACK[0x90482413038];
      v17 = PteShadow;
      if ( (unsigned __int64)&STACK[0x90482413038] <= 0x7F8 )
        v17 = MiReadPteShadow(&v28, PteShadow);
      v8 = MiState;
      v18 = v9;
      if ( ((v17 >> 12) & 0xFFFFFFFFFLL) == MiState[v9 + 545] )
        goto LABEL_42;
      v19 = PteShadow;
      if ( (unsigned __int64)v16 <= 0x7F8 )
      {
        v19 = MiReadPteShadow(&v28, PteShadow);
        v18 = v9;
        v8 = MiState;
      }
      v11 = 0xFFFFFFFFFLL;
      if ( ((v19 >> 12) & 0xFFFFFFFFFLL) != MiState[v18 + 541] && ((PteShadow & 0x800) != 0 || (PteShadow & 0x42) != 0) )
      {
        if ( v27 == 1 )
        {
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v9 = v36;
        }
        if ( v9 == 1 )
        {
          if ( (PteShadow & 0x80u) != 0LL )
            goto LABEL_58;
LABEL_56:
          MiMakeZeroedPageTableRange((__int64)(a1 << 25) >> 16, ((__int64)(a1 << 25) >> 16) + 4088, v35, v9 - 1, a5);
LABEL_57:
          v9 = v36;
          goto LABEL_58;
        }
      }
      else
      {
LABEL_42:
        v20 = a5;
        v21 = *(_QWORD **)a5;
        v30 = v21;
        *(_QWORD *)a5 = *v21;
        v22 = (__int64)(v21 + 0xB000000000LL);
        v23 = v22 / 48;
        if ( v15 )
        {
          v29 = (__int64)(a1 << 25) >> 16;
          if ( KeGetCurrentPrcb()->HyperPte )
          {
            v24 = MiMapPageInHyperSpaceWorker(v22 / 48, &v33, 0x80000000LL);
            KeCopyPage(v24, v29);
            MiUnmapPageInHyperSpaceWorker(v24, v33);
            v20 = a5;
          }
          else
          {
            MxCopyPage(v22 / 48);
          }
        }
        MiInitializeSystemPageTable(a1, v30, v11, v23);
        if ( v36 == 3 && *(_DWORD *)(v20 + 32) )
        {
          v25 = a1;
          v26 = 3;
          do
          {
            v25 = v25 << 25 >> 16;
            --v26;
          }
          while ( v26 );
          MiReplicatePteChange(v25, v25);
        }
        if ( v27 == 1 )
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        ++*(_QWORD *)(v20 + 24);
        v9 = v36;
        if ( v36 == 1 && *(_DWORD *)(v20 + 40) )
          goto LABEL_58;
      }
      if ( v9 )
        goto LABEL_56;
LABEL_58:
      a1 += 8LL;
      result = 0x90482413000LL;
    }
    while ( a1 <= v34 );
  }
  return result;
}
