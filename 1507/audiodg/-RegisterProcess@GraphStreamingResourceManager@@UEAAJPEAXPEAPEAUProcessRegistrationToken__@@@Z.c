/*
 * XREFs of ?RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x14000CC90
 * Callers:
 *     ?ConnectToSaDevice@CStreamInstanceNew@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z @ 0x140014150 (-ConnectToSaDevice@CStreamInstanceNew@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z.c)
 * Callees:
 *     ?InitialRegisterForProcess@GraphStreamingResourceManager@@EEAAJPEAXPEAU_t@HandleRegistrations@1@@Z @ 0x14000C9E0 (-InitialRegisterForProcess@GraphStreamingResourceManager@@EEAAJPEAXPEAU_t@HandleRegistrations@1@.c)
 *     ?GetNode@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@AEBAPEAVCNode@12@KAEAI0AEAPEAV312@@Z @ 0x14000D670 (-GetNode@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTra.c)
 *     ?RemoveAtPos@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000D700 (-RemoveAtPos@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElemen.c)
 *     ?SetAt@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAPEAU__POSITION@@KAEBUListValue@HandleRegistrations@GraphStreamingResourceManager@@@Z @ 0x14000D7D0 (-SetAt@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTrait.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010670 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GraphStreamingResourceManager::RegisterProcess(
        GraphStreamingResourceManager *this,
        void *a2,
        struct ProcessRegistrationToken__ **a3)
{
  struct ProcessRegistrationToken__ **v3; // r12
  void *v4; // rdi
  GraphStreamingResourceManager *v5; // rsi
  DWORD ProcessId; // r14d
  __int64 Node; // rax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(GraphStreamingResourceManager *, void *, struct GraphStreamingResourceManager::HandleRegistrations::_t *); // r15
  int v10; // eax
  unsigned int v11; // edi
  ATL::CAtlException *v13; // rbx
  char v14; // [rsp+30h] [rbp-88h] BYREF
  __int64 v15; // [rsp+38h] [rbp-80h]
  __int64 v16; // [rsp+40h] [rbp-78h]
  _BYTE v17[8]; // [rsp+48h] [rbp-70h] BYREF
  ATL::CAtlException *v18; // [rsp+50h] [rbp-68h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-60h] BYREF
  char v20; // [rsp+60h] [rbp-58h]
  int v21; // [rsp+68h] [rbp-50h] BYREF
  __int64 v22; // [rsp+70h] [rbp-48h]
  __int64 v23; // [rsp+78h] [rbp-40h]
  int v27; // [rsp+D8h] [rbp+20h] BYREF

  v16 = -2LL;
  v3 = a3;
  v4 = a2;
  v5 = this;
  v15 = 0LL;
  ProcessId = GetProcessId(a2);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v5 + 16);
  v20 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  Node = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetNode(
           (int)v5 + 56,
           ProcessId,
           (unsigned int)&v14,
           (unsigned int)&v27,
           (__int64)v17);
  v8 = Node;
  if ( Node )
  {
    _InterlockedIncrement((volatile signed __int32 *)(Node + 8));
LABEL_6:
    *v3 = (struct ProcessRegistrationToken__ *)v8;
    v8 = 0LL;
    v11 = 0;
    goto LABEL_7;
  }
  v22 = 0LL;
  v23 = 0LL;
  v21 = 1;
  try
  {
    v8 = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::SetAt(
           (char *)v5 + 56,
           ProcessId,
           &v21);
    v15 = v8;
  }
  catch ( ATL::CAtlException *v18 )
  {
    v13 = v18;
    if ( *(_DWORD *)v18 == -1073741571 )
      _resetstkoflw();
    v27 = *(_DWORD *)v13;
    v11 = v27;
    v5 = this;
    v8 = v15;
    if ( v27 < 0 )
      goto LABEL_7;
    v3 = a3;
    v4 = a2;
  }
  v9 = *(__int64 (__fastcall **)(GraphStreamingResourceManager *, void *, struct GraphStreamingResourceManager::HandleRegistrations::_t *))(*((_QWORD *)v5 - 1) + 32LL);
  if ( v9 == GraphStreamingResourceManager::InitialRegisterForProcess )
    v10 = GraphStreamingResourceManager::InitialRegisterForProcess(
            (GraphStreamingResourceManager *)((char *)v5 - 8),
            v4,
            (struct GraphStreamingResourceManager::HandleRegistrations::_t *)(v8 + 16));
  else
    v10 = v9(
            (GraphStreamingResourceManager *)((char *)v5 - 8),
            v4,
            (struct GraphStreamingResourceManager::HandleRegistrations::_t *)(v8 + 16));
  v11 = v10;
  if ( v10 >= 0 )
    goto LABEL_6;
LABEL_7:
  if ( v8 )
    ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::RemoveAtPos(
      (char *)v5 + 56,
      v8);
  if ( v20 )
    LeaveCriticalSection(lpCriticalSection);
  return v11;
}
