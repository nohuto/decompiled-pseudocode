/*
 * XREFs of ?cptAddRound@WIDEPENOBJ@@QEAAKAEAVWIDENER@@AEAVLINEDATA@@1HHH@Z @ 0x1C02CA534
 * Callers:
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C02CAC80 (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     ?vAddLeftNice@WIDENER@@IEAAXPEAVEVECTORFX@@H@Z @ 0x1C02CAA94 (-vAddLeftNice@WIDENER@@IEAAXPEAVEVECTORFX@@H@Z.c)
 *     ?vAddNice@@YAXAEAVWIDEPATHOBJ@@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C02CAAB8 (-vAddNice@@YAXAEAVWIDEPATHOBJ@@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 */

__int64 __fastcall WIDEPENOBJ::cptAddRound(
        WIDEPENOBJ *this,
        struct WIDENER *a2,
        struct LINEDATA *a3,
        struct LINEDATA *a4,
        int a5,
        int a6,
        int a7)
{
  struct EVECTORFX *v7; // rbx
  unsigned int v8; // r12d
  struct LINEDATA *v9; // rdi
  struct LINEDATA *v10; // r15
  __int64 *v14; // rsi
  int v15; // ebp
  struct EVECTORFX *i; // rbx
  unsigned __int64 v17; // r13
  struct EVECTORFX *j; // rbx
  unsigned __int64 v19; // r15

  v7 = (struct EVECTORFX *)*((_QWORD *)a3 + 2);
  v8 = 0;
  v9 = a4;
  v10 = a3;
  if ( v7 == *((struct EVECTORFX **)a4 + 2) && ((*(_BYTE *)a4 ^ *(_BYTE *)a3) & 1) == 0 )
    return 0LL;
  v14 = (__int64 *)*((_QWORD *)a3 + 1);
  v15 = *(_DWORD *)a3 & 1;
  if ( a5 )
  {
    if ( a6 && *((_QWORD *)a3 + 3) <= *((_QWORD *)a3 + 4) )
      vAddNice(
        (struct WIDENER *)((char *)a2 + 1152),
        (struct _POINTFIX *)((char *)a2 + 692),
        *((struct EVECTORFX **)a3 + 2),
        v15);
    for ( i = (struct EVECTORFX *)((char *)v7 + 8);
          v14 != *((__int64 **)v9 + 1) || (unsigned __int64)i > *((_QWORD *)v9 + 2) || v15 != (*(_DWORD *)v9 & 1);
          i = (struct EVECTORFX *)(v14 + 4) )
    {
      v17 = (unsigned __int64)&v14[(unsigned int)(*(_DWORD *)(*((_QWORD *)v10 + 1) + 20LL) - 1) + 3];
      if ( (unsigned __int64)i < v17 )
      {
        v8 += ((v17 - (unsigned __int64)i - 1) >> 3) + 1;
        do
        {
          vAddNice((struct WIDENER *)((char *)a2 + 1152), (struct _POINTFIX *)((char *)a2 + 692), i, v15);
          i = (struct EVECTORFX *)((char *)i + 8);
        }
        while ( (unsigned __int64)i < v17 );
        v9 = a4;
        v10 = a3;
      }
      v14 = (__int64 *)*v14;
      if ( !v14 )
      {
        v14 = *(__int64 **)(*((_QWORD *)this + 1) + 32LL);
        v15 = v15 == 0;
      }
    }
    while ( (unsigned __int64)i < *((_QWORD *)v9 + 2) )
    {
      vAddNice((struct WIDENER *)((char *)a2 + 1152), (struct _POINTFIX *)((char *)a2 + 692), i, v15);
      i = (struct EVECTORFX *)((char *)i + 8);
      ++v8;
    }
    if ( a7 && *((_QWORD *)v9 + 3) > *((_QWORD *)v9 + 4) )
      vAddNice((struct WIDENER *)((char *)a2 + 1152), (struct _POINTFIX *)((char *)a2 + 692), i, v15);
  }
  else
  {
    if ( a6 && *((_QWORD *)a3 + 3) > *((_QWORD *)a3 + 4) )
      WIDENER::vAddLeftNice(a2, v7, v15);
    for ( j = (struct EVECTORFX *)((char *)v7 - 8);
          v14 != *((__int64 **)v9 + 1) || (unsigned __int64)j < *((_QWORD *)v9 + 2) || v15 != (*(_DWORD *)v9 & 1);
          j = (struct EVECTORFX *)&v14[(unsigned int)(*((_DWORD *)v14 + 5) - 1) + 3] )
    {
      v19 = (unsigned __int64)(v14 + 4);
      if ( j > (struct EVECTORFX *)(v14 + 4) )
      {
        v8 += (((unsigned __int64)j - v19 - 1) >> 3) + 1;
        do
        {
          WIDENER::vAddLeftNice(a2, j, v15);
          j = (struct EVECTORFX *)((char *)j - 8);
        }
        while ( (unsigned __int64)j > v19 );
      }
      v14 = (__int64 *)v14[1];
      if ( !v14 )
      {
        v14 = *(__int64 **)(*((_QWORD *)this + 1) + 40LL);
        v15 = v15 == 0;
      }
    }
    while ( (unsigned __int64)j > *((_QWORD *)v9 + 2) )
    {
      WIDENER::vAddLeftNice(a2, j, v15);
      j = (struct EVECTORFX *)((char *)j - 8);
      ++v8;
    }
    if ( a7 && *((_QWORD *)v9 + 3) <= *((_QWORD *)v9 + 4) )
      WIDENER::vAddLeftNice(a2, j, v15);
  }
  return v8;
}
