/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@PEAV?$function@$$A6AX_N@Z@2@@std@@YAXPEAV?$function@$$A6AX_N@Z@0@0AEAU?$_Wrap_alloc@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@0@@Z @ 0x180008940
 * Callers:
 *     _std::_Uninitialized_copy_al_unchecked1_std::function_void___cdecl(bool)______ptr64_std::function_void___cdecl(bool)______ptr64_std::allocator_std::function_void___cdecl(bool)______::_1_::catch$12 @ 0x18009F2C5 (_std--_Uninitialized_copy_al_unchecked1_std--function_void___cdecl(bool)______ptr64_ea_18009F2C5.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::_Destroy_range<std::allocator<std::function<void (bool)>>,std::function<void (bool)> *>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rcx
  _QWORD *result; // rax

  if ( a1 != a2 )
  {
    v2 = a2;
    v3 = a1 + 7;
    do
    {
      v4 = (_QWORD *)*v3;
      if ( *v3 )
      {
        LOBYTE(a2) = v4 != v3 - 7;
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v4 + 32LL))(v4, a2);
        *v3 = 0LL;
      }
      v3 += 8;
      result = v3 - 7;
    }
    while ( v3 - 7 != v2 );
  }
  return result;
}
