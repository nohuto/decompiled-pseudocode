/*
 * XREFs of std::_Func_impl__lambda_513939ef8950349a73fed03914f19a64__std::allocator_int__void_tagQMSGINPUTREPORT_const_____ptr64_::_Delete_this @ 0x1800198C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::_Func_impl__lambda_513939ef8950349a73fed03914f19a64__std::allocator_int__void_tagQMSGINPUTREPORT_const_____ptr64_::_Delete_this(
        char *a1,
        char a2)
{
  *(_QWORD *)a1 = &std::_Func_base<void,IMPCInputProviderBase *>::`vftable';
  if ( a2 )
    std::_Deallocate(a1, 1uLL, 0x10uLL);
}
