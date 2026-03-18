/*
 * XREFs of KiWaitForAllObjects @ 0x14011ECE8
 * Callers:
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 * Callees:
 *     KiCheckForThreadDispatch @ 0x14000DCB4 (KiCheckForThreadDispatch.c)
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 *     KiCommitThreadWait @ 0x1400A0220 (KiCommitThreadWait.c)
 *     KiExitThreadWait @ 0x1400A23E0 (KiExitThreadWait.c)
 *     KiUnlockKobjectArray @ 0x14011F3F0 (KiUnlockKobjectArray.c)
 *     KiLockKobjectArray @ 0x14011F424 (KiLockKobjectArray.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiWaitForAllObjects(unsigned int a1, _QWORD *a2, int a3, char a4, char a5, __int64 a6, __int64 a7)
{
  __int64 *v7; // rax
  unsigned int v9; // r9d
  unsigned __int64 *v10; // r11
  unsigned __int64 *v11; // rbx
  unsigned __int64 v12; // r10
  unsigned int v13; // r8d
  __int64 v14; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // al
  unsigned __int64 v17; // r14
  unsigned int v18; // r12d
  unsigned __int8 WaitIrql; // si
  char v20; // r15
  unsigned int v21; // edi
  __int64 v22; // r15
  unsigned __int8 v23; // al
  __int64 *WaitStatus; // rsi
  struct _KPRCB *CurrentPrcb; // r13
  __int64 *v26; // rdx
  char *v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  unsigned int v30; // edi
  __int64 **v31; // r8
  __int64 *v32; // rcx
  volatile unsigned __int8 DpcRoutineActive; // al
  struct _KTHREAD *v34; // rdx
  unsigned __int64 v35; // rcx
  unsigned int v36; // edx
  __int64 *v37; // rax
  __int64 v38; // rcx
  unsigned __int8 v39; // al
  int v40; // edi
  int v42; // r11d
  unsigned int v43; // edi
  unsigned __int64 v44; // r10
  int v45; // r11d
  unsigned int v46; // edi
  unsigned int i; // r14d
  __int64 *v48; // rdi
  char v49; // cl
  unsigned int v51; // esi
  volatile unsigned __int8 v52; // cl
  struct _LIST_ENTRY *v53; // rdi
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v55; // r10
  int v56; // r11d
  unsigned int v57; // edi
  signed __int32 v58[8]; // [rsp+0h] [rbp-100h] BYREF
  char v59; // [rsp+20h] [rbp-E0h]
  char v60; // [rsp+21h] [rbp-DFh]
  __int64 **v61; // [rsp+28h] [rbp-D8h]
  int v62; // [rsp+30h] [rbp-D0h]
  __int64 v63; // [rsp+38h] [rbp-C8h]
  unsigned int v64; // [rsp+40h] [rbp-C0h]
  int v65; // [rsp+48h] [rbp-B8h]
  _QWORD v66[64]; // [rsp+60h] [rbp-A0h] BYREF

  v7 = (__int64 *)*a2;
  v62 = a3;
  v60 = a4;
  v9 = 1;
  v63 = a7;
  v61 = (__int64 **)a2;
  v64 = a1;
  v66[0] = v7;
  if ( a1 > 1 )
  {
    v10 = a2 + 1;
    v11 = v66;
    do
    {
      v12 = *v10;
      v13 = v9;
      if ( *v11 > *v10 )
      {
        do
        {
          v14 = v13--;
          v66[v14] = v66[v13];
        }
        while ( v13 && v66[v13 - 1] > v12 );
      }
      ++v9;
      ++v11;
      ++v10;
      v66[v13] = v12;
    }
    while ( v9 < a1 );
  }
  CurrentThread = KeGetCurrentThread();
  v59 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  if ( !v59 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  if ( a6 )
  {
    if ( *(int *)(a6 + 4) >= 0 )
    {
      v17 = *(_QWORD *)a6;
      v18 = 1;
    }
    else
    {
      v18 = 2;
      v17 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] - (*(_QWORD *)a6 + CurrentThread->RelativeTimerBias);
    }
  }
  else
  {
    v17 = v63;
    v18 = 0;
  }
  while ( 2 )
  {
    WaitIrql = CurrentThread->WaitIrql;
    v20 = v60;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = v20;
      if ( a5 )
        CurrentThread->MiscFlags |= 0x10u;
      v21 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v21 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v21);
        }
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || WaitIrql )
        break;
      CurrentThread->ThreadLock = 0LL;
      __writecr8(1uLL);
      KiDeliverApc(0, 0, 0LL);
      __writecr8(2uLL);
      CurrentThread->WaitIrql = 0;
    }
    v22 = v64;
    if ( a5 )
    {
      if ( CurrentThread->Alerted[v60] )
      {
        CurrentThread->Alerted[v60] = 0;
        goto LABEL_68;
      }
      if ( !v60 || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink == &CurrentThread->ApcStateFill[16] )
      {
        if ( CurrentThread->Alerted[0] )
        {
          CurrentThread->Alerted[0] = 0;
LABEL_68:
          v40 = 257;
          goto LABEL_65;
        }
        goto LABEL_36;
      }
      CurrentThread->ApcState.UserApcPending = 1;
LABEL_64:
      v40 = 192;
LABEL_65:
      CurrentThread->ThreadLock = 0LL;
      KiCheckForThreadDispatch((__int64)KeGetCurrentPrcb(), WaitIrql);
      LODWORD(WaitStatus) = v40;
      return (unsigned int)WaitStatus;
    }
    if ( (CurrentThread->ApcState.UserApcPending & (unsigned __int8)v60) != 0 )
      goto LABEL_64;
LABEL_36:
    v23 = v62;
    WaitStatus = (__int64 *)v63;
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = v23;
    CurrentThread->ThreadLock = 0LL;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (_DWORD)v22 )
    {
      v26 = (__int64 *)v61;
      v27 = (char *)WaitStatus + 17;
      v28 = v22;
      do
      {
        v29 = *v26++;
        *(v27 - 1) = 0;
        *v27 = 4;
        *(_WORD *)(v27 + 1) = 0;
        *(_QWORD *)(v27 + 7) = CurrentThread;
        *(_QWORD *)(v27 + 15) = v29;
        v27 += 48;
        --v28;
      }
      while ( v28 );
    }
    CurrentThread->WaitStatus = 0LL;
    v30 = 0;
    KiLockKobjectArray(v66, (unsigned int)v22);
    v31 = v61;
    do
    {
      v32 = v61[v30];
      if ( (*(_BYTE *)v32 & 0x7F) != 2 )
      {
        if ( *((int *)v32 + 1) <= 0 )
          break;
        goto LABEL_49;
      }
      DpcRoutineActive = CurrentPrcb->DpcRoutineActive;
      v34 = (struct _KTHREAD *)v32[5];
      if ( CurrentThread == v34 && *((_BYTE *)v32 + 2) == DpcRoutineActive && *((_DWORD *)v32 + 1) == 0x80000000 )
      {
        KiUnlockKobjectArray(v66, (unsigned int)v22, v61, 2LL);
        CurrentThread->WaitBlockFill6[68] = 2;
        _InterlockedOr(v58, 0);
        if ( CurrentThread->ThreadLock )
        {
          v43 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            do
            {
              v43 += v42;
              if ( (v43 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              {
                _mm_pause();
              }
              else
              {
                HvlNotifyLongSpinWait(v43);
                v42 = 1;
              }
            }
            while ( CurrentThread->ThreadLock );
          }
          CurrentThread->ThreadLock = 0LL;
        }
        KiExitThreadWait((__int64)CurrentPrcb, (__int64)CurrentThread, v59);
        RtlRaiseStatus(-1073741423);
      }
      if ( *((int *)v32 + 1) <= 0 && (CurrentThread != v34 || *((_BYTE *)v32 + 2) != DpcRoutineActive) )
        break;
LABEL_49:
      ++v30;
    }
    while ( v30 < (unsigned int)v22 );
    if ( v30 == (_DWORD)v22 )
    {
      for ( i = 0; i < (unsigned int)v22; v61 = v31 )
      {
        v48 = *v31;
        if ( (*(_BYTE *)*v31 & 7) == 1 )
        {
          *((_DWORD *)v48 + 1) = 0;
        }
        else
        {
          v49 = *(_BYTE *)*v31 & 0x7F;
          if ( v49 == 5 )
          {
            --*((_DWORD *)v48 + 1);
          }
          else if ( v49 == 2 && (*((_DWORD *)v48 + 1))-- == 1 )
          {
            v51 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
            {
              do
              {
                if ( (++v51 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v51);
              }
              while ( CurrentThread->ThreadLock );
            }
            CurrentThread->KernelApcDisable -= *((unsigned __int8 *)v48 + 49);
            if ( CurrentPrcb->CurrentThread == CurrentThread )
              v52 = CurrentPrcb->DpcRoutineActive;
            else
              v52 = 0;
            v65 = *(_DWORD *)v48;
            BYTE2(v65) = v52;
            *(_DWORD *)v48 = v65;
            v48[5] = (__int64)CurrentThread;
            if ( *((_BYTE *)v48 + 48) )
            {
              *((_BYTE *)v48 + 48) = 0;
              CurrentThread->WaitStatus |= 0x80uLL;
            }
            v53 = (struct _LIST_ENTRY *)(v48 + 3);
            Blink = CurrentThread->MutantListHead.Blink;
            v53->Flink = &CurrentThread->MutantListHead;
            v53->Blink = Blink;
            if ( Blink->Flink != &CurrentThread->MutantListHead )
              __fastfail(3u);
            v31 = v61;
            Blink->Flink = v53;
            CurrentThread->MutantListHead.Blink = v53;
            CurrentThread->ThreadLock = 0LL;
          }
        }
        ++v31;
        ++i;
      }
      KiUnlockKobjectArray(v66, (unsigned int)v22, v31, 2LL);
      WaitStatus = (__int64 *)CurrentThread->WaitStatus;
      CurrentThread->WaitBlockFill6[68] = 2;
      _InterlockedOr(v58, v55);
      if ( CurrentThread->ThreadLock )
      {
        v57 = v55;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            v57 += v56;
            if ( (v57 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            {
              _mm_pause();
            }
            else
            {
              HvlNotifyLongSpinWait(v57);
              v55 = 0LL;
              v56 = 1;
            }
          }
          while ( CurrentThread->ThreadLock );
        }
        CurrentThread->ThreadLock = v55;
      }
      KiExitThreadWait((__int64)CurrentPrcb, (__int64)CurrentThread, v59);
    }
    else
    {
      if ( v18 == 2 )
      {
        v35 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
        goto LABEL_56;
      }
      if ( !v18 )
        goto LABEL_57;
      if ( !v17 )
        goto LABEL_78;
      v35 = MEMORY[0xFFFFF78000000014];
LABEL_56:
      if ( v35 > v17 )
      {
LABEL_78:
        KiUnlockKobjectArray(v66, (unsigned int)v22, v61, 2LL);
        CurrentThread->WaitBlockFill6[68] = 2;
        _InterlockedOr(v58, v44);
        if ( CurrentThread->ThreadLock )
        {
          v46 = v44;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            do
            {
              v46 += v45;
              if ( (v46 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              {
                _mm_pause();
              }
              else
              {
                HvlNotifyLongSpinWait(v46);
                v44 = 0LL;
                v45 = 1;
              }
            }
            while ( CurrentThread->ThreadLock );
          }
          CurrentThread->ThreadLock = v44;
        }
        KiExitThreadWait((__int64)CurrentPrcb, (__int64)CurrentThread, v59);
        LODWORD(WaitStatus) = 258;
      }
      else
      {
LABEL_57:
        v36 = 0;
        if ( (_DWORD)v22 )
        {
          v37 = WaitStatus;
          do
          {
            v38 = v37[4] + 8;
            v31 = *(__int64 ***)(v37[4] + 16);
            *v37 = v38;
            v37[1] = (__int64)v31;
            if ( *v31 != (__int64 *)v38 )
              __fastfail(3u);
            *v31 = v37;
            ++v36;
            *(_QWORD *)(v38 + 8) = v37;
            v37 += 6;
          }
          while ( v36 < (unsigned int)v22 );
        }
        KiUnlockKobjectArray(v66, (unsigned int)v22, v31, 2LL);
        CurrentThread->WaitBlockCount = v22;
        LODWORD(WaitStatus) = KiCommitThreadWait((__int64)CurrentThread, WaitStatus, v18, v17);
        if ( (_DWORD)WaitStatus == 256 )
        {
          v59 = 0;
          v39 = KeGetCurrentIrql();
          __writecr8(2uLL);
          CurrentThread->WaitIrql = v39;
          continue;
        }
      }
    }
    return (unsigned int)WaitStatus;
  }
}
