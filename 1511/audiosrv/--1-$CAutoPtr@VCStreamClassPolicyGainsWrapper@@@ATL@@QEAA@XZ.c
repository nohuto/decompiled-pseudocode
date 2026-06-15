/*
 * XREFs of ??1?$CAutoPtr@VCStreamClassPolicyGainsWrapper@@@ATL@@QEAA@XZ @ 0x180066D04
 * Callers:
 *     _CStreamClassPolicyManager::GetPolicyVolumeForStreamClass_::_1_::dtor$4 @ 0x18004B786 (_CStreamClassPolicyManager--GetPolicyVolumeForStreamClass_--_1_--dtor$4.c)
 *     _TSSession::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor$2 @ 0x18004C2A8 (_TSSession--GetStreamClassPolicyGainsForEndpoint_--_1_--dtor$2.c)
 * Callees:
 *     ??_GCStreamClassPolicyGainsWrapper@@QEAAPEAXI@Z @ 0x18009BDD0 (--_GCStreamClassPolicyGainsWrapper@@QEAAPEAXI@Z.c)
 */

void *__fastcall ATL::CAutoPtr<CStreamClassPolicyGainsWrapper>::~CAutoPtr<CStreamClassPolicyGainsWrapper>(
        CStreamClassPolicyGainsWrapper **a1,
        unsigned int a2)
{
  CStreamClassPolicyGainsWrapper *v3; // rcx
  void *result; // rax

  v3 = *a1;
  if ( v3 )
    result = CStreamClassPolicyGainsWrapper::`scalar deleting destructor'(v3, a2);
  *a1 = 0LL;
  return result;
}
