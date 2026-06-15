/*
 * XREFs of ?QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180065050
 * Callers:
 *     ?QueryInterface@CAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180028A20 (-QueryInterface@CAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CProcess@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180029C30 (-QueryInterface@CProcess@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWindowsPolicyManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003E290 (-QueryInterface@CWindowsPolicyManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CServerAudioSessionControl@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180078980 (-QueryInterface@CServerAudioSessionControl@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBackgroundSessionCallbacks@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A0A80 (-QueryInterface@CBackgroundSessionCallbacks@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPlaybackManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A1340 (-QueryInterface@CPlaybackManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDuckingManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A3480 (-QueryInterface@CDuckingManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSharedNotificationData@CDuckingNotification@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A3500 (-QueryInterface@CSharedNotificationData@CDuckingNotification@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CUnknown::QueryInterface(CUnknown *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // edi

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      *a3 = this;
      (*(void (__fastcall **)(CUnknown *))(*(_QWORD *)this + 8LL))(this);
    }
    else
    {
      *a3 = 0LL;
      return (unsigned int)-2147467262;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
