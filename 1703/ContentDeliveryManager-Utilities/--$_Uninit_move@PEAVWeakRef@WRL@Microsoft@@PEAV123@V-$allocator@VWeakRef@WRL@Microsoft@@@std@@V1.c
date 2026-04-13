/*
 * XREFs of ??$_Uninit_move@PEAVWeakRef@WRL@Microsoft@@PEAV123@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@V123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x18003F584
 * Callers:
 *     ?_Reallocate@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x18003D4C0 (-_Reallocate@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@I.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Uninit_move<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *,std::allocator<Microsoft::WRL::WeakRef>,Microsoft::WRL::WeakRef>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v4; // rcx
  __int64 *i; // rbx
  __int64 *v6; // [rsp+50h] [rbp+18h]
  __int64 *v7; // [rsp+58h] [rbp+20h]

  v6 = a3;
  v7 = a3;
  try
  {
    while ( a1 != a2 )
    {
      if ( a3 )
      {
        *a3 = 0LL;
        if ( a3 != a1 )
        {
          *a3 = *a1;
          *a1 = 0LL;
        }
      }
      v6 = ++a3;
      ++a1;
    }
  }
  catch ( ... )
  {
    for ( i = v7; i != v6; ++i )
    {
      v4 = *i;
      if ( *i )
      {
        *i = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
    }
    throw;
  }
  return a3;
}
