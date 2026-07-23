/*
 * XREFs of MiTrimSharedPageFromViews @ 0x1400189D0
 * Callers:
 *     MiTrimSection @ 0x14008EC74 (MiTrimSection.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1400169DC (MI_WSLE_LOG_ACCESS.c)
 *     MiGetSystemCacheReverseMap @ 0x140019690 (MiGetSystemCacheReverseMap.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLocateAddress @ 0x14001EC10 (MiLocateAddress.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiStartingOffset @ 0x1400318C0 (MiStartingOffset.c)
 *     MiGetProtoPteAddress @ 0x140041FE0 (MiGetProtoPteAddress.c)
 *     MiLocateWsle @ 0x1400466D0 (MiLocateWsle.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     MmDetachSession @ 0x140076538 (MmDetachSession.c)
 *     MmAttachSession @ 0x14007659C (MmAttachSession.c)
 *     MmGetSessionById @ 0x140076640 (MmGetSessionById.c)
 *     MiAcquireProperVm @ 0x1400A2B28 (MiAcquireProperVm.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 *     MiTbFlushType @ 0x1400FEB3C (MiTbFlushType.c)
 *     MiAttachThreadDone @ 0x140108E2C (MiAttachThreadDone.c)
 *     MiPrepareAttachThread @ 0x140108EA0 (MiPrepareAttachThread.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiReplaceLockedPage @ 0x1401EAFB8 (MiReplaceLockedPage.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MmQuitNextSession @ 0x1404D3590 (MmQuitNextSession.c)
 */

