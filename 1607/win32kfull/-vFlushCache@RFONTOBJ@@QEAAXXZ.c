/*
 * XREFs of ?vFlushCache@RFONTOBJ@@QEAAXXZ @ 0x1C02D2DC0
 * Callers:
 *     xInsertGlyphbitsRFONTOBJ @ 0x1C00FCB98 (xInsertGlyphbitsRFONTOBJ.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C02D292C (-bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTOBJ::vFlushCache(RFONTOBJ *this)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  unsigned int v3; // r9d
  _QWORD *v4; // rcx
  _QWORD *i; // rax
  _QWORD *v6; // rcx
  _QWORD *j; // r8

  v1 = *(_QWORD *)this + 536LL;
  v2 = *(_QWORD *)(*(_QWORD *)this + 600LL);
  if ( v2 && *(_DWORD *)(*(_QWORD *)this + 584LL) == *(_DWORD *)(*(_QWORD *)this + 580LL) )
  {
    *(_QWORD *)(*(_QWORD *)this + 608LL) = v2;
    *(_QWORD *)(v1 + 80) = v2 + 8;
    *(_QWORD *)(v1 + 88) = *(unsigned int *)(v1 + 36) + v2 - 8;
  }
  v3 = *(_DWORD *)(*(_QWORD *)this + 652LL) != 0 ? 24 : 64;
  v4 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)this + 480LL) + 8LL);
  if ( v4 )
    *v4 = 0LL;
  for ( i = *(_QWORD **)(v1 + 24); i; i = (_QWORD *)*i )
  {
    if ( i == *(_QWORD **)(v1 + 24) )
    {
      v6 = *(_QWORD **)v1;
    }
    else if ( *i )
    {
      v6 = i + 228;
    }
    else
    {
      v6 = *(_QWORD **)(v1 + 16);
    }
    for ( j = i + 2; j < v6; j = (_QWORD *)((char *)j + v3) )
      *j = 0LL;
  }
}
