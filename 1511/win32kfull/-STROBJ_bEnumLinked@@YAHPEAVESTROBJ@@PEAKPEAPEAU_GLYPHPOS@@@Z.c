/*
 * XREFs of ?STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1C0107344
 * Callers:
 *     STROBJ_bEnum @ 0x1C0107280 (STROBJ_bEnum.c)
 * Callees:
 *     ?cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C0026418 (-cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 */

__int64 __fastcall STROBJ_bEnumLinked(struct ESTROBJ *a1, unsigned int *a2, struct _GLYPHPOS **a3)
{
  int v3; // eax
  unsigned int v4; // edi
  _DWORD *v8; // rax
  __int64 v9; // rcx
  int v10; // edx
  RFONTOBJ *v11; // rcx
  _DWORD *v13; // rax
  int v14; // edx
  __int64 i; // rcx

  v3 = *((_DWORD *)a1 + 12);
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
    v8 = (_DWORD *)*((_QWORD *)a1 + 28);
    v9 = *((_QWORD *)a1 + 29);
    v10 = *((_DWORD *)a1 + 60);
    while ( *v8 != v10 )
    {
      v9 += 24LL;
      ++v8;
      *((_QWORD *)a1 + 29) = v9;
      *((_QWORD *)a1 + 28) = v8;
    }
  }
  else
  {
    v13 = (_DWORD *)*((_QWORD *)a1 + 27);
    v14 = *((_DWORD *)a1 + 60);
    *((_QWORD *)a1 + 28) = v13;
    for ( i = *((_QWORD *)a1 + 9); ; i += 24LL )
    {
      *((_QWORD *)a1 + 29) = i;
      if ( *v13 == v14 )
        break;
      *((_QWORD *)a1 + 28) = ++v13;
    }
  }
  v11 = (RFONTOBJ *)*((_QWORD *)a1 + 7);
  if ( v11 && RFONTOBJ::cGetGlyphData(v11, 1u, *((struct _GLYPHPOS **)a1 + 29)) )
  {
    ++*((_DWORD *)a1 + 12);
    *a2 = 1;
    *a3 = (struct _GLYPHPOS *)*((_QWORD *)a1 + 29);
    LOBYTE(v4) = *((_DWORD *)a1 + 12) < *(_DWORD *)a1;
    return v4;
  }
  *a2 = 0;
  return 0LL;
}
