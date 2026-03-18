/*
 * XREFs of ?STROBJ_bEnumPositionsOnlyLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1C02B5A7C
 * Callers:
 *     STROBJ_bEnumPositionsOnly @ 0x1C02B7380 (STROBJ_bEnumPositionsOnly.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall STROBJ_bEnumPositionsOnlyLinked(struct ESTROBJ *a1, unsigned int *a2, struct _GLYPHPOS **a3)
{
  int v3; // r11d
  unsigned int v4; // r9d
  _DWORD *v7; // rcx
  __int64 v8; // r10
  int v9; // r8d
  __int64 v11; // r8
  _DWORD *v12; // rcx
  int v13; // r10d

  v3 = *((_DWORD *)a1 + 13);
  v4 = 0;
  if ( v3 )
  {
    if ( v3 == *(_DWORD *)a1 )
    {
      *a2 = 0;
      return 0LL;
    }
    *((_QWORD *)a1 + 28) += 4LL;
    *((_QWORD *)a1 + 29) += 24LL;
    v11 = *((_QWORD *)a1 + 29);
    v12 = (_DWORD *)*((_QWORD *)a1 + 28);
    v13 = *((_DWORD *)a1 + 60);
    while ( *v12 != v13 )
    {
      v11 += 24LL;
      ++v12;
      *((_QWORD *)a1 + 29) = v11;
      *((_QWORD *)a1 + 28) = v12;
    }
  }
  else
  {
    v7 = (_DWORD *)*((_QWORD *)a1 + 27);
    v8 = *((_QWORD *)a1 + 9);
    v9 = *((_DWORD *)a1 + 60);
    while ( 1 )
    {
      *((_QWORD *)a1 + 28) = v7;
      *((_QWORD *)a1 + 29) = v8;
      if ( *v7 == v9 )
        break;
      v8 += 24LL;
      ++v7;
    }
  }
  *((_DWORD *)a1 + 13) = v3 + 1;
  *a2 = 1;
  *a3 = (struct _GLYPHPOS *)*((_QWORD *)a1 + 29);
  LOBYTE(v4) = *((_DWORD *)a1 + 13) < *(_DWORD *)a1;
  return v4;
}
