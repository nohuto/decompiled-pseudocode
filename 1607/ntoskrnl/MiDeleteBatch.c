/*
 * XREFs of MiDeleteBatch @ 0x140064690
 * Callers:
 *     MiDeletePteRun @ 0x140064CC0 (MiDeletePteRun.c)
 *     MiDeleteClusterPage @ 0x140091A00 (MiDeleteClusterPage.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiPfnShareCountIsZero @ 0x140066260 (MiPfnShareCountIsZero.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     MiCapturePageFileInfoInline @ 0x140097B20 (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14009DAE0 (MiLockNestedPageAtDpcInline.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiDeleteBatch(unsigned __int8 *a1)
{
  __int64 result; // rax
  __int64 v3; // rbp
  unsigned __int16 v4; // cx
  int *v5; // r15
  _QWORD *v6; // rdx
  unsigned __int8 i; // si
  __int64 v8; // rax
  char v9; // r9
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // rbx
  char v13; // r8
  __int64 v14; // rax
  __int64 v15; // rbx
  char v16; // dl
  __int64 v17; // rcx
  unsigned __int64 v18; // r9
  unsigned __int8 j; // bl
  unsigned __int64 v20; // rdx
  _QWORD v21[4]; // [rsp+30h] [rbp-48h] BYREF
  int v22; // [rsp+80h] [rbp+8h] BYREF
  __int64 v23; // [rsp+88h] [rbp+10h] BYREF

  if ( !*a1 )
    return 0LL;
  v3 = 0LL;
  v23 = *((_QWORD *)a1 + 2);
  v4 = ((unsigned int)HIDWORD(*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v23) >> 12) & 0xFFFFFFFFFLL)
                                        - 0x57FFFFFFFD8LL)) >> 8) & 0x3FF;
  if ( v4 == 1023 )
    v5 = MiSystemPartition;
  else
    v5 = *(int **)(qword_140327038 + 8LL * v4);
  v21[1] = v5 + 1816;
  v21[0] = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v21, v5 + 1816);
  }
  else
  {
    v6 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v5 + 908, (__int64)v21);
    if ( v6 )
      KxWaitForLockOwnerShip((__int64)v21, v6);
  }
  for ( i = 0; i < *a1; ++i )
  {
    v23 = *(_QWORD *)&a1[8 * i + 16];
    v8 = MI_GET_PAGE_FRAME_FROM_PTE(&v23);
    v12 = v11 + 48 * v8;
    v13 = *(_BYTE *)(v12 + 34);
    if ( (v13 & 7) != 6 )
      KeBugCheckEx(
        0x4Eu,
        0x99uLL,
        48 * v8 / 48,
        *(_BYTE *)(v11 + 48 * v8 + 34) & 7,
        v10 & *(_QWORD *)(v11 + 48 * v8 + 24));
    v14 = 0LL;
    if ( (v9 & 0x42) != 0 && (v13 & 0x10) == 0 )
    {
      if ( (*(_DWORD *)(v12 + 16) & 0x400LL) == 0 && (v13 & 8) == 0 )
      {
        v14 = MiCapturePageFileInfoInline(v12 + 16, 1LL, 0LL);
        v10 = 0x3FFFFFFFFFFFFFFFLL;
      }
      *(_BYTE *)(v12 + 34) |= 0x10u;
    }
    *(_QWORD *)&a1[8 * i + 16] = v14;
    *(_QWORD *)(v12 + 24) ^= v10 & (*(_QWORD *)(v12 + 24) ^ (*(_QWORD *)(v12 + 24) - 1LL));
    if ( (v10 & *(_QWORD *)(v12 + 24)) == 0
      && (unsigned int)MiPfnShareCountIsZero(v12) == 3
      && (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) == 0 )
    {
      ++v3;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  KxReleaseQueuedSpinLock(v21);
  v15 = *((_QWORD *)a1 + 1);
  if ( a1[1] == 1 )
  {
    MiLockNestedPageAtDpcInline(*((_QWORD *)a1 + 1));
  }
  else
  {
    v22 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v22);
      while ( (*(_QWORD *)(v15 + 24) & 0x8000000000000000uLL) != 0 );
    }
  }
  v16 = *(_BYTE *)(v15 + 34);
  v17 = *(_QWORD *)(v15 + 24);
  if ( (v16 & 7) != 6 )
    KeBugCheckEx(0x4Eu, 0x99uLL, (v15 + 0x58000000000LL) / 48, v16 & 7, v17 & 0x3FFFFFFFFFFFFFFFLL);
  v18 = *a1;
  if ( (v17 & 0x3FFFFFFFFFFFFFFFuLL) < v18 )
    KeBugCheckEx(0x4Eu, 0x99uLL, (v15 + 0x58000000000LL) / 48, v16 & 7, v17 & 0x3FFFFFFFFFFFFFFFLL);
  *(_QWORD *)(v15 + 24) = v17 ^ (v17 ^ (v17 - v18)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  for ( j = 0; j < *a1; ++j )
  {
    v20 = *(_QWORD *)&a1[8 * j + 16];
    if ( v20 )
      MiReleasePageFileInfo((struct _KEVENT *)v5, v20, 1);
  }
  result = v3;
  *a1 = 0;
  return result;
}
