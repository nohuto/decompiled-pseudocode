/*
 * XREFs of MiClearVadBits @ 0x140027D40
 * Callers:
 *     MiFinishVadDeletion @ 0x140029160 (MiFinishVadDeletion.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 */

void __fastcall MiClearVadBits(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int64 v8; // rsi
  int v9; // r14d
  unsigned int v10; // r14d
  unsigned int v11; // ecx
  int v12; // esi
  unsigned int v13; // edi
  __int64 v14; // rsi
  __int64 v15; // rcx
  _BYTE *v16; // r15
  unsigned int v17; // eax
  unsigned __int64 v18; // rax
  unsigned int v19; // r9d
  unsigned int v20; // edx

  v4 = (_DWORD *)qword_140327FD0;
  v6 = a1 >> 16;
  v8 = a2 >> 16;
  if ( a3
    && ((a1 ^ ((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12)) & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    LODWORD(v6) = v6 + 1;
  }
  if ( a4
    && ((a2 ^ ((*(unsigned int *)(a4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 32) << 32)) << 12)) & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( !(_DWORD)v8 )
      return;
    LODWORD(v8) = v8 - 1;
  }
  v9 = *(_DWORD *)(qword_140327FD0 + 276840472) - qword_140327FD0;
  if ( !(_DWORD)v6 )
  {
    if ( v9 )
      goto LABEL_8;
    LODWORD(v6) = 1;
  }
  if ( (unsigned int)v6 > (unsigned int)v8 )
    return;
LABEL_8:
  v10 = 8 * v9;
  if ( (unsigned int)v8 >= v10 )
  {
    v11 = v10 + *(_DWORD *)(qword_140327FD0 + 276840464);
    if ( (unsigned int)v6 < v11 )
    {
      if ( (unsigned int)v6 < v10 )
        LODWORD(v6) = v10;
      if ( (unsigned int)v8 >= v11 )
        LODWORD(v8) = v11 - 1;
      v12 = v8 - v6;
      v13 = v6 - v10;
      v14 = (unsigned int)(v12 + 1);
      if ( (_DWORD)v14 )
      {
        v15 = v13 & 7;
        v16 = (_BYTE *)(*(_QWORD *)(qword_140327FD0 + 276840472) + ((unsigned __int64)v13 >> 3));
        if ( (unsigned int)(v15 + v14) > 8 )
        {
          if ( (v13 & 7) != 0 )
          {
            v14 = (unsigned int)(v15 + v14 - 8);
            *v16++ &= byte_14026F6B8[v15];
          }
          if ( (unsigned int)v14 > 8 )
          {
            memset(v16, 0, (unsigned __int64)(unsigned int)v14 >> 3);
            v16 += (unsigned __int64)(unsigned int)v14 >> 3;
            v14 &= 7u;
          }
          if ( (_DWORD)v14 )
            *v16 &= byte_14026F6C8[v14];
        }
        else
        {
          *v16 &= ~(byte_14026F6B8[v14] << v15);
        }
        if ( v4[69210120] > v13 )
          v4[69210120] = v13;
        v17 = 0;
        if ( a3 )
        {
          v18 = ((((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12) | 0xFFF)
               + 0xFFFF) >> 16;
          if ( (unsigned int)v18 <= v10 )
          {
            v17 = 0;
          }
          else
          {
            v17 = v18 - v10;
            if ( v17 )
            {
LABEL_22:
              v19 = v4[69210116];
              if ( a4 )
              {
                v20 = v19 + v10;
                v19 = ((*(_DWORD *)(a4 + 24) >> 4) | (*(unsigned __int8 *)(a4 + 32) << 28)) - v10;
                if ( ((*(_DWORD *)(a4 + 24) >> 4) | (*(unsigned __int8 *)(a4 + 32) << 28)) > v20 )
                  v19 = v4[69210116];
              }
              if ( v17 < v4[69210122] && v19 - v17 >= v4[69210121] )
                v4[69210122] = v17;
              return;
            }
          }
        }
        if ( !v10 )
          v17 = 1;
        goto LABEL_22;
      }
    }
  }
}
