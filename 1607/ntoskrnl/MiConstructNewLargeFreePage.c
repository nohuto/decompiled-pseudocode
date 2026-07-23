/*
 * XREFs of MiConstructNewLargeFreePage @ 0x1401FCF1C
 * Callers:
 *     MiCoalesceFreeLargePages @ 0x1401FCABC (MiCoalesceFreeLargePages.c)
 *     MiRebuildLargePage @ 0x1401FD6F8 (MiRebuildLargePage.c)
 * Callees:
 *     MiInsertLargePageInNodeListHelper @ 0x14001B2E0 (MiInsertLargePageInNodeListHelper.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiInitializeLargePageSubPage @ 0x1401FD314 (MiInitializeLargePageSubPage.c)
 */

__int64 __fastcall MiConstructNewLargeFreePage(unsigned __int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rax
  int v6; // r14d
  unsigned __int64 v7; // r12
  __int64 v8; // rsi
  unsigned int v9; // edi
  __int64 v10; // rbp
  __int64 v12; // r14
  unsigned __int64 v13; // rbx
  __int64 v14; // rbx
  unsigned __int64 v15; // rdi
  __int64 result; // rax
  __int64 v17; // [rsp+60h] [rbp+8h]
  __int64 v19; // [rsp+78h] [rbp+20h]

  v5 = a2;
  v6 = a3;
  v19 = a2;
  v7 = MiLargePageSizes[a2];
  v8 = 48 * a1 - 0x58000000000LL;
  v9 = 0;
  v17 = v8;
  v10 = v8;
  if ( v7 )
  {
    v12 = 0LL;
    do
    {
      v13 = (unsigned __int8)MiLockPageInline(v10);
      MiInitializeLargePageSubPage(v12 + a1, a2, a3);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v13);
      ++v9;
      v10 += 48LL;
      v12 = v9;
    }
    while ( v9 < v7 );
    v8 = v17;
    v6 = a3;
    v5 = v19;
  }
  v14 = MiLargePageContainingFrames[v5];
  v15 = (unsigned __int8)MiLockPageInline(v8);
  *(_QWORD *)(v8 + 40) ^= (v14 ^ *(_QWORD *)(v8 + 40)) & 0xFFFFFFFFFLL;
  *(_BYTE *)(v8 + 34) ^= (*(_BYTE *)(v8 + 34) ^ v6) & 7;
  MiInsertLargePageInNodeListHelper(a1, v7, v6, 0);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v15);
  return result;
}