__int64 __fastcall MiTrimSharedPageFromViews(__int64 a1, int a2, int a3, unsigned __int64 *a4, _BYTE *a5)
{
  struct _KLOCK_QUEUE_HANDLE *v5; // rbp
  _BYTE *v6; // r13
  __int64 result; // rax
  unsigned __int64 *v8; // r14
  int v9; // r15d
  unsigned __int64 v10; // rdi
  struct _KTHREAD *CurrentThread; // r9
  __int64 v12; // r11
  void *v13; // rdx
  _KPROCESS *v14; // rbx
  __int64 v15; // rax
  unsigned __int64 v16; // r12
  __int64 v17; // rsi
  ULONG_PTR v18; // r12
  __int64 v19; // rsi
  __int64 v20; // r13
  __int64 v21; // rdx
  int v22; // ecx
  ULONG_PTR SessionById; // rax
  volatile signed __int32 *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // r9
  _QWORD *i; // rdx
  unsigned __int64 v29; // r8
  volatile signed __int64 *v30; // rbx
  __int64 v31; // rsi
  unsigned __int64 v32; // rdx
  bool v33; // zf
  __int64 SharedVm; // rbx
  KIRQL v35; // al
  __int64 Address; // rax
  int v37; // ecx
  unsigned __int64 **v38; // rax
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // r10
  __int64 v41; // r9
  __int64 ProtoPteAddress; // rax
  __int64 v43; // rcx
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rcx
  int v46; // r10d
  __int64 v47; // rax
  __int64 v48; // r9
  __int64 v49; // r11
  _BYTE *v50; // r14
  __int64 v51; // rax
  unsigned __int64 v52; // rbx
  char v53; // r9
  int v54; // r10d
  __int64 v55; // r11
  int v56; // r15d
  __int64 v57; // rax
  unsigned __int8 v58; // cl
  char v59; // al
  unsigned __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rcx
  unsigned __int64 v63; // r9
  int j; // r10d
  __int64 v65; // rax
  int v66; // ecx
  __int64 v67; // r11
  __int64 v68; // rax
  unsigned __int16 v69; // cx
  int *v70; // rax
  _QWORD *SystemCacheReverseMap; // r10
  __int64 v72; // rax
  unsigned __int64 v73; // rax
  __int64 SharedWorkingSetList; // rsi
  unsigned __int64 Wsle; // rax
  unsigned __int64 v76; // rdi
  int v77; // eax
  __int64 v78; // rax
  int v79; // ecx
  int locked; // eax
  __int64 v81; // rax
  int v82; // ecx
  volatile signed __int64 *v83; // rbx
  __int64 v84; // rbx
  char *v85; // rbx
  _QWORD *v86; // rdi
  _QWORD *v87; // rbx
  void *v88; // rcx
  signed __int32 v89[24]; // [rsp+0h] [rbp-60h] BYREF
  _BYTE v90[4]; // [rsp+60h] [rbp+0h] BYREF

  v5 = (struct _KLOCK_QUEUE_HANDLE *)((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL);
  v6 = a5;
  result = 0LL;
  v5[6].LockQueue.Next = 0LL;
  v5[6].LockQueue.Lock = 0LL;
  v8 = a4;
  *(_QWORD *)&v5[6].OldIrql = 0LL;
  v9 = 0;
  HIDWORD(v5[14].LockQueue.Lock) = 0;
  v10 = 0LL;
  v5[1].LockQueue.Lock = a4;
  CurrentThread = KeGetCurrentThread();
  v5->LockQueue.Lock = (unsigned __int64 *volatile)CurrentThread;
  *((_DWORD *)&v5->OldIrql + 1) = a3;
  HIDWORD(v5[3].LockQueue.Next) = a2;
  *(_QWORD *)&v5[1].OldIrql = a5;
  LOBYTE(v5->LockQueue.Next) = 17;
  *(_DWORD *)&v5->OldIrql = 0;
  HIDWORD(v5->LockQueue.Next) = 0;
  LODWORD(v5[7].LockQueue.Lock) = 0;
  v5[2].LockQueue.Next = 0LL;
  if ( !a1 )
    return result;
  while ( 2 )
  {
    v12 = a1;
    *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = a1;
    v13 = 0LL;
    *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = *(_QWORD *)a1;
    *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 0LL;
    v14 = *(_KPROCESS **)(a1 + 8);
    v15 = *(_QWORD *)(a1 + 24);
    v16 = *(_QWORD *)(a1 + 16);
    v17 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v14;
    *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = v15;
    *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = 0LL;
    *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0;
    *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0;
    if ( v14 && v14 != KeGetCurrentThread()->ApcState.Process )
    {
      KeAcquireInStackQueuedSpinLock(&qword_140327780, v5 + 6);
      *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = MiPrepareAttachThread(
                                                                              v14,
                                                                              &v14[1].IdealNode[12]);
      KeReleaseInStackQueuedSpinLock(v5 + 6);
      if ( !*(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) )
        goto LABEL_141;
      KiStackAttachProcess((ULONG_PTR)v14);
      goto LABEL_6;
    }
    if ( *(_DWORD *)(a1 + 44) < 2u )
      goto LABEL_6;
    v22 = *(_DWORD *)(a1 + 40);
    if ( v22 == -1 )
    {
      v13 = &unk_1403268C0;
LABEL_15:
      *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v13;
      goto LABEL_16;
    }
    if ( v22 != -2 )
    {
      SessionById = MmGetSessionById();
      *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = SessionById;
      if ( !SessionById )
        goto LABEL_141;
      if ( (int)MmAttachSession(SessionById) < 0 )
      {
        MmQuitNextSession(*(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70));
        *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 0LL;
        goto LABEL_141;
      }
      a3 = *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
      v12 = *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
      CurrentThread = *(struct _KTHREAD **)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      v13 = (void *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 2880);
      goto LABEL_15;
    }
LABEL_16:
    if ( *(_DWORD *)(v12 + 44) == 3 )
    {
      if ( *(_DWORD *)(v12 + 40) == -2 )
      {
        if ( v16 >= qword_140326950 && v16 < qword_140326950 + 0x8000000000LL )
          goto LABEL_141;
      }
      else if ( v16 < qword_140326950 || v16 >= qword_140326950 + 0x8000000000LL )
      {
        goto LABEL_141;
      }
      goto LABEL_6;
    }
    if ( (a3 & 0xA0000) != 0 )
      goto LABEL_141;
    --CurrentThread->SpecialApcDisable;
    v24 = (volatile signed __int32 *)*((_QWORD *)v13 + 1);
    v25 = KeAbPreAcquire((ULONG_PTR)v24);
    v26 = v25;
    if ( _interlockedbittestandset64(v24, 0LL) )
      ExfAcquirePushLockExclusiveEx(v24, v25, v24);
    if ( v26 )
      *(_BYTE *)(v26 + 26) |= 1u;
    v27 = *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68);
    for ( i = *(_QWORD **)(v27 + 16); ; i = (_QWORD *)*i )
    {
      while ( 1 )
      {
        if ( !i )
        {
          v30 = *(volatile signed __int64 **)(v27 + 8);
          if ( (_InterlockedExchangeAdd64(v30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v30);
          goto LABEL_46;
        }
        v29 = i[10] & 0xFFFFFFFFFFFFF000uLL;
        if ( v16 < v29 + i[4] )
          break;
        i = (_QWORD *)i[1];
      }
      if ( v16 >= v29 )
        break;
    }
    if ( v8 != (unsigned __int64 *)(i[6] & 0xFFFFFFFFFFFFFFF8uLL) )
    {
      v30 = *(volatile signed __int64 **)(v27 + 8);
      if ( (_InterlockedExchangeAdd64(v30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v30);
LABEL_46:
      KeAbPostRelease((ULONG_PTR)v30);
      v31 = *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      KiLeaveGuardedRegionUnsafe(v31);
      v10 = *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
      v14 = *(_KPROCESS **)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
      goto LABEL_142;
    }
    if ( v16 + (i[3] << 12) - v17 != (i[10] & 0xFFFFFFFFFFFFF000uLL) )
    {
      v30 = *(volatile signed __int64 **)(v27 + 8);
      if ( (_InterlockedExchangeAdd64(v30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v30);
      goto LABEL_46;
    }
    *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 1;
LABEL_6:
    v18 = v16 - 4096;
    v19 = v17 - 4096;
    v20 = 0LL;
    v21 = v18 >> 12;
    v10 = 0LL;
    *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
    while ( 1 )
    {
      for ( v18 += 4096LL; ; v18 = v63 )
      {
        v14 = *(_KPROCESS **)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
        if ( v18 >= *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) )
          goto LABEL_140;
        v32 = v21 + 1;
        v19 += 4096LL;
        *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v32;
        *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v19;
        if ( !v14 )
          break;
        *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44) = 0;
        v10 = (unsigned __int64)&v14[1].IdealNode[12];
        *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = (char *)v14 + 1280;
        if ( !v9 )
        {
          v33 = (*(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) & 0x40000) == 0;
          v9 = 1;
          *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 1;
          if ( !v33 )
          {
            *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x150) = MiTbFlushType(&v14[1].IdealNode[12]);
            *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x158) = 20LL;
            *(_WORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x154) = 0;
            *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x160) = 0LL;
            *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x168) = 0LL;
          }
          SharedVm = MiGetSharedVm(&v14[1].IdealNode[12]);
          v35 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
          v32 = *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
          *(_DWORD *)(SharedVm + 4) = 0;
          v14 = *(_KPROCESS **)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
          LOBYTE(v5->LockQueue.Next) = v35;
        }
        if ( !v20
          || v32 < (*(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32))
          || v32 > (*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32)) )
        {
          Address = MiLocateAddress(v18, v32);
          v20 = Address;
          if ( !Address )
            goto LABEL_140;
          v37 = *(_DWORD *)(Address + 48);
          if ( (v37 & 0x8000) != 0 || (v8[7] & 0x20) == 0 && (v37 & 7) != 0 )
            goto LABEL_140;
          v38 = *(unsigned __int64 ***)(Address + 72);
          *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v38;
          if ( *v38 != v8 )
            goto LABEL_140;
        }
        if ( (v8[7] & 0x20) != 0 )
        {
          v39 = *(_QWORD *)(v20 + 80);
          v40 = *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
          if ( v40 < v39
            || (v41 = *(unsigned int *)(v20 + 24),
                v40 >= v39
                     - 8 * (v41 | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32))
                     + 8
                     * ((*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32)) + 1)) )
          {
            v6 = *(_BYTE **)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
            goto LABEL_141;
          }
          v18 = ((__int64)(v40 - v39) >> 3 << 12)
              + ((v41 | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32)) << 12);
        }
        else
        {
          ProtoPteAddress = MiGetProtoPteAddress(v20, v18 >> 12, 0LL, &v5[3].LockQueue.Lock);
          if ( !ProtoPteAddress )
            goto LABEL_140;
          v43 = *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
          if ( !v43 || v19 != MiStartingOffset(v43, ProtoPteAddress, 0xFFFFFFFFLL) )
            goto LABEL_140;
        }
        v44 = ((v18 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x240) = v44;
        v45 = ((v44 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x248) = v45;
        v46 = 3;
        *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x250) = ((v45 >> 9) & 0x7FFFFFFFF8LL)
                                                                             - 0x98000000000LL;
        while ( 1 )
        {
          v47 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL)
                                                + 0x240
                                                + 8LL * (unsigned int)(v46 - 1)));
          *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v47;
          if ( (v47 & 1) == 0 || (v47 & 0x80u) != 0LL )
            break;
          if ( !v46 )
            goto LABEL_75;
        }
        v63 = v48 + 8;
        for ( j = v46 + 2; j; --j )
          v63 = (__int64)((v63 << 25) - (v49 << 25)) >> 16;
        v21 = (v63 >> 12) - 1;
        v19 = v63 - v18 + v19 - 4096;
      }
      *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44) = 1;
      if ( v9 == 1 )
      {
        if ( (v18 & 0x1FFFFF) != 0 )
          goto LABEL_101;
        if ( *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) )
        {
          v65 = MiFreeWsleList(v10, &v5[7].LockQueue.Lock, 0LL);
          v66 = *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = 0;
          if ( v65 )
            v66 = 277;
          *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v66;
        }
        else
        {
          MiFlushTbList(&v5[14]);
        }
        MiUnlockWorkingSetExclusive(v10, LOBYTE(v5->LockQueue.Next));
        v9 = 0;
        *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
      }
      else if ( v9 )
      {
        goto LABEL_101;
      }
      v10 = MiAcquireProperVm(v18, (unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL);
      *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v10;
LABEL_101:
      if ( v10 < 2 )
        break;
      if ( (*(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) & 0x40000) != 0 && !v9 )
      {
        *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x150) = MiTbFlushType(v10);
        *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x158) = 20LL;
        *(_WORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x154) = 0;
        *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x160) = 0LL;
        *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x168) = 0LL;
      }
      v67 = *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
      v9 = 1;
      *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 1;
      if ( !*(_DWORD *)(v67 + 44) )
      {
        if ( !qword_140326CC0 || v18 < qword_140326CC0 || v18 >= qword_140326CC0 + (qword_140326CA0 << 21) )
          goto LABEL_120;
        v68 = *(_QWORD *)(MiGetSystemCacheReverseMap(v18) + 24);
        if ( (v68 & 1) != 0 )
          v68 &= ~1uLL;
        v69 = *(_WORD *)(*(_QWORD *)v68 + 60LL) & 0x3FF;
        v70 = v69 == 1023 ? &MiSystemPartition : *(int **)(qword_140327038 + 8LL * v69);
        if ( (int *)v10 != v70 + 1648 )
          goto LABEL_120;
        SystemCacheReverseMap = (_QWORD *)MiGetSystemCacheReverseMap(v18);
        v72 = SystemCacheReverseMap[2];
        _InterlockedOr(v89, 0);
        if ( !v72 )
          goto LABEL_120;
        v73 = SystemCacheReverseMap[3];
        *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v73;
        if ( (v73 & 1) != 0 )
        {
          v73 &= ~1uLL;
          *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v73;
        }
        if ( *(unsigned __int64 **)v73 != v8
          || (SystemCacheReverseMap[4] ^ ((unsigned int)v18 ^ (unsigned int)SystemCacheReverseMap[4]) & 0x3FFFF) != v19 )
        {
LABEL_120:
          v6 = *(_BYTE **)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
          v31 = *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
          goto LABEL_143;
        }
      }
