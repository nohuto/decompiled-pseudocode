/*
 * XREFs of ??0CApplication@@IEAA@K@Z @ 0x18000AAF0
 * Callers:
 *     ?CreateInstance@CApplication@@SAJPEBGKPEAPEAV1@@Z @ 0x18000A95C (-CreateInstance@CApplication@@SAJPEBGKPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18000A68C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=8
CApplication *__fastcall CApplication::CApplication(CApplication *this, int a2)
{
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CApplication::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 10;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = a2;
  *((_DWORD *)this + 30) = 0;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 128));
  *((_QWORD *)this + 21) = 0LL;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 184));
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 58) = 0;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)this + 6);
  *((_QWORD *)this + 35) = 0LL;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 288));
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 84) = 0;
  *((_DWORD *)this + 85) = 1;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 344));
  *((_QWORD *)this + 48) = 0LL;
  *((_DWORD *)this + 98) = 0;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)this + 10);
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 4LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_DWORD *)this + 122) = 0;
  *(_QWORD *)((char *)this + 492) = 1LL;
  *((_DWORD *)this + 125) = 0;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  return this;
}
