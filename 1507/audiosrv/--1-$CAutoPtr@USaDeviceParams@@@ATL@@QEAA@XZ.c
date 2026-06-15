/*
 * XREFs of ??1?$CAutoPtr@USaDeviceParams@@@ATL@@QEAA@XZ @ 0x18006826C
 * Callers:
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$4 @ 0x1800473BA (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$4.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$1 @ 0x1800474EC (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$1.c)
 *     _CloneSaDeviceParams_::_1_::dtor$0 @ 0x180047850 (_CloneSaDeviceParams_--_1_--dtor$0.c)
 *     _DeriveSaDeviceParametersForStream_::_1_::dtor$0 @ 0x180047A30 (_DeriveSaDeviceParametersForStream_--_1_--dtor$0.c)
 *     _CAudioResourceManager::SwitchStreamGroupsFromNonDefaultToDefaultSaDevice_::_1_::dtor$1 @ 0x1800932D1 (_CAudioResourceManager--SwitchStreamGroupsFromNonDefaultToDefaultSaDevice_--_1_--dtor$1.c)
 *     _CAudioResourceManager::SwitchStreamGroupsFromNonDefaultToDefaultSaDevice_::_1_::dtor$2 @ 0x1800932DD (_CAudioResourceManager--SwitchStreamGroupsFromNonDefaultToDefaultSaDevice_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 */

void __fastcall ATL::CAutoPtr<SaDeviceParams>::~CAutoPtr<SaDeviceParams>(LPVOID **a1)
{
  LPVOID *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CoTaskMemFree(v1[3]);
    v1[3] = 0LL;
    CoTaskMemFree(v1[2]);
    v1[2] = 0LL;
    CoTaskMemFree(*v1);
    *v1 = 0LL;
    operator delete(v1);
  }
  *a1 = 0LL;
}
