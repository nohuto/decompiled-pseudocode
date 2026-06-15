/*
 * XREFs of s_RevokeDeviceAccessForPackage @ 0x1800817E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18002CA54 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?RpcGetClientUserSid@@YAJPEAXPEAPEAG@Z @ 0x18006A94C (-RpcGetClientUserSid@@YAJPEAXPEAPEAG@Z.c)
 *     ?RevokeSessions@CAudioSessionManagerProvider@@QEAAJPEBG00@Z @ 0x180081638 (-RevokeSessions@CAudioSessionManagerProvider@@QEAAJPEBG00@Z.c)
 */

__int64 __fastcall s_RevokeDeviceAccessForPackage(void *a1, const unsigned __int16 *a2, const unsigned __int16 *a3)
{
  int ClientUserSid; // eax
  signed int v6; // edi
  int AudioSessionManagerProvider; // eax
  struct CAudioSessionManagerProvider *v8; // rsi
  struct CAudioSessionManagerProvider *v10; // [rsp+20h] [rbp-28h] BYREF
  HLOCAL hMem; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  hMem = 0LL;
  ClientUserSid = RpcGetClientUserSid(a1, &hMem);
  v6 = ClientUserSid;
  if ( ClientUserSid )
  {
    if ( ClientUserSid > 0 )
      v6 = (unsigned __int16)ClientUserSid | 0x80070000;
  }
  else
  {
    (*(void (__fastcall **)(CWindowsPolicyManager *, const unsigned __int16 *, HLOCAL, const unsigned __int16 *))(*(_QWORD *)g_PolicyManager + 40LL))(
      g_PolicyManager,
      a2,
      hMem,
      a3);
    AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v10);
    v8 = v10;
    v6 = AudioSessionManagerProvider;
    if ( AudioSessionManagerProvider >= 0 )
    {
      v6 = CAudioSessionManagerProvider::RevokeSessions(v10, a2, (const unsigned __int16 *)hMem, a3);
      if ( v6 >= 0 )
        v6 = 0;
    }
    if ( v8 )
      (*(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  LocalFree(hMem);
  return (unsigned int)v6;
}
