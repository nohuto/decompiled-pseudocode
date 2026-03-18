/*
 * XREFs of MmDeleteShadowMapping @ 0x1406A84B8
 * Callers:
 *     KiShadowProcessorAllocation @ 0x140402AA0 (KiShadowProcessorAllocation.c)
 *     KiUnshadowProcessorAllocation @ 0x140402B8C (KiUnshadowProcessorAllocation.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE @ 0x140089E40 (UNLOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE @ 0x14008A330 (LOCK_ADDRESS_SPACE.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1401088BC (MiInitializeTbFlushList.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1402255D8 (MiReadWriteAnyLevelShadowPte.c)
 */

__int64 __fastcall MmDeleteShadowMapping(unsigned __int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _KPROCESS *Process; // r14
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r11
  __int64 v7; // r10
  __int64 v8; // r8
  __int64 v9; // r9
  PEPROCESS v10; // rdi
  __int64 result; // rax
  _BYTE v12[48]; // [rsp+20h] [rbp-118h] BYREF
  _BYTE v13[192]; // [rsp+50h] [rbp-E8h] BYREF

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v4 = (((a1 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiInitializeTbFlushList((__int64)v13, 0, 20);
  MiInsertTbFlushEntry((__int64)v13, v7 & 0xFFFFFFFFFFFFF000uLL, v6 >> 12, 0);
  v10 = PsInitialSystemProcess;
  if ( Process != PsInitialSystemProcess )
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v12);
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v10, v8, v9);
  while ( v5 <= v4 )
  {
    MiReadWriteAnyLevelShadowPte(v5, 0, 1, ZeroPte);
    v5 += 8LL;
  }
  MiFlushTbList((__int64)v13);
  result = UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v10);
  if ( Process != v10 )
    return KiUnstackDetachProcess((struct _KTHREAD *)v12, 0);
  return result;
}
