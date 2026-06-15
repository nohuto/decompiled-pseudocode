/*
 * XREFs of s_tsUnregisterAudioProtocolNotification @ 0x180009890
 * Callers:
 *     <none>
 * Callees:
 *     ?TsSessionMayBeDeleted@@YAHPEAVTSSession@@@Z @ 0x180009954 (-TsSessionMayBeDeleted@@YAHPEAVTSSession@@@Z.c)
 *     ?TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180009968 (-TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18000A160 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ??_GTSSession@@QEAAPEAXI@Z @ 0x18009EFFC (--_GTSSession@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$TList@VTSSession@@@@QEAAXPEAX@Z @ 0x18009F9BC (-RemoveAt@-$TList@VTSSession@@@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall s_tsUnregisterAudioProtocolNotification(void *a1, struct AUDIOPROTOCOLNOTIFY **a2)
{
  struct AUDIOPROTOCOLNOTIFY *v2; // r14
  unsigned int v4; // ebx
  _QWORD *v5; // rax
  _QWORD *v6; // rbp
  struct TSSession *v7; // rdi
  __int64 v8; // rcx
  unsigned int v10; // edx
  unsigned int v11; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v12; // [rsp+50h] [rbp+18h] BYREF

  v2 = *a2;
  if ( *a2 )
  {
    v4 = RpcClientProcessSessionId(a1, &v12, &v11);
    if ( !v4 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
      v5 = qword_1800E88D0;
      do
      {
        v6 = v5;
        if ( !v5 )
        {
          v4 = 1168;
          goto LABEL_8;
        }
        v7 = (struct TSSession *)v5[2];
        v5 = (_QWORD *)*v5;
      }
      while ( v11 != *(_DWORD *)v7 );
      v4 = TsSessionDeleteNotify(v7, v2);
      if ( !v4 )
      {
        if ( (unsigned int)TsSessionMayBeDeleted(v7) )
        {
          TList<TSSession>::RemoveAt(v8, v6);
          if ( v7 )
            TSSession::`scalar deleting destructor'(v7, v10);
        }
      }
LABEL_8:
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
      if ( !v4 )
        *a2 = 0LL;
    }
  }
  else
  {
    return 87;
  }
  return v4;
}
