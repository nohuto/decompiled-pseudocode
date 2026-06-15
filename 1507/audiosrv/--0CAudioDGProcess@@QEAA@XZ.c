/*
 * XREFs of ??0CAudioDGProcess@@QEAA@XZ @ 0x180039A20
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x18003AA60 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180013560 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CAudioDGProcess *__fastcall CAudioDGProcess::CAudioDGProcess(CAudioDGProcess *this)
{
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)this);
  *((_DWORD *)this + 10) = 0;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 48));
  *((_QWORD *)this + 11) = 0LL;
  *((_WORD *)this + 48) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  return this;
}
