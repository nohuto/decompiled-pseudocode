/*
 * XREFs of MiTrimSharedPageFromViews @ 0x1400FAC3C
 * Callers:
 *     MiTrimSection @ 0x1400FA79C (MiTrimSection.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     MiStartingOffset @ 0x140055230 (MiStartingOffset.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiLocateWsle @ 0x140095350 (MiLocateWsle.c)
 *     MiLogPageAccess @ 0x140096F70 (MiLogPageAccess.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     MiGetProtoPteAddress @ 0x1400BF2B0 (MiGetProtoPteAddress.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MiSystemViewCompareVa @ 0x1400FA3C4 (MiSystemViewCompareVa.c)
 *     MiAttachThreadDone @ 0x1400FB904 (MiAttachThreadDone.c)
 *     MiPrepareAttachThread @ 0x1400FB9A8 (MiPrepareAttachThread.c)
 *     MiAcquireProperVm @ 0x1400FB9F8 (MiAcquireProperVm.c)
 *     MiReplaceLockedPage @ 0x1400FC0AC (MiReplaceLockedPage.c)
 *     MmDetachSession @ 0x1400FD53C (MmDetachSession.c)
 *     MmAttachSession @ 0x1400FD5A0 (MmAttachSession.c)
 *     MmGetSessionById @ 0x1400FD644 (MmGetSessionById.c)
 *     MI_GET_SYSTEM_CACHE_REVERSE_MAP @ 0x140116EB8 (MI_GET_SYSTEM_CACHE_REVERSE_MAP.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MmQuitNextSession @ 0x14051C278 (MmQuitNextSession.c)
 */

