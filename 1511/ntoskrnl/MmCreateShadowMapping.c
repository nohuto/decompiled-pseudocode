/*
 * XREFs of MmCreateShadowMapping @ 0x1406264D0
 * Callers:
 *     KiShadowProcessorAllocation @ 0x1403B19D4 (KiShadowProcessorAllocation.c)
 * Callees:
 *     MiPageTablesNeeded @ 0x140017A6C (MiPageTablesNeeded.c)
 *     MiCleanupPageTablePages @ 0x140017C64 (MiCleanupPageTablePages.c)
 *     MiGetPageTablePages @ 0x1400185B8 (MiGetPageTablePages.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002E2D0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400622C0 (LOCK_ADDRESS_SPACE.c)
 *     KeStackAttachProcess @ 0x1400C7880 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1400DF9CC (KeUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MiMakeShadowPageTableRange @ 0x140626408 (MiMakeShadowPageTableRange.c)
 */

__int64 __fastcall MmCreateShadowMapping(unsigned __int64 PteAddress, __int64 a2)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rax
  __int64 result; // rax
  __int64 *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rax
  struct _KTHREAD *CurrentThread; // rsi
  PEPROCESS v11; // rbx
  struct _KPROCESS *Process; // r15
  __int64 *v13[6]; // [rsp+30h] [rbp-79h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v15[8]; // [rsp+90h] [rbp-19h] BYREF
  char v16; // [rsp+98h] [rbp-11h] BYREF

  memset(&v13[1], 0, 0x28uLL);
  v4 = a2 + PteAddress - 1;
  v5 = MiPageTablesNeeded(PteAddress, v4, 1u, 1);
  HIDWORD(v13[4]) = 1;
  v13[1] = (__int64 *)MiSystemPartition;
  v13[2] = 0LL;
  v13[0] = (__int64 *)0xFFFFFFFFFLL;
  v13[3] = 0LL;
  result = MiGetPageTablePages((__int64)v13, PteAddress, v5, 12);
  if ( (_DWORD)result )
  {
    v7 = (__int64 *)&v16;
    v8 = 4LL;
    do
    {
      PteAddress = MiGetPteAddress(PteAddress);
      v9 = MiGetPteAddress(v4);
      *v7 = v9;
      v4 = v9;
      *(v7 - 1) = PteAddress;
      v7 += 2;
      --v8;
    }
    while ( v8 );
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
