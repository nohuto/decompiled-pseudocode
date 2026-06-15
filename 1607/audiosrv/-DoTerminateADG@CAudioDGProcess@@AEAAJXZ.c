/*
 * XREFs of ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x1800014A8
 * Callers:
 *     ?OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ @ 0x18000140C (-OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ.c)
 *     ?TerminateADG@CAudioDGProcess@@QEAAJXZ @ 0x180084E1C (-TerminateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x180001230 (-DoShutdownADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?PreADGTermination@CAudioSrv@@EEAAXXZ @ 0x180001530 (-PreADGTermination@CAudioSrv@@EEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::DoTerminateADG(CAudioDGProcess *this, __int64 a2, bool a3)
{
  CAudioSrv *v4; // rcx
  void (__fastcall *v5)(CAudioSrv *__hidden); // rax
  unsigned int Pointer; // ebx
  _BYTE v8[32]; // [rsp+28h] [rbp-20h] BYREF

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v8, (struct _RTL_CRITICAL_SECTION *)((char *)this + 48), a3);
  v4 = (CAudioSrv *)*((_QWORD *)this + 17);
  if ( v4 )
  {
    v5 = *(void (__fastcall **)(CAudioSrv *__hidden))(*(_QWORD *)v4 + 8LL);
    if ( v5 == CAudioSrv::PreADGTermination )
      CAudioSrv::PreADGTermination(v4);
    else
      v5(v4);
  }
  Pointer = (unsigned int)CAudioDGProcess::DoShutdownADG(this).Pointer;
  if ( v8[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v8);
  return Pointer;
}