__int64 __fastcall MiTrimSharedPageFromViews(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rbp
  void *v6; // r13
  __int64 v7; // rax
  unsigned int v8; // ebx
  unsigned __int64 v9; // rsi
  struct _KTHREAD *CurrentThread; // r15
  __int64 v11; // r10
  _KPROCESS *v12; // rdi
  unsigned __int64 v13; // r12
  __int64 v14; // r14
  int v15; // eax
  int v16; // r15d
  unsigned __int64 v17; // r12
  __int64 v18; // r14
  unsigned __int64 v19; // rdx
  __int64 v20; // r13
  __int64 v21; // rcx
  ULONG_PTR SessionById; // rax
  ULONG_PTR v23; // r13
  unsigned __int64 v24; // rax
  unsigned __int64 *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // rbx
  _QWORD *v29; // rbx
  int v30; // eax
  volatile signed __int64 *v31; // rbx
  __int16 v32; // ax
  unsigned __int64 v33; // rdx
  unsigned __int8 CurrentIrql; // di
  unsigned int v35; // ebx
  signed __int32 v36; // edx
  _QWORD *Address; // rax
  int v38; // ecx
  __int64 v39; // r11
  _QWORD *v40; // rax
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // r10
  __int64 v43; // r9
  unsigned __int64 ProtoPteAddress; // rax
  __int64 *v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r10
  unsigned __int64 v48; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // r8
  int i; // r10d
  int v56; // eax
  __int64 v57; // rax
  __int64 v58; // r10
  _QWORD *v59; // rcx
  __int64 v60; // rax
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // r15
  unsigned __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // rax
  unsigned __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rax
  __int64 v69; // rbx
  int v70; // r14d
  bool v71; // zf
  __int64 v72; // rax
  __int64 v73; // rdi
  unsigned __int64 Wsle; // rsi
  __int64 v75; // r8
  int v76; // eax
  __int64 v77; // rax
  int v78; // ecx
  int locked; // eax
  __int64 v80; // rax
  volatile signed __int64 *v81; // rbx
  __int16 v82; // ax
  __int64 v83; // rbx
  _QWORD *v84; // rdi
  _QWORD *v85; // rbx
  void *v86; // rcx
  signed __int32 v88[24]; // [rsp+0h] [rbp-60h] BYREF
  _BYTE v89[4]; // [rsp+60h] [rbp+0h] BYREF

  v5 = (unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL;
  v6 = 0LL;
  *(_QWORD *)(v5 + 56) = a4;
  v7 = a1;
  *(_QWORD *)(v5 + 160) = 0LL;
  v8 = 0;
  *(_QWORD *)(v5 + 144) = a5;
  v9 = 0LL;
  *(_DWORD *)(v5 + 32) = a3;
  *(_QWORD *)(v5 + 168) = 0LL;
  *(_QWORD *)(v5 + 176) = 0LL;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(v5 + 136) = CurrentThread;
  *(_DWORD *)(v5 + 64) = a2;
  *(_BYTE *)v5 = 17;
  *(_DWORD *)(v5 + 4) = 0;
  *(_DWORD *)(v5 + 8) = 0;
  if ( !a1 )
    return v8;
  while ( 1 )
  {
    v11 = v7;
    *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v7;
    *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = *(_QWORD *)v7;
    *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = 0LL;
    v12 = *(_KPROCESS **)(v7 + 8);
    v13 = *(_QWORD *)(v7 + 16);
    v14 = *(_QWORD *)(v7 + 32);
    *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = *(_QWORD *)(v7 + 24);
    *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v12;
    *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 0LL;
    *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0;
    *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = 0;
    *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = 0;
    if ( v12 && v12 != KeGetCurrentThread()->ApcState.Process )
    {
      KeAcquireInStackQueuedSpinLock(&SpinLock, (PKLOCK_QUEUE_HANDLE)(v5 + 160));
      v15 = MiPrepareAttachThread(v12, &v12[1].IdealNode[8]);
      *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v15;
      v16 = v15;
      KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)(v5 + 160));
      if ( !v16 )
        goto LABEL_19;
      KiStackAttachProcess(v12, 1, v5 + 352);
LABEL_6:
      v17 = v13 - 4096;
      v18 = v14 - 4096;
      v19 = v17 >> 12;
      v20 = 0LL;
      *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
      v9 = 0LL;
      while ( 1 )
      {
        for ( v17 += 4096LL; ; v17 = v54 )
        {
          if ( v17 >= *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) )
          {
LABEL_70:
            v8 = *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
            goto LABEL_19;
          }
          v33 = v19 + 1;
          v18 += 4096LL;
          *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v33;
          *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v18;
          if ( !v12 )
            break;
          v9 = (unsigned __int64)&v12[1].IdealNode[8];
          *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44) = 0;
          *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = (char *)v12 + 1272;
          if ( !*(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
          {
            *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 1;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9);
            }
            else
            {
              v35 = 0;
              if ( _interlockedbittestandset((volatile signed __int32 *)v9, 0x1Fu) )
                v35 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)v9);
              while ( 1 )
              {
                v36 = *(_DWORD *)v9;
                if ( (*(_DWORD *)v9 & 0xBFFFFFFF) == 0x80000000 )
                  break;
                if ( (v36 & 0x40000000) == 0 )
                  _InterlockedCompareExchange((volatile signed __int32 *)v9, v36 | 0x40000000, v36);
                if ( (++v35 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v35);
              }
            }
            v33 = *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
            *(_BYTE *)v5 = CurrentIrql;
            v12 = *(_KPROCESS **)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
          }
          if ( v20
            && v33 >= (*(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32))
            && v33 <= (*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32)) )
          {
            v39 = *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
          }
          else
          {
            Address = MiLocateAddress(v17);
            v20 = (__int64)Address;
            if ( !Address )
              goto LABEL_70;
            v38 = *((_DWORD *)Address + 12);
            if ( (v38 & 0x8000) != 0 )
              goto LABEL_70;
            v39 = *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
            if ( (*(_DWORD *)(v39 + 56) & 0x20) == 0 && (v38 & 7) != 0 )
              goto LABEL_70;
            v40 = (_QWORD *)Address[9];
            *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v40;
            if ( *v40 != v39 )
              goto LABEL_70;
          }
          if ( (*(_DWORD *)(v39 + 56) & 0x20) != 0 )
          {
            v41 = *(_QWORD *)(v20 + 80);
            v42 = *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
            if ( v42 < v41 )
              goto LABEL_70;
            v43 = *(unsigned int *)(v20 + 24);
            if ( v42 >= v41
                      - 8 * (v43 | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32))
                      + 8
                      * ((*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32)) + 1) )
              goto LABEL_70;
            v17 = ((__int64)(v42 - v41) >> 3 << 12)
                + ((v43 | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32)) << 12);
          }
          else
          {
            ProtoPteAddress = MiGetProtoPteAddress(v20, v17 >> 12, 0, (unsigned int **)(v5 + 96));
            if ( !ProtoPteAddress )
              goto LABEL_70;
            v45 = *(__int64 **)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
            if ( !v45 || v18 != MiStartingOffset(v45, ProtoPteAddress, 0xFFFFFFFF) )
              goto LABEL_70;
            v39 = *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
          }
          v46 = 3LL;
          LODWORD(v47) = 3;
          v48 = ((v17 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          Process = (_KPROCESS *)(v5 + 400);
          do
          {
            *(_QWORD *)&Process->Header.Lock = v48;
            Process = (_KPROCESS *)((char *)Process + 8);
            v48 = ((v48 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v46;
          }
          while ( v46 );
          while ( 1 )
          {
            v47 = (unsigned int)(v47 - 1);
            v50 = *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x190 + 8 * v47);
            v51 = *(_QWORD *)v50;
            if ( v50 + 0x90482413000LL <= 0x7F8 && (unsigned int)MiPteHasShadow(Process, v51) )
            {
              if ( (v51 & 1) == 0 )
                break;
              if ( (v51 & 0x20) == 0 || (v51 & 0x42) == 0 )
              {
                Process = KeGetCurrentThread()->ApcState.Process;
                v52 = *(_QWORD *)&Process[2].ProcessLock;
                if ( v52 )
                {
                  v53 = *(_QWORD *)(v52 + 8 * ((v50 >> 3) & 0x1FF));
                  if ( (v53 & 0x20) != 0 )
                    LOBYTE(v51) = v51 | 0x20;
                  if ( (v53 & 0x42) != 0 )
                    LOBYTE(v51) = v51 | 0x42;
                }
              }
            }
            if ( (v51 & 1) == 0 )
              break;
            if ( !(_DWORD)v47 )
            {
              if ( (v51 & 0x80u) == 0LL )
                goto LABEL_120;
              break;
            }
          }
          v54 = v50 + 8;
          for ( i = v47 + 2; i; --i )
            v54 = v54 << 25 >> 16;
          v19 = *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        }
        v56 = *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44) = 1;
        if ( v56 == 1 )
        {
          if ( (v17 & 0x1FFFFF) != 0 )
          {
            v8 = *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
            goto LABEL_110;
          }
          if ( *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) )
          {
            v57 = MiFreeWsleList(v9, (unsigned int *)(v5 + 192), 0);
            v8 = *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
            *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = 0;
            if ( v57 )
              v8 = 277;
            *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v8;
          }
          else
          {
            v8 = *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
          }
          MiUnlockWorkingSetExclusive(v9, *(_BYTE *)v5);
          v56 = 0;
          *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
        }
        else
        {
          v8 = *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
        }
        if ( !v56 )
        {
          v9 = MiAcquireProperVm(v17, (unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL);
          *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v9;
        }
LABEL_110:
        if ( v9 < 2 )
        {
          v9 = 0LL;
          goto LABEL_19;
        }
        v58 = *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
        *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 1;
        if ( *(_DWORD *)(v58 + 44) )
        {
          v39 = *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
        }
        else
        {
          if ( !qword_14034EE00 )
            goto LABEL_168;
          if ( v17 < qword_14034EE00 )
            goto LABEL_168;
          if ( v17 >= qword_14034EE00 + (qword_14034EDE0 << 21) )
            goto LABEL_168;
          v59 = (_QWORD *)MI_GET_SYSTEM_CACHE_REVERSE_MAP(v17);
          v60 = v59[2];
          _InterlockedOr(v88, 0);
          if ( !v60 )
            goto LABEL_168;
          v61 = v59[3];
          *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v61;
          if ( (v61 & 1) != 0 )
          {
            v61 &= ~1uLL;
            *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v61;
          }
          v39 = *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
          if ( *(_QWORD *)v61 != v39 || (v59[4] ^ ((unsigned int)v17 ^ (unsigned int)v59[4]) & 0x3FFFF) != v18 )
            goto LABEL_168;
LABEL_120:
          v58 = *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
        }
        v62 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v63 = *(_QWORD *)v62;
        if ( v62 + 0x90482413000LL <= 0x7F8
          && (unsigned int)MiPteHasShadow(0x90482413000LL, v63)
          && (v63 & 1) != 0
          && ((v63 & 0x20) == 0 || (v63 & 0x42) == 0) )
        {
          v64 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v64 )
          {
            v65 = *(_QWORD *)(v64 + 8 * ((v62 >> 3) & 0x1FF));
            if ( (v65 & 0x20) != 0 )
              v63 |= 0x20uLL;
            if ( (v65 & 0x42) != 0 )
              v63 |= 0x42uLL;
          }
        }
        *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = v63;
        if ( (v63 & 1) != 0 )
        {
          v66 = v63;
          if ( v5 + 0x90482413078LL <= 0x7F8
            && (unsigned int)MiPteHasShadow(0x90482413000LL, v63)
            && ((v63 & 0x20) == 0 || (v63 & 0x42) == 0) )
          {
            v67 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
            if ( v67 )
            {
              v68 = *(_QWORD *)(v67 + 8 * (((v5 + 120) >> 3) & 0x1FF));
              if ( (v68 & 0x20) != 0 )
                v66 |= 0x20uLL;
              if ( (v68 & 0x42) != 0 )
                v66 |= 0x42uLL;
            }
          }
          v69 = 48 * ((v66 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v70 = *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) & 0x10000000;
          if ( v70
            && ((v71 = (v63 & 0x42) == 0, v19 = *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
                                          !v71)
             || (*(_BYTE *)(v69 + 34) & 0x10) != 0)
            || (v72 = *(_QWORD *)(v69 + 16),
                v71 = (*(_QWORD *)(v69 + 40) & 0x200000000000000LL) == 0,
                v19 = *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
                *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = v72,
                v71)
            || (v72 & 0x400) == 0 && (*(_DWORD *)(v39 + 56) & 0x80u) != 0
            || *(_DWORD *)(v58 + 44) == 3
            && ((v19 = *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10), !*(_QWORD *)v69)
             || (*(_BYTE *)(v69 + 35) & 8) != 0) )
          {
            v18 = *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
          }
          else
          {
            v73 = *(_QWORD *)(v9 + 184);
            Wsle = MiLocateWsle(v17, v9, *(_QWORD *)v69);
            if ( Wsle < *(_QWORD *)(v73 + 8)
              || (*(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) & 0x1000000) != 0 )
            {
              v9 = *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
              if ( v70
                || !*(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40)
                || (signed __int32 *)v9 == dword_14034FD40
                || (locked = MiReplaceLockedPage(
                               *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
                               v69,
                               v17,
                               *(unsigned int *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44)),
                    v19 = *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
                    v18 = *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
                    v12 = *(_KPROCESS **)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30),
                    !locked) )
              {
                v19 = *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
                v18 = *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
                v12 = *(_KPROCESS **)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
                *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 277;
              }
            }
            else
            {
              if ( dword_14034F248
                && (*(_BYTE *)v62 & 0x20) != 0
                && (*(_DWORD *)(Wsle * *(unsigned int *)(v73 + 64) + *(_QWORD *)(v73 + 496)) & 0xE00LL) != 0xE00 )
              {
                MiLogPageAccess(
                  *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
                  ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                  v75);
              }
              v19 = *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
              v18 = *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
              v12 = *(_KPROCESS **)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
              *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL)
                        + 0xC8
                        + 8LL * *(unsigned int *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0)) = Wsle;
              v9 = *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
              v76 = *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) + 1;
              *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = v76;
              if ( v76 == 19 )
              {
                v77 = MiFreeWsleList(v9, (unsigned int *)(v5 + 192), 0);
                v78 = *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
                v19 = *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
                if ( v77 )
                  v78 = 277;
                *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = 0;
                *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v78;
              }
            }
          }
        }
        else
        {
          v19 = *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        }
      }
    }
    if ( *(_DWORD *)(v7 + 44) < 2u )
      goto LABEL_6;
    v21 = *(unsigned int *)(v7 + 40);
    if ( (_DWORD)v21 == -1 )
    {
      v6 = &unk_14034EA70;
    }
    else
    {
      if ( (_DWORD)v21 == -2 )
        goto LABEL_16;
      SessionById = MmGetSessionById(v21, 2LL);
      *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = SessionById;
      v23 = SessionById;
      if ( !SessionById )
        goto LABEL_19;
      if ( (int)MmAttachSession(SessionById) < 0 )
      {
        MmQuitNextSession(v23);
        *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = 0LL;
        goto LABEL_19;
      }
      v11 = *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
      a3 = *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      v6 = (void *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 2880);
    }
    *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v6;
