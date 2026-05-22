/*
 * XREFs of std::_Func_impl__lambda_a88adf0547c7b0cb38e523d07adee41d__std::allocator_int__void_IMPCInputProviderBase_____ptr64_::_Delete_this @ 0x18004DE20
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::_Func_impl__lambda_a88adf0547c7b0cb38e523d07adee41d__std::allocator_int__void_IMPCInputProviderBase_____ptr64_::_Delete_this(
        char *a1,
        char a2)
{
  *(_QWORD *)a1 = &std::_Func_base<void,IMPCInputProviderBase *>::`vftable';
  if ( a2 )
    std::_Deallocate(a1, 1uLL, 0x18uLL);
}
