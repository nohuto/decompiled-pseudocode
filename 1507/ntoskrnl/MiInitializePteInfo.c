/*
 * XREFs of MiInitializePteInfo @ 0x1407E72E4
 * Callers:
 *     MiInitializeSystemSpaceMap @ 0x140579A74 (MiInitializeSystemSpaceMap.c)
 * Callees:
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiIssueNoPtesBugcheck @ 0x140217F58 (MiIssueNoPtesBugcheck.c)
 *     MiInitializeDynamicBitmap @ 0x140579BF4 (MiInitializeDynamicBitmap.c)
 */

signed __int32 *__fastcall MiInitializePteInfo(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 *v4; // rax
  signed __int32 *result; // rax

  v4 = MiReservePtes((__int64)&qword_14034FC70, 0x100u, a3);
  if ( !v4 )
    MiIssueNoPtesBugcheck(0x100uLL);
  MiInitializeDynamicBitmap((unsigned __int64 *)a1, (__int64)((_QWORD)v4 << 25) >> 16, 0x800000uLL, 3);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 32) = a1 + 40;
  *(_QWORD *)(a1 + 16) = 0xFFFFF6FC00000000uLL;
  result = dword_14034FF40;
  *(_QWORD *)(a1 + 56) = dword_14034FF40;
  *(_DWORD *)(a1 + 24) = 6;
  *(_DWORD *)(a1 + 28) = 12;
  return result;
}
