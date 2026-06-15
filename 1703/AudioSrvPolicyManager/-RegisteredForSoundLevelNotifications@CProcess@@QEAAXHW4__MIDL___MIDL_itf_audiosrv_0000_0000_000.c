/*
 * XREFs of ?RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x18000E398
 * Callers:
 *     ?RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x1800111F8 (-RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x180016920 (PbmUnregisterPlaybackManagerNotifications.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

void __fastcall CProcess::RegisteredForSoundLevelNotifications(__int64 a1, int a2, int a3)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( a3 != -1 && a3 )
    goto LABEL_12;
  if ( a2 )
  {
    if ( ++*(_DWORD *)(a1 + 480) != 1 )
      goto LABEL_12;
    v6 = *(_DWORD *)(a1 + 440) | (1 << a3);
  }
  else
  {
    if ( a3 == -1 )
    {
      *(_DWORD *)(a1 + 480) = 0;
      *(_DWORD *)(a1 + 440) &= ~1u;
      goto LABEL_12;
    }
    v7 = *(_DWORD *)(a1 + 480);
    if ( !v7 )
      goto LABEL_12;
    v8 = v7 - 1;
    *(_DWORD *)(a1 + 480) = v8;
    if ( v8 )
      goto LABEL_12;
    v6 = *(_DWORD *)(a1 + 440) & ~(1 << a3);
  }
  *(_DWORD *)(a1 + 440) = v6;
LABEL_12:
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
}
