/*
 * XREFs of std::_Func_impl__lambda_7bb679a9323d805fac01dd20cc91ea96__std::allocator_int__void_::_Move @ 0x18004DF00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl__lambda_7bb679a9323d805fac01dd20cc91ea96__std::allocator_int__void_::_Move(
        __int64 a1,
        __int64 a2)
{
  if ( a2 )
  {
    *(_QWORD *)a2 = off_1800A6DB8;
    *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  }
  return a2;
}
