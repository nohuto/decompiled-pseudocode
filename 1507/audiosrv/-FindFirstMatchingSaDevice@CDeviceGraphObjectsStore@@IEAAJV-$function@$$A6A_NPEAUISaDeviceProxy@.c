/*
 * XREFs of ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x180027750
 * Callers:
 *     ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@PEAPEAUISaDeviceProxy@@@Z @ 0x180027B30 (-FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@PEAPEAUIS.c)
 *     ?AnySaDeviceExists@CDeviceGraphObjectsStore@@IEAA_NXZ @ 0x180090D14 (-AnySaDeviceExists@CDeviceGraphObjectsStore@@IEAA_NXZ.c)
 *     ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x180090DA0 (-FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AV?$SyncLockT@UCriticalSectionTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@234@XZ @ 0x180028540 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AV-$SyncLockT@UCriticalSectionTraits@HandleTr.c)
 *     ?_Delete_this@?$_Func_impl@U?$_Callable_obj@V_lambda_a2affb40e740f00343e7979aa83c00c3_@@$0A@@std@@V?$allocator@V?$_Func_class@_NPEAUISaDeviceProxy@@U_Nil@std@@U23@U23@U23@U23@U23@@std@@@2@_NPEAUISaDeviceProxy@@U_Nil@2@U52@U52@U52@U52@U52@@std@@EEAAX_N@Z @ 0x18002ABE0 (-_Delete_this@-$_Func_impl@U-$_Callable_obj@V_lambda_a2affb40e740f00343e7979aa83c00c3_@@$0A@@std.c)
 *     ?InternalRelease@?$ComPtr@UIWeakReference@@@WRL@Microsoft@@IEAAKXZ @ 0x18002B164 (-InternalRelease@-$ComPtr@UIWeakReference@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x180042EA0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??0?$CComPtr@VCSharedNotificationData@CDuckingNotification@@@ATL@@QEAA@AEBV01@@Z @ 0x180067068 (--0-$CComPtr@VCSharedNotificationData@CDuckingNotification@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEAAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800670B4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEAAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006714C (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UISaDeviceProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800903F4 (--$As@UISaDeviceProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UISa.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDeviceGraphObjectsStore::FindFirstMatchingSaDevice(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v6; // r14d
  __int64 *v7; // rdi
  __int64 i; // rbx
  unsigned int v9; // esi
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(void *); // rdi
  __int64 v12; // r14
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v18; // [rsp+90h] [rbp+48h] BYREF
  __int64 v19; // [rsp+98h] [rbp+50h]
  __int64 v20; // [rsp+A0h] [rbp+58h] BYREF
  char v21; // [rsp+A8h] [rbp+60h] BYREF

  v19 = a2;
  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  *a3 = 0LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock(a1 + 16, lpCriticalSection);
  v6 = 0;
  v7 = (__int64 *)(a1 + 80);
  do
  {
    for ( i = *v7; i != v7[1]; i += 8LL )
    {
      ATL::CComPtr<CDuckingNotification::CSharedNotificationData>::CComPtr<CDuckingNotification::CSharedNotificationData>(
        &v21,
        i);
      v20 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v21, &v20) >= 0 && v20 )
      {
        v18 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<ISaDeviceProxy>(&v20, &v18) >= 0 )
        {
          v16 = v18;
          v14 = *(_QWORD *)(a2 + 24);
          if ( !v14 )
            std::_Xbad_function_call();
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v14 + 16LL))(
                 *(_QWORD *)(a2 + 24),
                 &v16) )
          {
            v15 = v18;
            v18 = 0LL;
            *a3 = v15;
          }
        }
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v18);
      }
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v20);
      Microsoft::WRL::ComPtr<IWeakReference>::InternalRelease(&v21);
    }
    ++v6;
    v7 += 3;
  }
  while ( (unsigned __int64)v6 < 4 );
  v9 = -2005139430;
  if ( *a3 )
    v9 = 0;
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
  v10 = *(_QWORD *)(a2 + 24);
  if ( v10 )
  {
    v11 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v10 + 32LL);
    if ( v11 == std::_Func_impl<std::_Callable_obj<_lambda_a2affb40e740f00343e7979aa83c00c3_,0>,std::allocator<std::_Func_class<bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::_Delete_this )
      std::_Func_impl<std::_Callable_obj<_lambda_a2affb40e740f00343e7979aa83c00c3_,0>,std::allocator<std::_Func_class<bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::_Delete_this(*(void **)(a2 + 24));
    else
      ((void (__fastcall *)(_QWORD, bool))v11)(*(_QWORD *)(a2 + 24), v10 != a2);
    *(_QWORD *)(a2 + 24) = 0LL;
  }
  v12 = *(_QWORD *)(a2 + 24);
  if ( v12 )
  {
    (*(void (__fastcall **)(_QWORD, bool))(*(_QWORD *)v12 + 32LL))(*(_QWORD *)(a2 + 24), v12 != a2);
    *(_QWORD *)(a2 + 24) = 0LL;
  }
  return v9;
}
