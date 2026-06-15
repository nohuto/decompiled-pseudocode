/*
 * XREFs of ?UpdateSaDeviceResourcePriority@CSaDeviceInstance@@IEAAJXZ @ 0x180075A44
 * Callers:
 *     ?UnregisterStream@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@PEAUIAudioGraphCallback@@@Z @ 0x1800758B0 (-UnregisterStream@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@PEAUIAudioGraphCallback@@@Z.c)
 *     ?UpdateSaDevicePriority@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x1800759B0 (-UpdateSaDevicePriority@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSaDeviceInstance::UpdateSaDeviceResourcePriority(struct _RTL_CRITICAL_SECTION *this)
{
  unsigned int v2; // esi
  int v3; // r15d
  int v4; // r14d
  _QWORD *SpinCount; // r12
  __int64 v6; // rdi
  unsigned int v7; // eax
  LPCRITICAL_SECTION v9; // [rsp+28h] [rbp-30h] BYREF
  char v10; // [rsp+30h] [rbp-28h]

  v2 = -1;
  v3 = 0;
  v4 = 1;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v9, this + 3);
  SpinCount = (_QWORD *)this[1].SpinCount;
  if ( SpinCount )
  {
    v4 = 0;
    do
    {
      v6 = SpinCount[2];
      SpinCount = (_QWORD *)*SpinCount;
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 64LL))(v6);
      if ( v7 < v2 )
        v2 = v7;
    }
    while ( SpinCount );
  }
  if ( LODWORD(this[1].OwningThread) != v2 )
  {
    LODWORD(this[1].OwningThread) = v2;
    v3 = 1;
  }
  if ( v10 )
    ATL::CCritSecLock::Unlock(&v9);
  if ( v3 && !v4 )
    (*(void (__fastcall **)(CWindowsPolicyManager *, _QWORD, HANDLE *))(*(_QWORD *)g_PolicyManager + 144LL))(
      g_PolicyManager,
      LODWORD(this[1].OwningThread),
      &this[1].LockSemaphore);
  return 0LL;
}
