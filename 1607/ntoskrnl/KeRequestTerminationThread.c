/*
 * XREFs of KeRequestTerminationThread @ 0x1400C7C80
 * Callers:
 *     MiCommitRequestFailed @ 0x1401ECC18 (MiCommitRequestFailed.c)
 *     PspTerminateThreadByPointer @ 0x1404EC9C0 (PspTerminateThreadByPointer.c)
 * Callees:
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     KeAlertThread @ 0x1400C7B94 (KeAlertThread.c)
 *     KiSignalThreadForApc @ 0x1400C7FD4 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1400C8154 (KiInsertQueueApc.c)
 *     KeForceResumeThread @ 0x1400C9214 (KeForceResumeThread.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1400CCC8C (KiAcquireThreadLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall KeRequestTerminationThread(__int64 a1)
{
  char v2; // si
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int8 v4; // r14
  __int64 v5; // r8
  __int64 v6; // rax
  unsigned __int8 v7[16]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v8[8]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v9; // [rsp+48h] [rbp-90h]
  __int64 v10; // [rsp+50h] [rbp-88h]

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 544) + 720LL) )
  {
    v6 = *(unsigned int *)(a1 + 796);
    v10 = a1;
    v9 = v6;
    VslpEnterIumSecureMode(1, 8LL, 0LL, (__int64)v8);
  }
  if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xEu) )
  {
    v2 = 0;
    KiAcquireThreadLockRaiseToDpc(a1, v7);
    CurrentPrcb = KeGetCurrentPrcb();
    v4 = v7[0];
    if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
    {
      v2 = 1;
      if ( !*(_BYTE *)(a1 + 730) )
      {
        *(_BYTE *)(a1 + 730) = 1;
        KiInsertQueueApc(a1 + 648);
        LOBYTE(v5) = v4;
        KiSignalThreadForApc(CurrentPrcb, a1 + 648, v5);
      }
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, v4);
    if ( v2 )
    {
      KeAlertThread(a1, 0);
      KeForceResumeThread(a1);
    }
  }
}
