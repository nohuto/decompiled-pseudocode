/*
 * XREFs of MiSwitchBaseAddress @ 0x1404BC564
 * Callers:
 *     MiRelocateImageAgain @ 0x14042B18C (MiRelocateImageAgain.c)
 * Callees:
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 *     MiApplyBytestreamFixup @ 0x1400A9708 (MiApplyBytestreamFixup.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x1401306FC (DbgUnLoadImageSymbolsUnicode.c)
 */

__int64 __fastcall MiSwitchBaseAddress(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // r10
  _QWORD *v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 i; // rax
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 *v13; // rax
  __int64 v14; // rbx
  __int64 *v15; // rax

  v4 = *a1;
  v5 = a3;
  v7 = *(_QWORD **)a1[12];
  v8 = a2 - *(_QWORD *)(*a1 + 32);
  v9 = v7[5];
  v7[5] = v8;
  *(_QWORD *)(v4 + 32) = a2;
  **(_QWORD **)(v4 + 56) += v7[5];
  for ( i = v7[2]; i; i = *v13 )
    MiApplyBytestreamFixup((__int64)a1, (_QWORD *)(i + 24), v9);
  MiWalkEntireImage(a1, v5, 2, a4);
  result = v7[2];
  v7[5] += v9;
  v7[6] += v8;
  if ( result )
  {
    v14 = -v9;
    do
    {
      MiApplyBytestreamFixup(v11, (_QWORD *)(result + 24), v14);
      result = *v15;
    }
    while ( result );
  }
  if ( (*(_WORD *)(v4 + 12) & 0x2000) != 0 )
  {
    DbgUnLoadImageSymbolsUnicode(
      (PCUNICODE_STRING)((a1[8] & 0xFFFFFFFFFFFFFFF0uLL) + 88),
      *(_QWORD *)(v4 + 32),
      (__int64)KeGetCurrentThread()->ApcState.Process);
    result = 57343LL;
    *(_WORD *)(v4 + 12) &= ~0x2000u;
  }
  return result;
}
