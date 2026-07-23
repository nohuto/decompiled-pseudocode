/*
 * XREFs of KeWaitForAlertByThreadId @ 0x1400CE2E8
 * Callers:
 *     PsDispatchIumService @ 0x14020FA50 (PsDispatchIumService.c)
 *     NtWaitForAlertByThreadId @ 0x1404EF7BC (NtWaitForAlertByThreadId.c)
 * Callees:
 *     KiCommitThreadWait @ 0x14005A850 (KiCommitThreadWait.c)
 *     KiBeginThreadWait @ 0x1400CE820 (KiBeginThreadWait.c)
 *     KiCheckDueTimeExpired @ 0x1400CE988 (KiCheckDueTimeExpired.c)
 *     KiCheckWaitNext @ 0x1400CE9E0 (KiCheckWaitNext.c)
 *     KiFastExitThreadWait @ 0x1400F0678 (KiFastExitThreadWait.c)
 */

__int64 __fastcall KeWaitForAlertByThreadId(char a1, _QWORD *a2, void *a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // rdx
  char v7; // si
  __int64 result; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r8
  unsigned __int8 CurrentIrql; // al
  unsigned int v15; // ebx
  __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v17; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 3u) )
    return 257LL;
  if ( !a2 || *a2 )
  {
    v7 = KiCheckWaitNext((_DWORD)CurrentThread, (_DWORD)a2, 0, (unsigned int)&v16, (__int64)&v17);
    while ( 1 )
    {
      LOBYTE(v6) = a1;
      result = KiBeginThreadWait(CurrentThread, v6, 37LL);
      if ( (_DWORD)result )
        return result;
      if ( _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 3u) )
        break;
      if ( (unsigned int)KiCheckDueTimeExpired(CurrentThread, v17, v16) )
      {
        v15 = 258;
        goto LABEL_13;
      }
      v12 = v9;
      CurrentThread->WaitBlock[0].Object = a3;
      v13 = v17;
      CurrentThread->WaitBlockFill4[17] = 5;
      CurrentThread->WaitBlockCount = 1;
      result = KiCommitThreadWait(v11, (__int64 *)&CurrentThread->320, v13, v12);
      CurrentThread->WaitReason = 0;
      if ( (_DWORD)result != 256 )
        return result;
      v7 = 0;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentThread->WaitIrql = CurrentIrql;
    }
    v15 = 257;
LABEL_13:
    CurrentThread->WaitReason = 0;
    LOBYTE(v9) = v7;
    KiFastExitThreadWait(KeGetCurrentPrcb(), CurrentThread, v9, v10);
    return v15;
  }
  return 258LL;
}
