/*
 * XREFs of KeRequestTerminationThread @ 0x140030C48
 * Callers:
 *     MiCommitRequestFailed @ 0x1401DBED8 (MiCommitRequestFailed.c)
 *     PspTerminateThreadByPointer @ 0x1403F2F24 (PspTerminateThreadByPointer.c)
 * Callees:
 *     KeForceResumeThread @ 0x140028C4C (KeForceResumeThread.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x14002B0C0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KeAlertThread @ 0x140030D64 (KeAlertThread.c)
 *     KiSignalThreadForApc @ 0x140031480 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x140031620 (KiInsertQueueApc.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall KeRequestTerminationThread(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // rax
  char v4; // si
  struct _KPRCB *CurrentPrcb; // rbp
  char v6; // r14
  __int64 v7; // r8
  char v8[16]; // [rsp+30h] [rbp-A8h] BYREF
  char v9[8]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v10; // [rsp+48h] [rbp-90h]
  __int64 v11; // [rsp+50h] [rbp-88h]

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
    KiAcquireThreadLockRaiseToDpc(v2, v8);
    CurrentPrcb = KeGetCurrentPrcb();
    v6 = v8[0];
    if ( (*(_DWORD *)(v2 + 116) & 0x4000) != 0 )
    {
      v4 = 1;
      if ( !*(_BYTE *)(v2 + 730) )
      {
        *(_BYTE *)(v2 + 730) = 1;
        KiInsertQueueApc(v2 + 648);
        LOBYTE(v7) = v6;
        KiSignalThreadForApc(CurrentPrcb, v2 + 648, v7);
      }
    }
    *(_QWORD *)(v2 + 64) = 0LL;
    result = KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, v6);
    if ( v4 )
    {
      KeAlertThread(v2, 0LL);
      return KeForceResumeThread(v2);
    }
  }
  return result;
}
