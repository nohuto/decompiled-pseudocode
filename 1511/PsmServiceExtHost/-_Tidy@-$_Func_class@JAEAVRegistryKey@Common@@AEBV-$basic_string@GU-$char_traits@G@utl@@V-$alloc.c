/*
 * XREFs of ?_Tidy@?$_Func_class@JAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_Nil@wistd@@U56@U56@U56@U56@@wistd@@IEAAXXZ @ 0x180026160
 * Callers:
 *     ??1?$function@$$A6AJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z@wistd@@QEAA@XZ @ 0x180025EC8 (--1-$function@$$A6AJAEAVRegistryKey@Common@@AEBV-$basic_string@GU-$char_traits@G@utl@@V-$allocat.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall wistd::_Func_class<long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rsi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 )
  {
    LOBYTE(a2) = v2 != a1;
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v2 + 24LL))(*(_QWORD *)(a1 + 96), a2);
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  return result;
}
