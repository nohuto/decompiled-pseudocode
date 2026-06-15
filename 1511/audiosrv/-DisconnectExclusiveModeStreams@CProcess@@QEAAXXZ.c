/*
 * XREFs of ?DisconnectExclusiveModeStreams@CProcess@@QEAAXXZ @ 0x1800A0120
 * Callers:
 *     ?DisconnectExclusiveModeStreams@CApplication@@QEAAXXZ @ 0x180004B5C (-DisconnectExclusiveModeStreams@CApplication@@QEAAXXZ.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CProcess::DisconnectExclusiveModeStreams(CProcess *this)
{
  _QWORD *v2; // rsi
  __int64 v3; // rdi
  LPCRITICAL_SECTION v4; // [rsp+28h] [rbp-30h] BYREF
  char v5; // [rsp+30h] [rbp-28h]
  LPCRITICAL_SECTION v6; // [rsp+38h] [rbp-20h] BYREF
  char v7; // [rsp+40h] [rbp-18h]
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v6, (struct _RTL_CRITICAL_SECTION *)((char *)this + 32));
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v4, (struct _RTL_CRITICAL_SECTION *)this + 3);
  v2 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v2 )
  {
    v3 = v2[2];
    v2 = (_QWORD *)*v2;
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3) != 2 )
    {
      v8 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v3)(v3, &GUID_ec081b02_27c6_4867_9203_959f1731a3e5, &v8) >= 0 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 40LL))(v8, 1LL);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  if ( v5 )
    ATL::CCritSecLock::Unlock(&v4);
  if ( v7 )
    ATL::CCritSecLock::Unlock(&v6);
}
