/*
 * XREFs of VidSchExitIndependentFlipInternal @ 0x1C0001954
 * Callers:
 *     VidSchExitIndependentFlip @ 0x1C0001880 (VidSchExitIndependentFlip.c)
 *     VidSchiCompletePendingFlip @ 0x1C000248C (VidSchiCompletePendingFlip.c)
 * Callees:
 *     VidSchiCancelIndependentFlips @ 0x1C0001B68 (VidSchiCancelIndependentFlips.c)
 *     VidSchiFlushPendingTokenList @ 0x1C0001BD4 (VidSchiFlushPendingTokenList.c)
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     Template_txqqqtxt @ 0x1C00223BC (Template_txqqqtxt.c)
 */

void __fastcall VidSchExitIndependentFlipInternal(
        __int64 a1,
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
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rax
  unsigned int v20; // eax
  bool v21; // cc
  __int64 v22; // rax
  volatile signed __int32 *v23; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-48h] BYREF

  v9 = (unsigned int)a2;
  v12 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(a1, a2, a3, a4);
  v12[3] = *a3;
  v12[4] = a4;
  v12[5] = a5;
  v12[6] = a7;
  WdLogEvent5_WdPresentTokenEvent(v12);
  v13 = *(_QWORD *)(a1 + 8 * v9 + 2592);
  *a8 = 0;
  v14 = 280LL * a5 + v13;
  v15 = 5LL * *(unsigned int *)(v14 + 360);
  *(_QWORD *)(v14 + 8 * v15 + 232) = MEMORY[0xFFFFF78000000320];
  *(_BYTE *)(v14 + 8 * v15 + 200) = 0;
  *(_BYTE *)(v14 + 8 * v15 + 201) = a7;
  *(_QWORD *)(v14 + 8 * v15 + 204) = *a3;
  *(_QWORD *)(v14 + 8 * v15 + 216) = a4;
  *(_QWORD *)(v14 + 8 * v15 + 224) = *(_QWORD *)(v14 + 144);
  v16 = *(_DWORD *)(v14 + 360);
  ++*(_QWORD *)(v14 + 144);
  *(_DWORD *)(v14 + 360) = ((_BYTE)v16 + 1) & 3;
  if ( (unsigned int)(*(_DWORD *)(v14 + 156) - 1) > 1 )
  {
    VidSchiCancelIndependentFlips(a1, (unsigned int)v9, a5, a8);
  }
  else
  {
    *(_DWORD *)(v14 + 156) = 0;
    VidSchiCancelIndependentFlips(a1, (unsigned int)v9, a5, a8);
    *(_WORD *)(v14 + 152) = 0;
    *(_BYTE *)(v14 + 154) = 0;
    *(_QWORD *)(v14 + 120) = 0LL;
    VidSchiFlushPendingTokenList(a1, (unsigned int)v9);
    *(_QWORD *)(v14 + 128) = 0LL;
    *(_QWORD *)(v14 + 136) = -1LL;
    if ( *(_DWORD *)(v14 + 168) )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(v14 + 176) + 32LL), &LockHandle);
      *(_BYTE *)(*(_QWORD *)(v14 + 176) + 24LL) = 1;
      v19 = *(_QWORD *)(v14 + 176);
      if ( a7 )
        ++*(_DWORD *)(v19 + 16);
      else
        ++*(_DWORD *)(v19 + 20);
      v20 = *(_DWORD *)(v14 + 168);
      if ( v20 <= 4 )
      {
        ++**(_DWORD **)(v14 + 176);
      }
      else if ( v20 <= 0x3C )
      {
        ++*(_DWORD *)(*(_QWORD *)(v14 + 176) + 4LL);
      }
      else
      {
        v21 = v20 <= 0x12C;
        v22 = *(_QWORD *)(v14 + 176);
        if ( v21 )
          ++*(_DWORD *)(v22 + 8);
        else
          ++*(_DWORD *)(v22 + 12);
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v23 = *(volatile signed __int32 **)(v14 + 176);
      if ( !_InterlockedDecrement(v23 + 10) )
        operator delete((void *)v23);
      *(_QWORD *)(v14 + 176) = 0LL;
    }
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_txqqqtxt((unsigned __int8)*a8, v17, v18, 0, *a3, v9, a5, a6, *a8, a4, a7);
  }
}
