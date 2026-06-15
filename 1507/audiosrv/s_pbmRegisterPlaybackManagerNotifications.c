/*
 * XREFs of s_pbmRegisterPlaybackManagerNotifications @ 0x180003B30
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x1800024DC (-RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x180002568 (-RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180007DD0 (-Release@CUnknown@@UEAAKXZ.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B5F0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 */

__int64 __fastcall s_pbmRegisterPlaybackManagerNotifications(CApplicationManager *a1, int a2, unsigned int a3)
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
        goto LABEL_7;
      v7 = CApplicationManager::RegisterTrackStateNotificationClient(v6, v9, a3);
    }
    else
    {
      v7 = CApplicationManager::RegisterSoundLevelNotificationClient(v6, v9, a3);
    }
    Process = v7;
  }
LABEL_7:
  if ( v9 )
    CUnknown::Release(v9);
  return (unsigned int)Process;
}
