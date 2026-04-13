/*
 * XREFs of _Getctype @ 0x180023E04
 * Callers:
 *     ?_Getcat@?$ctype@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x18000A8A4 (-_Getcat@-$ctype@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 * Callees:
 *     _GetLocaleName @ 0x180024590 (_GetLocaleName.c)
 */

_Ctypevec *__cdecl Getctype(_Ctypevec *__return_ptr retstr)
{
  const __int16 *v2; // rax
  const unsigned __int16 *v3; // rax
  __int16 *Table; // rcx
  __int64 v5; // rdx
  __int128 v6; // xmm1
  const __int16 *v7; // rax

  retstr->_Page = *(_DWORD *)(___lc_handle_func() + 4);
  *(&retstr->_Page + 1) = ___lc_codepage_func();
  v2 = (const __int16 *)calloc(0x100uLL, 2uLL);
  retstr->_Table = v2;
  if ( v2 )
  {
    v3 = __pctype_func();
    Table = (__int16 *)retstr->_Table;
    v5 = 4LL;
    do
    {
      *(_OWORD *)Table = *(_OWORD *)v3;
      *((_OWORD *)Table + 1) = *((_OWORD *)v3 + 1);
      *((_OWORD *)Table + 2) = *((_OWORD *)v3 + 2);
      *((_OWORD *)Table + 3) = *((_OWORD *)v3 + 3);
      *((_OWORD *)Table + 4) = *((_OWORD *)v3 + 4);
      *((_OWORD *)Table + 5) = *((_OWORD *)v3 + 5);
      *((_OWORD *)Table + 6) = *((_OWORD *)v3 + 6);
      Table += 64;
      v6 = *((_OWORD *)v3 + 7);
      v3 += 64;
      *((_OWORD *)Table - 1) = v6;
      --v5;
    }
    while ( v5 );
    retstr->_Delfl = 1;
  }
  else
  {
    v7 = (const __int16 *)__pctype_func();
    retstr->_Delfl = 0;
    retstr->_Table = v7;
  }
  retstr->_LocaleName = (wchar_t *)GetLocaleName(1LL);
  return retstr;
}
