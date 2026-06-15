/*
 * XREFs of ?RemoveInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180017EC0
 * Callers:
 *     ?DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x18000E720 (-DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180018180 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180019460 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::RemoveInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        CServerAudioSessionControl **a2)
{
  CServerAudioSessionControl **v2; // rsi
  LPCRITICAL_SECTION v3; // rdi
  __int64 v4; // r12
  unsigned int i; // ecx
  __int64 v6; // rbx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r15
  CServerAudioSessionControl **v11; // rax
  CServerAudioSessionControl *v12; // r13
  unsigned int (__fastcall *v13)(CServerAudioSessionControl *__hidden); // rax
  errno_t v14; // eax
  unsigned int (__fastcall *v15)(CServerAudioSessionControl *__hidden); // rdi
  ATL::CAtlException *v17; // [rsp+28h] [rbp-40h] BYREF
  CServerAudioSessionControl **v20; // [rsp+80h] [rbp+18h]

  v2 = a2;
  v3 = lpCriticalSection;
  v4 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  try
  {
LABEL_2:
    for ( i = 0; ; ++i )
    {
      v6 = i;
      if ( (unsigned __int64)i >= *(_QWORD *)&v3[1].LockCount )
        break;
      DebugInfo = v3[1].DebugInfo;
      if ( *((CServerAudioSessionControl **)&DebugInfo->Type + i) == *v2 )
      {
        v8 = i + 1LL;
        if ( v8 < i || (v9 = *(_QWORD *)&v3[1].LockCount, v8 > v9) )
          ATL::AtlThrowImpl(-2147024809);
        v10 = v9 - v8;
        v11 = (CServerAudioSessionControl **)((char *)DebugInfo + 8 * i);
        v20 = v11;
        while ( !v4 )
        {
          v12 = *v11;
          if ( *v11 )
          {
            v13 = *(unsigned int (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v12 + 16LL);
            if ( v13 == CServerAudioSessionControl::Release )
            {
              CServerAudioSessionControl::Release(v12);
            }
            else if ( v13 == CAudioSessionManager::Release )
            {
              CAudioSessionManager::Release(v12);
            }
            else
            {
              v13(v12);
            }
            v11 = v20;
          }
          v4 = 1LL;
        }
        if ( v10 )
        {
          v14 = memmove_s((char *)v3[1].DebugInfo + 8 * v6, 8 * v10, (char *)v3[1].DebugInfo + 8 * v8, 8 * v10);
          if ( v14 )
          {
            if ( v14 == 12 )
              ATL::AtlThrowImpl(-2147024882);
            if ( v14 == 22 || v14 == 34 )
              ATL::AtlThrowImpl(-2147024809);
            if ( v14 != 80 )
              ATL::AtlThrowImpl(-2147467259);
          }
        }
        --*(_QWORD *)&v3[1].LockCount;
        v4 = 0LL;
        goto LABEL_2;
      }
    }
  }
  catch ( ATL::CAtlException *v17 )
  {
    v3 = lpCriticalSection;
    v2 = a2;
    LODWORD(v4) = *(_DWORD *)v17;
  }
  LeaveCriticalSection(v3);
  if ( *v2 )
  {
    v15 = *(unsigned int (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)*v2 + 16LL);
    if ( v15 == CServerAudioSessionControl::Release )
    {
      CServerAudioSessionControl::Release(*v2);
    }
    else if ( v15 == CAudioSessionManager::Release )
    {
      CAudioSessionManager::Release(*v2);
    }
    else
    {
      v15(*v2);
    }
  }
  return (unsigned int)v4;
}
