/*
 * XREFs of MmAssignProcessToJob @ 0x14041AD30
 * Callers:
 *     PspAssignProcessToJob @ 0x14041A524 (PspAssignProcessToJob.c)
 *     PspImplicitAssignProcessToJob @ 0x14041AAC8 (PspImplicitAssignProcessToJob.c)
 * Callees:
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14008B5D0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14008B640 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x14041AEA0 (PspChangeJobMemoryUsageByProcess.c)
 *     MiUnlockVadRange @ 0x1404B1B2C (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1404B1C28 (MiLockVadRange.c)
 */

__int64 __fastcall MmAssignProcessToJob(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r14
  int v3; // esi
  __int64 v6; // rbp
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  unsigned __int8 v10; // di
  _BYTE v12[48]; // [rsp+20h] [rbp-58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  if ( CurrentThread->ApcState.Process != (_KPROCESS *)a1 )
  {
    v3 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v12);
  }
  v6 = MiLockVadRange(a1, -1LL, -1LL);
  if ( v6 || (*(_DWORD *)(a1 + 1716) & 1) != 0 )
  {
    LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a1, v7, v8);
    v9 = *(_QWORD *)(a1 + 1256);
    *(_QWORD *)(a1 + 904) = *(_QWORD *)(a1 + 944);
    v10 = PspChangeJobMemoryUsageByProcess(20LL, v9, KeGetCurrentThread()->ApcState.Process, a2);
    _InterlockedOr((volatile signed __int32 *)(a1 + 768), 0x10u);
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a1);
  }
  else
  {
    v10 = 0;
  }
  MiUnlockVadRange(a1, -1LL, v6);
  if ( v3 )
    KiUnstackDetachProcess((struct _KTHREAD *)v12, 0);
  return v10;
}
