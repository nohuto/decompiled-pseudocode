/*
 * XREFs of ??$_Uninitialized_copy_al_unchecked1@PEAUInputProvider@@PEAU1@V?$allocator@UInputProvider@@@std@@@std@@YAPEAUInputProvider@@PEAU1@00AEAU?$_Wrap_alloc@V?$allocator@UInputProvider@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x18002C78C
 * Callers:
 *     ??$emplace_back@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAAX$$QEAUInputProvider@@@Z @ 0x18002C5A4 (--$emplace_back@UInputProvider@@@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@std@@@st.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::_Uninitialized_copy_al_unchecked1<InputProvider *,InputProvider *,std::allocator<InputProvider>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v3; // rbx
  __int64 v6; // rcx
  __int64 *v8; // [rsp+60h] [rbp+18h]

  v8 = a3;
  v3 = a3;
  try
  {
    while ( a1 != a2 )
    {
      if ( v3 )
      {
        *(_OWORD *)v3 = *(_OWORD *)a1;
        v6 = *(_QWORD *)(a1 + 16);
        v3[2] = v6;
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      }
      v3 += 3;
      v8 = v3;
      a1 += 24LL;
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<InputProvider>,InputProvider *>(a3, v8);
    throw;
  }
  return v3;
}
