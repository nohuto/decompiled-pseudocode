/*
 * XREFs of strtoxlX @ 0x18009BBF0
 * Callers:
 *     strtol @ 0x18009BE30 (strtol.c)
 *     strtolX @ 0x18009BE60 (strtolX.c)
 *     strtoul @ 0x18009BE90 (strtoul.c)
 * Callees:
 *     _errno @ 0x1800883C0 (_errno.c)
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 *     __pctype_func @ 0x18009CE60 (__pctype_func.c)
 */

__int64 __fastcall strtoxlX(__int64 a1, unsigned __int8 *a2, unsigned __int8 **a3, unsigned int a4, int a5, int a6)
{
  unsigned int v6; // r14d
  int v10; // ebp
  unsigned __int8 *v11; // rsi
  int v12; // ebx
  unsigned int v13; // edi
  const unsigned __int16 *i; // rax
  int v15; // ebx
  unsigned int v16; // r12d
  int v17; // eax
  __int64 v18; // r13
  unsigned int v19; // eax
  int v20; // eax
  unsigned __int8 *v21; // rsi

  v6 = a4;
  if ( a3 )
    *a3 = a2;
  if ( !a2 || a4 && a4 - 2 > 0x22 )
  {
    invalid_parameter();
    return 0LL;
  }
  LOBYTE(v10) = *a2;
  v11 = a2 + 1;
  v12 = *a2;
  v13 = 0;
  for ( i = _pctype_func(); (i[v12] & 8) != 0; i = _pctype_func() )
  {
    v10 = *v11++;
    v12 = v10;
  }
  v15 = a5;
  if ( (_BYTE)v10 == 45 )
  {
    v15 = a5 | 2;
  }
  else if ( (_BYTE)v10 != 43 )
  {
    goto LABEL_15;
  }
  LOBYTE(v10) = *v11++;
LABEL_15:
  if ( !v6 )
  {
    if ( (_BYTE)v10 != 48 )
    {
      v6 = 10;
      goto LABEL_29;
    }
    if ( ((*v11 - 88) & 0xDF) != 0 )
    {
      v6 = 8;
      goto LABEL_29;
    }
    v6 = 16;
    goto LABEL_27;
  }
  if ( v6 - 2 > 0x22 )
  {
    if ( a3 )
      *a3 = a2;
    return 0LL;
  }
  if ( v6 == 16 && (_BYTE)v10 == 48 )
  {
LABEL_27:
    if ( ((*v11 - 88) & 0xDF) == 0 )
    {
      LOBYTE(v10) = v11[1];
      v11 += 2;
    }
  }
LABEL_29:
  v16 = 0xFFFFFFFF / v6;
  while ( 1 )
  {
    v17 = (unsigned __int8)v10;
    if ( (unsigned __int8)v10 == -1 )
      v17 = -1;
    v18 = v17;
    if ( (_pctype_func()[v17] & 4) != 0 )
    {
      v19 = (char)v10 - 48;
    }
    else
    {
      if ( (_pctype_func()[v18] & 0x103) == 0 )
        break;
      v20 = (char)v10;
      if ( (unsigned __int8)(v10 - 97) <= 0x19u )
        v20 = (char)v10 - 32;
      v19 = v20 - 55;
    }
    if ( v19 >= v6 )
      break;
    v15 |= 8u;
    if ( a6 || v13 < v16 || v13 == v16 && v19 <= 0xFFFFFFFF % v6 )
    {
      v13 = v19 + v6 * v13;
    }
    else
    {
      v15 |= 4u;
      if ( !a3 )
        break;
    }
    LOBYTE(v10) = *v11++;
  }
  v21 = v11 - 1;
  if ( (v15 & 8) != 0 )
  {
    if ( ((v15 & 4) != 0 || (v15 & 1) == 0 && ((v15 & 2) != 0 && v13 > 0x80000000 || (v15 & 2) == 0 && v13 > 0x7FFFFFFF))
      && !a6 )
    {
      *errno() = 34;
      if ( (v15 & 1) != 0 )
        v13 = -1;
      else
        v13 = ((v15 & 2) != 0) + 0x7FFFFFFF;
    }
  }
  else
  {
    if ( a3 )
      v21 = a2;
    v13 = 0;
  }
  if ( a3 )
    *a3 = v21;
  if ( (v15 & 2) != 0 )
    return -v13;
  return v13;
}
