/*
 * XREFs of ??1?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x180008C0C
 * Callers:
 *     _TaskbarLayoutPolicyManager::_scalar_deleting_destructor__::_1_::dtor$1 @ 0x1800309CE (_TaskbarLayoutPolicyManager--_scalar_deleting_destructor__--_1_--dtor$1.c)
 *     _TaskbarLayoutPolicyManager::_scalar_deleting_destructor__::_1_::dtor$2 @ 0x1800309DE (_TaskbarLayoutPolicyManager--_scalar_deleting_destructor__--_1_--dtor$2.c)
 *     _TaskbarLayoutParser::CalculateSelectionAttributes_::_1_::dtor$0 @ 0x180030C08 (_TaskbarLayoutParser--CalculateSelectionAttributes_--_1_--dtor$0.c)
 *     _ActivateApplicationForExperienceWithPropertySet_::_1_::dtor$0 @ 0x180031A8E (_ActivateApplicationForExperienceWithPropertySet_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
}