LABEL_75:
      v50 = (_BYTE *)(((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v51 = MI_READ_PTE_LOCK_FREE(v50);
      v21 = *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v51;
      if ( (v51 & 1) == 0 )
        goto LABEL_48;
      v52 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v5[3].OldIrql) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v56 = v54 & 0x10000000;
      if ( (v54 & 0x10000000) != 0 )
      {
        v21 = *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
        if ( (v53 & 0x42) != 0 || (*(_BYTE *)(v52 + 34) & 0x10) != 0 )
          goto LABEL_47;
      }
      v57 = *(_QWORD *)(v52 + 16);
      v21 = *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      if ( (*(_QWORD *)(v52 + 40) & 0x200000000000000LL) == 0 )
        goto LABEL_47;
      if ( (v54 & 0x40000) != 0 )
      {
        v9 = *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
        if ( (v57 & 0x400) != 0 && (v53 & 0x42) != 0 )
        {
          v58 = MiLockPageInline(v52);
          v59 = *(_BYTE *)(v52 + 34);
          if ( (v59 & 0x10) == 0 )
            *(_BYTE *)(v52 + 34) = v59 | 0x10;
          _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v58);
          v60 = *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) & 0xFFFFFFFFFFFFFFBDuLL;
          *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v60;
          *(_QWORD *)v50 = v60;
          if ( (unsigned int)MiPteInShadowRange(v50, v60) )
            MiWritePteShadow(v62, v61);
          MiInsertTbFlushEntry(&v5[14], v18, 1LL);
          v21 = *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
        }
        goto LABEL_48;
      }
      if ( (v57 & 0x400) == 0
        && (*(_DWORD *)(*(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) + 56LL) & 0x80u) != 0 )
      {
        goto LABEL_47;
      }
      if ( *(_DWORD *)(v55 + 44) == 3 )
      {
        v21 = *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
        if ( !*(_QWORD *)v52 || (*(_BYTE *)(v52 + 35) & 8) != 0 )
          goto LABEL_47;
      }
      SharedWorkingSetList = MiGetSharedWorkingSetList(v10);
      Wsle = MiLocateWsle(v18);
      v76 = Wsle;
      if ( Wsle < *(_QWORD *)(SharedWorkingSetList + 8)
        || (*(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) & 0x800000) != 0 )
      {
        v10 = *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
        if ( v56
          || !*(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C)
          || (*(_BYTE *)(v10 + 184) & 7) == 2
          || (locked = MiReplaceLockedPage(
                         *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30),
                         v52,
                         v18,
                         *(unsigned int *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44)),
              v21 = *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
              v19 = *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60),
              v9 = *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
              v8 = *(unsigned __int64 **)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
              !locked) )
        {
          v21 = *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
          v19 = *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
          *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 277;
LABEL_47:
          v9 = *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
LABEL_48:
          v8 = *(unsigned __int64 **)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
          continue;
        }
      }
      else
      {
        if ( dword_1403271C8 )
          MI_WSLE_LOG_ACCESS(
            *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30),
            (_DWORD *)(*(_QWORD *)(SharedWorkingSetList + 80) + Wsle * *(unsigned int *)(SharedWorkingSetList + 32)),
            v50);
        v21 = *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
        v19 = *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
        v9 = *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
        v8 = *(unsigned __int64 **)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
        *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL)
                  + 0xB8
                  + 8LL * *(unsigned int *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0)) = v76;
        v10 = *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
        v77 = *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) + 1;
        *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v77;
        if ( v77 == 19 )
        {
          v78 = MiFreeWsleList(v10, &v5[7].LockQueue.Lock, 0LL);
          v79 = *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          v21 = *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
          if ( v78 )
            v79 = 277;
          *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = 0;
          *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v79;
        }
      }
    }
    v10 = 0LL;
    *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
