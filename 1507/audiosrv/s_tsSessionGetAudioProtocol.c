/*
 * XREFs of s_tsSessionGetAudioProtocol @ 0x180009FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18000A0E0 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18000A160 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x180040F58 (-GetTsAudioProtocol@@YAIK@Z.c)
 */

__int64 __fastcall s_tsSessionGetAudioProtocol(void *a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  __int64 result; // rax
  struct _RTL_CRITICAL_SECTION *v8; // rcx
  unsigned int v9; // edi
  struct TSSession *v10; // rcx
  unsigned int v11; // [rsp+48h] [rbp+10h] BYREF
  struct TSSession *v12; // [rsp+50h] [rbp+18h] BYREF

  if ( !a3 || !a4 )
    return 87LL;
  *a3 = 0xFFFF;
  *a4 = 0;
  result = RpcClientProcessSessionId(a1, (unsigned int *)&v12, &v11);
  if ( !(_DWORD)result )
  {
    if ( a2 == -1 )
      a2 = v11;
    if ( v11 && a2 != v11 )
    {
      return 5LL;
    }
    else if ( a2 )
    {
      v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 24);
      *a3 = 0xFFFF;
      EnterCriticalSection(v8);
      v9 = TsSessionFromSessionId(a2, 0, 0LL, &v12);
      if ( !v9 )
      {
        v10 = v12;
        *a3 = *((_DWORD *)v12 + 1);
        *a4 = *((_DWORD *)v10 + 2);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
      if ( v9 == 1168 )
      {
        *a3 = GetTsAudioProtocol(a2);
        v9 = 0;
        *a4 = 0;
      }
      return v9;
    }
    else
    {
      *a3 = 0;
      *a4 = 0;
    }
  }
  return result;
}
