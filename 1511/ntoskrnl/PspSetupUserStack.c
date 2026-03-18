/*
 * XREFs of PspSetupUserStack @ 0x1403F2A8C
 * Callers:
 *     PspAllocateThread @ 0x1403F0BB0 (PspAllocateThread.c)
 * Callees:
 *     ExGenRandom @ 0x14002D854 (ExGenRandom.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1401509E0 (ZwFreeVirtualMemory.c)
 *     RtlCreateUserStack @ 0x1403F2BA0 (RtlCreateUserStack.c)
 *     PspWow64SetupCpuArea @ 0x1404A492C (PspWow64SetupCpuArea.c)
 */

__int64 __fastcall PspSetupUserStack(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  int UserStack; // esi
  __int64 v10; // r11
  void *v12; // rax
  ULONG_PTR v13; // [rsp+20h] [rbp-98h]
  PVOID BaseAddress; // [rsp+30h] [rbp-88h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-80h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v16; // [rsp+40h] [rbp-78h] BYREF

  v4 = 1;
  if ( (*(_BYTE *)a4 & 1) != 0 )
  {
    v4 = 0;
    goto LABEL_7;
  }
  KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)&v16);
  UserStack = RtlCreateUserStack(*(_QWORD *)(a4 + 16), *(_QWORD *)(a4 + 24), *(_QWORD *)(a4 + 8), 4096, v13, a3);
  if ( UserStack >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 768) & 0x20000) != 0 )
      v10 = 0LL;
    else
      v10 = 16 * (unsigned int)(ExGenRandom(1) & 0x7F);
    if ( *(_QWORD *)(a1 + 1064) )
    {
      UserStack = PspWow64SetupCpuArea(a3 + 16, a1);
      if ( UserStack < 0 )
      {
        v12 = *(void **)(a3 + 32);
        RegionSize = 0LL;
        BaseAddress = v12;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        goto LABEL_12;
      }
    }
    *(_QWORD *)(a2 + 152) = *(_QWORD *)(a3 + 16) - v10 - 40;
    KiUnstackDetachProcess(&v16, 0LL);
LABEL_7:
    *(_BYTE *)a4 ^= (*(_BYTE *)a4 ^ (2 * v4)) & 2;
    return 0LL;
  }
LABEL_12:
  KiUnstackDetachProcess(&v16, 0LL);
  return (unsigned int)UserStack;
}
