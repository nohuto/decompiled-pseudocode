/*
 * XREFs of ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x18001C868
 * Callers:
 *     ?GenerateActiveAppNotification@CApplicationManager@@QEAAJPEAU_ActiveMediaAppsNotificationContext@@@Z @ 0x180014B90 (-GenerateActiveAppNotification@CApplicationManager@@QEAAJPEAU_ActiveMediaAppsNotificationContext.c)
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18001C924 (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18001C9F0 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 * Callees:
 *     ?GenerateMediaManagerNotification@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAPEAUMEDIAMANAGER_NOTIFICATION_BLOCK@@@Z @ 0x18001B578 (-GenerateMediaManagerNotification@@YAJPEAV-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCAp.c)
 */

__int64 __fastcall TsSessionSendAppManagerNotification(struct TSSession *a1)
{
  void *v2; // rdi
  int v3; // esi
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  HANDLE ProcessHeap; // rax
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = 0;
  v8 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( *((_QWORD *)a1 + 9) )
  {
    v3 = GenerateMediaManagerNotification((_QWORD *)a1 + 13, &v8);
    if ( v3 >= 0 && (v4 = (_QWORD *)*((_QWORD *)a1 + 7)) != 0LL )
    {
      v2 = v8;
      do
      {
        v5 = v4[2];
        v4 = (_QWORD *)*v4;
        if ( !*(_DWORD *)(v5 + 416) )
          GenerateMediaEvent(v2, *(unsigned int *)(v5 + 168));
      }
      while ( v4 );
    }
    else
    {
      v2 = v8;
    }
  }
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v2);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  return (unsigned int)v3;
}
