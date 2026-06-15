/*
 * XREFs of ?AddRef@CAudioSessionManager@@UEAAKXZ @ 0x18000F410
 * Callers:
 *     ?Add@?$CAtlArray@V?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA_KPEAVCAudioSessionManager@@@Z @ 0x180001744 (-Add@-$CAtlArray@V-$CComQIPtr@VCAudioSessionManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@V-$CComQIP.c)
 *     ?AddInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x18000E110 (-AddInterface@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV-$CComPtr@.c)
 *     ?DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180012F30 (-DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 *     ?AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180012FC0 (-AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 *     ?AddRef@CAudioSessionManager@@W7EAAKXZ @ 0x180039270 (-AddRef@CAudioSessionManager@@W7EAAKXZ.c)
 * Callees:
 *     WPP_SF_qD @ 0x180038C8C (WPP_SF_qD.c)
 */

__int64 __fastcall CAudioSessionManager::AddRef(CAudioSessionManager *this)
{
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      54LL,
      &WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids,
      this,
      *((_DWORD *)this + 4) + 1);
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}
