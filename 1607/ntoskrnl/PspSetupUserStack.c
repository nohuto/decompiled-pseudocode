/*
 * XREFs of PspSetupUserStack @ 0x14050B934
 * Callers:
 *     PspAllocateThread @ 0x1405154A0 (PspAllocateThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CD1F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CE820 (KiUnstackDetachProcess.c)
 *     ExGenRandom @ 0x1400F0494 (ExGenRandom.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x14015A040 (ZwFreeVirtualMemory.c)
 *     RtlCreateUserStack @ 0x14050B698 (RtlCreateUserStack.c)
 *     PspWow64SetupCpuArea @ 0x14051A59C (PspWow64SetupCpuArea.c)
 */

__int64 __fastcall PspSetupUserStack(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, unsigned int a5)
{
  char v5; // bl
  unsigned __int64 v10; // rsi
  NTSTATUS UserStack; // esi
  __int64 v12; // r15
  void *v14; // rax
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
  if ( !*(_QWORD *)(a1 + 1064) || (UserStack = PspWow64SetupCpuArea(a3 + 2, a1), UserStack >= 0) )
  {
    *(_QWORD *)(a2 + 152) = a3[2] - v12 - 40;
    KiUnstackDetachProcess((struct _KTHREAD *)v18, 0);
LABEL_9:
    *(_BYTE *)a4 ^= (*(_BYTE *)a4 ^ (2 * v5)) & 2;
    return 0LL;
  }
  v14 = (void *)a3[4];
  RegionSize = 0LL;
  BaseAddress = v14;
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
LABEL_14:
  KiUnstackDetachProcess((struct _KTHREAD *)v18, 0);
  return (unsigned int)UserStack;
}
