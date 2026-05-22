/*
 * XREFs of _lambda_3b64102ac84e73bf6a3808442553243e_::_lambda_invoker_cdecl_ @ 0x18004D250
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_3b64102ac84e73bf6a3808442553243e_::_lambda_invoker_cdecl_(_QWORD *Block)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rcx

  v2 = Block[7];
  if ( !v2 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v4 = (_QWORD *)Block[7];
  if ( v4 )
  {
    LOBYTE(v3) = v4 != Block;
    (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 32LL))(v4, v3);
    Block[7] = 0LL;
  }
  operator delete(Block);
  return 0LL;
}
