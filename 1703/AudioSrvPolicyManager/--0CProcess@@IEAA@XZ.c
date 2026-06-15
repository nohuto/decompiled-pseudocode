/*
 * XREFs of ??0CProcess@@IEAA@XZ @ 0x18000D518
 * Callers:
 *     ?CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHHHHPEAPEAV1@@Z @ 0x18000D36C (-CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHHHHPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18000A3F4 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=10
CProcess *__fastcall CProcess::CProcess(CProcess *this)
{
  unsigned int v2; // eax
  _DWORD *v3; // rcx
  unsigned int v4; // eax
  _DWORD *v5; // rcx

  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CProcess::`vftable'{for `CUnknown'};
  *((_QWORD *)this + 2) = &CProcess::`vftable'{for `IAudioProcess'};
  *((_QWORD *)this + 3) = &CProcess::`vftable'{for `IAudioProcessInternal'};
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 32));
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 10;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)this + 3);
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
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)this + 8);
  *((_QWORD *)this + 45) = 0LL;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 368));
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_DWORD *)this + 114) = 0;
  *(_QWORD *)((char *)this + 460) = 4LL;
  *((_DWORD *)this + 117) = 1;
  *((_QWORD *)this + 60) = 0LL;
  *(GUID *)((char *)this + 488) = GUID_00000000_0000_0000_0000_000000000000;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 504));
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  v2 = 0;
  v3 = (_DWORD *)((char *)this + 216);
  do
  {
    *v3 = -2147023728;
    ++v2;
    ++v3;
  }
  while ( v2 < 2 );
  v4 = 0;
  v5 = (_DWORD *)((char *)this + 472);
  do
  {
    *v5 = 0;
    ++v4;
    ++v5;
  }
  while ( v4 < 2 );
  return this;
}
