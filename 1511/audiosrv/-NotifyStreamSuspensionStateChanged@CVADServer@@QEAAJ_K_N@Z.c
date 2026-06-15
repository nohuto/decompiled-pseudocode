/*
 * XREFs of ?NotifyStreamSuspensionStateChanged@CVADServer@@QEAAJ_K_N@Z @ 0x1800887B8
 * Callers:
 *     AudioServerNotifyStreamSuspensionState @ 0x1800035B0 (AudioServerNotifyStreamSuspensionState.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18006558C (--1CCritSecLock@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVADServer::NotifyStreamSuspensionStateChanged(CVADServer *this, __int64 a2, unsigned __int8 a3)
{
  unsigned int v6; // ebp
  unsigned int v7; // eax
  LPCRITICAL_SECTION v9[6]; // [rsp+28h] [rbp-30h] BYREF

  v6 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v9, (struct _RTL_CRITICAL_SECTION *)((char *)this + 232));
  if ( a3 )
  {
    v7 = (*(__int64 (__fastcall **)(CVADServer *, __int64, __int64))(*(_QWORD *)this + 64LL))(this, a2, 3LL);
LABEL_5:
    v6 = v7;
    goto LABEL_6;
  }
  if ( *((_DWORD *)this + 80) == 1 )
  {
    v7 = (*(__int64 (__fastcall **)(CVADServer *, __int64, __int64))(*(_QWORD *)this + 56LL))(this, a2, 3LL);
    goto LABEL_5;
  }
LABEL_6:
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 21) + 296LL))(
    *((_QWORD *)this + 21),
    *((_QWORD *)this + 26),
    a3);
  ATL::CCritSecLock::~CCritSecLock(v9);
  return v6;
}
