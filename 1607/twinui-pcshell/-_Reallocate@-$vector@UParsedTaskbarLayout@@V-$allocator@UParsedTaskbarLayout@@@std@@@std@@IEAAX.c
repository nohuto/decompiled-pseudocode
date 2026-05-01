/*
 * XREFs of ?_Reallocate@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@IEAAX_K@Z @ 0x18000BDE8
 * Callers:
 *     ?_Reserve@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@IEAAX_K@Z @ 0x18000BB8C (-_Reserve@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@IEAAX_K@.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180008DF0 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ??1SelectionData@StartLayout@@QEAA@XZ @ 0x180009C8C (--1SelectionData@StartLayout@@QEAA@XZ.c)
 *     ??$_Uninit_move@PEAUParsedTaskbarLayout@@PEAU1@V?$allocator@UParsedTaskbarLayout@@@std@@U1@@std@@YAPEAUParsedTaskbarLayout@@PEAU1@00AEAU?$_Wrap_alloc@V?$allocator@UParsedTaskbarLayout@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x18000C7AC (--$_Uninit_move@PEAUParsedTaskbarLayout@@PEAU1@V-$allocator@UParsedTaskbarLayout@@@std@@U1@@std@.c)
 *     ??3@YAXPEAX@Z @ 0x18002F080 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall std::vector<ParsedTaskbarLayout>::_Reallocate(char **a1, unsigned __int64 a2)
{
  char *v4; // rax
  char *v5; // rsi
  __int64 v6; // rcx
  char *v7; // r13
  char *v8; // rbx
  __int64 v9; // r12
  unsigned __int64 i; // r14
  __int64 v11; // rcx
  char *v12; // r8
  signed __int64 v13; // rcx
  char *v14; // rax
  unsigned __int64 v15; // r8
  char *result; // rax
  char *v17; // [rsp+70h] [rbp+8h]

  v4 = (char *)std::_Allocate(a2, 0x68uLL);
  v5 = v4;
  v17 = v4;
  try
  {
    std::_Uninit_move<ParsedTaskbarLayout *,ParsedTaskbarLayout *,std::allocator<ParsedTaskbarLayout>,ParsedTaskbarLayout>(
      *a1,
      a1[1],
      v4);
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<ParsedTaskbarLayout>>::deallocate(v6, v17, a2);
    throw;
  }
  v7 = a1[1];
  v8 = *a1;
  v9 = (v7 - *a1) / 104;
  if ( *a1 )
  {
    while ( v8 != v7 )
    {
      StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)(v8 + 32));
      if ( *(_QWORD *)v8 )
      {
        for ( i = 0LL; i < *((_QWORD *)v8 + 1); ++i )
        {
          v11 = *(_QWORD *)(*(_QWORD *)v8 + 8 * i);
          if ( v11 )
          {
            *(_QWORD *)(*(_QWORD *)v8 + 8 * i) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          }
        }
        CoTaskMemFree(*(LPVOID *)v8);
        *(_QWORD *)v8 = 0LL;
      }
      *((_QWORD *)v8 + 1) = 0LL;
      *((_QWORD *)v8 + 3) = 0LL;
      v8 += 104;
    }
    v12 = *a1;
    v13 = a1[2] - *a1;
    if ( (unsigned __int64)(v13 / 104) > 0x276276276276276LL )
    {
      _o__invalid_parameter_noinfo_noreturn(v13);
      __debugbreak();
    }
    if ( (unsigned __int64)(104 * (v13 / 104)) >= 0x1000 )
    {
      if ( ((unsigned __int8)v12 & 0x1F) != 0 )
      {
        _o__invalid_parameter_noinfo_noreturn(v13);
        __debugbreak();
      }
      v14 = (char *)*((_QWORD *)v12 - 1);
      if ( v14 >= v12 )
      {
        _o__invalid_parameter_noinfo_noreturn(v13);
        __debugbreak();
      }
      v15 = v12 - v14;
      if ( v15 < 8 )
      {
        _o__invalid_parameter_noinfo_noreturn(v13);
        __debugbreak();
      }
      if ( v15 > 0x27 )
      {
        _o__invalid_parameter_noinfo_noreturn(v13);
        __debugbreak();
      }
      v12 = v14;
    }
    operator delete(v12);
  }
  a1[2] = &v5[104 * a2];
  result = &v5[104 * v9];
  a1[1] = result;
  *a1 = v5;
  return result;
}