LABEL_140:
    v6 = *(_BYTE **)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
LABEL_141:
    v31 = *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
LABEL_142:
    if ( v9 == 1 )
    {
LABEL_143:
      if ( *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) )
      {
        v81 = MiFreeWsleList(v10, &v5[7].LockQueue.Lock, 0LL);
        v82 = *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = 0;
        if ( v81 )
          v82 = 277;
        *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v82;
      }
      else
      {
        MiFlushTbList(&v5[14]);
      }
      if ( v14 )
      {
        MiUnlockWorkingSetExclusive(v10, LOBYTE(v5->LockQueue.Next));
      }
      else if ( v10 )
      {
        MiUnlockWorkingSetExclusive(v10, LOBYTE(v5->LockQueue.Next));
        v10 = 0LL;
        *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
      }
      v9 = 0;
      *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
    }
    if ( *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) == 1 )
    {
      v83 = *(volatile signed __int64 **)(*(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) + 8LL);
      if ( (_InterlockedExchangeAdd64(v83, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v83);
      KeAbPostRelease((ULONG_PTR)v83);
      KiLeaveGuardedRegionUnsafe(v31);
    }
    v84 = *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70);
    if ( v84 )
    {
      MmDetachSession(*(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70), &v5[22]);
      MmQuitNextSession(v84);
      goto LABEL_160;
    }
    if ( *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) == 1 )
    {
      KiUnstackDetachProcess(&v5[22], 1LL);
      v85 = *(char **)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
      MiAttachThreadDone(v85 + 1280);
    }
    else
    {
LABEL_160:
      v85 = *(char **)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
    }
    if ( v85 )
      ObfDereferenceObjectWithTag(v85, 0x746C6644u);
    ExFreePoolWithTag(*(PVOID *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78), 0);
    if ( *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C) == 1 && (*v6 & 1) == 0 )
    {
      v86 = *(_QWORD **)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
      while ( v86 )
      {
        v87 = v86;
        v86 = (_QWORD *)*v86;
        v88 = (void *)v87[1];
        if ( v88 )
          ObfDereferenceObjectWithTag(v88, 0x746C6644u);
        ExFreePoolWithTag(v87, 0);
      }
      return 0LL;
    }
    else
    {
      a1 = *(_QWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
      if ( a1 )
      {
        a3 = *(_DWORD *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
        CurrentThread = *(struct _KTHREAD **)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        continue;
      }
      return *(unsigned int *)(((unsigned __int64)v90 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    }
  }
}
