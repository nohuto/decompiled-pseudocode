/*
 * XREFs of strtoxq @ 0x18009CE70
 * Callers:
 *     _strtoi64 @ 0x18009D0A4 (_strtoi64.c)
 * Callees:
 *     _errno @ 0x1800883C0 (_errno.c)
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 *     __pctype_func @ 0x18009CE60 (__pctype_func.c)
 */

unsigned __int64 __fastcall strtoxq(__int64 a1, unsigned __int8 *a2, unsigned __int8 **a3, int a4, int a5)
{
  int v5; // r14d
  int v8; // ebp
  unsigned __int8 *v9; // rdi
  int v10; // ebx
  unsigned __int64 v11; // rsi
  const unsigned __int16 *v12; // rax
  bool i; // zf
  unsigned __int8 v14; // al
  int v15; // ebx
  unsigned __int64 v16; // r12
  int v17; // eax
  __int64 v18; // r13
  unsigned int v19; // edx
  int v20; // edx
  unsigned __int8 *v21; // rdi

  v5 = a4;
  if ( a3 )
    *a3 = a2;
  if ( !a2 || a4 && (unsigned int)(a4 - 2) > 0x22 )
  {
    invalid_parameter();
    return 0LL;
  }
  v8 = *a2;
  v9 = a2 + 1;
  v10 = v8;
  v11 = 0LL;
  v12 = _pctype_func();
  for ( i = v8 == -1; ; i = v10 == -1 )
  {
    if ( i )
      v10 = -1;
    if ( (v12[v10] & 8) == 0 )
      break;
    do
      v14 = *v9++;
    while ( v14 == (_BYTE)v8 );
    LOBYTE(v8) = v14;
    v10 = v14;
    v12 = _pctype_func();
  }
  v15 = a5;
  if ( (_BYTE)v8 == 45 )
  {
    v15 = a5 | 2;
  }
  else if ( (_BYTE)v8 != 43 )
  {
    goto LABEL_17;
  }
  LOBYTE(v8) = *v9++;
LABEL_17:
  if ( !v5 )
  {
    if ( (_BYTE)v8 != 48 )
    {
      v5 = 10;
      goto LABEL_27;
    }
    if ( ((*v9 - 88) & 0xDF) != 0 )
    {
      v5 = 8;
      goto LABEL_27;
    }
    v5 = 16;
  }
  if ( v5 == 16 && (_BYTE)v8 == 48 && ((*v9 - 88) & 0xDF) == 0 )
  {
    LOBYTE(v8) = v9[1];
    v9 += 2;
  }
LABEL_27:
  v16 = 0xFFFFFFFFFFFFFFFFuLL / v5;
  while ( 1 )
  {
    v17 = (unsigned __int8)v8;
    if ( (unsigned __int8)v8 == -1 )
      v17 = -1;
    v18 = v17;
    if ( (_pctype_func()[v17] & 4) != 0 )
    {
      v19 = (char)v8 - 48;
    }
    else
    {
      if ( (_pctype_func()[v18] & 0x103) == 0 )
        break;
      v20 = (char)v8;
      if ( (unsigned __int8)(v8 - 97) <= 0x19u )
        v20 = (char)v8 - 32;
      v19 = v20 - 55;
    }
    if ( v19 >= v5 )
      break;
    v15 |= 8u;
    if ( v11 < v16 || v11 == v16 && v19 <= 0xFFFFFFFFFFFFFFFFuLL % v5 )
    {
      v11 = v11 * v5 + v19;
    }
    else
    {
      v15 |= 4u;
      if ( !a3 )
        break;
    }
    LOBYTE(v8) = *v9++;
  }
  v21 = v9 - 1;
  if ( (v15 & 8) != 0 )
  {
    if ( (v15 & 4) != 0
      || (v15 & 1) == 0
      && ((v15 & 2) != 0 && v11 > 0x8000000000000000uLL || (v15 & 2) == 0 && v11 > 0x7FFFFFFFFFFFFFFFLL) )
    {
      *errno() = 34;
      if ( (v15 & 1) != 0 )
        v11 = -1LL;
      else
        v11 = ((v15 & 2) != 0) + 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    if ( a3 )
      v21 = a2;
    v11 = 0LL;
  }
  if ( a3 )
    *a3 = v21;
  if ( (v15 & 2) != 0 )
    return -(__int64)v11;
  return v11;
}
