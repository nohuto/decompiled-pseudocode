/*
 * XREFs of ??1CBaseStreamGroupProxy@@MEAA@XZ @ 0x1800267EC
 * Callers:
 *     ??_GCSharedStreamGroupProxy@@MEAAPEAXI@Z @ 0x180029C40 (--_GCSharedStreamGroupProxy@@MEAAPEAXI@Z.c)
 *     ??1?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180065FE0 (--1-$RuntimeClass@U-$InterfaceList@VCBaseStreamGroupProxy@@U-$InterfaceList@UIInspectable@@VNil@.c)
 *     ??_ECBaseStreamGroupProxy@@MEAAPEAXI@Z @ 0x18008EB70 (--_ECBaseStreamGroupProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@Z @ 0x180028650 (-erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@@@s.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@Z @ 0x180066F40 (-_Erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@@@.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CBaseStreamGroupProxy::~CBaseStreamGroupProxy(CBaseStreamGroupProxy *this)
{
  __int64 v2; // r14
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // r14
  _QWORD *v7; // rdi
  _QWORD *i; // rbx
  void *v9; // rbx
  HANDLE ProcessHeap; // rax
  HANDLE v11; // rax
  __int64 v12; // rax

  *(_QWORD *)this = &CBaseStreamGroupProxy::`vftable';
  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    v12 = *((_QWORD *)this + 8);
    if ( v12 )
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64))(*(_QWORD *)v2 + 72LL))(
        *((_QWORD *)this + 10),
        2LL,
        0xFFFFFFFFLL,
        *(unsigned int *)(v12 + 56),
        -2LL);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 9);
  if ( v4 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
  {
    v6 = v5 + 40;
    v7 = *(_QWORD **)(*(_QWORD *)(v5 + 40) + 8LL);
    for ( i = v7; !*((_BYTE *)i + 25); v7 = i )
    {
      std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Erase(
        v5 + 40,
        i[2]);
      i = (_QWORD *)*i;
      operator delete(v7);
    }
    *(_QWORD *)(*(_QWORD *)v6 + 8LL) = *(_QWORD *)v6;
    **(_QWORD **)v6 = *(_QWORD *)v6;
    *(_QWORD *)(*(_QWORD *)v6 + 16LL) = *(_QWORD *)v6;
    *(_QWORD *)(v5 + 48) = 0LL;
    v9 = *(void **)v6;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v9);
    DeleteCriticalSection((LPCRITICAL_SECTION)v5);
    v11 = GetProcessHeap();
    HeapFree(v11, 0, (LPVOID)v5);
  }
  *((_QWORD *)this + 8) = 0LL;
  CoTaskMemFree(*((LPVOID *)this + 6));
  *((_QWORD *)this + 6) = 0LL;
  CoTaskMemFree(*((LPVOID *)this + 5));
  *((_QWORD *)this + 5) = 0LL;
  CoTaskMemFree(*((LPVOID *)this + 4));
  *((_QWORD *)this + 4) = 0LL;
}
