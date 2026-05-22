/*
 * XREFs of std::_Func_impl__lambda_d29ab57dd9545fc931c9dab5b1cf9752__std::allocator_int__bool_Input::PropertyNode_____ptr64_void_____ptr64_unsigned_long_::_Delete_this @ 0x18001CE40
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::_Func_impl__lambda_d29ab57dd9545fc931c9dab5b1cf9752__std::allocator_int__bool_Input::PropertyNode_____ptr64_void_____ptr64_unsigned_long_::_Delete_this(
        char *a1,
        char a2)
{
  *(_QWORD *)a1 = &std::_Func_base<void,IMPCInputProviderBase *>::`vftable';
  if ( a2 )
    std::_Deallocate(a1, 1uLL, 0x20uLL);
}
