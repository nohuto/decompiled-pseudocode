/*
 * XREFs of TS_SessionGetAudioProtocol @ 0x18001E4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18001B1C4 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C370 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001F788 (-lock@critical_section@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x1800224B0 (-GetTsAudioProtocol@@YAIK@Z.c)
 */

__int64 __fastcall TS_SessionGetAudioProtocol(void *a1, DWORD a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rcx
  struct TSSession *v9; // rcx
  LPCRITICAL_SECTION lpCriticalSection[3]; // [rsp+20h] [rbp-18h] BYREF
  struct TSSession *SessionId; // [rsp+50h] [rbp+18h] BYREF

  if ( a3 && a4 )
  {
    *a3 = 0xFFFF;
    *a4 = 0;
    v7 = RpcClientProcessSessionId(a1, (unsigned int *)lpCriticalSection, (unsigned int *)&SessionId);
    if ( !v7 )
    {
      if ( a2 == -1 )
        a2 = (unsigned int)SessionId;
      if ( !(_DWORD)SessionId || a2 == (_DWORD)SessionId )
      {
        if ( a2 )
        {
          *a3 = 0xFFFF;
          wil::critical_section::lock(v8, lpCriticalSection);
          v7 = TsSessionFromSessionId(a2, 0, 0LL, &SessionId);
          if ( !v7 )
          {
            v9 = SessionId;
            *a3 = *((_DWORD *)SessionId + 1);
            *a4 = *((_DWORD *)v9 + 2);
          }
          if ( lpCriticalSection[0] )
            LeaveCriticalSection(lpCriticalSection[0]);
          if ( v7 == 1168 )
          {
            *a3 = GetTsAudioProtocol(a2);
            *a4 = 0;
            return 0;
          }
        }
        else
        {
          *a3 = 0;
          *a4 = 0;
        }
      }
      else
      {
        return 5;
      }
    }
  }
  else
  {
    return 87;
  }
  return v7;
}
