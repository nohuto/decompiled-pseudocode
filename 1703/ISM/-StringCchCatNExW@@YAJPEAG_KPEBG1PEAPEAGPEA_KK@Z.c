/*
 * XREFs of ?StringCchCatNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1800292EC
 * Callers:
 *     ?Describe@PropertyNode@Input@@UEBAKPEAGKK@Z @ 0x1800276E0 (-Describe@PropertyNode@Input@@UEBAKPEAGKK@Z.c)
 *     ?Describe@Property@Input@@UEBAKPEAGKK@Z @ 0x180027AD0 (-Describe@Property@Input@@UEBAKPEAGKK@Z.c)
 *     ?Describe@PropertyTypeInfo@Input@@QEBAKPEAGKK@Z @ 0x180029E44 (-Describe@PropertyTypeInfo@Input@@QEBAKPEAGKK@Z.c)
 *     ?Describe@PropertyInfo@Input@@QEBAKPEAGKK@Z @ 0x18002A030 (-Describe@PropertyInfo@Input@@QEBAKPEAGKK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCatNExW(
        unsigned __int16 *a1,
        __int64 a2,
        char *a3,
        unsigned __int64 a4,
        unsigned __int16 **a5,
        unsigned __int64 *a6)
{
  int v7; // r10d
  __int64 v11; // rcx
  unsigned __int16 *i; // rax
  __int64 v13; // r9
  unsigned __int16 *v14; // rbp
  unsigned __int64 v15; // rcx
  unsigned __int16 *v16; // rdx
  __int64 v17; // rdi
  unsigned __int16 *v18; // r8
  __int64 v19; // r11
  unsigned __int64 v20; // rsi
  char *v21; // r14
  unsigned __int16 v22; // ax

  v7 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v7 = -2147024809;
  if ( v7 < 0 )
    goto LABEL_9;
  v11 = a2;
  for ( i = a1; v11; --v11 )
  {
    if ( !*i )
      break;
    ++i;
  }
  v7 = v11 == 0 ? 0x80070057 : 0;
  if ( v11 )
    v13 = a2 - v11;
  else
LABEL_9:
    v13 = 0LL;
  if ( v7 >= 0 )
  {
    v14 = &a1[v13];
    v15 = a2 - v13;
    v16 = v14;
    if ( a4 < 0x7FFFFFFF )
    {
      v7 = 0;
      if ( v15 > 1 )
      {
        v17 = a2 - v13;
        v18 = &a1[v13];
        v19 = 0LL;
        v20 = a4 - v15;
        v21 = (char *)(a3 - (char *)v14);
        do
        {
          if ( !(v20 + v17) )
            break;
          v22 = *(unsigned __int16 *)((char *)v18 + (_QWORD)v21);
          if ( !v22 )
            break;
          *v18 = v22;
          ++v19;
          ++v18;
          --v17;
        }
        while ( v17 );
        if ( !v17 )
        {
          --v18;
          v7 = -2147024774;
          --v19;
        }
        *v18 = 0;
        v16 = &v14[v19];
        v15 -= v19;
        if ( v7 >= 0 )
          goto LABEL_30;
      }
      else
      {
        if ( !a4 || !*(_WORD *)a3 )
        {
LABEL_30:
          if ( a5 )
            *a5 = v16;
          if ( a6 )
            *a6 = v15;
          return (unsigned int)v7;
        }
        v7 = a1 != 0LL ? -2147024774 : -2147024809;
      }
    }
    else
    {
      v7 = -2147024809;
    }
    if ( a2 && (unsigned __int64)(2 * a2) >> 1 )
    {
      *v14 = 0;
      v15 = ((unsigned __int64)(2 * a2) >> 1) - v13;
      v16 = v14;
    }
    if ( (int)(v7 + 0x80000000) < 0 || v7 == -2147024774 )
      goto LABEL_30;
  }
  return (unsigned int)v7;
}
