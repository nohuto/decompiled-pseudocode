/*
 * XREFs of ?NotifyStreamSuspensionStateChanged@CVADServer@@QEAAJ_K_N@Z @ 0x1800022C4
 * Callers:
 *     AudioServerNotifyStreamSuspensionState @ 0x1800021E0 (AudioServerNotifyStreamSuspensionState.c)
 * Callees:
 *     ?NotifyStreamSuspensionStateChanged@CAudioSession@@UEAAJPEAVCAudioStream@@H@Z @ 0x1800024C0 (-NotifyStreamSuspensionStateChanged@CAudioSession@@UEAAJPEAVCAudioStream@@H@Z.c)
 *     ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180009920 (-StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVADServer::NotifyStreamSuspensionStateChanged(CAudioSession **this, __int64 a2, bool a3)
{
  unsigned int v6; // edi
  __int64 (__fastcall *v7)(CVADServer *, __int64, __int64); // rax
  unsigned int v8; // eax
  struct CAudioStream *v9; // rdx
  CAudioSession *v10; // rcx
  __int64 (__fastcall *v11)(CAudioSession *__hidden, struct CAudioStream *, int); // rax
  _BYTE v13[32]; // [rsp+28h] [rbp-20h] BYREF

  v6 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v13, (struct _RTL_CRITICAL_SECTION *)(this + 29), a3);
  if ( a3 )
  {
    v7 = (__int64 (__fastcall *)(CVADServer *, __int64, __int64))*((_QWORD *)*this + 8);
    if ( (char *)v7 == (char *)CVADServer::StopStream )
      v8 = CVADServer::StopStream(this, a2, 3LL);
    else
      v8 = v7((CVADServer *)this, a2, 3LL);
    goto LABEL_4;
  }
  if ( *((_DWORD *)this + 82) == 1 )
  {
    v8 = (*((__int64 (__fastcall **)(CAudioSession **, __int64, __int64))*this + 7))(this, a2, 3LL);
LABEL_4:
    v6 = v8;
  }
  v9 = this[26];
  v10 = this[21];
  v11 = *(__int64 (__fastcall **)(CAudioSession *__hidden, struct CAudioStream *, int))(*(_QWORD *)v10 + 296LL);
  if ( v11 == CAudioSession::NotifyStreamSuspensionStateChanged )
    CAudioSession::NotifyStreamSuspensionStateChanged(v10, v9, a3);
  else
    v11(v10, v9, a3);
  if ( v13[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v13);
  return v6;
}
