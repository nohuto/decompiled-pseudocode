/*
 * XREFs of ?Release@CSaDeviceProxy@@UEAAKXZ @ 0x1800224C0
 * Callers:
 *     ??$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@AEAW4_AUDCLNT_SHAREMODE@@AEAKPEAUSaDeviceResourceParams@@@Details@WRL@Microsoft@@YAJPEAPEAUISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@AEAW4_AUDCLNT_SHAREMODE@@AEAK$$QEAPEAUSaDeviceResourceParams@@@Z @ 0x1800255F8 (--$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCh.c)
 *     ?Release@CSaDeviceProxy@@W7EAAKXZ @ 0x180039590 (-Release@CSaDeviceProxy@@W7EAAKXZ.c)
 *     ?Release@CSaDeviceProxy@@WBA@EAAKXZ @ 0x1800395A0 (-Release@CSaDeviceProxy@@WBA@EAAKXZ.c)
 *     ?Release@CSaDeviceProxy@@WBI@EAAKXZ @ 0x1800395B0 (-Release@CSaDeviceProxy@@WBI@EAAKXZ.c)
 *     ??1?$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x180051130 (--1-$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x1800213E0 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 *     ?Lock@CDeviceGraphObjectsStore@@UEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@XZ @ 0x1800218A0 (-Lock@CDeviceGraphObjectsStore@@UEAA-AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@X.c)
 *     ??_ECSaDeviceProxy@@MEAAPEAXI@Z @ 0x1800229C0 (--_ECSaDeviceProxy@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x1800642BC (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 */

__int64 __fastcall CSaDeviceProxy::Release(CSaDeviceProxy *this)
{
  const unsigned __int16 **v1; // rax
  const unsigned __int16 *v3; // rdx
  __int64 (__fastcall *v4)(CDeviceGraphStore *, const unsigned __int16 *, struct IDeviceGraphObjectsStore **); // rax
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  signed __int64 v6; // rax
  unsigned int v7; // ebx
  signed __int64 v8; // rtt
  void *(__fastcall *v9)(CSaDeviceProxy *__hidden, unsigned int); // rax
  struct IDeviceGraphObjectsStore *v10; // rcx
  struct IDeviceGraphObjectsStore *v12; // [rsp+30h] [rbp+8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp+10h] BYREF

  v1 = (const unsigned __int16 **)*((_QWORD *)this + 6);
  v12 = 0LL;
  v3 = *v1;
  v4 = *(__int64 (__fastcall **)(CDeviceGraphStore *, const unsigned __int16 *, struct IDeviceGraphObjectsStore **))(*(_QWORD *)g_DeviceGraphStore + 24LL);
  if ( v4 == CDeviceGraphStore::GetDeviceGraphStoreForEndpoint )
    CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(g_DeviceGraphStore, v3, &v12);
  else
    v4(g_DeviceGraphStore, v3, &v12);
  v5 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 64LL);
  if ( v5 == CDeviceGraphObjectsStore::Lock )
    CDeviceGraphObjectsStore::Lock((__int64)v12, (__int64)&lpCriticalSection);
  else
    v5((__int64)v12, (__int64)&lpCriticalSection);
  v6 = *((_QWORD *)this + 5);
  while ( v6 >= 0 )
  {
    if ( (_DWORD)v6 == 0x7FFFFFFF )
    {
      v7 = 2147483646;
      goto LABEL_20;
    }
    v7 = v6 - 1;
    v8 = v6;
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 5, v6 - 1, v6);
    if ( v8 == v6 )
      goto LABEL_14;
  }
  v7 = ATL::SafeDecrementReferenceMultiThread((int *)(2 * v6 + 16));
LABEL_14:
  if ( !v7 )
  {
    v9 = *(void *(__fastcall **)(CSaDeviceProxy *__hidden, unsigned int))(*(_QWORD *)this + 48LL);
    if ( v9 == CSaDeviceProxy::`vector deleting destructor' )
      CSaDeviceProxy::`vector deleting destructor'(this, 1u);
    else
      v9(this, 1u);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
LABEL_20:
  if ( lpCriticalSection )
  {
    LeaveCriticalSection(lpCriticalSection);
    lpCriticalSection = 0LL;
  }
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(struct IDeviceGraphObjectsStore *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v7;
}
