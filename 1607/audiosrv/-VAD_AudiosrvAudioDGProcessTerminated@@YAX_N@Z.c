/*
 * XREFs of ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x18000192C
 * Callers:
 *     ?OnDGProcessTerminated@CAudioSrv@@EEAAX_N@Z @ 0x1800015C0 (-OnDGProcessTerminated@CAudioSrv@@EEAAX_N@Z.c)
 * Callees:
 *     ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x1800015D0 (-NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z.c)
 *     ?NotifyAudioDGTerminated@CVolumeProvider@@UEAAXXZ @ 0x180001B20 (-NotifyAudioDGTerminated@CVolumeProvider@@UEAAXXZ.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18002B6C0 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x18002B750 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VAD_AudiosrvAudioDGProcessTerminated(unsigned __int8 a1, __int64 a2, const GUID *a3, const GUID *a4)
{
  int AudioSessionManagerProvider; // eax
  bool v6; // r8
  struct CAudioSessionManagerProvider *v7; // rbx
  void (*v8)(void); // rax
  void (__fastcall *v9)(struct CAudioSessionManagerProvider *); // rax
  struct CAudioSessionManagerProvider *v10[2]; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-48h] BYREF
  struct CAudioSessionManagerProvider **v12; // [rsp+60h] [rbp-28h]
  int v13; // [rsp+68h] [rbp-20h]
  int v14; // [rsp+6Ch] [rbp-1Ch]

  v10[1] = (struct CAudioSessionManagerProvider *)-2LL;
  if ( dword_1800CA040 > 5u )
  {
    LODWORD(v10[0]) = a1;
    v12 = v10;
    v13 = 4;
    v14 = 0;
    TlgWrite((TraceLoggingHProvider)&dword_1800CA040, &unk_1800A7CDB, a3, a4, 3u, &v11);
  }
  v10[0] = 0LL;
  AudioSessionManagerProvider = GetAudioSessionManagerProvider(v10);
  v7 = v10[0];
  if ( AudioSessionManagerProvider >= 0 )
    CAudioSessionManagerProvider::NotifyAudioDGTerminated(v10[0], a1, v6);
  if ( g_pVolumeProvider )
  {
    v8 = *(void (**)(void))(*(_QWORD *)g_pVolumeProvider + 40LL);
    if ( (char *)v8 == (char *)CVolumeProvider::NotifyAudioDGTerminated )
      CVolumeProvider::NotifyAudioDGTerminated(g_pVolumeProvider);
    else
      v8();
  }
  if ( v7 )
  {
    v9 = *(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v7 + 16LL);
    if ( (char *)v9 == (char *)ATL::CComObject<CAudioSessionManagerProvider>::Release )
      ATL::CComObject<CAudioSessionManagerProvider>::Release(v7);
    else
      v9(v7);
  }
}
