/*
 * XREFs of ??1CBaseStreamGroupProxy@@MEAA@XZ @ 0x18000BF90
 * Callers:
 *     ??_GCSharedStreamGroupProxy@@MEAAPEAXI@Z @ 0x180007530 (--_GCSharedStreamGroupProxy@@MEAAPEAXI@Z.c)
 *     ??1?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800641C4 (--1-$RuntimeClass@U-$InterfaceList@VCBaseStreamGroupProxy@@U-$InterfaceList@UIInspectable@@VNil@.c)
 *     ??_ECBaseStreamGroupProxy@@MEAAPEAXI@Z @ 0x18008B6A0 (--_ECBaseStreamGroupProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@Z @ 0x18000D400 (-erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@@@s.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@Z @ 0x180065748 (-_Erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@@@.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CBaseStreamGroupProxy::~CBaseStreamGroupProxy(CBaseStreamGroupProxy *this)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rbp
  _QWORD *v6; // rbx
  _QWORD *i; // rdi
  void *v8; // rbx
  HANDLE ProcessHeap; // rax
  HANDLE v10; // rax
  __int64 v11; // rax

  *(_QWORD *)this = &CBaseStreamGroupProxy::`vftable';
  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    v11 = *((_QWORD *)this + 7);
    if ( v11 )
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64))(*(_QWORD *)v2 + 72LL))(
        *((_QWORD *)this + 9),
        2LL,
        0xFFFFFFFFLL,
        *(unsigned int *)(v11 + 56),
        -2LL);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 2);
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 7);
  if ( v5 )
  {
    v6 = *(_QWORD **)(*(_QWORD *)(v5 + 40) + 8LL);
    for ( i = v6; !*((_BYTE *)i + 25); v6 = i )
    {
      std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Erase(
        v5 + 40,
        i[2]);
      i = (_QWORD *)*i;
      operator delete(v6);
    }
    *(_QWORD *)(*(_QWORD *)(v5 + 40) + 8LL) = *(_QWORD *)(v5 + 40);
    **(_QWORD **)(v5 + 40) = *(_QWORD *)(v5 + 40);
    *(_QWORD *)(*(_QWORD *)(v5 + 40) + 16LL) = *(_QWORD *)(v5 + 40);
    *(_QWORD *)(v5 + 48) = 0LL;
    v8 = *(void **)(v5 + 40);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v8);
    DeleteCriticalSection((LPCRITICAL_SECTION)v5);
    v10 = GetProcessHeap();
    HeapFree(v10, 0, (LPVOID)v5);
  }
  *((_QWORD *)this + 7) = 0LL;
  CoTaskMemFree(*((LPVOID *)this + 5));
  *((_QWORD *)this + 5) = 0LL;
  CoTaskMemFree(*((LPVOID *)this + 4));
  *((_QWORD *)this + 4) = 0LL;
}
