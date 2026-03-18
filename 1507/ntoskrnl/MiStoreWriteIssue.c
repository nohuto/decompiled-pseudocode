/*
 * XREFs of MiStoreWriteIssue @ 0x14013E2A4
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14013D708 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     SmpPageWrite @ 0x14013E380 (SmpPageWrite.c)
 */

__int64 __fastcall MiStoreWriteIssue(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  int v10; // r9d
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx

  v10 = a1 + 64;
  *(_DWORD *)(a1 + 72) = 56;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 4096LL;
  *(_WORD *)(a1 + 74) |= 2u;
  v11 = (__int64)((unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v12 = a7;
  *(_QWORD *)(a1 + 112) = (v11 >> 63) + v11;
  *(_QWORD *)(a1 + 56) = v12;
  v13 = *a3 >> 60;
  if ( v13 == 15 || (*a3 & 0xFFFFFFFFFFFFFFFuLL) > 0xFFFFFFF )
    return 3221226011LL;
  LODWORD(a7) = ((_DWORD)v13 << 28) | *(_DWORD *)a3 & 0xFFFFFFF;
  return SmpPageWrite((unsigned int)&a7, a4, a6, v10, a5, a1 + 16, a8);
}
