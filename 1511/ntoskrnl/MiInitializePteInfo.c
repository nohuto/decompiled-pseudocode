/*
 * XREFs of MiInitializePteInfo @ 0x140771030
 * Callers:
 *     MiInitializeSystemSpaceMap @ 0x1404FF074 (MiInitializeSystemSpaceMap.c)
 * Callees:
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiIssueNoPtesBugcheck @ 0x1401D5B0C (MiIssueNoPtesBugcheck.c)
 *     MiInitializeDynamicBitmap @ 0x1404FF1D8 (MiInitializeDynamicBitmap.c)
 */

LONG *__fastcall MiInitializePteInfo(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  ULONG_PTR v4; // rax
  LONG *result; // rax

  v4 = MiReservePtes((__int64)&qword_1402FF7B0, 0x100u, a3);
  if ( !v4 )
    MiIssueNoPtesBugcheck(0x100uLL);
  MiInitializeDynamicBitmap((_QWORD *)a1, (__int64)(v4 << 25) >> 16, 0x800000LL, 3);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 32) = a1 + 40;
  *(_QWORD *)(a1 + 16) = 0xFFFFF6FC00000000uLL;
  result = &dword_1402FFA80;
  *(_QWORD *)(a1 + 56) = &dword_1402FFA80;
  *(_DWORD *)(a1 + 24) = 6;
  *(_DWORD *)(a1 + 28) = 12;
  return result;
}
