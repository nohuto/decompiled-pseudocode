/*
 * XREFs of VADServerUserSessionChanged @ 0x18002BC60
 * Callers:
 *     ?Invoke@SESSION_EVENT@@UEAAXXZ @ 0x18002BBA0 (-Invoke@SESSION_EVENT@@UEAAXXZ.c)
 * Callees:
 *     ?TS_SessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z @ 0x18000771C (-TS_SessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z.c)
 *     ?NotifySessionAudioProtocol@CAudioSessionManagerProvider@@QEAAXKI@Z @ 0x18002B6B0 (-NotifySessionAudioProtocol@CAudioSessionManagerProvider@@QEAAXKI@Z.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18002CA54 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x18002CAF0 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?NotifyNewAudioProtocol@CVolumeProvider@@QEAAXKI@Z @ 0x18002CC40 (-NotifyNewAudioProtocol@CVolumeProvider@@QEAAXKI@Z.c)
 *     GetSAProvider @ 0x18002E018 (GetSAProvider.c)
 *     ?Release@?$CComObject@VCSaProvider@@@ATL@@UEAAKXZ @ 0x18002E1D0 (-Release@-$CComObject@VCSaProvider@@@ATL@@UEAAKXZ.c)
 *     ?ReleaseCachedRemoteSaDevice@CSaProvider@@UEAAJK@Z @ 0x18002E390 (-ReleaseCachedRemoteSaDevice@CSaProvider@@UEAAJK@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z @ 0x180081598 (-NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z.c)
 */

__int64 __fastcall VADServerUserSessionChanged(unsigned int a1, __int64 a2)
{
  DWORD v2; // r15d
  int AudioSessionManagerProvider; // eax
  CVolumeProvider *v6; // rcx
  struct CAudioSessionManagerProvider *v7; // rbx
  void (__fastcall *v8)(struct CAudioSessionManagerProvider *); // rsi
  unsigned int v10; // esi
  __int64 (__fastcall *v11)(CSaProvider *__hidden, unsigned int); // rdi
  void (__fastcall *v12)(struct CAudioSessionManagerProvider *); // rdi
  int v13; // eax
  struct CAudioSessionManagerProvider *v14; // rdi
  void (__fastcall *v15)(struct CAudioSessionManagerProvider *); // rsi
  void (__fastcall *v16)(struct CAudioSessionManagerProvider *); // rbx
  unsigned int v17; // [rsp+60h] [rbp+40h] BYREF
  struct CAudioSessionManagerProvider *v18; // [rsp+68h] [rbp+48h] BYREF
  struct CAudioSessionManagerProvider *v19; // [rsp+70h] [rbp+50h] BYREF

  v2 = *(_DWORD *)(a2 + 4);
  TS_SessionIdGetAudioProtocol(v2, &v17, (unsigned int *)&v18);
  v18 = 0LL;
  AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v18);
  v7 = v18;
  if ( AudioSessionManagerProvider >= 0 )
    CAudioSessionManagerProvider::NotifySessionAudioProtocol(v18, v2, v17);
  if ( v7 )
  {
    v8 = *(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v7 + 16LL);
    if ( (char *)v8 == (char *)ATL::CComObject<CAudioSessionManagerProvider>::Release )
      ATL::CComObject<CAudioSessionManagerProvider>::Release(v7);
    else
      v8(v7);
  }
  if ( g_pVolumeProvider )
    CVolumeProvider::NotifyNewAudioProtocol(v6, v2, v17);
  if ( a1 != 5 && a1 != 1 )
  {
    switch ( a1 )
    {
      case 2u:
        goto LABEL_16;
      case 3u:
        return 0LL;
      case 4u:
LABEL_16:
        v18 = 0LL;
        if ( (int)GetSAProvider(&v18) >= 0 )
        {
          if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
            && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
          {
            WPP_SF_D(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              72LL,
              &WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids,
              *(unsigned int *)(a2 + 4));
          }
          v10 = *(_DWORD *)(a2 + 4);
          v11 = *(__int64 (__fastcall **)(CSaProvider *__hidden, unsigned int))(*(_QWORD *)v18 + 40LL);
          if ( v11 == CSaProvider::ReleaseCachedRemoteSaDevice )
            CSaProvider::ReleaseCachedRemoteSaDevice(v18, v10);
          else
            v11(v18, v10);
        }
        if ( v18 )
        {
          v12 = *(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v18 + 16LL);
          if ( (char *)v12 == (char *)ATL::CComObject<CSaProvider>::Release )
            ATL::CComObject<CSaProvider>::Release(v18);
          else
            v12(v18);
        }
        break;
      default:
        if ( a1 <= 6 )
          goto LABEL_28;
        if ( a1 <= 9 )
          return 0LL;
        if ( a1 == 11 )
        {
          v19 = 0LL;
          v13 = GetAudioSessionManagerProvider(&v19);
          v14 = v19;
          if ( v13 >= 0 )
            CAudioSessionManagerProvider::NotifySessionTerminate(v19, *(_DWORD *)(a2 + 4));
          v18 = 0LL;
          if ( (int)GetSAProvider(&v18) >= 0 )
          {
            if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
              && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
              && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
            {
              WPP_SF_D(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                73LL,
                &WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids,
                *(unsigned int *)(a2 + 4));
            }
            (*(void (__fastcall **)(struct CAudioSessionManagerProvider *, _QWORD))(*(_QWORD *)v18 + 40LL))(
              v18,
              *(unsigned int *)(a2 + 4));
          }
          if ( v18 )
          {
            v15 = *(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v18 + 16LL);
            if ( (char *)v15 == (char *)ATL::CComObject<CSaProvider>::Release )
              ATL::CComObject<CSaProvider>::Release(v18);
            else
              v15(v18);
          }
          if ( v14 )
          {
            v16 = *(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v14 + 16LL);
            if ( (char *)v16 == (char *)ATL::CComObject<CAudioSessionManagerProvider>::Release )
              ATL::CComObject<CAudioSessionManagerProvider>::Release(v14);
            else
              v16(v14);
          }
        }
        else
        {
LABEL_28:
          if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
            && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
          {
            WPP_SF_D(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              74LL,
              &WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids,
              a1);
          }
        }
        break;
    }
  }
  return 0LL;
}
