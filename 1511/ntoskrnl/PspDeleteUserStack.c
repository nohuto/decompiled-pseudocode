/*
 * XREFs of PspDeleteUserStack @ 0x1404C073C
 * Callers:
 *     PspInsertThread @ 0x1403EF330 (PspInsertThread.c)
 *     PspAllocateThread @ 0x1403F0BB0 (PspAllocateThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1401509E0 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall PspDeleteUserStack(_KPROCESS *a1, __int64 a2, _BYTE *a3)
{
  void *v5; // rax
  ULONG_PTR v7; // rax
  PVOID BaseAddress; // [rsp+20h] [rbp-58h] BYREF
  ULONG_PTR RegionSize; // [rsp+28h] [rbp-50h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v10; // [rsp+30h] [rbp-48h] BYREF

  KiStackAttachProcess(a1, 0LL, (__int64)&v10);
  if ( (*a3 & 2) != 0 )
  {
    v5 = *(void **)(a2 + 32);
    RegionSize = 0LL;
    BaseAddress = v5;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  if ( (*a3 & 4) != 0 )
  {
    v7 = *(_QWORD *)(a2 + 56);
    BaseAddress = 0LL;
    RegionSize = v7;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&RegionSize, (PSIZE_T)&BaseAddress, 0x8000u);
  }
  return KiUnstackDetachProcess(&v10, 0LL);
}
