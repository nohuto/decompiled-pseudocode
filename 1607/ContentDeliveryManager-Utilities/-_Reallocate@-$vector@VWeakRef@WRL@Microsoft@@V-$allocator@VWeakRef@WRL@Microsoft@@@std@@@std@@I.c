/*
 * XREFs of ?_Reallocate@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x180037E40
 * Callers:
 *     ?_Reserve@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x180037B50 (-_Reserve@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 * Callees:
 *     ??$_Uninit_move@PEAVWeakRef@WRL@Microsoft@@PEAV123@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@V123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x180039E20 (--$_Uninit_move@PEAVWeakRef@WRL@Microsoft@@PEAV123@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@V1.c)
 *     ??2@YAPEAX_K@Z @ 0x1800538BC (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180053AE8 (-_Xbad_alloc@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall std::vector<Microsoft::WRL::WeakRef>::_Reallocate(__int64 **a1, unsigned __int64 a2)
{
  char *v4; // rbx
  __int64 v5; // rcx
  __int64 *v6; // r12
  __int64 *v7; // rsi
  __int64 v8; // r15
  __int64 v9; // rcx
  char *result; // rax
  void *v11; // [rsp+68h] [rbp+10h]

  v4 = 0LL;
  v11 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL || (v4 = (char *)operator new(8 * a2), (v11 = v4) == 0LL) )
      std::_Xbad_alloc();
  }
  try
  {
    std::_Uninit_move<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *,std::allocator<Microsoft::WRL::WeakRef>,Microsoft::WRL::WeakRef>(
      *a1,
      a1[1],
      v4);
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::wstring>,void *>>>::deallocate(
      v5,
      v11);
    throw;
  }
  v6 = a1[1];
  v7 = *a1;
  v8 = v6 - *a1;
  if ( *a1 )
  {
    while ( v7 != v6 )
    {
      v9 = *v7;
      if ( *v7 )
      {
        *v7 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      ++v7;
    }
    operator delete(*a1);
  }
  a1[2] = (__int64 *)&v4[8 * a2];
  result = &v4[8 * v8];
  a1[1] = (__int64 *)result;
  *a1 = (__int64 *)v4;
  return result;
}
