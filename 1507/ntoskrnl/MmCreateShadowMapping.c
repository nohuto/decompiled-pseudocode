/*
 * XREFs of MmCreateShadowMapping @ 0x1406A833C
 * Callers:
 *     KiShadowProcessorAllocation @ 0x140402AA0 (KiShadowProcessorAllocation.c)
 * Callees:
 *     MiPageTablesNeeded @ 0x140069BA0 (MiPageTablesNeeded.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140089E40 (UNLOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE @ 0x14008A330 (LOCK_ADDRESS_SPACE.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiCleanupPageTablePages @ 0x14021EA6C (MiCleanupPageTablePages.c)
 *     MiGetPageTablePages @ 0x14021EB20 (MiGetPageTablePages.c)
 *     MiMakeShadowPageTableRange @ 0x1406A8274 (MiMakeShadowPageTableRange.c)
 */

__int64 __fastcall MmCreateShadowMapping(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // r9
  unsigned __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  struct _KTHREAD *CurrentThread; // r14
  PEPROCESS v12; // rbx
  struct _KPROCESS *Process; // r15
  __int64 *v14[6]; // [rsp+30h] [rbp-79h] BYREF
  _BYTE v15[48]; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v16[8]; // [rsp+90h] [rbp-19h] BYREF
  char v17; // [rsp+98h] [rbp-11h] BYREF

  memset(&v14[1], 0, 0x28uLL);
  v4 = a2 + a1 - 1;
  v5 = MiPageTablesNeeded(a1, v4, 1u, 1);
  HIDWORD(v14[4]) = 1;
  v14[1] = (__int64 *)MiSystemPartition;
  v14[2] = 0LL;
  v14[0] = (__int64 *)0xFFFFFFFFFLL;
  v14[3] = 0LL;
  result = MiGetPageTablePages((__int64)v14, a1, v5);
  if ( (_DWORD)result )
  {
    v8 = (unsigned __int64 *)&v17;
    v9 = 4LL;
    v10 = 0x98000000000LL;
    do
    {
      a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *(v8 - 1) = a1;
      *v8 = v4;
      v8 += 2;
      --v9;
    }
    while ( v9 );
    CurrentThread = KeGetCurrentThread();
    v12 = PsInitialSystemProcess;
    Process = CurrentThread->ApcState.Process;
    if ( Process != PsInitialSystemProcess )
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v15);
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v12, v10, v7);
    MiMakeShadowPageTableRange(a1, v4, (__int64)v16, 3, v14);
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v12);
    if ( Process != v12 )
      KiUnstackDetachProcess((struct _KTHREAD *)v15, 0);
    MiCleanupPageTablePages((__int64)v14);
    return 1LL;
  }
  return result;
}
