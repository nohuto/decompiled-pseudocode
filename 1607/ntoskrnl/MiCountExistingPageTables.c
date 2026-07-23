/*
 * XREFs of MiCountExistingPageTables @ 0x14010036C
 * Callers:
 *     MiPageTablesNeeded @ 0x140100298 (MiPageTablesNeeded.c)
 *     MiCountExistingPageTables @ 0x14010036C (MiCountExistingPageTables.c)
 * Callees:
 *     MiCountExistingPageTables @ 0x14010036C (MiCountExistingPageTables.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCountExistingPageTables(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rax
  __int16 v10; // r9
  __int64 v11; // r10
  __int64 v12; // r11
  unsigned int v13; // r10d
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF
  __int64 v19; // [rsp+60h] [rbp+18h]

  v19 = a3;
  v5 = 0LL;
  v6 = a4;
  v7 = a1;
  v8 = a2;
  if ( a1 < *(_QWORD *)(a3 + 16LL * a4) )
    v7 = *(_QWORD *)(a3 + 16LL * a4);
  if ( a2 > *(_QWORD *)(a3 + 16LL * a4 + 8) )
    v8 = *(_QWORD *)(a3 + 16LL * a4 + 8);
  for ( ; v7 <= v8; v7 += 8LL )
  {
    v18 = MI_READ_PTE_LOCK_FREE(v7);
    if ( (v18 & 1) != 0 )
    {
      v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v18) >> 12) & 0xFFFFFFFFFLL;
      if ( v9 != *(_QWORD *)(v11 + 8 * v6 + 4776)
        && v9 != *(_QWORD *)(v11 + 8 * v6 + 4744)
        && ((v10 & 0x800) != 0 || (v10 & 0x42) != 0) )
      {
        ++v5;
      }
      if ( (_DWORD)v6 && (_DWORD)v6 != a5 )
      {
        if ( (v10 & 0x80u) == 0 )
        {
          v5 += MiCountExistingPageTables(
                  (__int64)(v7 << 25) >> 16,
                  (unsigned int)((__int64)(v7 << 25) >> 16) + 4088,
                  v12,
                  (int)v6 - 1,
                  a5);
        }
        else
        {
          v13 = v6;
          v14 = (__int64)(v7 << 25) >> 16;
          do
          {
            --v13;
            v15 = v14 + 4088;
            v16 = (__int64)(v7 << 25) >> 16;
            if ( v14 < *(_QWORD *)(v12 + 16LL * v13) )
              v16 = *(_QWORD *)(v12 + 16LL * v13);
            if ( v15 > *(_QWORD *)(v12 + 16LL * v13 + 8) )
              v15 = *(_QWORD *)(v12 + 16LL * v13 + 8);
            v5 += ((__int64)(v15 - v16) >> 3) + 1;
          }
          while ( v13 );
        }
      }
    }
  }
  return v5;
}
