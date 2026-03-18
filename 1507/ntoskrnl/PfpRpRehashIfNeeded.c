/*
 * XREFs of PfpRpRehashIfNeeded @ 0x1405308A0
 * Callers:
 *     PfpRpFileKeyUpdate @ 0x1404CC0A0 (PfpRpFileKeyUpdate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpRpRehashIfNeeded(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned int v4; // r10d
  unsigned __int64 v5; // rcx
  unsigned __int64 v8; // rax
  char v9; // cl
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 *v12; // r11
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  unsigned int v15; // r11d
  __int64 v16; // rdi
  __int64 v17; // r15
  _QWORD *v18; // rsi
  __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  int v21; // r8d
  __int64 v22; // [rsp+20h] [rbp+8h]

  v4 = 0;
  v5 = *(unsigned int *)(a1 + 4);
  if ( *(_DWORD *)a1 >= 2 * ((unsigned int)v5 >> 5) )
  {
    v8 = v5;
    v9 = -1;
    v10 = 2 * (v8 >> 5);
    if ( v10 <= 0xFFFFFFFF )
    {
      if ( !(_DWORD)v10 )
        LODWORD(v10) = 64;
      if ( (unsigned int)v10 <= (unsigned int)a3 )
      {
        v11 = *a2;
        if ( (((_DWORD)a3 - 1) & (unsigned int)a3) != 0 )
        {
          for ( ; (_DWORD)a3; LODWORD(a3) = (unsigned int)a3 >> 1 )
            ++v9;
          a3 = (unsigned int)(1 << v9);
        }
        v12 = (__int64 *)*a2;
        v13 = 0LL;
        if ( (unsigned int)a3 > 0x4000000 )
          a3 = 0x4000000LL;
        v14 = (unsigned __int64)(8 * a3 + 7) >> 3;
        if ( v11 > v11 + 8 * a3 )
          v14 = 0LL;
        if ( v14 )
        {
          do
          {
            ++v13;
            *v12++ = a1 | 1;
          }
          while ( v13 < v14 );
        }
        v15 = 0;
        v16 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
        if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v17 = *(_QWORD *)(a1 + 8);
            while ( 1 )
            {
              v18 = *(_QWORD **)(v17 + 8LL * v15);
              if ( ((unsigned __int8)v18 & 1) != 0 )
                break;
              *(_QWORD *)(v17 + 8LL * v15) = *v18;
              v22 = v16 & v18[1];
              v19 = (37
                   * (BYTE6(v22)
                    + 37
                    * (BYTE5(v22)
                     + 37
                     * (BYTE4(v22)
                      + 37
                      * (BYTE3(v22) + 37 * (BYTE2(v22) + 37 * (BYTE1(v22) + 37 * ((unsigned __int8)v22 + 11623883)))))))
                   + HIBYTE(v22)) & (unsigned int)(a3 - 1);
              *v18 = *(_QWORD *)(v11 + 8 * v19);
              *(_QWORD *)(v11 + 8 * v19) = v18;
            }
            ++v15;
          }
          while ( v15 < *(_DWORD *)(a1 + 4) >> 5 );
        }
        v20 = *(_QWORD *)(a1 + 8);
        v21 = *(_DWORD *)(a1 + 4) & 0x1F | (32 * a3);
        *(_QWORD *)(a1 + 8) = v11;
        *(_DWORD *)(a1 + 4) = v21;
        *a2 = v20;
      }
    }
  }
  LOBYTE(v4) = (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0;
  return v4;
}
