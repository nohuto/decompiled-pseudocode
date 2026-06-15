/*
 * XREFs of TS_AudioProtocolNotifyRundown @ 0x18003959C
 * Callers:
 *     HAUDIOPROTOCOLNOTIFY_rundown @ 0x180039590 (HAUDIOPROTOCOLNOTIFY_rundown.c)
 * Callees:
 *     ?TsSessionMayBeDeleted@@YAHPEAVTSSession@@@Z @ 0x18002E514 (-TsSessionMayBeDeleted@@YAHPEAVTSSession@@@Z.c)
 *     ?TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18002E528 (-TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?GetNext@?$TList@VTSSession@@@@QEBAHAEAPEAXPEAPEAVTSSession@@@Z @ 0x18003963C (-GetNext@-$TList@VTSSession@@@@QEBAHAEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ??_GTSSession@@QEAAPEAXI@Z @ 0x18009BE30 (--_GTSSession@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$TList@VTSSession@@@@QEAAXPEAX@Z @ 0x18009C904 (-RemoveAt@-$TList@VTSSession@@@@QEAAXPEAX@Z.c)
 */

void __fastcall TS_AudioProtocolNotifyRundown(struct AUDIOPROTOCOLNOTIFY *a1)
{
  __int64 v2; // rcx
  void *v3; // rdi
  __int64 v4; // rcx
  unsigned int v5; // edx
  struct TSSession *v6; // [rsp+30h] [rbp+8h] BYREF
  void *i; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v3 = qword_1800E68A0;
  for ( i = qword_1800E68A0;
        (unsigned int)TList<TSSession>::GetNext(v2, &i, &v6) && (unsigned int)TsSessionDeleteNotify(v6, a1);
        v3 = i )
  {
    v6 = 0LL;
  }
  if ( v6 && (unsigned int)TsSessionMayBeDeleted(v6) )
  {
    TList<TSSession>::RemoveAt(v4, v3);
    TSSession::`scalar deleting destructor'(v6, v5);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
}
