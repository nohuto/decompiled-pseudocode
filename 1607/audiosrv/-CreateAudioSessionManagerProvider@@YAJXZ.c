/*
 * XREFs of ?CreateAudioSessionManagerProvider@@YAJXZ @ 0x180032814
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x180030560 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?AddRef@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x18000D220 (-AddRef@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CreateInstance@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z @ 0x18003288C (-CreateInstance@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 CreateAudioSessionManagerProvider(void)
{
  __int64 v0; // rcx
  int Instance; // ebx
  unsigned int (__fastcall *v2)(__int64, volatile int *); // rax
  LPCRITICAL_SECTION v4; // [rsp+28h] [rbp-20h] BYREF
  char v5; // [rsp+30h] [rbp-18h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v4, &g_SessionManagerProviderLock);
  Instance = ATL::CComObject<CAudioSessionManagerProvider>::CreateInstance(v0);
  if ( Instance >= 0 )
  {
    v2 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)g_SingletonAudioSessionManagerProvider + 8LL);
    if ( v2 == ATL::CComObject<CAudioSessionManagerProvider>::AddRef )
      ATL::CComObject<CAudioSessionManagerProvider>::AddRef(
        (__int64)g_SingletonAudioSessionManagerProvider,
        (volatile int *)ATL::CComObject<CAudioSessionManagerProvider>::AddRef);
    else
      ((void (__fastcall *)(CAudioSessionManagerProvider *))v2)(g_SingletonAudioSessionManagerProvider);
  }
  if ( v5 )
    ATL::CCritSecLock::Unlock(&v4);
  return (unsigned int)Instance;
}
