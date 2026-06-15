/*
 * XREFs of ?CreateAudioSessionManagerProvider@@YAJXZ @ 0x18003DE44
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18003B888 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?AddRef@CBackgroundSessionCallbacks@@UEAAKXZ @ 0x180005B50 (-AddRef@CBackgroundSessionCallbacks@@UEAAKXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?CreateInstance@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z @ 0x18003DEC8 (-CreateInstance@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 CreateAudioSessionManagerProvider(void)
{
  __int64 v0; // rcx
  int Instance; // ebx
  __int64 (__fastcall *v2)(CBackgroundSessionCallbacks *); // rsi
  LPCRITICAL_SECTION v4; // [rsp+28h] [rbp-20h] BYREF
  char v5; // [rsp+30h] [rbp-18h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v4, &g_SessionManagerProviderLock);
  Instance = ATL::CComObject<CAudioSessionManagerProvider>::CreateInstance(v0);
  if ( Instance >= 0 )
  {
    v2 = *(__int64 (__fastcall **)(CBackgroundSessionCallbacks *))(*(_QWORD *)g_SingletonAudioSessionManagerProvider
                                                                 + 8LL);
    if ( v2 == CBackgroundSessionCallbacks::AddRef )
      CBackgroundSessionCallbacks::AddRef(g_SingletonAudioSessionManagerProvider);
    else
      v2(g_SingletonAudioSessionManagerProvider);
  }
  if ( v5 )
    ATL::CCritSecLock::Unlock(&v4);
  return (unsigned int)Instance;
}
