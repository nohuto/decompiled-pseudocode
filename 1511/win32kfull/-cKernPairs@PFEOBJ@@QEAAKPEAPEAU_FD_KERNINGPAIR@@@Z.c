/*
 * XREFs of ?cKernPairs@PFEOBJ@@QEAAKPEAPEAU_FD_KERNINGPAIR@@@Z @ 0x1C02B901C
 * Callers:
 *     GreGetKerningPairs @ 0x1C027F634 (GreGetKerningPairs.c)
 * Callees:
 *     ?QueryFontTree@PDEVOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C001CC24 (-QueryFontTree@PDEVOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 */

__int64 __fastcall PFEOBJ::cKernPairs(__int64 **this, struct _FD_KERNINGPAIR **a2)
{
  struct _FD_KERNINGPAIR *v4; // r8
  __int64 *v6; // r9
  __int64 v7; // rcx
  __int64 FontTree; // rax
  bool v9; // zf
  __int64 *v10; // rax
  _WORD *i; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  v4 = (struct _FD_KERNINGPAIR *)(*this)[6];
  *a2 = v4;
  if ( v4 )
    return *((unsigned int *)*this + 16);
  v6 = *this;
  v7 = **this;
  v14 = *(_QWORD *)(v7 + 88);
  FontTree = PDEVOBJ::QueryFontTree(
               (PDEVOBJ *)&v14,
               *(struct DHPDEV__ **)(v7 + 96),
               *(_QWORD *)(v7 + 80),
               *((_DWORD *)v6 + 2),
               2u,
               (unsigned __int64 *)v6 + 7);
  (*this)[6] = FontTree;
  v9 = FontTree == 0;
  v10 = *this;
  if ( v9 )
  {
    v10[6] = (__int64)&gkpNothing;
    *((_DWORD *)*this + 16) = 0;
    return 0LL;
  }
  else
  {
    for ( i = (_WORD *)v10[6]; *i || i[1] || i[2]; i += 3 )
      ;
    *a2 = (struct _FD_KERNINGPAIR *)(*this)[6];
    v12 = (unsigned __int128)(((__int64)i - (*this)[6]) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v13 = (v12 >> 63) + v12;
    *((_DWORD *)*this + 16) = v13;
    return (unsigned int)v13;
  }
}
