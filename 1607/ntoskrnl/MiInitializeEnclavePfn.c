/*
 * XREFs of MiInitializeEnclavePfn @ 0x1401F059C
 * Callers:
 *     MiAddPagesToEnclave @ 0x14065E1EC (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x14065E84C (MiCopyPagesIntoEnclave.c)
 *     MiCreateEnclave @ 0x14065EF30 (MiCreateEnclave.c)
 * Callees:
 *     MiLockPageInline @ 0x140022E70 (MiLockPageInline.c)
 *     MiMakeDemandZeroPte @ 0x1401F2734 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiInitializeEnclavePfn(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rsi
  unsigned __int8 v6; // al
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 result; // rax
  unsigned __int64 v11; // r9

  v5 = 48 * a1 - 0x58000000000LL;
  v6 = MiLockPageInline(v5);
  *(_BYTE *)(v5 + 34) = *(_BYTE *)(v5 + 34) & 0xF8 | 6;
  v7 = *(_QWORD *)(v5 + 24) & 0xC000000000000000uLL | 1;
  *(_WORD *)(v5 + 32) = 1;
  *(_QWORD *)(v5 + 24) = v7;
  *(_BYTE *)(v5 + 34) |= 0x10u;
  *(_QWORD *)(v5 + 8) = a2;
  *(_QWORD *)(v5 + 16) = MiMakeDemandZeroPte(a3, v8, v9, v6);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v11);
  return result;
}
