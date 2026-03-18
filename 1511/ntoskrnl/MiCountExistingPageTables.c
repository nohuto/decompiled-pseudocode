/*
 * XREFs of MiCountExistingPageTables @ 0x140017B34
 * Callers:
 *     MiPageTablesNeeded @ 0x140017A6C (MiPageTablesNeeded.c)
 *     MiCountExistingPageTables @ 0x140017B34 (MiCountExistingPageTables.c)
 * Callees:
 *     MiCountExistingPageTables @ 0x140017B34 (MiCountExistingPageTables.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCountExistingPageTables(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned int a4,
        int a5)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned __int64 v7; // rdi
  __int16 v8; // bx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 i; // [rsp+58h] [rbp+10h]
  unsigned __int64 *v15; // [rsp+60h] [rbp+18h]

  v15 = a3;
  v5 = 0LL;
  v6 = a4;
  v7 = a1;
  if ( a1 < a3[2 * a4] )
    v7 = a3[2 * a4];
  if ( a2 > a3[2 * a4 + 1] )
    a2 = a3[2 * a4 + 1];
  for ( i = a2; v7 <= i; v7 += 8LL )
  {
    v13 = MI_READ_PTE_LOCK_FREE(v7);
    v8 = v13;
    if ( (v13 & 1) != 0 )
    {
      v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v13) >> 12) & 0xFFFFFFFFFLL;
      if ( v9 != MiState[v6 + 545] && v9 != MiState[v6 + 541] && ((v8 & 0x800) != 0 || (v8 & 0x42) != 0) )
        ++v5;
      if ( (_DWORD)v6 && (_DWORD)v6 != a5 )
      {
        if ( (_DWORD)v6 == 1 && (v8 & 0x80u) != 0 )
        {
          v10 = (__int64)(v7 << 25) >> 16;
          v11 = v10 + 4088;
          if ( v10 < *v15 )
            v10 = *v15;
          if ( v11 > v15[1] )
            v11 = v15[1];
          v5 += ((__int64)(v11 - v10) >> 3) + 1;
        }
        else
        {
          v5 += MiCountExistingPageTables(
                  (__int64)(v7 << 25) >> 16,
                  (unsigned int)((__int64)(v7 << 25) >> 16) + 4088,
                  (_DWORD)v15,
                  (int)v6 - 1,
                  a5);
        }
      }
    }
  }
  return v5;
}
