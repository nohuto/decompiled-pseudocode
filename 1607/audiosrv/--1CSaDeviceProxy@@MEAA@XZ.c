/*
 * XREFs of ??1CSaDeviceProxy@@MEAA@XZ @ 0x180022604
 * Callers:
 *     ??_ECSaDeviceProxy@@MEAAPEAXI@Z @ 0x1800229C0 (--_ECSaDeviceProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIMMDevice@@@WRL@Microsoft@@IEAAKXZ @ 0x180028E54 (-InternalRelease@-$ComPtr@UIMMDevice@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800291CC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@Z @ 0x180050F00 (-_Erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@@@.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CSaDeviceProxy::~CSaDeviceProxy(CSaDeviceProxy *this)
{
  __int64 v2; // rbp
  void **v3; // r14
  _QWORD *v4; // rbx
  _QWORD *i; // rdi
  LPVOID *v6; // rbx

  *(_QWORD *)this = &CSaDeviceProxy::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ISaDeviceProxy,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 2) = &CSaDeviceProxy::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>,1,0>'};
  Microsoft::WRL::ComPtr<IMMDevice>::InternalRelease((char *)this + 80);
  (*(void (__fastcall **)(struct IAudioPolicyManager *, char *))(*(_QWORD *)g_PolicyManager + 144LL))(
    g_PolicyManager,
    (char *)this + 64);
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, &WPP_744b99acf30f393db0480888c2449482_Traceguids, this);
  }
  Microsoft::WRL::ComPtr<IMMDevice>::InternalRelease((char *)this + 80);
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    v3 = (void **)(v2 + 40);
    v4 = *(_QWORD **)(*(_QWORD *)(v2 + 40) + 8LL);
    for ( i = v4; !*((_BYTE *)i + 25); v4 = i )
    {
      std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Erase(
        v2 + 40,
        i[2]);
      i = (_QWORD *)*i;
      std::_Deallocate(v4, 1uLL, 0x28uLL);
    }
    *((_QWORD *)*v3 + 1) = *v3;
    *(_QWORD *)*v3 = *v3;
    *((_QWORD *)*v3 + 2) = *v3;
    *(_QWORD *)(v2 + 48) = 0LL;
    std::_Deallocate(*v3, 1uLL, 0x28uLL);
    DeleteCriticalSection((LPCRITICAL_SECTION)v2);
    operator delete((void *)v2, (const struct std::nothrow_t *)0x40);
  }
  *((_QWORD *)this + 7) = 0LL;
  v6 = (LPVOID *)*((_QWORD *)this + 6);
  if ( v6 )
  {
    CoTaskMemFree(v6[3]);
    v6[3] = 0LL;
    CoTaskMemFree(v6[2]);
    v6[2] = 0LL;
    CoTaskMemFree(*v6);
    *v6 = 0LL;
    operator delete(v6, (const struct std::nothrow_t *)0x68);
  }
  *((_QWORD *)this + 6) = 0LL;
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISaDeviceProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISaDeviceProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>(this);
}
