/*
 * XREFs of MiSwitchBaseAddress @ 0x14046BCC4
 * Callers:
 *     MiRelocateImageAgain @ 0x14046B548 (MiRelocateImageAgain.c)
 * Callees:
 *     DbgUnLoadImageSymbolsUnicode @ 0x140025574 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiApplyBytestreamFixup @ 0x140130FF4 (MiApplyBytestreamFixup.c)
 */

__int64 __fastcall MiSwitchBaseAddress(__int64 *a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // r10d
  __int64 v5; // rdi
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 i; // rax
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rbx
  __int64 *v14; // rax

  v4 = a3;
  v5 = *a1;
  v7 = *(_QWORD *)a1[12];
  v8 = *(_QWORD *)(v7 + 40);
  *(_QWORD *)(v7 + 40) = a2 - *(_QWORD *)(*a1 + 32);
  *(_QWORD *)(v5 + 32) = a2;
  **(_QWORD **)(v5 + 56) += *(_QWORD *)(v7 + 40);
  for ( i = *(_QWORD *)(v7 + 16); i; i = *v10 )
    MiApplyBytestreamFixup((__int64)a1, (_QWORD *)(i + 24), v8);
  MiValidateImagePages(a1, v4, 2, a4);
  result = *(_QWORD *)(v7 + 16);
  *(_QWORD *)(v7 + 40) += v8;
  if ( result )
  {
    v13 = -v8;
    do
    {
      MiApplyBytestreamFixup(v11, (_QWORD *)(result + 24), v13);
      result = *v14;
    }
    while ( result );
  }
  if ( (*(_WORD *)(v5 + 12) & 0x2000) != 0 )
  {
    DbgUnLoadImageSymbolsUnicode(
      (PCUNICODE_STRING)((a1[8] & 0xFFFFFFFFFFFFFFF0uLL) + 88),
      *(_QWORD *)(v5 + 32),
      (__int64)KeGetCurrentThread()->ApcState.Process);
    result = 57343LL;
    *(_WORD *)(v5 + 12) &= ~0x2000u;
  }
  return result;
}
