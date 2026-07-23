/*
 * XREFs of PspWow64SetupUserStack @ 0x1404B63C8
 * Callers:
 *     PspAllocateThread @ 0x1404F8890 (PspAllocateThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     RtlpWow64CreateUserStack @ 0x1404B6458 (RtlpWow64CreateUserStack.c)
 */

__int64 __fastcall PspWow64SetupUserStack(_KPROCESS *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  char v5; // bl
  int UserStack; // esi
  _BYTE v10[48]; // [rsp+30h] [rbp-58h] BYREF

  v5 = 1;
  if ( (*(_BYTE *)a4 & 1) != 0 )
  {
    v5 = 0;
    goto LABEL_4;
  }
  KiStackAttachProcess(a1, 0, (__int64)v10);
  UserStack = RtlpWow64CreateUserStack(*(_QWORD *)(a4 + 16), *(_QWORD *)(a4 + 24), *(_QWORD *)(a4 + 8), a5, a3);
  if ( UserStack >= 0 )
  {
    KiUnstackDetachProcess((struct _KTHREAD *)v10, 0);
LABEL_4:
    *(_BYTE *)a4 ^= (*(_BYTE *)a4 ^ (4 * v5)) & 4;
    return 0LL;
  }
  KiUnstackDetachProcess((struct _KTHREAD *)v10, 0);
  return (unsigned int)UserStack;
}
