/*
 * XREFs of ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x18000C4D0
 * Callers:
 *     ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@PEAPEAUISaDeviceProxy@@@Z @ 0x18000C800 (-FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@PEAPEAUIS.c)
 *     ?AnySaDeviceExists@CDeviceGraphObjectsStore@@IEAA_NXZ @ 0x18008E5D4 (-AnySaDeviceExists@CDeviceGraphObjectsStore@@IEAA_NXZ.c)
 *     ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x18008E660 (-FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000D2F0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?_Delete_this@?$_Func_impl@U?$_Callable_obj@V_lambda_0ee856f0c5181214458183efaff16ed8_@@$0A@@std@@V?$allocator@V?$_Func_class@_NPEAUISaDeviceProxy@@U_Nil@std@@U23@U23@U23@U23@U23@@std@@@2@_NPEAUISaDeviceProxy@@U_Nil@2@U52@U52@U52@U52@U52@@std@@EEAAX_N@Z @ 0x18000E340 (-_Delete_this@-$_Func_impl@U-$_Callable_obj@V_lambda_0ee856f0c5181214458183efaff16ed8_@@$0A@@std.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x180046DE0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??0?$CComPtr@VCSharedNotificationData@CDuckingNotification@@@ATL@@QEAA@AEBV01@@Z @ 0x1800658AC (--0-$CComPtr@VCSharedNotificationData@CDuckingNotification@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800658F8 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180065958 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UISaDeviceProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18008DC7C (--$As@UISaDeviceProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UISa.c)
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
  __int64 v16; // r13
  void (__fastcall *v17)(__int64); // rsi
  __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v20; // [rsp+90h] [rbp+48h] BYREF
  __int64 v21; // [rsp+98h] [rbp+50h]
  __int64 v22; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+60h] BYREF

  v21 = a2;
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
        &v20,
        i);
      v23 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v20, &v23) < 0 || !v23 )
      {
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v23);
        v16 = v20;
        if ( !v20 )
          continue;
LABEL_26:
        v17 = *(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL);
        v20 = 0LL;
        v17(v16);
        continue;
      }
      v22 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<ISaDeviceProxy>(&v23, &v22) >= 0 )
      {
        v18 = v22;
        v14 = *(_QWORD *)(a2 + 24);
        if ( !v14 )
          std::_Xbad_function_call();
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v14 + 16LL))(*(_QWORD *)(a2 + 24), &v18) )
        {
          v15 = v22;
          v22 = 0LL;
          *a3 = v15;
        }
      }
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v22);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v23);
      v16 = v20;
      if ( v20 )
        goto LABEL_26;
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
    if ( v11 == std::_Func_impl<std::_Callable_obj<_lambda_0ee856f0c5181214458183efaff16ed8_,0>,std::allocator<std::_Func_class<bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::_Delete_this )
      std::_Func_impl<std::_Callable_obj<_lambda_0ee856f0c5181214458183efaff16ed8_,0>,std::allocator<std::_Func_class<bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::_Delete_this(*(void **)(a2 + 24));
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