LABEL_16:
    if ( *(_DWORD *)(v11 + 44) == 3 )
    {
      v24 = v13 + 0x70000000000LL;
      if ( *(_DWORD *)(v11 + 40) == -2 )
      {
        if ( v24 <= 0x7FFFFFFFFFLL )
          goto LABEL_19;
      }
      else if ( v24 > 0x7FFFFFFFFFLL )
      {
        goto LABEL_19;
      }
      goto LABEL_6;
    }
    if ( (a3 & 0x140000) != 0 )
      goto LABEL_19;
    --CurrentThread->SpecialApcDisable;
    v25 = (unsigned __int64 *)*((_QWORD *)v6 + 1);
    v26 = KeAbPreAcquire((ULONG_PTR)v25, 0LL, 0LL, -1LL);
    v28 = v26;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v25, 0LL) )
      ExfAcquirePushLockExclusiveEx(v25, v26, (ULONG_PTR)v25, v27);
    if ( v28 )
      *(_BYTE *)(v28 + 26) |= 1u;
    v29 = (_QWORD *)*((_QWORD *)v6 + 2);
    if ( v29 )
    {
      do
      {
        v30 = MiSystemViewCompareVa(v13, (__int64)v29);
        if ( v30 >= 0 )
        {
          if ( v30 <= 0 )
            break;
          v29 = (_QWORD *)v29[1];
        }
        else
        {
          v29 = (_QWORD *)*v29;
        }
      }
      while ( v29 );
      if ( v29
        && *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) == (v29[6] & 0xFFFFFFFFFFFFFFF8uLL)
        && v13 + (v29[3] << 12) - v14 == (v29[10] & 0xFFFFFFFFFFFFF000uLL) )
      {
        v12 = *(_KPROCESS **)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
        *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = 1;
        goto LABEL_6;
      }
    }
    v31 = (volatile signed __int64 *)*((_QWORD *)v6 + 1);
    if ( (_InterlockedExchangeAdd64(v31, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v31);
    KeAbPostRelease((ULONG_PTR)v31);
    v32 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v32;
    if ( !v32
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    v8 = *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
LABEL_19:
    v12 = *(_KPROCESS **)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    if ( *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 8) == 1 )
    {
LABEL_168:
      if ( *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) )
      {
        v80 = MiFreeWsleList(v9, (unsigned int *)(v5 + 192), 0);
        *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = 0;
        if ( v80 )
          v8 = 277;
        *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v8;
      }
      if ( v12 )
      {
        MiUnlockWorkingSetExclusive(v9, *(_BYTE *)v5);
      }
      else if ( v9 )
      {
        MiUnlockWorkingSetExclusive(v9, *(_BYTE *)v5);
        v9 = 0LL;
      }
      *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
    }
    if ( *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) == 1 )
    {
      v81 = *(volatile signed __int64 **)(*(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) + 8LL);
      if ( (_InterlockedExchangeAdd64(v81, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v81);
      KeAbPostRelease((ULONG_PTR)v81);
      CurrentThread = *(struct _KTHREAD **)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88);
      v6 = 0LL;
      v82 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v82;
      if ( !v82
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    else
    {
      CurrentThread = *(struct _KTHREAD **)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88);
      v6 = 0LL;
    }
    v83 = *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68);
    if ( v83 )
    {
      MmDetachSession(*(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68), v5 + 352);
      MmQuitNextSession(v83);
    }
    else if ( *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) == 1 )
    {
      KiUnstackDetachProcess((struct _KTHREAD *)(v5 + 352), 1);
      MiAttachThreadDone(&v12[1].IdealNode[8]);
    }
    if ( v12 )
      ObfDereferenceObjectWithTag(v12, 0x746C6644u);
    ExFreePoolWithTag(*(PVOID *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50), 0);
    if ( *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) == 1
      && (**(_BYTE **)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) & 1) == 0 )
    {
      break;
    }
    v7 = *(_QWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
    v8 = *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
    if ( !v7 )
      return v8;
    a3 = *(_DWORD *)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
  }
  v84 = *(_QWORD **)(((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
  while ( v84 )
  {
    v85 = v84;
    v84 = (_QWORD *)*v84;
    v86 = (void *)v85[1];
    if ( v86 )
      ObfDereferenceObjectWithTag(v86, 0x746C6644u);
    ExFreePoolWithTag(v85, 0);
  }
  return 0LL;
}
