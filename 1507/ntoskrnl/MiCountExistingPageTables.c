/*
 * XREFs of MiCountExistingPageTables @ 0x140069C68
 * Callers:
 *     MiPageTablesNeeded @ 0x140069BA0 (MiPageTablesNeeded.c)
 *     MiCountExistingPageTables @ 0x140069C68 (MiCountExistingPageTables.c)
 * Callees:
 *     MiCountExistingPageTables @ 0x140069C68 (MiCountExistingPageTables.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 */

__int64 __fastcall MiCountExistingPageTables(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned int a4,
        int a5)
{
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  unsigned __int64 *v10; // r11
  __int64 v11; // r9
  __int64 *v12; // r10
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // r8
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v24; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 *v25; // [rsp+60h] [rbp+18h]

  v25 = a3;
  v6 = a4;
  v7 = 0LL;
  v8 = a4;
  v9 = a2;
  v10 = a3;
  if ( a1 < a3[2 * a4] )
    a1 = a3[2 * a4];
  if ( a2 > a3[2 * a4 + 1] )
    v9 = a3[2 * a4 + 1];
  if ( a1 <= v9 )
  {
    v11 = 0x90482413000LL;
    v12 = MiState;
    do
    {
      v13 = *(_QWORD *)a1;
      if ( a1 + 0x90482413000LL <= 0x7F8 )
      {
        if ( (unsigned int)MiPteHasShadow(v8, v13) && (v13 & 1) != 0 && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
        {
          v14 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v14 )
          {
            v15 = *(_QWORD *)(v14 + 8 * ((a1 >> 3) & 0x1FF));
            if ( (v15 & 0x20) != 0 )
              v13 |= 0x20uLL;
            if ( (v15 & 0x42) != 0 )
              v13 |= 0x42uLL;
          }
        }
        v8 = v6;
      }
      v24 = v13;
      if ( (v13 & 1) != 0 )
      {
        v16 = v13;
        if ( (unsigned __int64)&v24 + v11 <= 0x7F8 )
        {
          if ( (unsigned int)MiPteHasShadow(v8, v13) && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
          {
            v17 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
            if ( v17 )
            {
              v18 = *(_QWORD *)(v17 + 8 * (((unsigned __int64)&v24 >> 3) & 0x1FF));
              if ( (v18 & 0x20) != 0 )
                v16 |= 0x20uLL;
              if ( (v18 & 0x42) != 0 )
                v16 |= 0x42uLL;
            }
          }
          v8 = v6;
        }
        v19 = (v16 >> 12) & 0xFFFFFFFFFLL;
        if ( v19 != v12[v8 + 545] && v19 != v12[v8 + 541] && ((v13 & 0x800) != 0 || (v13 & 0x42) != 0) )
          ++v7;
        if ( (_DWORD)v6 && (_DWORD)v6 != a5 )
        {
          if ( (_DWORD)v6 == 1 && (v13 & 0x80u) != 0LL )
          {
            v20 = (__int64)(a1 << 25) >> 16;
            v21 = v20 + 4088;
            if ( v20 < *v10 )
              v20 = *v10;
            if ( v21 > v10[1] )
              v21 = v10[1];
            v7 += ((__int64)(v21 - v20) >> 3) + 1;
          }
          else
          {
            v22 = MiCountExistingPageTables(
                    (__int64)(a1 << 25) >> 16,
                    (unsigned int)((__int64)(a1 << 25) >> 16) + 4088,
                    (_DWORD)v10,
                    (int)v6 - 1,
                    a5);
            v10 = v25;
            v12 = MiState;
            v7 += v22;
          }
          v8 = v6;
        }
      }
      a1 += 8LL;
      v11 = 0x90482413000LL;
    }
    while ( a1 <= v9 );
  }
  return v7;
}
