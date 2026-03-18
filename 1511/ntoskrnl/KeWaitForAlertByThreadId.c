/*
 * XREFs of KeWaitForAlertByThreadId @ 0x1400297D0
 * Callers:
 *     PsDispatchIumService @ 0x1401F5B10 (PsDispatchIumService.c)
 *     NtWaitForAlertByThreadId @ 0x1403EFB00 (NtWaitForAlertByThreadId.c)
 * Callees:
 *     KiBeginThreadWait @ 0x140029950 (KiBeginThreadWait.c)
 *     KiCheckDueTimeExpired @ 0x14002A094 (KiCheckDueTimeExpired.c)
 *     KiCheckWaitNext @ 0x14002A0E0 (KiCheckWaitNext.c)
 *     KiFastExitThreadWait @ 0x14002ABE8 (KiFastExitThreadWait.c)
 *     KiCommitThreadWait @ 0x140081ED0 (KiCommitThreadWait.c)
 */

__int64 __fastcall KeWaitForAlertByThreadId(unsigned __int8 a1, _QWORD *a2, void *a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 v6; // r12
  __int64 result; // rax
  __int64 v8; // rdi
  unsigned int v9; // esi
  unsigned __int8 CurrentIrql; // al
  unsigned int v11; // edi
  __int64 v12; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 3u) )
    return 257LL;
  if ( !a2 || *a2 )
  {
    v6 = KiCheckWaitNext((_DWORD)CurrentThread, (_DWORD)a2, 0, (unsigned int)&v12, (__int64)&v13);
    while ( 1 )
    {
      result = KiBeginThreadWait(CurrentThread, a1, 37LL);
      if ( (_DWORD)result )
        return result;
      if ( _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 3u) )
        break;
      v8 = v12;
      v9 = v13;
      if ( (unsigned int)KiCheckDueTimeExpired(CurrentThread, v13, v12) )
      {
        v11 = 258;
        goto LABEL_13;
      }
      CurrentThread->WaitBlock[0].Object = a3;
      CurrentThread->WaitBlockFill4[17] = 5;
      CurrentThread->WaitBlockCount = 1;
      result = KiCommitThreadWait(CurrentThread, &CurrentThread->320, v9, v8);
      CurrentThread->WaitReason = 0;
      if ( (_DWORD)result != 256 )
        return result;
      v6 = 0;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentThread->WaitIrql = CurrentIrql;
    }
    v11 = 257;
LABEL_13:
    CurrentThread->WaitReason = 0;
    KiFastExitThreadWait(KeGetCurrentPrcb(), CurrentThread, v6);
    return v11;
  }
  return 258LL;
}
