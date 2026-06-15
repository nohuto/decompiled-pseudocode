/*
 * XREFs of ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18009FD64
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001C168 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     s_pbmUnregisterAppManagerNotification @ 0x180093EB0 (s_pbmUnregisterAppManagerNotification.c)
 * Callees:
 *     ?TsSessionMayBeDeleted@@YAHPEAVTSSession@@@Z @ 0x180009954 (-TsSessionMayBeDeleted@@YAHPEAVTSSession@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18000A0E0 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ??_GTSSession@@QEAAPEAXI@Z @ 0x18009EFFC (--_GTSSession@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$TList@VTSSession@@@@QEAAXPEAX@Z @ 0x18009F9BC (-RemoveAt@-$TList@VTSSession@@@@QEAAXPEAX@Z.c)
 *     ?TsSessionDeleteAppManagerClient@@YAJPEAVTSSession@@PEAVCProcess@@@Z @ 0x18009FAB0 (-TsSessionDeleteAppManagerClient@@YAJPEAVTSSession@@PEAVCProcess@@@Z.c)
 */

void __fastcall TsSessionIdDeleteAppManagerClient(DWORD *a1)
{
  struct CProcess *v2; // rdx
  TSSession *v3; // rbx
  __int64 v4; // rcx
  struct TSSession *v5; // [rsp+30h] [rbp+8h] BYREF
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( !(unsigned int)TsSessionFromSessionId(a1[43], 0, &v6, &v5) )
  {
    v2 = (struct CProcess *)a1;
    v3 = v5;
    if ( (int)TsSessionDeleteAppManagerClient(v5, v2) >= 0 )
    {
      if ( (unsigned int)TsSessionMayBeDeleted(v3) )
      {
        TList<TSSession>::RemoveAt(v4, v6);
        if ( v3 )
          TSSession::`scalar deleting destructor'(v3);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
}
