/*
 * XREFs of ?AddInterface@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@Z @ 0x180070140
 * Callers:
 *     ?AddVolumeInternalNotification@CVolumeStrip@@QEAAJPEAUIAudioEndpointVolumeCallback@@@Z @ 0x180070304 (-AddVolumeInternalNotification@CVolumeStrip@@QEAAJPEAUIAudioEndpointVolumeCallback@@@Z.c)
 * Callees:
 *     ?Add@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAA_KK@Z @ 0x1800346B8 (-Add@-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAA_KK@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??A?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAAAEAVCAudioSessionNotificationProcess@@_K@Z @ 0x18006637C (--A-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotificationPr.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Add@?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@QEAA_KAEBV?$CComPtr@UIAudioEndpointVolumeCallback@@@2@@Z @ 0x1800700D8 (-Add@-$CAtlArray@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V-$CElementTraits@V-$CComPtr@UI.c)
 *     ?RemoveAt@?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x1800707EC (-RemoveAt@-$CAtlArray@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V-$CElementTraits@V-$CComP.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::AddInterface(
        struct _RTL_CRITICAL_SECTION *a1,
        __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // edi
  __int64 i; // rsi
  __int64 v5; // r14
  ATL::CAtlException *v7; // rbx
  ATL::CAtlException *v8; // rbx
  ATL::CAtlException *v9; // [rsp+28h] [rbp-40h] BYREF
  ATL::CAtlException *v10; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+80h] [rbp+18h]
  unsigned __int64 v14; // [rsp+88h] [rbp+20h]

  v2 = a1;
  v3 = 0;
  EnterCriticalSection(a1);
  for ( i = 0LL; (unsigned __int64)(unsigned int)i < *(_QWORD *)&v2[1].LockCount; i = (unsigned int)(i + 1) )
  {
    v5 = *a2;
    if ( *(_QWORD *)ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::operator[](
                      &v2[1].DebugInfo,
                      (unsigned int)i) == v5 )
      break;
  }
  if ( (unsigned int)i == *(_QWORD *)&v2[1].LockCount )
  {
    try
    {
      v14 = ATL::CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>::Add(
              &v2[1].DebugInfo,
              a2);
    }
    catch ( ATL::CAtlException *v9 )
    {
      v7 = v9;
      if ( *(_DWORD *)v9 == -1073741571 )
        _resetstkoflw();
      v3 = *(_DWORD *)v7;
      if ( *(int *)v7 < 0 )
      {
        v2 = a1;
        goto LABEL_15;
      }
      v2 = a1;
    }
    v3 = 0;
    try
    {
      ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::Add(&v2[1].SpinCount);
    }
    catch ( ATL::CAtlException *v10 )
    {
      v8 = v10;
      if ( *(_DWORD *)v10 == -1073741571 )
        _resetstkoflw();
      v13 = *(_DWORD *)v8;
      v3 = *(_DWORD *)v8;
      v2 = a1;
      if ( v13 < 0 )
        ATL::CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>::RemoveAt(
          &a1[1],
          v14);
    }
  }
  else
  {
    if ( (PRTL_CRITICAL_SECTION_DEBUG)(unsigned int)i >= v2[2].DebugInfo )
      ATL::AtlThrowImpl(-2147024809);
    ++*(_DWORD *)(v2[1].SpinCount + 4 * i);
  }
LABEL_15:
  LeaveCriticalSection(v2);
  if ( *a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a2 + 16LL))(*a2);
  return v3;
}
