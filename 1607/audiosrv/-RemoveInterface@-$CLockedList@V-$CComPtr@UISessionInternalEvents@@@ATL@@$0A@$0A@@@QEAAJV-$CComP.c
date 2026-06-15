/*
 * XREFs of ?RemoveInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x18000E2C0
 * Callers:
 *     ?DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180012F30 (-DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x18000E7F0 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x18000FA40 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     _invalid_parameter_noinfo @ 0x180036CBA (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::RemoveInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        CServerAudioSessionControl **a2)
{
  CServerAudioSessionControl **v2; // rdi
  LPCRITICAL_SECTION v3; // rbx
  unsigned int v4; // r12d
  unsigned int i; // edx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r14
  __int64 v10; // r15
  CServerAudioSessionControl *v11; // rcx
  unsigned int (__fastcall *v12)(CServerAudioSessionControl *__hidden); // rax
  PRTL_CRITICAL_SECTION_DEBUG v13; // rax
  char *v14; // rdx
  char *v15; // rcx
  CServerAudioSessionControl *v16; // rcx
  unsigned int (__fastcall *v17)(CServerAudioSessionControl *__hidden); // rax
  ATL::CAtlException *v19; // [rsp+28h] [rbp-40h] BYREF

  v2 = a2;
  v3 = lpCriticalSection;
  v4 = 0;
  EnterCriticalSection(lpCriticalSection);
  try
  {
LABEL_2:
    for ( i = 0; (unsigned __int64)i < *(_QWORD *)&v3[1].LockCount; ++i )
    {
      DebugInfo = v3[1].DebugInfo;
      if ( *((CServerAudioSessionControl **)&DebugInfo->Type + i) == *v2 )
      {
        v7 = i + 1LL;
        if ( v7 < i || (v8 = *(_QWORD *)&v3[1].LockCount, v7 > v8) )
          ATL::AtlThrowImpl(-2147024809);
        v9 = v8 - v7;
        v10 = 8LL * i;
        v11 = *(CServerAudioSessionControl **)((char *)&DebugInfo->Type + v10);
        if ( v11 )
        {
          v12 = *(unsigned int (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v11 + 16LL);
          if ( v12 == CServerAudioSessionControl::Release )
          {
            CServerAudioSessionControl::Release(v11);
          }
          else if ( v12 == CAudioSessionManager::Release )
          {
            CAudioSessionManager::Release(v11);
          }
          else
          {
            v12(v11);
          }
        }
        if ( v9 )
        {
          v13 = v3[1].DebugInfo;
          v14 = (char *)v13 + 8 * v7;
          v15 = (char *)v13 + v10;
          if ( 8 * v9 )
          {
            if ( !v15 || !v14 )
            {
              *(_DWORD *)_o__errno(v15, v14) = 22;
              invalid_parameter_noinfo();
              ATL::AtlThrowImpl(-2147024809);
            }
            memmove(v15, v14, 8 * v9);
          }
        }
        --*(_QWORD *)&v3[1].LockCount;
        goto LABEL_2;
      }
    }
  }
  catch ( ATL::CAtlException *v19 )
  {
    v3 = lpCriticalSection;
    v2 = a2;
    v4 = *(_DWORD *)v19;
  }
  LeaveCriticalSection(v3);
  v16 = *v2;
  if ( *v2 )
  {
    v17 = *(unsigned int (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v16 + 16LL);
    if ( v17 == CServerAudioSessionControl::Release )
    {
      CServerAudioSessionControl::Release(v16);
    }
    else if ( v17 == CAudioSessionManager::Release )
    {
      CAudioSessionManager::Release(v16);
    }
    else
    {
      v17(v16);
    }
  }
  return v4;
}
