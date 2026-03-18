/*
 * XREFs of KeRequestTerminationThread @ 0x14000C2F4
 * Callers:
 *     MiCommitRequestFailed @ 0x140220B88 (MiCommitRequestFailed.c)
 *     PspTerminateThreadByPointer @ 0x1404205B0 (PspTerminateThreadByPointer.c)
 * Callees:
 *     KeAlertThread @ 0x14000C1F0 (KeAlertThread.c)
 *     KiSignalThreadForApc @ 0x14000D028 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x14000D1B4 (KiInsertQueueApc.c)
 *     KeForceResumeThread @ 0x14000E584 (KeForceResumeThread.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KeRequestTerminationThread(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // rax
  char v4; // bp
  char CurrentIrql; // r14
  unsigned int v6; // edi
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v8; // r8
  char v9[8]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v10; // [rsp+38h] [rbp-90h]
  __int64 v11; // [rsp+40h] [rbp-88h]

  result = *(_QWORD *)(a1 + 544);
  v2 = a1;
  if ( *(_QWORD *)(result + 720) )
  {
    v3 = *(unsigned int *)(a1 + 796);
    v11 = a1;
    LOBYTE(a1) = 1;
    v10 = v3;
    result = HvlpEnterIumSecureMode(a1, 8LL, 0LL, v9);
  }
  if ( !_interlockedbittestandset((volatile signed __int32 *)(v2 + 120), 0xEu) )
  {
    v4 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 64), 0LL) )
    {
      do
      {
        if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v6);
      }
      while ( *(_QWORD *)(v2 + 64) );
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (*(_DWORD *)(v2 + 116) & 0x4000) != 0 )
    {
      v4 = 1;
      if ( !*(_BYTE *)(v2 + 730) )
      {
        *(_BYTE *)(v2 + 730) = 1;
        KiInsertQueueApc(v2 + 648);
        LOBYTE(v8) = CurrentIrql;
        KiSignalThreadForApc(CurrentPrcb, v2 + 648, v8);
      }
    }
    *(_QWORD *)(v2 + 64) = 0LL;
    result = KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
    if ( v4 )
    {
      KeAlertThread(v2, 0);
      return KeForceResumeThread(v2);
    }
  }
  return result;
}
