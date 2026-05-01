/*
 * XREFs of ?_Reallocate@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@IEAAX_K@Z @ 0x180008650
 * Callers:
 *     ?push_back@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAAX$$QEAU?$pair@PEBGPEBG@2@@Z @ 0x180008220 (-push_back@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAAX$$QEA.c)
 * Callees:
 *     ??$_Uninit_copy@PEBU?$pair@PEBGPEBG@std@@PEAU12@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@YAPEAU?$pair@PEBGPEBG@0@PEBU10@0PEAU10@AEAU?$_Wrap_alloc@V?$allocator@U?$pair@PEBGPEBG@std@@@std@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x180008C70 (--$_Uninit_copy@PEBU-$pair@PEBGPEBG@std@@PEAU12@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@YAPE.c)
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180008DF0 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002F080 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Reallocate(
        char **a1,
        unsigned __int64 a2,
        bool a3)
{
  char *v5; // rax
  char *v6; // r14
  __int64 v7; // rcx
  char *v8; // rcx
  signed __int64 v9; // rbx
  unsigned __int64 v10; // rax
  char *v11; // rax
  unsigned __int64 v12; // rcx
  char *v13; // [rsp+60h] [rbp+8h]

  v5 = (char *)std::_Allocate(a2, 0x10uLL, a3);
  v6 = v5;
  v13 = v5;
  try
  {
    std::_Uninit_copy<std::pair<unsigned short const *,unsigned short const *> const *,std::pair<unsigned short const *,unsigned short const *> *,std::allocator<std::pair<unsigned short const *,unsigned short const *>>>(
      *a1,
      a1[1],
      v5);
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::pair<unsigned short const *,unsigned short const *>>>::deallocate(v7, v13, a2);
    throw;
  }
  v8 = *a1;
  v9 = a1[1] - *a1;
  if ( *a1 )
  {
    v10 = (a1[2] - v8) >> 4;
    if ( v10 > 0xFFFFFFFFFFFFFFFLL )
    {
      _o__invalid_parameter_noinfo_noreturn();
      __debugbreak();
    }
    if ( 16 * v10 >= 0x1000 )
    {
      if ( ((unsigned __int8)v8 & 0x1F) != 0 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        __debugbreak();
      }
      v11 = (char *)*((_QWORD *)v8 - 1);
      if ( v11 >= v8 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        __debugbreak();
      }
      v12 = v8 - v11;
      if ( v12 < 8 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        __debugbreak();
      }
      if ( v12 > 0x27 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        __debugbreak();
      }
      v8 = v11;
    }
    operator delete(v8);
  }
  a1[2] = &v6[16 * a2];
  a1[1] = &v6[v9 & 0xFFFFFFFFFFFFFFF0uLL];
  *a1 = v6;
}
