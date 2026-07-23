/*
 * XREFs of PspSetupUserStack @ 0x1404EE8C4
 * Callers:
 *     PspAllocateThread @ 0x1404F8890 (PspAllocateThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x14015A5B0 (ZwFreeVirtualMemory.c)
 *     RtlCreateUserStack @ 0x1404EE628 (RtlCreateUserStack.c)
 *     PspWow64SetupCpuArea @ 0x1404FD98C (PspWow64SetupCpuArea.c)
 */

__int64 __fastcall PspSetupUserStack(__int64 a1, __int64 a2, struct _INITIAL_TEB *a3, __int64 a4, unsigned int a5)
{
  char v5; // bl
  SIZE_T v10; // rsi
  NTSTATUS UserStack; // esi
  __int64 v12; // r15
  PVOID AllocatedStackBase; // rax
  ULONG_PTR v15; // [rsp+20h] [rbp-98h]
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-88h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v18[48]; // [rsp+40h] [rbp-78h] BYREF

  v5 = 1;
  if ( (*(_BYTE *)a4 & 1) != 0 )
  {
    v5 = 0;
    goto LABEL_9;
  }
  v10 = 4096LL;
  if ( a5 )
    v10 = ((unsigned __int64)a5 << 56) | 0x1000;
  KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v18);
  UserStack = RtlCreateUserStack(*(_QWORD *)(a4 + 16), *(_QWORD *)(a4 + 24), *(_QWORD *)(a4 + 8), v10, v15, a3);
  if ( UserStack < 0 )
    goto LABEL_14;
  if ( (*(_DWORD *)(a1 + 768) & 0x20000) != 0 )
    v12 = 0LL;
  else
    v12 = 16 * (unsigned int)(ExGenRandom(1) & 0x7F);
  if ( !*(_QWORD *)(a1 + 1064) || (UserStack = PspWow64SetupCpuArea(&a3->StackBase, a1), UserStack >= 0) )
  {
    *(_QWORD *)(a2 + 152) = (char *)a3->StackBase - v12 - 40;
    KiUnstackDetachProcess((struct _KTHREAD *)v18, 0);
LABEL_9:
    *(_BYTE *)a4 ^= (*(_BYTE *)a4 ^ (2 * v5)) & 2;
    return 0LL;
  }
  AllocatedStackBase = a3->AllocatedStackBase;
  RegionSize = 0LL;
  BaseAddress = AllocatedStackBase;
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
LABEL_14:
  KiUnstackDetachProcess((struct _KTHREAD *)v18, 0);
  return (unsigned int)UserStack;
}
