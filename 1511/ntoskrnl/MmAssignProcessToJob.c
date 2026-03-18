/*
 * XREFs of MmAssignProcessToJob @ 0x1403E8528
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x1403E8B34 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x140486CD0 (PspAssignProcessToJob.c)
 * Callees:
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400610B0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x140061118 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MiUnlockVadRange @ 0x1403E8634 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1403E8728 (MiLockVadRange.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x140417EB0 (PspChangeJobMemoryUsageByProcess.c)
 */

__int64 __fastcall MmAssignProcessToJob(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r14
  int v3; // esi
  __int64 v6; // rbp
  __int64 v7; // rdx
  unsigned __int8 v8; // di
  $D4FCF91253F76F57393CBFE908971F67 v10; // [rsp+20h] [rbp-58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  if ( CurrentThread->ApcState.Process != (_KPROCESS *)a1 )
  {
    v3 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)&v10);
  }
  v6 = MiLockVadRange(a1, -1LL, -1LL);
  if ( v6 || (*(_DWORD *)(a1 + 1724) & 1) != 0 )
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
    KiUnstackDetachProcess(&v10, 0LL);
  return v8;
}
