/*
 * XREFs of RtlpScanEnvironment @ 0x18005FCF0
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x1800196C0 (RtlQueryEnvironmentVariable.c)
 * Callees:
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall RtlpScanEnvironment(
        char *a1,
        unsigned __int16 *a2,
        __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6,
        int a7)
{
  unsigned __int16 *v7; // rdi
  __int64 v10; // r12
  unsigned int v11; // ebp
  char *v12; // rbx
  unsigned __int16 *i; // r10
  unsigned __int16 v14; // r9
  int v15; // r11d
  unsigned __int16 v16; // r9
  int v17; // eax
  unsigned __int16 v18; // ax
  int v19; // r11d
  unsigned __int16 v20; // ax
  char *v21; // r10
  __int64 v22; // rdx
  _DWORD *v23; // rdx
  __int64 v24; // rax
  char **v26; // r8
  unsigned __int64 v27; // r9
  bool v28; // zf
  _BYTE *v29; // r10
  unsigned __int64 v30; // rcx
  __int64 v31; // rbx

  v7 = &a2[a3];
  if ( !*(_WORD *)a1 )
  {
LABEL_24:
    if ( a7 )
      qword_180152FB0 = (__int64)a1;
    return 3221225728LL;
  }
  v10 = Nls844UnicodeUpcaseTable;
  v11 = 0;
  while ( 1 )
  {
    v12 = a1;
    for ( i = a2; i < v7; ++i )
    {
      v14 = *(_WORD *)a1;
      if ( !*(_WORD *)a1 )
        break;
      if ( v14 >= 0x61u )
        v15 = v14 > 0x7Au
            ? (unsigned __int16)(v14
                               + *(_WORD *)(v10
                                          + 2LL
                                          * ((v14 & 0xF)
                                           + (unsigned int)*(unsigned __int16 *)(v10
                                                                               + 2LL
                                                                               * (((v14 >> 4) & 0xF)
                                                                                + (unsigned int)*(unsigned __int16 *)(v10 + 2 * ((unsigned __int64)v14 >> 8)))))))
            : v14 - 32;
      else
        v15 = v14;
      v16 = *i;
      if ( *i >= 0x61u )
        v17 = v16 > 0x7Au
            ? (unsigned __int16)(v16
                               + *(_WORD *)(v10
                                          + 2LL
                                          * ((v16 & 0xF)
                                           + (unsigned int)*(unsigned __int16 *)(v10
                                                                               + 2LL
                                                                               * (((v16 >> 4) & 0xF)
                                                                                + (unsigned int)*(unsigned __int16 *)(v10 + 2 * ((unsigned __int64)v16 >> 8)))))))
            : v16 - 32;
      else
        v17 = v16;
      if ( v15 != v17 )
        break;
      a1 += 2;
    }
    if ( i == v7 && (v20 = *(_WORD *)a1, *(_WORD *)a1 == 61) )
    {
      v19 = 1;
    }
    else
    {
      v18 = *(_WORD *)a1;
      v19 = 0;
      if ( !*(_WORD *)a1 )
        goto LABEL_23;
      while ( v18 != 61 || a1 == v12 )
      {
        v18 = *((_WORD *)a1 + 1);
        a1 += 2;
        if ( !v18 )
          goto LABEL_23;
      }
      v20 = *(_WORD *)a1;
      if ( !*(_WORD *)a1 )
        goto LABEL_23;
    }
    v21 = a1;
    if ( v20 )
    {
      do
        a1 += 2;
      while ( *(_WORD *)a1 );
    }
    if ( a7 )
    {
      v22 = (v21 - v12) >> 1;
      if ( (unsigned __int64)(v22 - 1) <= 0x13 )
      {
        v23 = &RtlpEnvironLookupTable[14 * v22 - 14];
        v24 = (unsigned int)*v23;
        if ( (unsigned int)v24 < 3 )
        {
          v26 = (char **)(v23 + 2);
          v27 = (unsigned __int64)&v23[4 * v24 + 2];
          v28 = v23 + 2 == (_DWORD *)v27;
          if ( (unsigned __int64)(v23 + 2) < v27 )
          {
            do
            {
              if ( *v26 == v12 )
                break;
              v26 += 2;
            }
            while ( (unsigned __int64)v26 < v27 );
            v28 = v26 == (char **)v27;
          }
          if ( v28 )
          {
            *v26 = v12;
            v26[1] = a1 + 2;
            ++*v23;
            qword_180152FB0 = (__int64)(a1 + 2);
          }
        }
      }
    }
    if ( v19 )
      break;
LABEL_23:
    a1 += 2;
    if ( !*(_WORD *)a1 )
      goto LABEL_24;
  }
  v29 = v21 + 2;
  v30 = (a1 - v29) >> 1;
  if ( a4 )
  {
    if ( v30 < a5 )
    {
      v31 = v30;
      *a6 = v30;
      memmove(a4, v29, 2 * v30);
      a4[v31] = 0;
      return v11;
    }
    if ( a5 )
      *a4 = 0;
  }
  v11 = -1073741789;
  *a6 = v30 + 1;
  return v11;
}
