/*
 * XREFs of ??$_Uninit_fill_n@PEAVWeakRef@WRL@Microsoft@@_KV123@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@V123@@std@@YAXPEAVWeakRef@WRL@Microsoft@@_KPEBV123@AEAU?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x1800281B4
 * Callers:
 *     ?_Insert_n@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@_KAEBVWeakRef@WRL@Microsoft@@@Z @ 0x180027EBC (-_Insert_n@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall std::_Uninit_fill_n<Microsoft::WRL::WeakRef *,unsigned __int64,Microsoft::WRL::WeakRef,std::allocator<Microsoft::WRL::WeakRef>,Microsoft::WRL::WeakRef>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  _UNKNOWN **result; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *i; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  _QWORD *v9; // [rsp+40h] [rbp+8h]
  _QWORD *v10; // [rsp+58h] [rbp+20h]

  result = &retaddr;
  v9 = a1;
  v5 = a2;
  v6 = a1;
  v10 = a1;
  try
  {
    if ( a2 )
    {
      do
      {
        if ( v6 )
        {
          a1 = (_QWORD *)*a3;
          *v6 = *a3;
          if ( a1 )
            result = (_UNKNOWN **)(*(__int64 (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
        }
        v9 = ++v6;
        --v5;
      }
      while ( v5 );
    }
  }
  catch ( ... )
  {
    for ( i = v10; i != v9; ++i )
      std::_Wrap_alloc<std::allocator<Microsoft::WRL::WeakRef>>::destroy<Microsoft::WRL::WeakRef>(a1, i);
    throw;
  }
  return result;
}
