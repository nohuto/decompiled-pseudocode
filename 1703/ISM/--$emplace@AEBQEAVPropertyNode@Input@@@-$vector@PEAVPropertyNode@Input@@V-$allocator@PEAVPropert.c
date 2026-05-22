/*
 * XREFs of ??$emplace@AEBQEAVPropertyNode@Input@@@?$vector@PEAVPropertyNode@Input@@V?$allocator@PEAVPropertyNode@Input@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVPropertyNode@Input@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVPropertyNode@Input@@@std@@@std@@@1@AEBQEAVPropertyNode@Input@@@Z @ 0x180028BA4
 * Callers:
 *     ?Insert@PropertyVector@Input@@IEAAJKPEAVPropertyNode@2@@Z @ 0x180028518 (-Insert@PropertyVector@Input@@IEAAJKPEAVPropertyNode@2@@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Xlength@?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x1800089E0 (-_Xlength@-$vector@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIInputTarget.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::vector<Input::PropertyNode *>::emplace<Input::PropertyNode * const &>(
        char **a1,
        _QWORD *a2,
        char *a3,
        _QWORD *a4)
{
  _QWORD *v5; // r15
  __int64 v7; // r12
  char *v8; // rsi
  char *v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r15
  _QWORD *v14; // r14
  size_t v15; // rcx
  void *v16; // rax
  _QWORD *v17; // r13
  char *v18; // rdx
  void *v19; // rcx
  size_t v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v24; // [rsp+20h] [rbp-48h]
  _QWORD *v26; // [rsp+88h] [rbp+20h]

  v26 = a4;
  v5 = a2;
  v7 = (a3 - *a1) >> 3;
  v8 = a1[1];
  v9 = a1[2];
  if ( v9 == v8 )
  {
    v10 = (v8 - *a1) >> 3;
    if ( v10 == 0x1FFFFFFFFFFFFFFFLL )
      std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::_Xlength();
    v24 = v10 + 1;
    v11 = (v9 - *a1) >> 3;
    v12 = v11 >> 1;
    if ( v11 <= 0x1FFFFFFFFFFFFFFFLL - (v11 >> 1) )
    {
      v13 = v11 + v12;
      if ( v11 + v12 < v10 + 1 )
        v13 = v10 + 1;
    }
    else
    {
      v13 = v10 + 1;
    }
    if ( v13 )
    {
      if ( v13 > 0x1FFFFFFFFFFFFFFFLL )
      {
        std::_Xbad_alloc();
        __debugbreak();
      }
      v15 = 8 * v13;
      if ( 8 * v13 < 0x1000 )
      {
        v14 = operator new(v15);
      }
      else
      {
        if ( v15 + 39 < v15 )
        {
          std::_Xbad_alloc();
          __debugbreak();
        }
        v16 = operator new(v15 + 39);
        v14 = (_QWORD *)(((unsigned __int64)v16 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v14 - 1) = v16;
      }
      a4 = v26;
    }
    else
    {
      v14 = 0LL;
    }
    try
    {
      v17 = &v14[v7];
      if ( v17 )
        *v17 = *a4;
      v18 = *a1;
      v19 = v14;
      if ( a3 == v8 )
      {
        v20 = a1[1] - v18;
      }
      else
      {
        memmove(v14, v18, a3 - *a1);
        v19 = v17 + 1;
        v20 = a1[1] - a3;
        v18 = a3;
      }
      memmove(v19, v18, v20);
    }
    catch ( ... )
    {
      std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>>>::deallocate(
        v21,
        (char *)v14,
        v13);
      throw;
    }
    if ( *a1 )
      std::_Deallocate(*a1, (a1[2] - *a1) >> 3, 8uLL);
    *a1 = (char *)v14;
    a1[1] = (char *)&v14[v24];
    a1[2] = (char *)&v14[v13];
    v5 = a2;
  }
  else if ( a3 == v8 )
  {
    if ( v8 )
      *(_QWORD *)v8 = *a4;
    a1[1] += 8;
  }
  else
  {
    v22 = *a4;
    if ( v8 )
      *(_QWORD *)v8 = *((_QWORD *)v8 - 1);
    a1[1] += 8;
    memmove(a3 + 8, a3, v8 - a3 - 8);
    *(_QWORD *)a3 = v22;
  }
  *v5 = &(*a1)[8 * v7];
  return v5;
}
