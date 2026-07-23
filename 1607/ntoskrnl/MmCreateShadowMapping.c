/*
 * XREFs of MmCreateShadowMapping @ 0x14065BD7C
 * Callers:
 *     KiShadowProcessorAllocation @ 0x1403DE0E8 (KiShadowProcessorAllocation.c)
 * Callees:
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     LOCK_ADDRESS_SPACE @ 0x14002BF10 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002CB50 (UNLOCK_ADDRESS_SPACE.c)
 *     KeStackAttachProcess @ 0x1400CAFB0 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1400CB05C (KeUnstackDetachProcess.c)
 *     MiPageTablesNeeded @ 0x140100298 (MiPageTablesNeeded.c)
 *     MiCleanupPageTablePages @ 0x1401004E0 (MiCleanupPageTablePages.c)
 *     MiGetPageTablePages @ 0x140100588 (MiGetPageTablePages.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiMakeShadowPageTableRange @ 0x14065BCA0 (MiMakeShadowPageTableRange.c)
 */

__int64 __fastcall MmCreateShadowMapping(__int64 PteAddress, __int64 a2)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // r8
  struct _KTHREAD *CurrentThread; // rsi
  PEPROCESS v11; // rbx
  struct _KPROCESS *Process; // r15
  __int64 *v13[6]; // [rsp+30h] [rbp-79h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v15[8]; // [rsp+90h] [rbp-19h] BYREF

  memset(v13, 0, sizeof(v13));
  v4 = a2 + PteAddress - 1;
  v5 = MiPageTablesNeeded(PteAddress, v4, 1u, 1);
  v13[2] = 0LL;
  v13[3] = 0LL;
  v13[1] = (__int64 *)MiSystemPartition;
  HIDWORD(v13[4]) = 1;
  v13[0] = (__int64 *)0xFFFFFFFFFLL;
  result = MiGetPageTablePages((__int64)v13, PteAddress, v5, 12);
  if ( (_DWORD)result )
  {
    do
    {
      PteAddress = MiGetPteAddress(PteAddress);
      v7 = MiGetPteAddress(v4);
      *v8 = v7;
      v4 = v7;
      *(v8 - 1) = PteAddress;
    }
    while ( v9 != 1 );
    CurrentThread = KeGetCurrentThread();
    v11 = PsInitialSystemProcess;
    Process = CurrentThread->ApcState.Process;
    if ( Process != PsInitialSystemProcess )
      KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v11);
    MiMakeShadowPageTableRange(PteAddress, v4, (__int64)v15, 3, v13);
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v11);
    if ( Process != v11 )
      KeUnstackDetachProcess(&ApcState);
    MiCleanupPageTablePages((__int64)v13);
    return 1LL;
  }
  return result;
}
