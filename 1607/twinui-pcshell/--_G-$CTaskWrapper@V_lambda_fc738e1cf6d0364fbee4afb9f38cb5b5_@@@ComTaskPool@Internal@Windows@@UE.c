/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180027EE0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_::__lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_ @ 0x18002753C (_lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_--__lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F44C (--3@YAXPEAX_K@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_>::`scalar deleting destructor'(
        _DWORD *Block,
        char a2)
{
  lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_::__lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_((__int64)(Block + 4));
  Block[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
