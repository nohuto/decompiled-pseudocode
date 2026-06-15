/*
 * XREFs of ??1CSaDeviceProxy@@MEAA@XZ @ 0x18000B310
 * Callers:
 *     ??_ECSaDeviceProxy@@MEAAPEAXI@Z @ 0x18000AEC0 (--_ECSaDeviceProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@Z @ 0x18000D400 (-erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@@@s.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D700 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@Z @ 0x180065748 (-_Erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@@@.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CSaDeviceProxy::~CSaDeviceProxy(CSaDeviceProxy *this)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rbp
  _QWORD *v5; // rbx
  _QWORD *i; // rdi
  void *v7; // rbx
  HANDLE ProcessHeap; // rax
  HANDLE v9; // rax
  LPVOID *v10; // rbx
  HANDLE v11; // rax
  __int64 v12; // rcx

  *(_QWORD *)this = &CSaDeviceProxy::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ISaDeviceProxy,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 2) = &CSaDeviceProxy::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>,1,0>'};
  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  (*(void (__fastcall **)(CWindowsPolicyManager *, char *))(*(_QWORD *)g_PolicyManager + 152LL))(
    g_PolicyManager,
    (char *)this + 64);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_b9a3bc60c8507b6458a47eddc52b3d2c_Traceguids, this);
  }
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 7);
  if ( v4 )
  {
    v5 = *(_QWORD **)(*(_QWORD *)(v4 + 40) + 8LL);
    for ( i = v5; !*((_BYTE *)i + 25); v5 = i )
    {
      std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Erase(
        v4 + 40,
        i[2]);
      i = (_QWORD *)*i;
      operator delete(v5);
    }
    *(_QWORD *)(*(_QWORD *)(v4 + 40) + 8LL) = *(_QWORD *)(v4 + 40);
    **(_QWORD **)(v4 + 40) = *(_QWORD *)(v4 + 40);
    *(_QWORD *)(*(_QWORD *)(v4 + 40) + 16LL) = *(_QWORD *)(v4 + 40);
    *(_QWORD *)(v4 + 48) = 0LL;
    v7 = *(void **)(v4 + 40);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v7);
    DeleteCriticalSection((LPCRITICAL_SECTION)v4);
    v9 = GetProcessHeap();
    HeapFree(v9, 0, (LPVOID)v4);
  }
  *((_QWORD *)this + 7) = 0LL;
  v10 = (LPVOID *)*((_QWORD *)this + 6);
  if ( v10 )
  {
    CoTaskMemFree(v10[3]);
    v10[3] = 0LL;
    CoTaskMemFree(v10[2]);
    v10[2] = 0LL;
    CoTaskMemFree(*v10);
    *v10 = 0LL;
    v11 = GetProcessHeap();
    HeapFree(v11, 0, v10);
  }
  *((_QWORD *)this + 6) = 0LL;
  v12 = *((_QWORD *)this + 5);
  if ( v12 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(2 * v12);
}
