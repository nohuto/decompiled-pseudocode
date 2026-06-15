/*
 * XREFs of ?RegisterThread@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z @ 0x140003F90
 * Callers:
 *     <none>
 * Callees:
 *     ?InitialRegisterForThread@GraphStreamingResourceManager@@EEAAJPEAXPEAU_t@HandleRegistrations@1@@Z @ 0x140003D60 (-InitialRegisterForThread@GraphStreamingResourceManager@@EEAAJPEAXPEAU_t@HandleRegistrations@1@@.c)
 *     ?GetNode@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@AEBAPEAVCNode@12@KAEAI0AEAPEAV312@@Z @ 0x140004A40 (-GetNode@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTra.c)
 *     ?RemoveAtPos@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140004AD0 (-RemoveAtPos@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElemen.c)
 *     ?SetAt@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAPEAU__POSITION@@KAEBUListValue@HandleRegistrations@GraphStreamingResourceManager@@@Z @ 0x140004B20 (-SetAt@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTrait.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140007990 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GraphStreamingResourceManager::RegisterThread(
        GraphStreamingResourceManager *this,
        void *a2,
        struct ThreadRegistrationToken__ **a3)
{
  struct ThreadRegistrationToken__ **v3; // r14
  void *v4; // rdi
  GraphStreamingResourceManager *v5; // rsi
  DWORD ThreadId; // r15d
  __int64 Node; // rax
  __int64 v8; // rbx
  struct GraphStreamingResourceManager::HandleRegistrations::_t *v9; // r8
  GraphStreamingResourceManager *v10; // rcx
  __int64 (__fastcall *v11)(GraphStreamingResourceManager *, void *, struct GraphStreamingResourceManager::HandleRegistrations::_t *); // rax
  int v12; // eax
  unsigned int v13; // edi
  ATL::CAtlException *v15; // rbx
  char v16; // [rsp+30h] [rbp-88h] BYREF
  __int64 v17; // [rsp+38h] [rbp-80h]
  __int64 v18; // [rsp+40h] [rbp-78h]
  _BYTE v19[8]; // [rsp+48h] [rbp-70h] BYREF
  ATL::CAtlException *v20; // [rsp+50h] [rbp-68h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-60h] BYREF
  char v22; // [rsp+60h] [rbp-58h]
  int v23; // [rsp+68h] [rbp-50h] BYREF
  __int64 v24; // [rsp+70h] [rbp-48h]
  __int64 v25; // [rsp+78h] [rbp-40h]
  int v29; // [rsp+D8h] [rbp+20h] BYREF

  v18 = -2LL;
  v3 = a3;
  v4 = a2;
  v5 = this;
  v17 = 0LL;
  ThreadId = GetThreadId(a2);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v5 + 16);
  v22 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  Node = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetNode(
           (int)v5 + 128,
           ThreadId,
           (unsigned int)&v16,
           (unsigned int)&v29,
           (__int64)v19);
  v8 = Node;
  if ( Node )
  {
    _InterlockedIncrement((volatile signed __int32 *)(Node + 8));
LABEL_6:
    *v3 = (struct ThreadRegistrationToken__ *)v8;
    v8 = 0LL;
    v13 = 0;
    goto LABEL_7;
  }
  v24 = 0LL;
  v25 = 0LL;
  v23 = 1;
  try
  {
    v8 = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::SetAt(
           (char *)v5 + 128,
           ThreadId,
           &v23);
    v17 = v8;
  }
  catch ( ATL::CAtlException *v20 )
  {
    v15 = v20;
    if ( *(_DWORD *)v20 == -1073741571 )
      _resetstkoflw();
    v29 = *(_DWORD *)v15;
    v13 = v29;
    v5 = this;
    v8 = v17;
    if ( v29 < 0 )
      goto LABEL_7;
    v3 = a3;
    v4 = a2;
  }
  v9 = (struct GraphStreamingResourceManager::HandleRegistrations::_t *)(v8 + 16);
  v10 = (GraphStreamingResourceManager *)((char *)v5 - 8);
  v11 = *(__int64 (__fastcall **)(GraphStreamingResourceManager *, void *, struct GraphStreamingResourceManager::HandleRegistrations::_t *))(*((_QWORD *)v5 - 1) + 48LL);
  if ( v11 == GraphStreamingResourceManager::InitialRegisterForThread )
    v12 = GraphStreamingResourceManager::InitialRegisterForThread(v10, v4, v9);
  else
    v12 = v11(v10, v4, v9);
  v13 = v12;
  if ( v12 >= 0 )
    goto LABEL_6;
LABEL_7:
  if ( v8 )
    ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::RemoveAtPos(
      (char *)v5 + 128,
      v8);
  if ( v22 )
    LeaveCriticalSection(lpCriticalSection);
  return v13;
}
