/*
 * XREFs of IsAnyCharsetDbcs @ 0x1401018D0
 * Callers:
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x140101384 (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsAnyCharsetDbcs(__int64 a1)
{
  char v1; // al
  unsigned __int8 v2; // al
  int v3; // r9d
  __int64 v5; // rax
  char *v6; // rcx
  char *v7; // r8
  char v8; // dl

  v1 = *(_BYTE *)(a1 + 44);
  if ( v1 == (char)0x80 )
    return 1LL;
  v2 = v1 + 127;
  v3 = 161;
  if ( v2 <= 7u )
  {
    if ( _bittest(&v3, v2) )
      return 1LL;
  }
  v5 = *(int *)(a1 + 40);
  if ( (_DWORD)v5 )
  {
    v6 = (char *)(v5 + a1);
    v7 = v6 + 16;
    while ( v6 < v7 )
    {
      v8 = *v6;
      if ( *v6 == (char)0x80 || (unsigned __int8)(v8 + 127) <= 7u && _bittest(&v3, (unsigned __int8)(v8 + 127)) )
        return 1LL;
      if ( v8 == 1 )
        return 0LL;
      ++v6;
    }
  }
  return 0LL;
}
