/*
 * XREFs of ??$_Uninit_fill_n@PEAVWeakRef@WRL@Microsoft@@_KV123@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@V123@@std@@YAXPEAVWeakRef@WRL@Microsoft@@_KPEBV123@AEAU?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x18002A6C8
 * Callers:
 *     ?_Insert_n@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@_KAEBVWeakRef@WRL@Microsoft@@@Z @ 0x18002A3A0 (-_Insert_n@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEA.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

_UNKNOWN **__fastcall std::_Uninit_fill_n<Microsoft::WRL::WeakRef *,unsigned __int64,Microsoft::WRL::WeakRef,std::allocator<Microsoft::WRL::WeakRef>,Microsoft::WRL::WeakRef>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  _UNKNOWN **result; // rax
  __int64 v5; // rsi
  __int64 *v6; // rdi
  __int64 v7; // r14
  __int64 *i; // rbx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  __int64 *v10; // [rsp+50h] [rbp+8h]

  result = &retaddr;
  v10 = a1;
  v5 = a2;
  v6 = a1;
  try
  {
    if ( a2 )
    {
      do
      {
        if ( v6 )
        {
          v7 = *a3;
          *v6 = *a3;
          if ( v7 )
            result = (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        }
        v10 = ++v6;
        --v5;
      }
      while ( v5 );
    }
  }
  catch ( ... )
  {
    for ( i = a1; i != v10; ++i )
      Microsoft::WRL::ComPtr<IWeakReference>::InternalRelease(i);
    throw;
  }
  return result;
}
