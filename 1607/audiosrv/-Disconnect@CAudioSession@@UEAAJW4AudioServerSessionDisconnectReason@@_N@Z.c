/*
 * XREFs of ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18005AA40
 * Callers:
 *     ?Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18005ACD0 (-Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18005AD70 (-Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18000E430 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180050484 (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x180050510 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x18005ADCC (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     ?NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z @ 0x18005D6F0 (-NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSession::Disconnect(__int64 a1, int a2, char a3)
{
  int v3; // ebx
  __int64 v4; // rsi
  _QWORD *v6; // rcx
  __int64 v7; // r15
  unsigned int v8; // r12d
  enum AudioSessionDisconnectReason v9; // r14d
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  ATL::CAtlException *v14; // rbx
  _QWORD v15[2]; // [rsp+20h] [rbp-78h] BYREF
  ATL::CAtlException *v16; // [rsp+30h] [rbp-68h] BYREF
  ATL::CAtlException *v17; // [rsp+38h] [rbp-60h] BYREF
  LPCRITICAL_SECTION v18; // [rsp+40h] [rbp-58h] BYREF
  char v19; // [rsp+48h] [rbp-50h]
  void **v20; // [rsp+50h] [rbp-48h] BYREF
  __int64 v21; // [rsp+58h] [rbp-40h]
  int v22; // [rsp+60h] [rbp-38h]
  int v26; // [rsp+B8h] [rbp+20h]

  v15[1] = -2LL;
  v3 = a2;
  v4 = a1;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v18, (struct _RTL_CRITICAL_SECTION *)(a1 + 32));
  if ( v3 != 5 )
    goto LABEL_9;
  if ( !*(_QWORD *)(v4 + 88) || *(_BYTE *)(**(_QWORD **)(v4 + 80) + 40LL) || !*(_QWORD *)(v4 + 88) )
  {
    if ( v19 )
      ATL::CCritSecLock::Unlock(&v18);
    return 0LL;
  }
  while ( 2 )
  {
    v6 = (_QWORD *)(v4 + 80);
    if ( !*(_QWORD *)(v4 + 88) )
      ATL::AtlThrowImpl(-2147024809);
    v15[0] = *(_QWORD *)*v6;
    try
    {
      ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt(v6, 0LL);
    }
    catch ( ATL::CAtlException *v16 )
    {
      v14 = v16;
      if ( *(_DWORD *)v16 == -1073741571 )
        _o__resetstkoflw();
      v26 = *(_DWORD *)v14;
      v4 = a1;
      v3 = a2;
      if ( v26 >= 0 )
        break;
LABEL_9:
      if ( *(_QWORD *)(v4 + 88) )
        continue;
      *(_DWORD *)(v4 + 328) = 0;
      if ( v19 )
        ATL::CCritSecLock::Unlock(&v18);
      v7 = v4 - 16;
      v8 = CAudioSession::DisconnectStreamList((CAudioSession *)(v4 - 16));
      v9 = DisconnectReasonServerShutdown;
      if ( *(_DWORD *)(v4 + 456) == 1 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 88LL))(v4 - 16, 0LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v4 - 16);
      v20 = &CAudioSessionDisconnected::`vftable';
      v21 = v4 - 16;
      v22 = v3;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
        (LPCRITICAL_SECTION)(v4 + 608),
        (void (__fastcall ***)(_QWORD, volatile signed __int32 **))&v20);
      if ( a3 )
      {
        if ( v3 )
        {
          v10 = v3 - 1;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              v12 = v11 - 1;
              if ( v12 )
              {
                v13 = v12 - 1;
                if ( v13 )
                {
                  if ( v13 == 1 )
                    v9 = DisconnectReasonExclusiveModeOverride;
                }
                else
                {
                  v9 = DisconnectReasonSessionDisconnected;
                }
              }
              else
              {
                v9 = DisconnectReasonSessionLogoff;
              }
            }
            else
            {
              v9 = DisconnectReasonFormatChanged;
            }
          }
        }
        else
        {
          v9 = DisconnectReasonDeviceRemoval;
        }
        CAudioSession::NotifyClientOfDisconnection((CAudioSession *)(v4 - 16), v9);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v4 - 16);
      return v8;
    }
    break;
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v20, (struct _RTL_CRITICAL_SECTION *)(v4 + 112));
  try
  {
    ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add((_QWORD *)(v4 + 152), v15);
  }
  catch ( ATL::CAtlException *v17 )
  {
    if ( *(_DWORD *)v17 == -1073741571 )
      _o__resetstkoflw();
    v4 = a1;
    v3 = a2;
  }
  if ( (_BYTE)v21 )
    ATL::CCritSecLock::Unlock((LPCRITICAL_SECTION *)&v20);
  --*(_DWORD *)(v4 + 72);
  goto LABEL_9;
}
