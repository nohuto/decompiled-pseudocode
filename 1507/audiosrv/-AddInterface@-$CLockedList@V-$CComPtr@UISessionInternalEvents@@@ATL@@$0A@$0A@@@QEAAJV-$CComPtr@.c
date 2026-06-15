/*
 * XREFs of ?AddInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180018070
 * Callers:
 *     ?AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x18000E7C0 (-AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 * Callees:
 *     ?GrowBuffer@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x180007E60 (-GrowBuffer@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAcce.c)
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180018180 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?AddRef@CAudioSessionManager@@UEAAKXZ @ 0x180019080 (-AddRef@CAudioSessionManager@@UEAAKXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180019460 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 __fastcall CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::AddInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        CServerAudioSessionControl **a2)
{
  LPCRITICAL_SECTION v2; // rdi
  unsigned int v3; // r15d
  HANDLE v4; // rsi
  CServerAudioSessionControl **v5; // rcx
  CAudioSessionManager *v6; // rsi
  unsigned int (__fastcall *v7)(CAudioSessionManager *__hidden); // r14
  unsigned int (__fastcall *v8)(CServerAudioSessionControl *__hidden); // rdi
  ATL::CAtlException *v10; // rbx
  ATL::CAtlException *v12; // [rsp+28h] [rbp-40h] BYREF

  v2 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  v3 = 0;
  try
  {
    v4 = *(HANDLE *)&v2[1].LockCount;
    if ( v4 >= v2[1].OwningThread
      && !ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::GrowBuffer(
            (__int64)&v2[1],
            (size_t)v4 + 1) )
    {
      ATL::AtlThrowImpl(-2147024882);
    }
    v5 = (CServerAudioSessionControl **)((char *)v2[1].DebugInfo + 8 * (_QWORD)v4);
    if ( v5 )
    {
      v6 = *a2;
      *v5 = *a2;
      if ( v6 )
      {
        v7 = *(unsigned int (__fastcall **)(CAudioSessionManager *__hidden))(*(_QWORD *)v6 + 8LL);
        if ( v7 == CAudioSessionManager::AddRef )
          CAudioSessionManager::AddRef(v6);
        else
          v7(v6);
      }
    }
    ++*(_QWORD *)&v2[1].LockCount;
  }
  catch ( ATL::CAtlException *v12 )
  {
    v10 = v12;
    if ( *(_DWORD *)v12 == -1073741571 )
      _resetstkoflw();
    v3 = *(_DWORD *)v10;
    v2 = lpCriticalSection;
  }
  LeaveCriticalSection(v2);
  if ( *a2 )
  {
    v8 = *(unsigned int (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)*a2 + 16LL);
    if ( v8 == CServerAudioSessionControl::Release )
    {
      CServerAudioSessionControl::Release(*a2);
    }
    else if ( v8 == CAudioSessionManager::Release )
    {
      CAudioSessionManager::Release(*a2);
    }
    else
    {
      v8(*a2);
    }
  }
  return v3;
}
