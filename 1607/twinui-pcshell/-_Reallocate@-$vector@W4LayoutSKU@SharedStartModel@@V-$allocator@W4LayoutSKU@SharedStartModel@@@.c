/*
 * XREFs of ?_Reallocate@?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@IEAAX_K@Z @ 0x18000C00C
 * Callers:
 *     ?push_back@?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAAXAEBW4LayoutSKU@SharedStartModel@@@Z @ 0x18000B788 (-push_back@-$vector@W4LayoutSKU@SharedStartModel@@V-$allocator@W4LayoutSKU@SharedStartModel@@@st.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180008DF0 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002F080 (--3@YAXPEAX@Z.c)
 */

char *__fastcall std::vector<enum SharedStartModel::LayoutSKU>::_Reallocate(__int64 a1, unsigned __int64 a2)
{
  char *v4; // rax
  char *v5; // rsi
  __int64 v6; // rcx
  char *v7; // rcx
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  char *v10; // rax
  unsigned __int64 v11; // rcx
  char *result; // rax
  char *v13; // [rsp+50h] [rbp+8h]

  v4 = (char *)std::_Allocate(a2, 4uLL);
  v5 = v4;
  v13 = v4;
  try
  {
    memmove(v4, *(const void **)a1, (*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFFCuLL);
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<enum SharedStartModel::LayoutSKU>>::deallocate(v6, v13, a2);
    throw;
  }
  v7 = *(char **)a1;
  v8 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2;
  if ( *(_QWORD *)a1 )
  {
    v9 = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v7) >> 2;
    if ( v9 > 0x3FFFFFFFFFFFFFFFLL )
    {
      _o__invalid_parameter_noinfo_noreturn(v7);
      __debugbreak();
    }
    if ( 4 * v9 >= 0x1000 )
    {
      if ( ((unsigned __int8)v7 & 0x1F) != 0 )
      {
        _o__invalid_parameter_noinfo_noreturn(v7);
        __debugbreak();
      }
      v10 = (char *)*((_QWORD *)v7 - 1);
      if ( v10 >= v7 )
      {
        _o__invalid_parameter_noinfo_noreturn(v7);
        __debugbreak();
      }
      v11 = v7 - v10;
      if ( v11 < 8 )
      {
        _o__invalid_parameter_noinfo_noreturn(v11);
        __debugbreak();
      }
      if ( v11 > 0x27 )
      {
        _o__invalid_parameter_noinfo_noreturn(v11);
        __debugbreak();
      }
      v7 = v10;
    }
    operator delete(v7);
  }
  *(_QWORD *)(a1 + 16) = &v5[4 * a2];
  result = &v5[4 * v8];
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)a1 = v5;
  return result;
}
