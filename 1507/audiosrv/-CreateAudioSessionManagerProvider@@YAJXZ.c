/*
 * XREFs of ?CreateAudioSessionManagerProvider@@YAJXZ @ 0x1800422C8
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18003A328 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?AddRef@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x18000AF90 (-AddRef@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?CreateInstance@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z @ 0x1800421D0 (-CreateInstance@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 CreateAudioSessionManagerProvider(void)
{
  int Instance; // ebx
  __int64 (__fastcall *v1)(__int64); // rsi
  LPCRITICAL_SECTION v3; // [rsp+28h] [rbp-20h] BYREF
  char v4; // [rsp+30h] [rbp-18h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v3, &g_SessionManagerProviderLock);
  Instance = ATL::CComObject<CAudioSessionManagerProvider>::CreateInstance();
  if ( Instance >= 0 )
  {
    v1 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)g_SingletonAudioSessionManagerProvider + 8LL);
    if ( v1 == ATL::CComObject<CAudioSessionManagerProvider>::AddRef )
      ATL::CComObject<CAudioSessionManagerProvider>::AddRef((__int64)g_SingletonAudioSessionManagerProvider);
    else
      v1((__int64)g_SingletonAudioSessionManagerProvider);
  }
  if ( v4 )
    ATL::CCritSecLock::Unlock(&v3);
  return (unsigned int)Instance;
}
