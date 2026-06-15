/*
 * XREFs of ??1CSaDeviceProxy@@MEAA@XZ @ 0x1800270A0
 * Callers:
 *     ??_ECSaDeviceProxy@@MEAAPEAXI@Z @ 0x180026C00 (--_ECSaDeviceProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@Z @ 0x180028650 (-erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@@@s.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A200 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@Z @ 0x180066F40 (-_Erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@@@.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CSaDeviceProxy::~CSaDeviceProxy(CSaDeviceProxy *this)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  _QWORD *v4; // rbx
  _QWORD *i; // rdi
  void *v6; // rbx
  HANDLE ProcessHeap; // rax
  HANDLE v8; // rax
  LPVOID *v9; // rbx
  HANDLE v10; // rax
  __int64 v11; // rcx

  *(_QWORD *)this = &CSaDeviceProxy::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ISaDeviceProxy,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 2) = &CSaDeviceProxy::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>,1,0>'};
  (*(void (__fastcall **)(CWindowsPolicyManager *, char *))(*(_QWORD *)g_PolicyManager + 152LL))(
    g_PolicyManager,
    (char *)this + 64);
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      24LL,
      &WPP_18cbaf40400d08387fc9801c804405c7_Traceguids,
      this);
  }
  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 7);
  if ( v3 )
  {
    v4 = *(_QWORD **)(*(_QWORD *)(v3 + 40) + 8LL);
    for ( i = v4; !*((_BYTE *)i + 25); v4 = i )
    {
      std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Erase(
        v3 + 40,
        i[2]);
      i = (_QWORD *)*i;
      operator delete(v4);
    }
    *(_QWORD *)(*(_QWORD *)(v3 + 40) + 8LL) = *(_QWORD *)(v3 + 40);
    **(_QWORD **)(v3 + 40) = *(_QWORD *)(v3 + 40);
    *(_QWORD *)(*(_QWORD *)(v3 + 40) + 16LL) = *(_QWORD *)(v3 + 40);
    *(_QWORD *)(v3 + 48) = 0LL;
    v6 = *(void **)(v3 + 40);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v6);
    DeleteCriticalSection((LPCRITICAL_SECTION)v3);
    v8 = GetProcessHeap();
    HeapFree(v8, 0, (LPVOID)v3);
  }
  *((_QWORD *)this + 7) = 0LL;
  v9 = (LPVOID *)*((_QWORD *)this + 6);
  if ( v9 )
  {
    CoTaskMemFree(v9[3]);
    v9[3] = 0LL;
    CoTaskMemFree(v9[2]);
    v9[2] = 0LL;
    CoTaskMemFree(*v9);
    *v9 = 0LL;
    v10 = GetProcessHeap();
    HeapFree(v10, 0, v9);
  }
  *((_QWORD *)this + 6) = 0LL;
  v11 = *((_QWORD *)this + 5);
  if ( v11 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((Microsoft::WRL::Details::WeakReferenceImpl *)(2 * v11));
}
