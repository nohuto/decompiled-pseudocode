/*
 * XREFs of s_tsRegisterAudioProtocolNotification @ 0x180009E70
 * Callers:
 *     <none>
 * Callees:
 *     ?AddHead@?$TList@UAUDIOPROTOCOLNOTIFY@@@@QEAAPEAXPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180009F68 (-AddHead@-$TList@UAUDIOPROTOCOLNOTIFY@@@@QEAAPEAXPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18000A0E0 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18000A160 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 */

__int64 __fastcall s_tsRegisterAudioProtocolNotification(void *a1, struct TSSession **a2)
{
  unsigned int v3; // ebx
  HANDLE ProcessHeap; // rax
  struct TSSession *v5; // rdi
  unsigned int v6; // ecx
  HANDLE v7; // rax
  struct TSSession *v9; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v10; // [rsp+40h] [rbp+18h] BYREF

  if ( !a2 )
    return 87;
  *a2 = 0LL;
  v3 = RpcClientProcessSessionId(a1, (unsigned int *)&v9, &v10);
  if ( !v3 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
    ProcessHeap = GetProcessHeap();
    v5 = (struct TSSession *)HeapAlloc(ProcessHeap, 0, 4uLL);
    if ( !v5 )
      goto LABEL_10;
    v6 = v10;
    *(_DWORD *)v5 = (_DWORD)v9;
    v3 = TsSessionFromSessionId(v6, 1, 0LL, &v9);
    if ( v3 )
      goto LABEL_7;
    if ( TList<AUDIOPROTOCOLNOTIFY>::AddHead((char *)v9 + 16, v5) )
    {
      v9 = v5;
      v5 = 0LL;
    }
    else
    {
LABEL_10:
      v3 = 14;
    }
LABEL_7:
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
    v7 = GetProcessHeap();
    HeapFree(v7, 0, v5);
    if ( !v3 )
      *a2 = v9;
  }
  return v3;
}
