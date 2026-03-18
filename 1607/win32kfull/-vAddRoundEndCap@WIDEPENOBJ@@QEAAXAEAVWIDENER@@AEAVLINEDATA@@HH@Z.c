/*
 * XREFs of ?vAddRoundEndCap@WIDEPENOBJ@@QEAAXAEAVWIDENER@@AEAVLINEDATA@@HH@Z @ 0x1C02CAB34
 * Callers:
 *     ?vAddEndCap@WIDENER@@IEAAXXZ @ 0x1C02CA928 (-vAddEndCap@WIDENER@@IEAAXXZ.c)
 *     ?vAddStartCap@WIDENER@@IEAAXXZ @ 0x1C02CAEB8 (-vAddStartCap@WIDENER@@IEAAXXZ.c)
 * Callees:
 *     ?vAddNice@@YAXAEAVWIDEPATHOBJ@@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C02CAAB8 (-vAddNice@@YAXAEAVWIDEPATHOBJ@@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 */

void __fastcall WIDEPENOBJ::vAddRoundEndCap(WIDEPENOBJ *this, struct WIDENER *a2, struct LINEDATA *a3, int a4, int a5)
{
  WIDEPENOBJ *v7; // r13
  int v8; // esi
  _QWORD *v9; // r14
  int v10; // esi
  __int64 v11; // rdi
  struct EVECTORFX *i; // rdi
  __int64 v13; // rax
  struct EVECTORFX *v14; // r15

  v7 = this;
  if ( a4 )
    LOBYTE(v8) = ~*(_BYTE *)a3;
  else
    v8 = *(_DWORD *)a3;
  v9 = (_QWORD *)*((_QWORD *)a3 + 1);
  v10 = v8 & 1;
  v11 = *((_QWORD *)a3 + 2);
  if ( !a5 && *((_QWORD *)a3 + 3) <= *((_QWORD *)a3 + 4) )
    vAddNice(
      (struct WIDENER *)((char *)a2 + 1152),
      (struct _POINTFIX *)((char *)a2 + 692),
      *((struct EVECTORFX **)a3 + 2),
      v10);
  for ( i = (struct EVECTORFX *)(v11 + 8); ; i = (struct EVECTORFX *)(v9 + 4) )
  {
    v13 = *((_QWORD *)a3 + 1);
    if ( v9 == (_QWORD *)v13 && (unsigned __int64)i <= *((_QWORD *)a3 + 2) )
      break;
    v14 = (struct EVECTORFX *)&v9[(unsigned int)(*(_DWORD *)(v13 + 20) - 1) + 3];
    if ( i < v14 )
    {
      do
      {
        vAddNice((struct WIDENER *)((char *)a2 + 1152), (struct _POINTFIX *)((char *)a2 + 692), i, v10);
        i = (struct EVECTORFX *)((char *)i + 8);
      }
      while ( i < v14 );
      v7 = this;
    }
    v9 = (_QWORD *)*v9;
    if ( !v9 )
    {
      v9 = *(_QWORD **)(*((_QWORD *)v7 + 1) + 32LL);
      v10 = v10 == 0;
    }
  }
  for ( ; (unsigned __int64)i < *((_QWORD *)a3 + 2); i = (struct EVECTORFX *)((char *)i + 8) )
    vAddNice((struct WIDENER *)((char *)a2 + 1152), (struct _POINTFIX *)((char *)a2 + 692), i, v10);
  if ( !a5 && *((_QWORD *)a3 + 3) > *((_QWORD *)a3 + 4) )
    vAddNice((struct WIDENER *)((char *)a2 + 1152), (struct _POINTFIX *)((char *)a2 + 692), i, v10);
}
