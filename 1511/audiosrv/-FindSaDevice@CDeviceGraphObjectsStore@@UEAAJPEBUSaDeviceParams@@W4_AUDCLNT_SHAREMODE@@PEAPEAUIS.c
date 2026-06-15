/*
 * XREFs of ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@PEAPEAUISaDeviceProxy@@@Z @ 0x18000C800
 * Callers:
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x180007810 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 * Callees:
 *     ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x18000C4D0 (-FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV-$function@$$A6A_NPEAUISaDeviceProxy@.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000D2F0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AnySaDeviceExists@CDeviceGraphObjectsStore@@IEAA_NXZ @ 0x18008E5D4 (-AnySaDeviceExists@CDeviceGraphObjectsStore@@IEAA_NXZ.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::FindSaDevice(
        CDeviceGraphObjectsStore *this,
        const struct SaDeviceParams *a2,
        enum _AUDCLNT_SHAREMODE a3,
        struct ISaDeviceProxy **a4)
{
  bool v8; // si
  unsigned int FirstMatchingSaDevice; // ebx
  _QWORD v11[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v12; // [rsp+38h] [rbp-30h]
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+88h] [rbp+20h] BYREF

  *a4 = 0LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((char *)this + 16, &lpCriticalSection);
  if ( a3 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    FirstMatchingSaDevice = -2005139430;
    if ( CDeviceGraphObjectsStore::AnySaDeviceExists(this) )
      FirstMatchingSaDevice = -2005139389;
  }
  else
  {
    v11[0] = &std::_Func_impl<std::_Callable_obj<_lambda_0ee856f0c5181214458183efaff16ed8_,0>,std::allocator<std::_Func_class<bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
    v13 = 0LL;
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
      v11[0] = &std::_Func_impl<std::_Callable_obj<_lambda_f6263596e2cedf593a59fb7cc979efd5_,0>,std::allocator<std::_Func_class<bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
      v12 = v11;
      FirstMatchingSaDevice = CDeviceGraphObjectsStore::FindFirstMatchingSaDevice((__int64)this, (__int64)v11, a4);
    }
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14LL,
      &WPP_c654cfd5aeeaca479956b571394d5ce9_Traceguids,
      FirstMatchingSaDevice);
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return FirstMatchingSaDevice;
}
