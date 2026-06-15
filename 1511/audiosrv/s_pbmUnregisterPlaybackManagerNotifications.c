/*
 * XREFs of s_pbmUnregisterPlaybackManagerNotifications @ 0x180091750
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001D7D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180032A30 (-Release@CUnknown@@UEAAKXZ.c)
 *     ?UnregisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x18009F2E4 (-UnregisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_.c)
 *     ?UnregisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x18009F368 (-UnregisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_.c)
 */

__int64 __fastcall s_pbmUnregisterPlaybackManagerNotifications(CApplicationManager *a1, int a2, unsigned int a3)
{
  int Process; // edi
  __int64 v6; // rcx
  int v7; // eax
  CUnknown *v9; // [rsp+48h] [rbp+20h] BYREF

  Process = 0;
  v9 = 0LL;
  if ( !g_ApplicationManager )
    return (unsigned int)Process;
  Process = CApplicationManager::RpcGetProcess(a1, a1, &v9);
  if ( Process >= 0 )
  {
    if ( a2 )
    {
      if ( a2 != 1 )
        goto LABEL_8;
      v7 = CApplicationManager::UnregisterTrackStateNotificationClient(v6, v9, a3);
    }
    else
    {
      v7 = CApplicationManager::UnregisterSoundLevelNotificationClient(v6, v9, a3);
    }
    Process = v7;
  }
LABEL_8:
  if ( v9 )
    CUnknown::Release(v9);
  return (unsigned int)Process;
}
