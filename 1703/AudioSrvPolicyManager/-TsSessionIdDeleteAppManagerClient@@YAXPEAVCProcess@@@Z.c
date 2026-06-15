/*
 * XREFs of ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18001ABB4
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180012CCC (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     PbmUnregisterAppManagerNotification @ 0x180016DF0 (PbmUnregisterAppManagerNotification.c)
 * Callees:
 *     ??1TSSession@@QEAA@XZ @ 0x180018868 (--1TSSession@@QEAA@XZ.c)
 *     ?TsSessionDeleteAppManagerClient@@YAJPEAVTSSession@@PEAVCProcess@@@Z @ 0x18001A2A0 (-TsSessionDeleteAppManagerClient@@YAJPEAVTSSession@@PEAVCProcess@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001A328 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?RemoveAt@?$TList@VTSSession@@@@QEAAXPEAX@Z @ 0x18001C808 (-RemoveAt@-$TList@VTSSession@@@@QEAAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall TsSessionIdDeleteAppManagerClient(DWORD *a1)
{
  struct CProcess *v2; // rdx
  struct TSSession *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdx
  struct TSSession *v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( !(unsigned int)TsSessionFromSessionId(a1[43], 0, &v7, &v6) )
  {
    v2 = (struct CProcess *)a1;
    v3 = v6;
    if ( (int)TsSessionDeleteAppManagerClient(v6, v2) >= 0
      && *((_DWORD *)v3 + 12)
      && *((_DWORD *)v3 + 1) == 0xFFFF
      && !*((_DWORD *)v3 + 8)
      && !*((_QWORD *)v3 + 9) )
    {
      TList<TSSession>::RemoveAt(v4, v7);
      TSSession::~TSSession(v3, v5);
      operator delete(v3, 0x178uLL);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
}
