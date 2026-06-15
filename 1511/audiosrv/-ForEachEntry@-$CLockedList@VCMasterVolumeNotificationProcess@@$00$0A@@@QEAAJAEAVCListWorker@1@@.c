/*
 * XREFs of ?ForEachEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18003AFB8
 * Callers:
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x1800435B0 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x180034584 (--1-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotificationPr.c)
 *     ?Add@?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA_KAEBVCMasterVolumeNotificationProcess@@@Z @ 0x18003470C (-Add@-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotification.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList<CMasterVolumeNotificationProcess,1,0>::ForEachEntry(
        LPCRITICAL_SECTION lpCriticalSection,
        void (__fastcall ***a2)(_QWORD, _QWORD))
{
  void (__fastcall ***v2)(_QWORD, _QWORD); // r14
  LPCRITICAL_SECTION v3; // rbx
  unsigned int v4; // esi
  unsigned int i; // edi
  ATL::CAtlException *v7; // [rsp+28h] [rbp-60h] BYREF
  ATL::CAtlException *v8; // [rsp+30h] [rbp-58h] BYREF
  unsigned int *v9; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v10; // [rsp+40h] [rbp-48h]
  __int64 v11; // [rsp+48h] [rbp-40h]
  int v12; // [rsp+50h] [rbp-38h]

  v2 = a2;
  v3 = lpCriticalSection;
  v4 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  EnterCriticalSection(lpCriticalSection);
  for ( i = 0; (unsigned __int64)i < *(_QWORD *)&v3[1].LockCount; ++i )
  {
    try
    {
      if ( (unsigned __int64)i >= *(_QWORD *)&v3[1].LockCount )
        ATL::AtlThrowImpl(-2147024809);
      ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::Add(
        &v9,
        (_DWORD *)&v3[1].DebugInfo->Type + i);
    }
    catch ( ATL::CAtlException *v7 )
    {
      if ( *(_DWORD *)v7 == -1073741571 )
        _resetstkoflw();
      v4 = 0;
      v3 = lpCriticalSection;
      v2 = a2;
      continue;
    }
  }
  LeaveCriticalSection(v3);
  while ( v4 < v10 )
  {
    try
    {
      (**v2)(v2, v9[v4]);
    }
    catch ( ATL::CAtlException *v8 )
    {
      if ( *(_DWORD *)v8 == -1073741571 )
        _resetstkoflw();
      v2 = a2;
    }
    ++v4;
  }
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>((void **)&v9);
  return 0LL;
}
