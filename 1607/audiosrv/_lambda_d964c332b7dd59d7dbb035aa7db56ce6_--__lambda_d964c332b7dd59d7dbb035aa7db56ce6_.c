/*
 * XREFs of _lambda_d964c332b7dd59d7dbb035aa7db56ce6_::__lambda_d964c332b7dd59d7dbb035aa7db56ce6_ @ 0x1800779F8
 * Callers:
 *     _std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_a8a63d51e8072b51e985e5868ab4f48b____::_1_::dtor$0 @ 0x180077872 (_std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft-_ea_180077872.c)
 *     _std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_d964c332b7dd59d7dbb035aa7db56ce6____::_1_::dtor$0 @ 0x1800778EA (_std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft-_ea_1800778EA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_d964c332b7dd59d7dbb035aa7db56ce6_::__lambda_d964c332b7dd59d7dbb035aa7db56ce6_(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
