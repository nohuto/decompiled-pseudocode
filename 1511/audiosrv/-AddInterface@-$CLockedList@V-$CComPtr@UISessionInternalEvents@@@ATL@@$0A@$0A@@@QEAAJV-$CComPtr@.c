/*
 * XREFs of ?AddInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180015560
 * Callers:
 *     ?AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180025A10 (-AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180015730 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?AddRef@CAudioSessionManager@@UEAAKXZ @ 0x1800162C0 (-AddRef@CAudioSessionManager@@UEAAKXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180016770 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 __fastcall CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::AddInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        CServerAudioSessionControl **a2)
{
  LPCRITICAL_SECTION v2; // rbx
  unsigned int v3; // r14d
  unsigned __int64 v4; // rdi
  unsigned __int64 OwningThread; // rcx
  size_t v6; // rsi
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // r12
  unsigned __int64 LockSemaphore_low; // rdx
  struct _RTL_CRITICAL_SECTION_DEBUG *v9; // rax
  struct _RTL_CRITICAL_SECTION_DEBUG *v10; // r15
  errno_t v11; // eax
  CServerAudioSessionControl **v12; // rcx
  CAudioSessionManager *v13; // rdi
  unsigned int (__fastcall *v14)(CAudioSessionManager *__hidden); // rsi
  unsigned int (__fastcall *v15)(CServerAudioSessionControl *__hidden); // rdi
  size_t v17; // r15
  struct _RTL_CRITICAL_SECTION_DEBUG *v18; // rax
  ATL::CAtlException *v19; // rbx
  ATL::CAtlException *v20; // [rsp+28h] [rbp-40h] BYREF

  v2 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  v3 = 0;
  try
  {
    v4 = *(_QWORD *)&v2[1].LockCount;
    OwningThread = (unsigned __int64)v2[1].OwningThread;
    if ( v4 >= OwningThread )
    {
      v6 = v4 + 1;
      if ( v4 + 1 > OwningThread )
      {
        DebugInfo = v2[1].DebugInfo;
        if ( DebugInfo )
        {
          LockSemaphore_low = SLODWORD(v2[1].LockSemaphore);
          if ( !LODWORD(v2[1].LockSemaphore) )
          {
            LockSemaphore_low = OwningThread >> 1;
            if ( v6 - OwningThread > OwningThread >> 1 )
              LockSemaphore_low = v6 - OwningThread;
          }
          if ( v6 < OwningThread + LockSemaphore_low )
            v6 = OwningThread + LockSemaphore_low;
          v9 = (struct _RTL_CRITICAL_SECTION_DEBUG *)calloc(v6, 8uLL);
          v10 = v9;
          if ( v9 )
          {
            v11 = memmove_s(v9, 8 * v4, DebugInfo, 8 * v4);
            if ( v11 )
            {
              if ( v11 == 12 )
                ATL::AtlThrowImpl(-2147024882);
              if ( v11 == 22 || v11 == 34 )
                ATL::AtlThrowImpl(-2147024809);
              if ( v11 != 80 )
                ATL::AtlThrowImpl(-2147467259);
            }
            free(v2[1].DebugInfo);
            v2[1].DebugInfo = v10;
            v2[1].OwningThread = (HANDLE)v6;
            goto LABEL_13;
          }
LABEL_37:
          ATL::AtlThrowImpl(-2147024882);
        }
        v17 = SLODWORD(v2[1].LockSemaphore);
        if ( v17 <= v6 )
          v17 = v4 + 1;
        v18 = (struct _RTL_CRITICAL_SECTION_DEBUG *)calloc(v17, 8uLL);
        v2[1].DebugInfo = v18;
        if ( !v18 )
          goto LABEL_37;
        v2[1].OwningThread = (HANDLE)v17;
      }
    }
LABEL_13:
    v12 = (CServerAudioSessionControl **)((char *)v2[1].DebugInfo + 8 * v4);
    if ( v12 )
    {
      v13 = *a2;
      *v12 = *a2;
      if ( v13 )
      {
        v14 = *(unsigned int (__fastcall **)(CAudioSessionManager *__hidden))(*(_QWORD *)v13 + 8LL);
        if ( v14 == CAudioSessionManager::AddRef )
          CAudioSessionManager::AddRef(v13);
        else
          v14(v13);
      }
    }
    ++*(_QWORD *)&v2[1].LockCount;
  }
  catch ( ATL::CAtlException *v20 )
  {
    v19 = v20;
    if ( *(_DWORD *)v20 == -1073741571 )
      _resetstkoflw();
    v3 = *(_DWORD *)v19;
    v2 = lpCriticalSection;
  }
  LeaveCriticalSection(v2);
  if ( *a2 )
  {
    v15 = *(unsigned int (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)*a2 + 16LL);
    if ( v15 == CServerAudioSessionControl::Release )
    {
      CServerAudioSessionControl::Release(*a2);
    }
    else if ( v15 == CAudioSessionManager::Release )
    {
      CAudioSessionManager::Release(*a2);
    }
    else
    {
      v15(*a2);
    }
  }
  return v3;
}
