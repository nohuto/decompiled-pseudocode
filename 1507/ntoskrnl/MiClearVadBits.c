/*
 * XREFs of MiClearVadBits @ 0x14008B350
 * Callers:
 *     MiFinishVadDeletion @ 0x14008C870 (MiFinishVadDeletion.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 */

unsigned __int64 __fastcall MiClearVadBits(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v6; // rsi
  unsigned __int64 result; // rax
  unsigned int v9; // ebp
  unsigned int v10; // ecx
  int v11; // esi
  ULONG v12; // edi
  __int64 v13; // rsi
  __int64 v14; // rcx
  _BYTE *v15; // r12
  unsigned int v16; // ecx
  unsigned __int64 v17; // rcx
  unsigned int v18; // r9d

  v4 = a1 >> 16;
  v6 = a2 >> 16;
  if ( a3
    && ((a1 ^ ((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12)) & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    LODWORD(v4) = v4 + 1;
  }
  if ( a4
    && ((a2 ^ ((*(unsigned int *)(a4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 32) << 32)) << 12)) & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    result = (unsigned int)(v6 - 1);
    if ( !(_DWORD)v6 )
      return result;
    LODWORD(v6) = v6 - 1;
  }
  result = MEMORY[0xFFFFF58010804230];
  if ( !(_DWORD)v4 )
  {
    if ( MEMORY[0xFFFFF58010804230] )
      goto LABEL_8;
    LODWORD(v4) = 1;
  }
  if ( (unsigned int)v4 > (unsigned int)v6 )
    return result;
LABEL_8:
  v9 = 8 * MEMORY[0xFFFFF58010804230];
  if ( (unsigned int)v6 >= 8 * MEMORY[0xFFFFF58010804230] )
  {
    result = MEMORY[0xFFFFF5801080420C];
    v10 = MEMORY[0xFFFFF5801080420C] + v9;
    if ( (unsigned int)v4 < MEMORY[0xFFFFF5801080420C] + v9 )
    {
      if ( (unsigned int)v4 < v9 )
        LODWORD(v4) = 8 * MEMORY[0xFFFFF58010804230];
      if ( (unsigned int)v6 >= v10 )
        LODWORD(v6) = v10 - 1;
      v11 = v6 - v4;
      v12 = v4 - v9;
      v13 = (unsigned int)(v11 + 1);
      if ( (_DWORD)v13 )
      {
        v14 = v12 & 7;
        v15 = (_BYTE *)(MEMORY[0xFFFFF58010804230] + ((unsigned __int64)v12 >> 3));
        if ( (unsigned int)(v14 + v13) > 8 )
        {
          if ( (v12 & 7) != 0 )
          {
            v13 = (unsigned int)(v14 + v13 - 8);
            *v15++ &= byte_140297800[v14];
          }
          if ( (unsigned int)v13 > 8 )
          {
            memset(v15, 0, (unsigned __int64)(unsigned int)v13 >> 3);
            v15 += (unsigned __int64)(unsigned int)v13 >> 3;
            v13 &= 7u;
          }
          if ( (_DWORD)v13 )
            *v15 &= byte_140295400[v13];
        }
        else
        {
          *v15 &= ~(byte_140297800[v13] << v14);
        }
        if ( MEMORY[0xFFFFF580108041FC] > v12 )
          MEMORY[0xFFFFF580108041FC] = v12;
        v16 = 0;
        if ( a3 )
        {
          v17 = ((((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12) | 0xFFF)
               + 0xFFFF) >> 16;
          if ( (unsigned int)v17 <= v9 )
          {
            v16 = 0;
          }
          else
          {
            v16 = v17 - v9;
            if ( v16 )
            {
LABEL_22:
              v18 = MEMORY[0xFFFFF5801080420C];
              if ( a4 )
              {
                v18 = ((*(_DWORD *)(a4 + 24) >> 4) | (*(unsigned __int8 *)(a4 + 32) << 28)) - v9;
                if ( ((*(_DWORD *)(a4 + 24) >> 4) | (*(unsigned __int8 *)(a4 + 32) << 28)) > MEMORY[0xFFFFF5801080420C]
                                                                                           + v9 )
                  v18 = MEMORY[0xFFFFF5801080420C];
              }
              result = 0xFFFFF58010804200uLL;
              if ( v16 < MEMORY[0xFFFFF58010804200] )
              {
                result = 0xFFFFF58010804204uLL;
                if ( v18 - v16 >= MEMORY[0xFFFFF58010804204] )
                {
                  result = v16;
                  MEMORY[0xFFFFF58010804200] = v16;
                }
              }
              return result;
            }
          }
        }
        if ( !v9 )
          v16 = 1;
        goto LABEL_22;
      }
    }
  }
  return result;
}
