/*
 * XREFs of MmInSwapProcess @ 0x140090CC4
 * Callers:
 *     KiInSwapProcesses @ 0x140090680 (KiInSwapProcesses.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MiReturnWsToExpansionList @ 0x14007BF2C (MiReturnWsToExpansionList.c)
 *     MiVaToPfn @ 0x140081B60 (MiVaToPfn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeMakeKernelDirectoryTableBase @ 0x1401DB9B4 (KeMakeKernelDirectoryTableBase.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFC0C (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1401E045C (MiReAcquireOutSwappedProcessCommit.c)
 *     MiUpdateSystemPdes @ 0x1401E0CF0 (MiUpdateSystemPdes.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     EtwTraceInswapProcess @ 0x140225AC8 (EtwTraceInswapProcess.c)
 */

char __fastcall MmInSwapProcess(char *Object)
{
  char *v1; // r14
  int v3; // r13d
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rbx
  unsigned __int8 v12; // al
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // r8d
  unsigned __int64 *v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // r12
  char *v20; // rdi
  int v21; // edx
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // rax
  char result; // al
  unsigned __int8 v26[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 OutswappedPageResident; // [rsp+38h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-40h] BYREF
  char v29; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v30; // [rsp+70h] [rbp-10h] BYREF

  v1 = Object + 1280;
  if ( (*((_DWORD *)Object + 193) & 0x80u) != 0 )
  {
    v3 = *((unsigned __int16 *)Object + 284);
    v4 = MiVaToPfn((unsigned __int64)Object);
    OutswappedPageResident = MiMakeOutswappedPageResident(
                               (_DWORD)Object,
                               2109661032,
                               ((_WORD)Object + 1088) & 0xFFF,
                               v4,
                               v3);
    v5 = OutswappedPageResident;
    v6 = MI_GET_PAGE_FRAME_FROM_PTE(&OutswappedPageResident);
    v7 = MiMapPageInHyperSpaceWorker(v6, v26, 0x80000000);
    *(_QWORD *)(v7 + 3944) = v5;
    if ( (unsigned int)MiPteInShadowRange(v7 + 3944, 493LL) )
      MiWritePteShadow(v9, v5);
    LOBYTE(v8) = v26[0];
    MiUnmapPageInHyperSpaceWorker(v10, v8);
    v11 = 48 * v6 - 0x58000000000LL;
    v12 = MiLockPageInline(v11);
    v13 = *(_QWORD *)(v11 + 24);
    *(_QWORD *)v11 = Object;
    *(_QWORD *)(v11 + 8) = 0xFFFFF6FB7DBEDF68uLL;
    v14 = v13 ^ (v13 ^ (v13 + 1)) & 0x3FFFFFFFFFFFFFFFLL;
    v15 = v6 ^ *(_QWORD *)(v11 + 40);
    *(_QWORD *)(v11 + 24) = v14;
    *(_QWORD *)(v11 + 40) ^= v15 & 0xFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v12);
    v16 = 3;
    v17 = &v30;
    v30 = (((unsigned __int64)(qword_140327FD0 + 276840816) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    do
    {
      --v17;
      *v17 = ((v17[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v16;
    }
    while ( v16 );
    v18 = 4LL;
    v19 = 4LL;
    v20 = &v29;
    v21 = v6;
    do
    {
      OutswappedPageResident = MiMakeOutswappedPageResident(
                                 (_DWORD)Object,
                                 *(_QWORD *)v20,
                                 *(_DWORD *)v20 & 0xFFF,
                                 v21,
                                 v3);
      v22 = MI_GET_PAGE_FRAME_FROM_PTE(&OutswappedPageResident);
      v21 = v22;
      *(_QWORD *)(48 * v22 - 0x58000000000LL) = v18--;
      v20 += 8;
      --v19;
    }
    while ( v19 );
    *((_QWORD *)Object + 108) = MI_GET_PAGE_FRAME_FROM_PTE(&OutswappedPageResident);
    v1 = Object + 1280;
    v24 = (unsigned int)(v23 + 4);
    *((_QWORD *)Object + 176) = v24;
    *((_QWORD *)Object + 177) = v24;
    *((_QWORD *)Object + 174) = v23;
    *((_QWORD *)Object + 175) = v23;
    *((_QWORD *)Object + 5) = KeMakeKernelDirectoryTableBase(v6 << 12);
    KeAcquireInStackQueuedSpinLock(&qword_140327780, &LockHandle);
    while ( (*((_DWORD *)Object + 193) & 0x800000) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFF7FFFFF);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      MiUpdateSystemPdes(Object);
      KeAcquireInStackQueuedSpinLock(&qword_140327780, &LockHandle);
    }
    MiReturnWsToExpansionList((__int64)(Object + 1280));
    _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFFFFF7F);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (WORD2(PerfGlobalGroupMask) & 0x800) != 0 )
      EtwTraceInswapProcess(Object);
  }
  _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFFFFFBF);
  result = v1[187] & 0xC0;
  if ( result == (char)0x80 )
    return MiReAcquireOutSwappedProcessCommit(Object);
  return result;
}
