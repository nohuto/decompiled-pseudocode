/*
 * XREFs of ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18000A628
 * Callers:
 *     ?_Init@?$_Hash@V?$_Umap_traits@IUtagInputRoutingInfo@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A4BC (-_Init@-$_Hash@V-$_Umap_traits@IUtagInputRoutingInfo@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Xlength@?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x1800089E0 (-_Xlength@-$vector@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIInputTarget.c)
 *     ??$_Uninit_alloc_fill_n1@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@std@@_KU?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@std@@@std@@@2@@std@@YAPEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@0@PEAV10@_KAEBV10@AEAU?$_Wrap_alloc@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@@0@U?$integral_constant@_N$0A@@0@@Z @ 0x18000A950 (--$_Uninit_alloc_fill_n1@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pa.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 */

void __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>>>>>>::assign(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  char *v3; // r9
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r10
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  size_t v11; // rdi
  void *v12; // rax
  _QWORD *v13; // rcx
  char *v14; // rcx
  __int64 v15; // rbx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  char *v19; // r10
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx

  v3 = *(char **)a1;
  v6 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( a2 > v6 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::_Xlength();
    v9 = v6 >> 1;
    if ( v6 <= 0x1FFFFFFFFFFFFFFFLL - (v6 >> 1) )
    {
      v10 = v9 + v6;
      if ( v9 + v6 < a2 )
        v10 = a2;
    }
    else
    {
      v10 = a2;
    }
    if ( v3 )
      std::_Deallocate(v3, v6, 8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( v10 )
    {
      if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
        std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::_Xlength();
      v11 = 8 * v10;
      if ( v11 < 0x1000 )
      {
        v13 = operator new(v11);
      }
      else
      {
        if ( v11 + 39 < v11 )
        {
          std::_Xbad_alloc();
          __debugbreak();
        }
        v12 = operator new(v11 + 39);
        v13 = (_QWORD *)(((unsigned __int64)v12 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v13 - 1) = v12;
      }
      *(_QWORD *)a1 = v13;
      *(_QWORD *)(a1 + 8) = v13;
      *(_QWORD *)(a1 + 16) = v11 + *(_QWORD *)a1;
    }
    v14 = *(char **)a1;
LABEL_31:
    *(_QWORD *)(a1 + 8) = std::_Uninit_alloc_fill_n1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>> *,unsigned __int64,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>>>(
                            v14,
                            a2,
                            a3);
    return;
  }
  v15 = 0LL;
  if ( a2 > v7 )
  {
    v16 = (unsigned __int64)(*(_QWORD *)(a1 + 8) - (_QWORD)v3 + 7LL) >> 3;
    if ( (unsigned __int64)v3 > *(_QWORD *)(a1 + 8) )
      v16 = 0LL;
    if ( v16 )
    {
      if ( v16 >= 2 && (v3 > (char *)a3 || &v3[8 * v16 - 8] < (char *)a3) )
      {
        v17 = v16 & 0xFFFFFFFFFFFFFFFEuLL;
        do
          v15 += 2LL;
        while ( v15 != v17 );
        v18 = 8 * ((v17 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
        memset64(v3, *a3, v18 >> 3);
        v3 += v18;
      }
      while ( v15 != v16 )
      {
        ++v15;
        *(_QWORD *)v3 = *a3;
        v3 += 8;
      }
    }
    v14 = *(char **)(a1 + 8);
    a2 -= v7;
    goto LABEL_31;
  }
  v19 = &v3[8 * a2];
  v20 = (8 * a2 + 7) >> 3;
  if ( v3 > v19 )
    v20 = 0LL;
  if ( v20 )
  {
    if ( v20 >= 2 && (v3 > (char *)a3 || &v3[8 * v20 - 8] < (char *)a3) )
    {
      v21 = v20 & 0xFFFFFFFFFFFFFFFEuLL;
      do
        v15 += 2LL;
      while ( v15 != v21 );
      v22 = 8 * ((v21 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
      memset64(v3, *a3, v22 >> 3);
      v3 += v22;
    }
    while ( v15 != v20 )
    {
      ++v15;
      *(_QWORD *)v3 = *a3;
      v3 += 8;
    }
  }
  *(_QWORD *)(a1 + 8) = v19;
}
