/*
 * XREFs of ?RemoveInterface@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@Z @ 0x180001BD0
 * Callers:
 *     ?DeleteVolumeInternalNotification@CVolumeStrip@@UEAAJPEAUIAudioEndpointVolumeCallback@@@Z @ 0x180001F10 (-DeleteVolumeInternalNotification@CVolumeStrip@@UEAAJPEAUIAudioEndpointVolumeCallback@@@Z.c)
 * Callees:
 *     ?RemoveAt@?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x180001A3C (-RemoveAt@-$CAtlArray@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V-$CElementTraits@V-$CComP.c)
 *     ?RemoveAt@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAAX_K0@Z @ 0x180028C50 (-RemoveAt@-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAAX_K0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::RemoveInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        _QWORD *a2)
{
  _QWORD *v2; // rsi
  LPCRITICAL_SECTION v3; // rdi
  unsigned int v4; // r15d
  unsigned int v5; // ebx
  ULONG_PTR *p_SpinCount; // r14
  __int64 i; // rdx
  ATL::CAtlException *v9; // [rsp+28h] [rbp-30h] BYREF

  v2 = a2;
  v3 = lpCriticalSection;
  v4 = 0;
  EnterCriticalSection(lpCriticalSection);
  try
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v5 = i;
      if ( (unsigned __int64)(unsigned int)i >= *(_QWORD *)&v3[1].LockCount )
        break;
      if ( *((_QWORD *)&v3[1].DebugInfo->Type + i) == *v2 )
      {
        p_SpinCount = &v3[1].SpinCount;
        if ( (PRTL_CRITICAL_SECTION_DEBUG)(unsigned int)i >= v3[2].DebugInfo )
          ATL::AtlThrowImpl(-2147024809);
        --*(_DWORD *)(*p_SpinCount + 4 * i);
        if ( (PRTL_CRITICAL_SECTION_DEBUG)(unsigned int)i >= v3[2].DebugInfo )
          ATL::AtlThrowImpl(-2147024809);
        if ( !*(_DWORD *)(*p_SpinCount + 4 * i) )
        {
          ATL::CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>::RemoveAt(
            (void **)&v3[1].DebugInfo,
            (unsigned int)i);
          ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::RemoveAt(&v3[1].SpinCount, v5);
          goto LABEL_16;
        }
      }
    }
  }
  catch ( ATL::CAtlException *v9 )
  {
    v3 = lpCriticalSection;
    v2 = a2;
    v4 = *(_DWORD *)v9;
  }
LABEL_16:
  LeaveCriticalSection(v3);
  if ( *v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 16LL))(*v2);
  return v4;
}
