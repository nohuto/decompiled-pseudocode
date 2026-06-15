/*
 * XREFs of ??1CBaseStreamGroupProxy@@MEAA@XZ @ 0x180023080
 * Callers:
 *     ??1?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180024D20 (--1-$RuntimeClass@U-$InterfaceList@VCBaseStreamGroupProxy@@U-$InterfaceList@UIInspectable@@VNil@.c)
 *     ??_ECBaseStreamGroupProxy@@MEAAPEAXI@Z @ 0x180074880 (--_ECBaseStreamGroupProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180025004 (-InternalRelease@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800291CC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@Z @ 0x180050F00 (-_Erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@@@.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CBaseStreamGroupProxy::~CBaseStreamGroupProxy(CBaseStreamGroupProxy *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rbp
  void **v5; // r14
  _QWORD *v6; // rbx
  _QWORD *i; // rdi
  __int64 v8; // rdx

  *(_QWORD *)this = &CBaseStreamGroupProxy::`vftable';
  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    v8 = *((_QWORD *)this + 7);
    if ( v8 )
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v2 + 72LL))(
        v2,
        2LL,
        0xFFFFFFFFLL,
        *(unsigned int *)(v8 + 56));
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 2);
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease((char *)this + 72);
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 7);
  if ( v4 )
  {
    v5 = (void **)(v4 + 40);
    v6 = *(_QWORD **)(*(_QWORD *)(v4 + 40) + 8LL);
    for ( i = v6; !*((_BYTE *)i + 25); v6 = i )
    {
      std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Erase(
        v4 + 40,
        i[2]);
      i = (_QWORD *)*i;
      std::_Deallocate(v6, 1uLL, 0x28uLL);
    }
    *((_QWORD *)*v5 + 1) = *v5;
    *(_QWORD *)*v5 = *v5;
    *((_QWORD *)*v5 + 2) = *v5;
    *(_QWORD *)(v4 + 48) = 0LL;
    std::_Deallocate(*v5, 1uLL, 0x28uLL);
    DeleteCriticalSection((LPCRITICAL_SECTION)v4);
    operator delete((void *)v4, (const struct std::nothrow_t *)0x40);
  }
  *((_QWORD *)this + 7) = 0LL;
  CoTaskMemFree(*((LPVOID *)this + 5));
  *((_QWORD *)this + 5) = 0LL;
  CoTaskMemFree(*((LPVOID *)this + 4));
  *((_QWORD *)this + 4) = 0LL;
}
