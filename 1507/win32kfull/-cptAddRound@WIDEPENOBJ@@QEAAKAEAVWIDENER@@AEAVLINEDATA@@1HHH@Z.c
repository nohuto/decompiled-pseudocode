/*
 * XREFs of ?cptAddRound@WIDEPENOBJ@@QEAAKAEAVWIDENER@@AEAVLINEDATA@@1HHH@Z @ 0x1C0002930
 * Callers:
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C0002794 (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     ?vAddLeftNice@WIDENER@@IEAAXPEAVEVECTORFX@@H@Z @ 0x1C02C82C8 (-vAddLeftNice@WIDENER@@IEAAXPEAVEVECTORFX@@H@Z.c)
 *     ?vAddNice@@YAXAEAVWIDEPATHOBJ@@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C02C82EC (-vAddNice@@YAXAEAVWIDEPATHOBJ@@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
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
  __int64 *v13; // rsi
  int v14; // ebp
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
  v13 = (__int64 *)*((_QWORD *)a3 + 1);
  v14 = *(_DWORD *)a3 & 1;
  if ( a5 )
  {
    if ( a6 && *((_QWORD *)a3 + 3) <= *((_QWORD *)a3 + 4) )
      vAddNice(
        (struct WIDENER *)((char *)a2 + 1152),
        (struct _POINTFIX *)((char *)a2 + 692),
        *((struct EVECTORFX **)a3 + 2),
        v14);
    for ( i = (struct EVECTORFX *)((char *)v7 + 8);
          v13 != *((__int64 **)v9 + 1) || (unsigned __int64)i > *((_QWORD *)v9 + 2) || v14 != (*(_DWORD *)v9 & 1);
          i = (struct EVECTORFX *)(v13 + 4) )
    {
      v17 = (unsigned __int64)&v13[(unsigned int)(*(_DWORD *)(*((_QWORD *)v10 + 1) + 20LL) - 1) + 3];
      if ( (unsigned __int64)i < v17 )
      {
        v8 += ((v17 - (unsigned __int64)i - 1) >> 3) + 1;
        do
        {
          vAddNice((struct WIDENER *)((char *)a2 + 1152), (struct _POINTFIX *)((char *)a2 + 692), i, v14);
          i = (struct EVECTORFX *)((char *)i + 8);
        }
        while ( (unsigned __int64)i < v17 );
        v9 = a4;
        v10 = a3;
      }
      v13 = (__int64 *)*v13;
      if ( !v13 )
      {
        v13 = *(__int64 **)(*((_QWORD *)this + 1) + 32LL);
        v14 = v14 == 0;
      }
    }
    while ( (unsigned __int64)i < *((_QWORD *)v9 + 2) )
    {
      vAddNice((struct WIDENER *)((char *)a2 + 1152), (struct _POINTFIX *)((char *)a2 + 692), i, v14);
      i = (struct EVECTORFX *)((char *)i + 8);
      ++v8;
    }
    if ( a7 )
    {
      if ( *((_QWORD *)v9 + 3) > *((_QWORD *)v9 + 4) )
        vAddNice((struct WIDENER *)((char *)a2 + 1152), (struct _POINTFIX *)((char *)a2 + 692), i, v14);
    }
  }
  else
  {
    if ( a6 && *((_QWORD *)a3 + 3) > *((_QWORD *)a3 + 4) )
      WIDENER::vAddLeftNice(a2, v7, v14);
    for ( j = (struct EVECTORFX *)((char *)v7 - 8);
          v13 != *((__int64 **)v9 + 1) || (unsigned __int64)j < *((_QWORD *)v9 + 2) || v14 != (*(_DWORD *)v9 & 1);
          j = (struct EVECTORFX *)&v13[(unsigned int)(*((_DWORD *)v13 + 5) - 1) + 3] )
    {
      v19 = (unsigned __int64)(v13 + 4);
      if ( j > (struct EVECTORFX *)(v13 + 4) )
      {
        v8 += (((unsigned __int64)j - v19 - 1) >> 3) + 1;
        do
        {
          WIDENER::vAddLeftNice(a2, j, v14);
          j = (struct EVECTORFX *)((char *)j - 8);
        }
        while ( (unsigned __int64)j > v19 );
      }
      v13 = (__int64 *)v13[1];
      if ( !v13 )
      {
        v13 = *(__int64 **)(*((_QWORD *)this + 1) + 40LL);
        v14 = v14 == 0;
      }
    }
    while ( (unsigned __int64)j > *((_QWORD *)v9 + 2) )
    {
      WIDENER::vAddLeftNice(a2, j, v14);
      j = (struct EVECTORFX *)((char *)j - 8);
      ++v8;
    }
    if ( a7 && *((_QWORD *)v9 + 3) <= *((_QWORD *)v9 + 4) )
      WIDENER::vAddLeftNice(a2, j, v14);
  }
  return v8;
}
