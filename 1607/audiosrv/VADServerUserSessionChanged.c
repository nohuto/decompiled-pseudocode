/*
 * XREFs of VADServerUserSessionChanged @ 0x18002B458
 * Callers:
 *     ?Invoke@SESSION_EVENT@@UEAAXXZ @ 0x18002B3A0 (-Invoke@SESSION_EVENT@@UEAAXXZ.c)
 * Callees:
 *     ?NotifySessionAudioProtocol@CAudioSessionManagerProvider@@QEAAXKI@Z @ 0x18000DD14 (-NotifySessionAudioProtocol@CAudioSessionManagerProvider@@QEAAXKI@Z.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x18002B564 (-GetTsAudioProtocol@@YAIK@Z.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18002B6C0 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x18002B750 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?NotifyNewAudioProtocol@CVolumeProvider@@UEAAXKI@Z @ 0x18002B8D0 (-NotifyNewAudioProtocol@CVolumeProvider@@UEAAXKI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     ?NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z @ 0x180064070 (-NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z.c)
 */

__int64 __fastcall VADServerUserSessionChanged(unsigned int a1, __int64 a2)
{
  DWORD v2; // ebp
  unsigned int TsAudioProtocol; // esi
  int AudioSessionManagerProvider; // eax
  struct CAudioSessionManagerProvider *v7; // rbx
  void (__fastcall *v8)(struct CAudioSessionManagerProvider *); // rax
  void (__fastcall *v9)(CVolumeProvider *__hidden, unsigned int, unsigned int); // rax
  int v11; // eax
  struct CAudioSessionManagerProvider *v12; // rbx
  void (__fastcall *v13)(struct CAudioSessionManagerProvider *); // rax
  unsigned int v14; // [rsp+50h] [rbp+8h]
  struct CAudioSessionManagerProvider *v15; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a2 + 4);
  if ( (unsigned int)IsTSSessionIdAudioProtocolSupported() )
    TsAudioProtocol = GetTsAudioProtocol(v2);
  else
    TsAudioProtocol = v14;
  v15 = 0LL;
  AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v15);
  v7 = v15;
  if ( AudioSessionManagerProvider >= 0 )
    CAudioSessionManagerProvider::NotifySessionAudioProtocol(v15, v2, TsAudioProtocol);
  if ( v7 )
  {
    v8 = *(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v7 + 16LL);
    if ( (char *)v8 == (char *)ATL::CComObject<CAudioSessionManagerProvider>::Release )
      ATL::CComObject<CAudioSessionManagerProvider>::Release(v7);
    else
      v8(v7);
  }
  if ( g_pVolumeProvider )
  {
    v9 = *(void (__fastcall **)(CVolumeProvider *__hidden, unsigned int, unsigned int))(*(_QWORD *)g_pVolumeProvider
                                                                                      + 32LL);
    if ( v9 == CVolumeProvider::NotifyNewAudioProtocol )
      CVolumeProvider::NotifyNewAudioProtocol(g_pVolumeProvider, v2, TsAudioProtocol);
    else
      v9(g_pVolumeProvider, v2, TsAudioProtocol);
  }
  if ( a1 != 5 && a1 != 1 && a1 != 2 && a1 != 3 && a1 != 4 )
  {
    if ( a1 <= 6 )
      goto LABEL_21;
    if ( a1 <= 9 )
      return 0LL;
    if ( a1 == 11 )
    {
      v15 = 0LL;
      v11 = GetAudioSessionManagerProvider(&v15);
      v12 = v15;
      if ( v11 >= 0 )
        CAudioSessionManagerProvider::NotifySessionTerminate(v15, *(_DWORD *)(a2 + 4));
      if ( v12 )
      {
        v13 = *(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v12 + 16LL);
        if ( (char *)v13 == (char *)ATL::CComObject<CAudioSessionManagerProvider>::Release )
          ATL::CComObject<CAudioSessionManagerProvider>::Release(v12);
        else
          v13(v12);
      }
    }
    else
    {
LABEL_21:
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 56LL, &WPP_46a9ce01d2f43d18f900d88a548d1114_Traceguids, a1);
      }
    }
  }
  return 0LL;
}
