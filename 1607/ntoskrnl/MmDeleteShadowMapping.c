/*
 * XREFs of MmDeleteShadowMapping @ 0x14065BE04
 * Callers:
 *     KiShadowProcessorAllocation @ 0x1403DE0E8 (KiShadowProcessorAllocation.c)
 *     KiUnshadowProcessorAllocation @ 0x1403DE1D4 (KiUnshadowProcessorAllocation.c)
 * Callees:
 *     MiGetPteAddress @ 0x14002BA64 (MiGetPteAddress.c)
 *     LOCK_ADDRESS_SPACE @ 0x14002C390 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002CFD0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiInitializeTbFlushList @ 0x1400B5A30 (MiInitializeTbFlushList.c)
 *     KeStackAttachProcess @ 0x1400CD110 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1400CD1BC (KeUnstackDetachProcess.c)
 *     MiInsertTbFlushEntry @ 0x1400E0240 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400E0490 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1401EF454 (MiReadWriteAnyLevelShadowPte.c)
 */

void __fastcall MmDeleteShadowMapping(unsigned __int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 PteAddress; // rbx
  __int64 v3; // r10
  __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v6; // rbp
  struct _KPROCESS *Process; // r14
  unsigned __int64 v8; // r11
  __int64 v9; // r10
  PEPROCESS v10; // rdi
  _KPROCESS *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-118h] BYREF
  _BYTE v15[192]; // [rsp+50h] [rbp-E8h] BYREF

  PteAddress = MiGetPteAddress(a1);
  v4 = MiGetPteAddress(v3 + v1 - 1);
  CurrentThread = KeGetCurrentThread();
  v6 = v4;
  Process = CurrentThread->ApcState.Process;
  MiInitializeTbFlushList((__int64)v15, 0, 20);
  MiInsertTbFlushEntry((__int64)v15, v9 & 0xFFFFFFFFFFFFF000uLL, v8 >> 12, 0);
  v10 = PsInitialSystemProcess;
  if ( Process != PsInitialSystemProcess )
    KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v10);
  while ( PteAddress <= v6 )
  {
    MiReadWriteAnyLevelShadowPte(PteAddress, 0LL, 1, ZeroPte);
    PteAddress += 8LL;
  }
  MiFlushTbList((__int64)v15, v11, v12, v13);
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v10);
  if ( Process != v10 )
    KeUnstackDetachProcess(&ApcState);
}
