/*
 * XREFs of MmAssignProcessToJob @ 0x1400B934C
 * Callers:
 *     PspAssignProcessToJob @ 0x1404F2C60 (PspAssignProcessToJob.c)
 *     PspImplicitAssignProcessToJob @ 0x1404F3670 (PspImplicitAssignProcessToJob.c)
 * Callees:
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140029D40 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14002BF50 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     KiStackAttachProcess @ 0x1400CD1F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CE820 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     MiUnlockVadRange @ 0x1404F37E8 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1404F38DC (MiLockVadRange.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x140507750 (PspChangeJobMemoryUsageByProcess.c)
 */

__int64 __fastcall MmAssignProcessToJob(ULONG_PTR a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r14
  int v3; // esi
  __int64 v6; // rbp
  __int64 v7; // rdx
  unsigned __int8 v8; // di
  _BYTE v10[48]; // [rsp+20h] [rbp-58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  if ( CurrentThread->ApcState.Process != (_KPROCESS *)a1 )
  {
    v3 = 1;
    KiStackAttachProcess(a1);
  }
  v6 = MiLockVadRange(a1, -1LL, -1LL);
  if ( v6 || (*(_DWORD *)(a1 + 1740) & 1) != 0 )
  {
    LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a1);
    v7 = *(_QWORD *)(a1 + 1264);
    *(_QWORD *)(a1 + 904) = *(_QWORD *)(a1 + 944);
    v8 = PspChangeJobMemoryUsageByProcess(20LL, v7, KeGetCurrentThread()->ApcState.Process, a2);
    _InterlockedOr((volatile signed __int32 *)(a1 + 768), 0x10u);
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a1);
  }
  else
  {
    v8 = 0;
  }
  MiUnlockVadRange(a1, -1LL, v6);
  if ( v3 )
    KiUnstackDetachProcess(v10, 0LL);
  return v8;
}
