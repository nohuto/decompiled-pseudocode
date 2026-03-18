/*
 * XREFs of KeWaitForAlertByThreadId @ 0x14010BF10
 * Callers:
 *     PsDispatchIumService @ 0x140244710 (PsDispatchIumService.c)
 *     NtWaitForAlertByThreadId @ 0x140524314 (NtWaitForAlertByThreadId.c)
 * Callees:
 *     KiCheckForThreadDispatch @ 0x14000DCB4 (KiCheckForThreadDispatch.c)
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 *     KiCommitThreadWait @ 0x1400A0220 (KiCommitThreadWait.c)
 *     KiExitThreadWait @ 0x1400A23E0 (KiExitThreadWait.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KeWaitForAlertByThreadId(char a1, __int64 a2, void *a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int64 v7; // rbp
  unsigned int v8; // r15d
  unsigned __int8 WaitIrql; // si
  unsigned int v10; // ebx
  unsigned __int64 v11; // rcx
  unsigned __int8 v12; // al
  unsigned int v13; // esi
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v15; // ebx
  signed __int32 v16[8]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+78h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  if ( _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 3u) )
    return 257LL;
  if ( a2 && !*(_QWORD *)a2 )
    return 258LL;
  LOBYTE(v18) = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  if ( !(_BYTE)v18 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  if ( a2 )
  {
    if ( *(int *)(a2 + 4) >= 0 )
    {
      v7 = *(_QWORD *)a2;
      v8 = 1;
    }
    else
    {
      v8 = 2;
      v7 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] - (*(_QWORD *)a2 + CurrentThread->RelativeTimerBias);
    }
  }
  else
  {
    v7 = v18;
    v8 = 0;
  }
  while ( 1 )
  {
    WaitIrql = CurrentThread->WaitIrql;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      v10 = 0;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = a1;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v10);
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
    if ( ((unsigned __int8)a1 & CurrentThread->ApcState.UserApcPending) != 0 )
    {
      CurrentThread->ThreadLock = 0LL;
      KiCheckForThreadDispatch((__int64)KeGetCurrentPrcb(), WaitIrql);
      return 192LL;
    }
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = 37;
    CurrentThread->ThreadLock = 0LL;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    if ( _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 3u) )
      break;
    if ( v8 == 2 )
    {
      v11 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
    }
    else
    {
      if ( !v8 )
        goto LABEL_34;
      if ( !v7 )
        goto LABEL_36;
      v11 = MEMORY[0xFFFFF78000000014];
    }
    if ( v11 > v7 )
    {
LABEL_36:
      v13 = 258;
      goto LABEL_38;
    }
LABEL_34:
    CurrentThread->WaitBlock[0].Object = a3;
    CurrentThread->WaitBlockFill4[17] = 5;
    CurrentThread->WaitBlockCount = 1;
    result = KiCommitThreadWait((__int64)CurrentThread, (__int64 *)&CurrentThread->320, v8, v7);
    CurrentThread->WaitReason = 0;
    if ( (_DWORD)result != 256 )
      return result;
    LOBYTE(v18) = 0;
    v12 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = v12;
  }
  v13 = 257;
LABEL_38:
  CurrentThread->WaitReason = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread->WaitBlockFill6[68] = 2;
  _InterlockedOr(v16, 0);
  if ( CurrentThread->ThreadLock )
  {
    v15 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
      {
        if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v15);
      }
      while ( CurrentThread->ThreadLock );
    }
    CurrentThread->ThreadLock = 0LL;
  }
  KiExitThreadWait((__int64)CurrentPrcb, (__int64)CurrentThread, v18);
  return v13;
}
