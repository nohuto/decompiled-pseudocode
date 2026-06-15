/*
 * XREFs of _std::vector_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::_Insert_n_::_1_::catch$0 @ 0x180049CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     _CxxThrowException_0 @ 0x180047984 (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAXPEAVWeakRef@WRL@Microsoft@@0@Z @ 0x180065874 (-_Destroy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::_Insert_n_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  int v2; // esi
  char *v3; // rbx
  __int64 v4; // rdi

  v2 = *(_DWORD *)(a2 + 128);
  v3 = *(char **)(a2 + 152);
  v4 = *(_QWORD *)(a2 + 48);
  if ( v2 > 1 )
    std::vector<Microsoft::WRL::WeakRef>::_Destroy(a1, *(_QWORD *)(a2 + 152), &v3[8 * v4]);
  if ( v2 > 0 )
    std::vector<Microsoft::WRL::WeakRef>::_Destroy(a1, &v3[8 * v4], &v3[8 * v4 + 8]);
  operator delete(v3);
  throw;
}
