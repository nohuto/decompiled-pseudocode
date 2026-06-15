/*
 * XREFs of ??0CProcess@@IEAA@XZ @ 0x180011F58
 * Callers:
 *     ?CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHPEAPEAV1@@Z @ 0x1800316C4 (-CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHPEAPEAV1@@Z.c)
 * Callees:
 *     ?ResetDataFlowAccessCheckResults@CProcess@@QEAAXXZ @ 0x180012308 (-ResetDataFlowAccessCheckResults@CProcess@@QEAAXXZ.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180013560 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=9
CProcess *__fastcall CProcess::CProcess(CProcess *this)
{
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CProcess::`vftable'{for `CUnknown'};
  *((_QWORD *)this + 2) = &CProcess::`vftable'{for `IAudioProcess'};
  *((_QWORD *)this + 3) = &CProcess::`vftable'{for `IAudioProcessInternal'};
  ATL::CCriticalSection::CCriticalSection((CProcess *)((char *)this + 32));
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 10;
  ATL::CCriticalSection::CCriticalSection((CProcess *)((char *)this + 120));
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 50) = 0;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 68) = 0;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_DWORD *)this + 74) = 0;
  *((_QWORD *)this + 38) = 0LL;
  *((_DWORD *)this + 78) = 4;
  ATL::CCriticalSection::CCriticalSection((CProcess *)((char *)this + 320));
  *((_QWORD *)this + 45) = 0LL;
  ATL::CCriticalSection::CCriticalSection((CProcess *)((char *)this + 368));
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 4LL;
  *((_QWORD *)this + 57) = 1LL;
  *((_QWORD *)this + 58) = 0LL;
  CProcess::ResetDataFlowAccessCheckResults(this);
  return this;
}
