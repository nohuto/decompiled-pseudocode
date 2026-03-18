/*
 * XREFs of MmInSwapProcess @ 0x1400356E8
 * Callers:
 *     KiInSwapProcesses @ 0x140032BC0 (KiInSwapProcesses.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MiReturnWsToExpansionList @ 0x14009B428 (MiReturnWsToExpansionList.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeMakeKernelDirectoryTableBase @ 0x1401CBC1C (KeMakeKernelDirectoryTableBase.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiMakeOutswappedPageResident @ 0x1401CFB54 (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1401D03B4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiUpdateSystemPdes @ 0x1401D0868 (MiUpdateSystemPdes.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     EtwTraceInswapProcess @ 0x14020DDE4 (EtwTraceInswapProcess.c)
 */

char __fastcall MmInSwapProcess(unsigned __int64 Object)
{
  int v2; // r12d
  unsigned __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rbx
  unsigned __int8 v10; // al
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 *v14; // rcx
  int v15; // edx
  __int64 v16; // rbx
  int v17; // ecx
  __int64 v18; // r15
  char *v19; // r14
  __int64 v20; // rax
  char result; // al
  _BYTE v22[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 OutswappedPageResident; // [rsp+38h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-40h] BYREF
  char v25; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v26; // [rsp+70h] [rbp-10h] BYREF

  if ( (*(_DWORD *)(Object + 772) & 0x80u) != 0 )
  {
    v2 = *(unsigned __int16 *)(Object + 568);
    if ( (*(_BYTE *)(8 * ((Object >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
      && (*(_BYTE *)(((Object >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0
      && (v3 = *(_QWORD *)(((Object >> 18) & 0x3FFFFFF8) - 0x904C0000000LL), (v3 & 0x81) == 0x81) )
    {
      v4 = (v3 >> 12) + ((Object >> 12) & 0x1FF);
    }
    else
    {
      v4 = MI_GET_PAGE_FRAME_FROM_PTE(((Object >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    }
    OutswappedPageResident = MiMakeOutswappedPageResident(Object, 2109661032, ((_WORD)Object + 1088) & 0xFFF, v4, v2);
    v5 = OutswappedPageResident;
    v6 = MI_GET_PAGE_FRAME_FROM_PTE(&OutswappedPageResident);
    v7 = MiMapPageInHyperSpaceWorker(v6, v22, 0x80000000LL);
    *(_QWORD *)(v7 + 3944) = v5;
    if ( (unsigned int)MiPteInShadowRange(v7 + 3944) )
      MiWritePteShadow(v7 + 3944, v5);
    LOBYTE(v8) = v22[0];
    MiUnmapPageInHyperSpaceWorker(v7, v8, 0x80000000LL);
    v9 = 48 * v6 - 0x58000000000LL;
    v10 = MiLockPageInline(v9);
    v11 = *(_QWORD *)(v9 + 24);
    *(_QWORD *)v9 = Object;
    v12 = v11 ^ (v11 ^ (v11 + 1)) & 0x3FFFFFFFFFFFFFFFLL;
    v13 = v6 ^ *(_QWORD *)(v9 + 40);
    *(_QWORD *)(v9 + 24) = v12;
    *(_QWORD *)(v9 + 40) ^= v13 & 0xFFFFFFFFFLL;
    *(_QWORD *)(v9 + 8) = 0xFFFFF6FB7DBEDF68uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v10);
    v14 = &v26;
    v26 = 0xFFFFF6FAC0084020uLL;
    v15 = 3;
    do
    {
      --v14;
      *v14 = ((v14[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v15;
    }
    while ( v15 );
    v16 = 4LL;
    v17 = v6;
    v18 = 4LL;
    v19 = &v25;
    do
    {
      OutswappedPageResident = MiMakeOutswappedPageResident(Object, *(_QWORD *)v19, *(_DWORD *)v19 & 0xFFF, v17, v2);
      v20 = MI_GET_PAGE_FRAME_FROM_PTE(&OutswappedPageResident);
      v17 = v20;
      v19 += 8;
      *(_QWORD *)(48 * v20 - 0x58000000000LL) = v16--;
      --v18;
    }
    while ( v18 );
    *(_QWORD *)(Object + 864) = MI_GET_PAGE_FRAME_FROM_PTE(&OutswappedPageResident);
    *(_QWORD *)(Object + 1400) = 5LL;
    *(_QWORD *)(Object + 1408) = 5LL;
    *(_QWORD *)(Object + 1384) = 1LL;
    *(_QWORD *)(Object + 1392) = 1LL;
    *(_QWORD *)(Object + 40) = KeMakeKernelDirectoryTableBase(v6 << 12);
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    while ( (*(_DWORD *)(Object + 772) & 0x800000) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(Object + 772), 0xFF7FFFFF);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      MiUpdateSystemPdes(Object);
      KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    }
    MiReturnWsToExpansionList(Object + 1280, 0LL);
    _InterlockedAnd((volatile signed __int32 *)(Object + 772), 0xFFFFFF7F);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (WORD2(PerfGlobalGroupMask) & 0x800) != 0 )
      EtwTraceInswapProcess(Object);
  }
  _InterlockedAnd((volatile signed __int32 *)(Object + 772), 0xFFFFFFBF);
  result = *(_BYTE *)(Object + 1499) & 0xC0;
  if ( result == (char)0x80 )
    return MiReAcquireOutSwappedProcessCommit((PVOID)Object);
  return result;
}
