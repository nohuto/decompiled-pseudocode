/*
 * XREFs of ?AddInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x18000E110
 * Callers:
 *     ?AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180012FC0 (-AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x18000E7F0 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?AddRef@CAudioSessionManager@@UEAAKXZ @ 0x18000F410 (-AddRef@CAudioSessionManager@@UEAAKXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x18000FA40 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     _invalid_parameter_noinfo @ 0x180036CBA (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 __fastcall CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::AddInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        CAudioSessionManager **a2)
{
  LPCRITICAL_SECTION v2; // rbx
  unsigned int v3; // r14d
  unsigned __int64 v4; // rdi
  unsigned __int64 OwningThread; // rcx
  size_t v6; // rsi
  unsigned __int64 LockSemaphore_low; // rdx
  struct _RTL_CRITICAL_SECTION_DEBUG *v8; // rax
  struct _RTL_CRITICAL_SECTION_DEBUG *v9; // r15
  __int64 v10; // rcx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdx
  CAudioSessionManager **v12; // rdx
  CAudioSessionManager *v13; // rcx
  unsigned int (__fastcall *v14)(CAudioSessionManager *__hidden); // rax
  CServerAudioSessionControl *v15; // rcx
  unsigned int (__fastcall *v16)(CServerAudioSessionControl *__hidden); // rax
  size_t v18; // r15
  struct _RTL_CRITICAL_SECTION_DEBUG *v19; // rax
  ATL::CAtlException *v20; // rbx
  ATL::CAtlException *v22; // [rsp+28h] [rbp-40h] BYREF

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
        if ( v2[1].DebugInfo )
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
          v8 = (struct _RTL_CRITICAL_SECTION_DEBUG *)calloc(v6, 8uLL);
          v9 = v8;
          if ( v8 )
          {
            v10 = *(_QWORD *)&v2[1].LockCount;
            DebugInfo = v2[1].DebugInfo;
            if ( 8 * v10 )
            {
              if ( !DebugInfo )
              {
                *(_DWORD *)_o__errno(v10, 0LL) = 22;
                invalid_parameter_noinfo();
                ATL::AtlThrowImpl(-2147024809);
              }
              memmove(v8, DebugInfo, 8 * v10);
            }
            free(v2[1].DebugInfo);
            v2[1].DebugInfo = v9;
            v2[1].OwningThread = (HANDLE)v6;
            goto LABEL_15;
          }
LABEL_33:
          ATL::AtlThrowImpl(-2147024882);
        }
        v18 = SLODWORD(v2[1].LockSemaphore);
        if ( v18 <= v6 )
          v18 = v4 + 1;
        v19 = (struct _RTL_CRITICAL_SECTION_DEBUG *)calloc(v18, 8uLL);
        v2[1].DebugInfo = v19;
        if ( !v19 )
          goto LABEL_33;
        v2[1].OwningThread = (HANDLE)v18;
      }
    }
LABEL_15:
    v12 = (CAudioSessionManager **)((char *)v2[1].DebugInfo + 8 * v4);
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
  catch ( ATL::CAtlException *v22 )
  {
    v20 = v22;
    if ( *(_DWORD *)v22 == -1073741571 )
      _o__resetstkoflw();
    v3 = *(_DWORD *)v20;
    v2 = lpCriticalSection;
  }
  LeaveCriticalSection(v2);
  v15 = *a2;
  if ( *a2 )
  {
    v16 = *(unsigned int (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v15 + 16LL);
    if ( v16 == CServerAudioSessionControl::Release )
    {
      CServerAudioSessionControl::Release(v15);
    }
    else if ( v16 == CAudioSessionManager::Release )
    {
      CAudioSessionManager::Release(v15);
    }
    else
    {
      v16(v15);
    }
  }
  return v3;
}
