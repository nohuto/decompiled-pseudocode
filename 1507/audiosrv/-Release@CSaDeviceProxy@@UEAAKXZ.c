/*
 * XREFs of ?Release@CSaDeviceProxy@@UEAAKXZ @ 0x180026F20
 * Callers:
 *     ??$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@AEAW4_AUDCLNT_SHAREMODE@@AEAKPEAUSaDeviceResourceParams@@@Details@WRL@Microsoft@@YAJPEAPEAUISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@AEAW4_AUDCLNT_SHAREMODE@@AEAK$$QEAPEAUSaDeviceResourceParams@@@Z @ 0x18002AC34 (--$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCh.c)
 *     ?Release@CSaDeviceProxy@@W7EAAKXZ @ 0x1800450A0 (-Release@CSaDeviceProxy@@W7EAAKXZ.c)
 *     ?Release@CSaDeviceProxy@@WBA@EAAKXZ @ 0x1800450B0 (-Release@CSaDeviceProxy@@WBA@EAAKXZ.c)
 *     ?Release@CSaDeviceProxy@@WBI@EAAKXZ @ 0x1800450C0 (-Release@CSaDeviceProxy@@WBI@EAAKXZ.c)
 *     ??1?$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x18006833C (--1-$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ??_ECSaDeviceProxy@@MEAAPEAXI@Z @ 0x180026C00 (--_ECSaDeviceProxy@@MEAAPEAXI@Z.c)
 *     ?Lock@CDeviceGraphObjectsStore@@UEAA?AV?$SyncLockT@UCriticalSectionTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@Wrappers@WRL@Microsoft@@XZ @ 0x180027630 (-Lock@CDeviceGraphObjectsStore@@UEAA-AV-$SyncLockT@UCriticalSectionTraits@HandleTraits@Wrappers@.c)
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x180028050 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180075888 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CSaDeviceProxy::Release(CSaDeviceProxy *this)
{
  const unsigned __int16 **v1; // rax
  const unsigned __int16 *v3; // rbp
  int (*v4)(CDeviceGraphStore *__hidden, const unsigned __int16 *, struct IDeviceGraphObjectsStore **); // rdi
  void (__fastcall *v5)(struct IDeviceGraphObjectsStore *, LPCRITICAL_SECTION *); // rdi
  volatile int *v6; // rdx
  signed __int64 v7; // rax
  unsigned int v8; // edi
  signed __int64 v9; // rtt
  CSaDeviceProxy *(__fastcall *v10)(CSaDeviceProxy *, char); // rbx
  struct IDeviceGraphObjectsStore *v11; // rsi
  struct IDeviceGraphObjectsStore *v13; // [rsp+40h] [rbp+8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp+10h] BYREF

  v1 = (const unsigned __int16 **)*((_QWORD *)this + 6);
  v13 = 0LL;
  v3 = *v1;
  v4 = *(int (**)(CDeviceGraphStore *__hidden, const unsigned __int16 *, struct IDeviceGraphObjectsStore **))(*(_QWORD *)g_DeviceGraphStore + 24LL);
  if ( v4 == CDeviceGraphStore::GetDeviceGraphStoreForEndpoint )
    CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(g_DeviceGraphStore, v3, &v13);
  else
    ((void (__fastcall *)(CDeviceGraphStore *, const unsigned __int16 *, struct IDeviceGraphObjectsStore **))v4)(
      g_DeviceGraphStore,
      v3,
      &v13);
  v5 = *(void (__fastcall **)(struct IDeviceGraphObjectsStore *, LPCRITICAL_SECTION *))(*(_QWORD *)v13 + 64LL);
  if ( (char *)v5 == (char *)CDeviceGraphObjectsStore::Lock )
    CDeviceGraphObjectsStore::Lock(v13, &lpCriticalSection);
  else
    v5(v13, &lpCriticalSection);
  v7 = *((_QWORD *)this + 5);
  while ( v7 >= 0 )
  {
    if ( (_DWORD)v7 == 0x7FFFFFFF )
    {
      v8 = 2147483646;
      goto LABEL_20;
    }
    v8 = v7 - 1;
    v9 = v7;
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 5, v7 - 1, v7);
    if ( v9 == v7 )
      goto LABEL_14;
  }
  v8 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v7 + 16), v6);
LABEL_14:
  if ( !v8 )
  {
    v10 = *(CSaDeviceProxy *(__fastcall **)(CSaDeviceProxy *, char))(*(_QWORD *)this + 48LL);
    if ( v10 == CSaDeviceProxy::`vector deleting destructor' )
      CSaDeviceProxy::`vector deleting destructor'(this, 1);
    else
      v10(this, 1);
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
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(struct IDeviceGraphObjectsStore *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v8;
}
