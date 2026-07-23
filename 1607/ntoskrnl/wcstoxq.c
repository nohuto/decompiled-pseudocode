/*
 * XREFs of wcstoxq @ 0x14014FE94
 * Callers:
 *     _wcstoi64 @ 0x14014FE68 (_wcstoi64.c)
 *     RtlUnicodeStringToInt64 @ 0x140688560 (RtlUnicodeStringToInt64.c)
 *     LocalpConvertStringSidToSid @ 0x1406CBA30 (LocalpConvertStringSidToSid.c)
 *     GetOperandValue @ 0x1406CD058 (GetOperandValue.c)
 *     LocalGetRelativeAttributeForString @ 0x1406CE9C4 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 *     _iswctype_l @ 0x1401500F8 (_iswctype_l.c)
 *     _wchartodigit @ 0x14015188C (_wchartodigit.c)
 */

unsigned __int64 __fastcall wcstoxq(__int64 a1, wint_t *a2, wint_t **a3, int a4, int a5, _DWORD *a6)
{
  int v6; // r14d
  wint_t v10; // si
  wint_t *v11; // rbx
  unsigned __int64 v12; // rdi
  wint_t i; // cx
  int v14; // ebp
  unsigned __int64 v15; // r13
  unsigned int v16; // r8d
  int v17; // r8d
  wint_t *v18; // rbx

  v6 = a4;
  if ( a3 )
    *a3 = a2;
  if ( !a2 || a4 && (unsigned int)(a4 - 2) > 0x22 )
  {
    xHalFreeMessageTarget();
    return 0LL;
  }
  v10 = *a2;
  v11 = a2 + 1;
  v12 = 0LL;
  for ( i = *a2; iswctype_l(i, 8u, 0LL); v10 = i )
  {
    do
      i = *v11++;
    while ( i == v10 );
  }
  v14 = a5;
  if ( v10 == 45 )
  {
    v14 = a5 | 2;
LABEL_15:
    v10 = *v11++;
    goto LABEL_16;
  }
  if ( v10 == 43 )
    goto LABEL_15;
LABEL_16:
  if ( v6 && (unsigned int)(v6 - 2) > 0x22 )
  {
    if ( a3 )
      *a3 = a2;
    return 0LL;
  }
  if ( v6 )
    goto LABEL_26;
  if ( !(unsigned int)wchartodigit(v10) )
  {
    if ( ((*v11 - 88) & 0xFFDF) != 0 )
    {
      v6 = 8;
      goto LABEL_30;
    }
    v6 = 16;
LABEL_26:
    if ( v6 == 16 && !(unsigned int)wchartodigit(v10) && ((*v11 - 88) & 0xFFDF) == 0 )
    {
      v10 = v11[1];
      v11 += 2;
    }
    goto LABEL_30;
  }
  v6 = 10;
LABEL_30:
  v15 = 0xFFFFFFFFFFFFFFFFuLL / v6;
  while ( 1 )
  {
    v16 = wchartodigit(v10);
    if ( v16 != -1 )
      goto LABEL_37;
    if ( (unsigned __int16)(v10 - 65) > 0x19u && (unsigned __int16)(v10 - 97) > 0x19u )
      break;
    v17 = v10;
    if ( (unsigned __int16)(v10 - 97) <= 0x19u )
      v17 = v10 - 32;
    v16 = v17 - 55;
LABEL_37:
    if ( v16 >= v6 )
      break;
    v14 |= 8u;
    if ( v12 < v15 || v12 == v15 && v16 <= 0xFFFFFFFFFFFFFFFFuLL % v6 )
    {
      v12 = v12 * v6 + v16;
    }
    else
    {
      v14 |= 4u;
      if ( !a3 )
        break;
    }
    v10 = *v11++;
  }
  v18 = v11 - 1;
  if ( (v14 & 8) != 0 )
  {
    if ( (v14 & 4) != 0
      || (v14 & 1) == 0
      && ((v14 & 2) != 0 && v12 > 0x8000000000000000uLL || (v14 & 2) == 0 && v12 > 0x7FFFFFFFFFFFFFFFLL) )
    {
      if ( a6 )
        *a6 = 34;
      else
        gbl_errno = 34;
      if ( (v14 & 1) != 0 )
        v12 = -1LL;
      else
        v12 = ((v14 & 2) != 0) + 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    if ( a3 )
      v18 = a2;
    v12 = 0LL;
  }
  if ( a3 )
    *a3 = v18;
  if ( (v14 & 2) != 0 )
    return -(__int64)v12;
  return v12;
}
