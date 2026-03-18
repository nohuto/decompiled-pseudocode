/*
 * XREFs of MiInitializePteInfo @ 0x1407BB960
 * Callers:
 *     MiInitializeSystemSpaceMap @ 0x140535D20 (MiInitializeSystemSpaceMap.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001D05C (MiGetAnyMultiplexedVm.c)
 *     MiReservePtes @ 0x1400DDB50 (MiReservePtes.c)
 *     MiIssueNoPtesBugcheck @ 0x1401E7418 (MiIssueNoPtesBugcheck.c)
 *     MiInitializeDynamicBitmap @ 0x140535E80 (MiInitializeDynamicBitmap.c)
 */

char *__fastcall MiInitializePteInfo(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  ULONG_PTR v5; // rax
  char *result; // rax

  v5 = MiReservePtes((__int64)&qword_140327870, 0x100uLL, a3);
  if ( !v5 )
    MiIssueNoPtesBugcheck(0x100uLL);
  MiInitializeDynamicBitmap((_QWORD *)a1, (__int64)(v5 << 25) >> 16, 0x800000LL, 3);
  *(_QWORD *)(a1 + 32) = a1 + 40;
  *(_DWORD *)(a1 + 24) = 6;
  *(_DWORD *)(a1 + 28) = 12;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  result = MiGetAnyMultiplexedVm(1);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = result;
  return result;
}
