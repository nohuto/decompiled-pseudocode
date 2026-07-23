/*
 * XREFs of _splitpath_helper @ 0x180097B00
 * Callers:
 *     _splitpath @ 0x180097A70 (_splitpath.c)
 * Callees:
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 *     strncpy_s @ 0x1800A2130 (strncpy_s.c)
 */

__int64 __fastcall splitpath_helper(
        char *Source,
        char *Destination,
        unsigned __int64 a3,
        char *a4,
        unsigned __int64 a5,
        char *Destinationa,
        unsigned __int64 a7,
        char *a8,
        unsigned __int64 a9)
{
  char *v9; // rdi
  unsigned __int64 v11; // r9
  int v13; // esi
  __int64 v14; // rax
  char *v15; // rbx
  char v16; // al
  char *v17; // rbp
  const char *v18; // rsi
  char *v19; // rbx
  rsize_t v20; // rbx
  rsize_t v21; // rbx

  v9 = Source;
  v11 = a3;
  v13 = 0;
  if ( !Source )
    goto LABEL_4;
  if ( Destination )
  {
    if ( !a3 )
      goto LABEL_4;
  }
  else if ( a3 )
  {
LABEL_4:
    v13 = 1;
    goto LABEL_57;
  }
  if ( a4 )
  {
    if ( !a5 )
      goto LABEL_4;
  }
  else if ( a5 )
  {
    goto LABEL_4;
  }
  if ( Destinationa )
  {
    if ( !a7 )
      goto LABEL_4;
  }
  else if ( a7 )
  {
    goto LABEL_4;
  }
  if ( a8 )
  {
    if ( !a9 )
      goto LABEL_4;
  }
  else if ( a9 )
  {
    goto LABEL_4;
  }
  v14 = 1LL;
  v15 = Source;
  do
  {
    if ( !*v15 )
      break;
    ++v15;
    --v14;
  }
  while ( v14 );
  if ( *v15 == 58 )
  {
    if ( Destination )
    {
      if ( a3 < 3 )
        goto LABEL_57;
      strncpy_s(Destination, 0xFFFFFFFFFFFFFFFFuLL, Source, 2uLL);
    }
    v9 = v15 + 1;
  }
  else if ( Destination )
  {
    *Destination = 0;
  }
  v16 = *v9;
  v17 = 0LL;
  v18 = 0LL;
  v19 = v9;
  if ( !*v9 )
    goto LABEL_40;
  do
  {
    if ( v16 == 47 || v16 == 92 )
    {
      v17 = v19 + 1;
    }
    else if ( v16 == 46 )
    {
      v18 = v19;
    }
    v16 = *++v19;
  }
  while ( *v19 );
  if ( v17 )
  {
    if ( a4 )
    {
      if ( a5 <= v17 - v9 )
        goto LABEL_56;
      strncpy_s(a4, 0xFFFFFFFFFFFFFFFFuLL, v9, v17 - v9);
    }
    v9 = v17;
  }
  else
  {
LABEL_40:
    if ( a4 )
      *a4 = 0;
  }
  if ( !v18 || v18 < v9 )
  {
    if ( Destinationa )
    {
      v21 = v19 - v9;
      if ( a7 <= v21 )
        goto LABEL_56;
      strncpy_s(Destinationa, 0xFFFFFFFFFFFFFFFFuLL, v9, v21);
    }
    if ( a8 )
      *a8 = 0;
    return 0LL;
  }
  if ( !Destinationa )
  {
LABEL_47:
    if ( !a8 )
      return 0LL;
    v20 = v19 - v18;
    if ( a9 > v20 )
    {
      strncpy_s(a8, 0xFFFFFFFFFFFFFFFFuLL, v18, v20);
      return 0LL;
    }
    goto LABEL_56;
  }
  if ( a7 > v18 - v9 )
  {
    strncpy_s(Destinationa, 0xFFFFFFFFFFFFFFFFuLL, v9, v18 - v9);
    goto LABEL_47;
  }
LABEL_56:
  v13 = 0;
  v11 = a3;
LABEL_57:
  if ( Destination && v11 )
    *Destination = 0;
  if ( a4 && a5 )
    *a4 = 0;
  if ( Destinationa && a7 )
    *Destinationa = 0;
  if ( a8 && a9 )
    *a8 = 0;
  if ( v9 && !v13 )
    return 34LL;
  invalid_parameter();
  return 22LL;
}
