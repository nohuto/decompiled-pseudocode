/*
 * XREFs of ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800219A0
 * Callers:
 *     ?SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z @ 0x180021C00 (-SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z.c)
 *     ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUISaDeviceProxy@@@Z @ 0x180021D10 (-FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUI.c)
 *     ?FindRenderSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x180076B90 (-FindRenderSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x180076BD0 (-FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18001E7A0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180024E60 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     ?InternalRelease@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180025004 (-InternalRelease@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180025A38 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?_Delete_this@?$_Func_impl@V_lambda_c9062d0cc6b58ce068de574295fd0aa7_@@V?$allocator@H@std@@_NPEAUISaDeviceProxy@@@std@@EEAAX_N@Z @ 0x1800291B0 (-_Delete_this@-$_Func_impl@V_lambda_c9062d0cc6b58ce068de574295fd0aa7_@@V-$allocator@H@std@@_NPEA.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV012@@Z @ 0x18004FEF0 (--0WeakRef@WRL@Microsoft@@QEAA@AEBV012@@Z.c)
 *     ??$As@UISaDeviceProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007619C (--$As@UISaDeviceProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UISa.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDeviceGraphObjectsStore::FindFirstMatchingSaDevice(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdx
  int v7; // esi
  const struct Microsoft::WRL::WeakRef **v8; // rdi
  const struct Microsoft::WRL::WeakRef *i; // rbx
  unsigned int v10; // ebx
  __int64 v11; // rcx
  void (__fastcall *v12)(__int64, __int64); // rax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 (__fastcall *v18)(__int64); // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  void (__fastcall *v23)(__int64); // rax
  __int64 v24; // [rsp+20h] [rbp-28h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v26; // [rsp+90h] [rbp+48h] BYREF
  __int64 v27; // [rsp+98h] [rbp+50h]
  __int64 v28; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+60h] BYREF

  v27 = a2;
  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  *a3 = 0LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock(a1 + 16, (__int64)lpCriticalSection);
  v7 = 0;
  v8 = (const struct Microsoft::WRL::WeakRef **)(a1 + 80);
  do
  {
    if ( *a3 )
      goto LABEL_18;
    for ( i = *v8; i != v8[1]; i = (const struct Microsoft::WRL::WeakRef *)((char *)i + 8) )
    {
      Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&v28, i);
      v26 = 0LL;
      v14 = Microsoft::WRL::WeakRef::As<IInspectable>(&v28, &v26);
      v15 = v26;
      if ( v14 >= 0 && v26 )
      {
        v29 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<ISaDeviceProxy>(&v26, &v29) >= 0 )
        {
          v24 = v29;
          v19 = *(_QWORD *)(a2 + 56);
          if ( !v19 )
          {
            std::_Xbad_function_call();
            JUMPOUT(0x180047859LL);
          }
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 16LL))(v19, &v24) )
          {
            v20 = v29;
            v29 = 0LL;
            *a3 = v20;
            Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease(&v29);
            v21 = v26;
            if ( v26 )
            {
              v26 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
            }
            v22 = v28;
            if ( v28 )
            {
              v28 = 0LL;
              v23 = *(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL);
              if ( (char *)v23 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
                Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v22);
              else
                v23(v22);
            }
            break;
          }
          Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease(&v29);
          v16 = v26;
          if ( v26 )
          {
LABEL_24:
            v26 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          }
        }
        else
        {
          Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease(&v29);
          v16 = v26;
          if ( v26 )
            goto LABEL_24;
        }
        v17 = v28;
        if ( !v28 )
          continue;
        v28 = 0LL;
        v18 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL);
        if ( v18 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
        {
LABEL_36:
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v17);
          continue;
        }
        goto LABEL_37;
      }
      if ( v26 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      v17 = v28;
      if ( v28 )
      {
        v28 = 0LL;
        v18 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL);
        if ( v18 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
          goto LABEL_36;
LABEL_37:
        v18(v17);
        continue;
      }
    }
    ++v7;
    v8 += 3;
  }
  while ( (unsigned __int64)v7 < 4 );
  if ( !*a3 )
  {
    v10 = -2005139430;
    goto LABEL_8;
  }
LABEL_18:
  v10 = 0;
LABEL_8:
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
  v11 = *(_QWORD *)(a2 + 56);
  if ( v11 )
  {
    if ( v11 == a2 )
      v6 = 0LL;
    else
      LOBYTE(v6) = 1;
    v12 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 32LL);
    if ( (char *)v12 == (char *)std::_Func_impl<_lambda_c9062d0cc6b58ce068de574295fd0aa7_,std::allocator<int>,bool,ISaDeviceProxy *>::_Delete_this )
      std::_Func_impl<_lambda_c9062d0cc6b58ce068de574295fd0aa7_,std::allocator<int>,bool,ISaDeviceProxy *>::_Delete_this(
        v11,
        v6);
    else
      v12(v11, v6);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  return v10;
}
