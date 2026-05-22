/*
 * XREFs of ?_UpdateSecureModeActive@SecureModeListener@Holographic@Shell@Internal@Windows@@AEAAX_N@Z @ 0x18002F8AC
 * Callers:
 *     ??0SecureModeListener@Holographic@Shell@Internal@Windows@@AEAA@XZ @ 0x18002F680 (--0SecureModeListener@Holographic@Shell@Internal@Windows@@AEAA@XZ.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_f088fa90b8b897459da34f4a84935181__0__wistd::details::function_allocator_wistd::_Func_class_void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x18002FCD0 (wistd--_Func_impl_wistd--_Callable_obj__lambda_f088fa90b8b897459da34f4a84935181__0__wistd--detai.c)
 * Callees:
 *     ?SecureModeChangedEvent@SecureModeListener@Holographic@Shell@Internal@Windows@@QEAAX_N@Z @ 0x180007538 (-SecureModeChangedEvent@SecureModeListener@Holographic@Shell@Internal@Windows@@QEAAX_N@Z.c)
 */

void __fastcall Windows::Internal::Shell::Holographic::SecureModeListener::_UpdateSecureModeActive(
        Windows::Internal::Shell::Holographic::SecureModeListener *this,
        char a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v5; // rdx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_BYTE *)this + 8) = a2;
  LOBYTE(v5) = a2 != 0;
  if ( *((_BYTE *)this + 9) != (a2 != 0) )
  {
    *((_BYTE *)this + 9) = v5;
    Windows::Internal::Shell::Holographic::SecureModeListener::SecureModeChangedEvent(this, v5);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
