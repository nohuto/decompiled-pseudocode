/*
 * XREFs of wcstoxlX @ 0x18009C8BC
 * Callers:
 *     wcstol @ 0x18009CAD0 (wcstol.c)
 *     wcstolX @ 0x18009CB00 (wcstolX.c)
 *     wcstoul @ 0x18009CB30 (wcstoul.c)
 * Callees:
 *     _errno @ 0x1800883C0 (_errno.c)
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 *     _iswctype_l @ 0x18009A210 (_iswctype_l.c)
 *     _wchartodigit @ 0x18009E474 (_wchartodigit.c)
 */

__int64 __fastcall wcstoxlX(__int64 a1, wint_t *a2, wint_t **a3, unsigned int a4, int a5, int a6)
{
  unsigned int v6; // r14d
  wint_t v9; // si
  wint_t *v10; // rbx
  unsigned int v11; // edi
  int v12; // ebp
  unsigned int v13; // r13d
  unsigned int v14; // eax
  int v15; // eax
  wint_t *v16; // rbx

  v6 = a4;
  if ( a3 )
    *a3 = a2;
  if ( !a2 || a4 && a4 - 2 > 0x22 )
  {
    invalid_parameter();
    return 0LL;
  }
  v9 = *a2;
  v10 = a2 + 1;
  v11 = 0;
  while ( iswctype_l(v9, 8u, 0LL) )
    v9 = *v10++;
  v12 = a5;
  if ( v9 == 45 )
  {
    v12 = a5 | 2;
  }
  else if ( v9 != 43 )
  {
    goto LABEL_14;
  }
  v9 = *v10++;
LABEL_14:
  if ( v6 )
    goto LABEL_20;
  if ( !(unsigned int)wchartodigit(v9) )
  {
    if ( ((*v10 - 88) & 0xFFDF) != 0 )
    {
      v6 = 8;
      goto LABEL_24;
    }
    v6 = 16;
LABEL_20:
    if ( v6 == 16 && !(unsigned int)wchartodigit(v9) && ((*v10 - 88) & 0xFFDF) == 0 )
    {
      v9 = v10[1];
      v10 += 2;
    }
    goto LABEL_24;
  }
  v6 = 10;
LABEL_24:
  v13 = 0xFFFFFFFF / v6;
  while ( 1 )
  {
    v14 = wchartodigit(v9);
    if ( v14 != -1 )
      goto LABEL_31;
    if ( (unsigned __int16)(v9 - 65) > 0x19u && (unsigned __int16)(v9 - 97) > 0x19u )
      break;
    v15 = v9;
    if ( (unsigned __int16)(v9 - 97) <= 0x19u )
      v15 = v9 - 32;
    v14 = v15 - 55;
LABEL_31:
    if ( v14 >= v6 )
      break;
    v12 |= 8u;
    if ( a6 || v11 < v13 || v11 == v13 && v14 <= 0xFFFFFFFF % v6 )
    {
      v11 = v14 + v6 * v11;
    }
    else
    {
      v12 |= 4u;
      if ( !a3 )
        break;
    }
    v9 = *v10++;
  }
  v16 = v10 - 1;
  if ( (v12 & 8) != 0 )
  {
    if ( ((v12 & 4) != 0 || (v12 & 1) == 0 && ((v12 & 2) != 0 && v11 > 0x80000000 || (v12 & 2) == 0 && v11 > 0x7FFFFFFF))
      && !a6 )
    {
      *errno() = 34;
      if ( (v12 & 1) != 0 )
        v11 = -1;
      else
        v11 = ((v12 & 2) != 0) + 0x7FFFFFFF;
    }
  }
  else
  {
    if ( a3 )
      v16 = a2;
    v11 = 0;
  }
  if ( a3 )
    *a3 = v16;
  if ( (v12 & 2) != 0 )
    return -v11;
  return v11;
}
