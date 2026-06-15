/*
 * XREFs of ?HandleDeviceAccess@@YAJPEAXPEBG1_N@Z @ 0x18007C858
 * Callers:
 *     s_GrantDeviceAccessForPackage @ 0x18007CB90 (s_GrantDeviceAccessForPackage.c)
 *     s_RevokeDeviceAccessForPackage @ 0x18007CBA0 (s_RevokeDeviceAccessForPackage.c)
 * Callees:
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x180005A64 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?RpcGetClientUserSid@@YAJPEAXPEAPEAG@Z @ 0x18006948C (-RpcGetClientUserSid@@YAJPEAXPEAPEAG@Z.c)
 *     ?RevokeSessions@CAudioSessionManagerProvider@@QEAAJPEBG00@Z @ 0x18007C9E8 (-RevokeSessions@CAudioSessionManagerProvider@@QEAAJPEBG00@Z.c)
 */

__int64 __fastcall HandleDeviceAccess(void *a1, const unsigned __int16 *a2, const unsigned __int16 *a3, char a4)
{
  int ClientUserSid; // eax
  signed int v8; // edi
  int AudioSessionManagerProvider; // eax
  struct CAudioSessionManagerProvider *v10; // rsi
  char v12; // [rsp+20h] [rbp-38h]
  HLOCAL hMem; // [rsp+30h] [rbp-28h] BYREF
  struct CAudioSessionManagerProvider *v14; // [rsp+38h] [rbp-20h] BYREF

  v14 = 0LL;
  hMem = 0LL;
  ClientUserSid = RpcGetClientUserSid(a1, &hMem);
  v8 = ClientUserSid;
  if ( ClientUserSid )
  {
    if ( ClientUserSid > 0 )
      v8 = (unsigned __int16)ClientUserSid | 0x80070000;
  }
  else
  {
    v12 = a4;
    (*(void (__fastcall **)(CWindowsPolicyManager *, const unsigned __int16 *, HLOCAL, const unsigned __int16 *, char))(*(_QWORD *)g_PolicyManager + 40LL))(
      g_PolicyManager,
      a2,
      hMem,
      a3,
      v12);
    AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v14);
    v10 = v14;
    v8 = AudioSessionManagerProvider;
    if ( AudioSessionManagerProvider >= 0 )
    {
      v8 = CAudioSessionManagerProvider::RevokeSessions(v14, a2, (const unsigned __int16 *)hMem, a3);
      if ( v8 >= 0 )
        v8 = 0;
    }
    if ( v10 )
      (*(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  LocalFree(hMem);
  return (unsigned int)v8;
}
