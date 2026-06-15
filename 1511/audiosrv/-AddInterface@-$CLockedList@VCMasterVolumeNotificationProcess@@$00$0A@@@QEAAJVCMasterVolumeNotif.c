/*
 * XREFs of ?AddInterface@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJVCMasterVolumeNotificationProcess@@@Z @ 0x1800344F8
 * Callers:
 *     ?AddVolumeClientNotification@CVolumeStrip@@QEAAJK@Z @ 0x18000F45C (-AddVolumeClientNotification@CVolumeStrip@@QEAAJK@Z.c)
 * Callees:
 *     ?RemoveAt@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAAX_K0@Z @ 0x180034670 (-RemoveAt@-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAAX_K0@Z.c)
 *     ?Add@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAA_KK@Z @ 0x1800346B8 (-Add@-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAA_KK@Z.c)
 *     ?Add@?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA_KAEBVCMasterVolumeNotificationProcess@@@Z @ 0x18003470C (-Add@-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotification.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall CLockedList<CMasterVolumeNotificationProcess,1,0>::AddInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        int a2)
{
  LPCRITICAL_SECTION v2; // rbx
  unsigned int v3; // edi
  __int64 i; // rdx
  ATL::CAtlException *v6; // rbx
  ATL::CAtlException *v7; // rbx
  ATL::CAtlException *v8; // [rsp+28h] [rbp-30h] BYREF
  ATL::CAtlException *v9; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+68h] [rbp+10h] BYREF
  int v12; // [rsp+70h] [rbp+18h]
  __int64 v13; // [rsp+78h] [rbp+20h]

  v11 = a2;
  v2 = lpCriticalSection;
  v3 = 0;
  EnterCriticalSection(lpCriticalSection);
  for ( i = 0LL;
        (unsigned __int64)(unsigned int)i < *(_QWORD *)&v2[1].LockCount
     && *((_DWORD *)&v2[1].DebugInfo->Type + i) != v11;
        i = (unsigned int)(i + 1) )
  {
    ;
  }
  if ( (unsigned int)i == *(_QWORD *)&v2[1].LockCount )
  {
    v13 = 0LL;
    try
    {
      v13 = ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::Add(
              &v2[1],
              &v11);
    }
    catch ( ATL::CAtlException *v8 )
    {
      v6 = v8;
      if ( *(_DWORD *)v8 == -1073741571 )
        _resetstkoflw();
      v12 = *(_DWORD *)v6;
      v3 = v12;
      if ( v12 < 0 )
      {
        v2 = lpCriticalSection;
        goto LABEL_6;
      }
      v2 = lpCriticalSection;
    }
    v3 = 0;
    try
    {
      ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::Add(&v2[1].SpinCount);
    }
    catch ( ATL::CAtlException *v9 )
    {
      v7 = v9;
      if ( *(_DWORD *)v9 == -1073741571 )
        _resetstkoflw();
      v12 = *(_DWORD *)v7;
      v3 = v12;
      v2 = lpCriticalSection;
      if ( v12 < 0 )
        ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::RemoveAt(&lpCriticalSection[1], v13);
    }
  }
  else
  {
    if ( (PRTL_CRITICAL_SECTION_DEBUG)(unsigned int)i >= v2[2].DebugInfo )
      ATL::AtlThrowImpl(-2147024809);
    ++*(_DWORD *)(v2[1].SpinCount + 4 * i);
  }
LABEL_6:
  LeaveCriticalSection(v2);
  return v3;
}
