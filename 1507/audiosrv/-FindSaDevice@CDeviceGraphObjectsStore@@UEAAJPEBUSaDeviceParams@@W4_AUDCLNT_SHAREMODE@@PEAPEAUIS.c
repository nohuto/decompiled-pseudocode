/*
 * XREFs of ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@PEAPEAUISaDeviceProxy@@@Z @ 0x180027B30
 * Callers:
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x1800290B0 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 * Callees:
 *     ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x180027750 (-FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV-$function@$$A6A_NPEAUISaDeviceProxy@.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AV?$SyncLockT@UCriticalSectionTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@234@XZ @ 0x180028540 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AV-$SyncLockT@UCriticalSectionTraits@HandleTr.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AnySaDeviceExists@CDeviceGraphObjectsStore@@IEAA_NXZ @ 0x180090D14 (-AnySaDeviceExists@CDeviceGraphObjectsStore@@IEAA_NXZ.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::FindSaDevice(
        CDeviceGraphObjectsStore *this,
        const struct SaDeviceParams *a2,
        enum _AUDCLNT_SHAREMODE a3,
        struct ISaDeviceProxy **a4)
{
  bool v8; // r15
  unsigned int FirstMatchingSaDevice; // ebx
  _QWORD v11[3]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v12; // [rsp+38h] [rbp-8h]
  __int64 v13; // [rsp+70h] [rbp+30h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+88h] [rbp+48h] BYREF

  *a4 = 0LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((char *)this + 16, &lpCriticalSection);
  if ( a3 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    FirstMatchingSaDevice = CDeviceGraphObjectsStore::AnySaDeviceExists(this) ? -2005139389 : -2005139430;
  }
  else
  {
    v13 = 0LL;
    v11[0] = &std::_Func_impl<std::_Callable_obj<_lambda_0ee856f0c5181214458183efaff16ed8_,0>,std::allocator<std::_Func_class<bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
    v12 = v11;
    v8 = (int)CDeviceGraphObjectsStore::FindFirstMatchingSaDevice((__int64)this, (__int64)v11, &v13) >= 0;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v8 )
    {
      FirstMatchingSaDevice = -2005139389;
    }
    else if ( *((_DWORD *)a2 + 2) == 1 )
    {
      FirstMatchingSaDevice = -2005139430;
    }
    else
    {
      v11[1] = a2;
      v11[0] = &std::_Func_impl<std::_Callable_obj<_lambda_a2affb40e740f00343e7979aa83c00c3_,0>,std::allocator<std::_Func_class<bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
      v12 = v11;
      FirstMatchingSaDevice = CDeviceGraphObjectsStore::FindFirstMatchingSaDevice((__int64)this, (__int64)v11, a4);
    }
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      14LL,
      &WPP_f4d8cd303aac757902d3083c41b94541_Traceguids,
      FirstMatchingSaDevice);
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return FirstMatchingSaDevice;
}
