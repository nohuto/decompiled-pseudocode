/*
 * XREFs of _Getctype @ 0x18006BA14
 * Callers:
 *     ?_Getcat@?$ctype@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x18002318C (-_Getcat@-$ctype@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 * Callees:
 *     _GetLocaleName @ 0x18006DD6C (_GetLocaleName.c)
 */

_Ctypevec *__cdecl Getctype(_Ctypevec *__return_ptr retstr)
{
  const __int16 *v2; // rax
  const unsigned __int16 *v3; // rax
  __int16 *Table; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int128 v7; // xmm1
  const __int16 *v8; // rax

  retstr->_Page = *(_DWORD *)(___lc_handle_func() + 4);
  *(&retstr->_Page + 1) = ___lc_codepage_func();
  v2 = (const __int16 *)calloc(0x100uLL, 2uLL);
  retstr->_Table = v2;
  if ( v2 )
  {
    v3 = __pctype_func();
    Table = (__int16 *)retstr->_Table;
    v5 = 4LL;
    v6 = 128LL;
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
      v7 = *((_OWORD *)v3 + 7);
      v3 += 64;
      *((_OWORD *)Table - 1) = v7;
      --v5;
    }
    while ( v5 );
    retstr->_Delfl = 1;
  }
  else
  {
    v8 = (const __int16 *)__pctype_func();
    retstr->_Delfl = 0;
    retstr->_Table = v8;
  }
  retstr->_LocaleName = (wchar_t *)GetLocaleName(1LL, v5, v6);
  return retstr;
}
