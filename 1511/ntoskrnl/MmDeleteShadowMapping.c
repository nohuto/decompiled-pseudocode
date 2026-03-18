/*
 * XREFs of MmDeleteShadowMapping @ 0x140626638
 * Callers:
 *     KiShadowProcessorAllocation @ 0x1403B19D4 (KiShadowProcessorAllocation.c)
 *     KiUnshadowProcessorAllocation @ 0x1403B1AC0 (KiUnshadowProcessorAllocation.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE @ 0x14002E2D0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400622C0 (LOCK_ADDRESS_SPACE.c)
 *     KeStackAttachProcess @ 0x1400C7880 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1400DF9CC (KeUnstackDetachProcess.c)
 *     MiInitializeTbFlushList @ 0x1400E2A4C (MiInitializeTbFlushList.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1401DE980 (MiReadWriteAnyLevelShadowPte.c)
 */

void __fastcall MmDeleteShadowMapping(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 PteAddress; // rsi
  __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v7; // r14
  struct _KPROCESS *Process; // r15
  PEPROCESS v9; // rbx
  _KPROCESS *v10; // rdx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-128h] BYREF
  _BYTE v12[192]; // [rsp+50h] [rbp-F8h] BYREF

  PteAddress = MiGetPteAddress(a1);
  v5 = MiGetPteAddress(a2 + a1 - 1);
  CurrentThread = KeGetCurrentThread();
  v7 = v5;
  Process = CurrentThread->ApcState.Process;
  MiInitializeTbFlushList((__int64)v12, 0, 20);
  MiInsertTbFlushEntry((__int64)v12, a1 & 0xFFFFFFFFFFFFF000uLL, a2 >> 12, 0);
  v9 = PsInitialSystemProcess;
  if ( Process != PsInitialSystemProcess )
    KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v9);
  while ( PteAddress <= v7 )
  {
    MiReadWriteAnyLevelShadowPte(PteAddress, 0, 1, ZeroPte);
    PteAddress += 8LL;
  }
  MiFlushTbList((__int64)v12, v10);
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v9);
  if ( Process != v9 )
    KeUnstackDetachProcess(&ApcState);
}
