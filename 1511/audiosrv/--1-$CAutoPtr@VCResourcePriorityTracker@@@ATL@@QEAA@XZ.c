/*
 * XREFs of ??1?$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAA@XZ @ 0x180066734
 * Callers:
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$2 @ 0x18004990C (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$2.c)
 *     _CBaseStreamGroupProxy::_CBaseStreamGroupProxy_::_1_::dtor$2 @ 0x1800499D0 (_CBaseStreamGroupProxy--_CBaseStreamGroupProxy_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@0@Z @ 0x18006579C (-erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2_ea_18006579C.c)
 */

void __fastcall ATL::CAutoPtr<CResourcePriorityTracker>::~CAutoPtr<CResourcePriorityTracker>(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 **v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  if ( *a1 )
  {
    std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::erase(
      (__int64 ****)(v1 + 40),
      &v3,
      **(__int64 ****)(v1 + 40),
      *(__int64 ***)(v1 + 40));
    operator delete(*(void **)(v1 + 40));
    DeleteCriticalSection((LPCRITICAL_SECTION)v1);
    operator delete((void *)v1);
  }
  *a1 = 0LL;
}
