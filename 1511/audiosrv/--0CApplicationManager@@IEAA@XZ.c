/*
 * XREFs of ??0CApplicationManager@@IEAA@XZ @ 0x18003F3EC
 * Callers:
 *     ?CreateInstance@CApplicationManager@@SAJPEAPEAV1@@Z @ 0x18003E620 (-CreateInstance@CApplicationManager@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180019650 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CApplicationManager *__fastcall CApplicationManager::CApplicationManager(CApplicationManager *this)
{
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CApplicationManager::`vftable';
  *((_DWORD *)this + 4) = 0;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 10;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 10;
  return this;
}
