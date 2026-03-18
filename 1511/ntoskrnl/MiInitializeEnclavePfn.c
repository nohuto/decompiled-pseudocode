/*
 * XREFs of MiInitializeEnclavePfn @ 0x1401DFD10
 * Callers:
 *     MiAddPagesToEnclave @ 0x140628AE0 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x140629118 (MiCopyPagesIntoEnclave.c)
 *     MiCreateEnclave @ 0x1406297C0 (MiCreateEnclave.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 */

__int64 __fastcall MiInitializeEnclavePfn(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rsi
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rcx
  __int64 result; // rax

  v4 = 48 * a1 - 0x58000000000LL;
  v6 = (unsigned __int8)MiLockPageInline(v4);
  v7 = *(_QWORD *)(v4 + 24) & 0xC000000000000001uLL;
  *(_QWORD *)(v4 + 8) = a2;
  *(_WORD *)(v4 + 32) = 1;
  *(_QWORD *)(v4 + 24) = v7 | 1;
  LOBYTE(v7) = *(_BYTE *)(v4 + 34) & 0xE8 | 0x16;
  *(_QWORD *)(v4 + 16) = 32LL * (a3 & 0x1F);
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_BYTE *)(v4 + 34) = v7;
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v6);
  return result;
}
