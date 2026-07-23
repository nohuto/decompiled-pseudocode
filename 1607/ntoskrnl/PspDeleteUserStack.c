/*
 * XREFs of PspDeleteUserStack @ 0x1404CF9AC
 * Callers:
 *     PspAllocateThread @ 0x1404F8890 (PspAllocateThread.c)
 *     PspInsertThread @ 0x1404F9B40 (PspInsertThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x14015A5B0 (ZwFreeVirtualMemory.c)
 */

int __fastcall PspDeleteUserStack(_KPROCESS *a1, __int64 a2, _BYTE *a3)
{
  void *v5; // rax
  ULONG_PTR v7; // rax
  ULONG_PTR RegionSize; // [rsp+20h] [rbp-58h] BYREF
  PVOID BaseAddress; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v10[48]; // [rsp+30h] [rbp-48h] BYREF

  KiStackAttachProcess(a1, 0, (__int64)v10);
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
  return KiUnstackDetachProcess((struct _KTHREAD *)v10, 0);
}
