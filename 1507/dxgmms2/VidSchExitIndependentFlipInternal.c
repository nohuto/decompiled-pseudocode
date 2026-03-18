/*
 * XREFs of VidSchExitIndependentFlipInternal @ 0x1C001C7D4
 * Callers:
 *     VidSchExitIndependentFlip @ 0x1C001C700 (VidSchExitIndependentFlip.c)
 *     VidSchiCompletePendingFlip @ 0x1C001DEE8 (VidSchiCompletePendingFlip.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     VidSchiCancelIndependentFlips @ 0x1C00156AC (VidSchiCancelIndependentFlips.c)
 *     VidSchiFlushPendingTokenList @ 0x1C00175D4 (VidSchiFlushPendingTokenList.c)
 *     Template_txqqqtxt @ 0x1C001C0B8 (Template_txqqqtxt.c)
 */

void __fastcall VidSchExitIndependentFlipInternal(
        struct _VIDSCH_GLOBAL *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        unsigned __int8 a7,
        char *a8)
{
  __int64 v9; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned int v20; // eax
  bool v21; // cc
  __int64 v22; // rax
  volatile signed __int32 *v23; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-48h] BYREF

  v9 = (unsigned int)a2;
  v12 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(a1, a2);
  v12[3] = *a3;
  v12[4] = a4;
  v12[5] = a5;
  v12[6] = a7;
  WdLogEvent5_WdPresentTokenEvent(v12);
  v13 = *((_QWORD *)a1 + v9 + 330);
  *a8 = 0;
  v14 = 280LL * a5 + v13;
  v15 = 5LL * *(unsigned int *)(v14 + 352);
  *(_QWORD *)(v14 + 8 * v15 + 224) = MEMORY[0xFFFFF78000000320];
  *(_BYTE *)(v14 + 8 * v15 + 192) = 0;
  *(_BYTE *)(v14 + 8 * v15 + 193) = a7;
  *(_QWORD *)(v14 + 8 * v15 + 196) = *a3;
  *(_QWORD *)(v14 + 8 * v15 + 208) = a4;
  *(_QWORD *)(v14 + 8 * v15 + 216) = *(_QWORD *)(v14 + 136);
  v16 = *(_DWORD *)(v14 + 352);
  ++*(_QWORD *)(v14 + 136);
  *(_DWORD *)(v14 + 352) = ((_BYTE)v16 + 1) & 3;
  if ( (unsigned int)(*(_DWORD *)(v14 + 148) - 1) <= 1 )
  {
    *(_DWORD *)(v14 + 148) = 0;
    VidSchiCancelIndependentFlips(a1, v9, a5, (__int64)a8);
    *(_WORD *)(v14 + 144) = 0;
    *(_BYTE *)(v14 + 146) = 0;
    *(_QWORD *)(v14 + 112) = 0LL;
    VidSchiFlushPendingTokenList((__int64)a1, (unsigned int)v9, a5);
    *(_QWORD *)(v14 + 120) = 0LL;
    *(_QWORD *)(v14 + 128) = -1LL;
    if ( *(_DWORD *)(v14 + 160) )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(v14 + 168) + 32LL), &LockHandle);
      *(_BYTE *)(*(_QWORD *)(v14 + 168) + 24LL) = 1;
      v19 = *(_QWORD *)(v14 + 168);
      if ( a7 )
        ++*(_DWORD *)(v19 + 16);
      else
        ++*(_DWORD *)(v19 + 20);
      v20 = *(_DWORD *)(v14 + 160);
      if ( v20 > 4 )
      {
        if ( v20 > 0x3C )
        {
          v21 = v20 <= 0x12C;
          v22 = *(_QWORD *)(v14 + 168);
          if ( v21 )
            ++*(_DWORD *)(v22 + 8);
          else
            ++*(_DWORD *)(v22 + 12);
        }
        else
        {
          ++*(_DWORD *)(*(_QWORD *)(v14 + 168) + 4LL);
        }
      }
      else
      {
        ++**(_DWORD **)(v14 + 168);
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v23 = *(volatile signed __int32 **)(v14 + 168);
      if ( !_InterlockedDecrement(v23 + 10) )
        operator delete((void *)v23);
      *(_QWORD *)(v14 + 168) = 0LL;
    }
  }
  else
  {
    VidSchiCancelIndependentFlips(a1, v9, a5, (__int64)a8);
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_txqqqtxt((unsigned __int8)*a8, v17, v18, 0, *a3, v9, a5, a6, *a8, a4, a7);
  }
}
