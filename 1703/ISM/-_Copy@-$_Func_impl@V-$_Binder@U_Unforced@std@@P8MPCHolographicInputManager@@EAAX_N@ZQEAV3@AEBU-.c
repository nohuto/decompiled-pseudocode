/*
 * XREFs of ?_Copy@?$_Func_impl@V?$_Binder@U_Unforced@std@@P8MPCHolographicInputManager@@EAAX_N@ZQEAV3@AEBU?$_Ph@$00@2@@std@@V?$allocator@H@2@X_N@std@@EEBAPEAV?$_Func_base@X_N@2@PEAX@Z @ 0x18004E210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl<std::_Binder<std::_Unforced,void (MPCHolographicInputManager::*)(bool),MPCHolographicInputManager * const,std::_Ph<1> const &>,std::allocator<int>,void,bool>::_Copy(
        __int64 a1,
        __int64 a2)
{
  if ( a2 )
  {
    *(_QWORD *)a2 = &std::_Func_impl<std::_Binder<std::_Unforced,void (MPCHolographicInputManager::*)(bool),MPCHolographicInputManager * const,std::_Ph<1> const &>,std::allocator<int>,void,bool>::`vftable';
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 8);
    *(_BYTE *)(a2 + 16) = *(_BYTE *)(a1 + 16);
    *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  }
  return a2;
}
