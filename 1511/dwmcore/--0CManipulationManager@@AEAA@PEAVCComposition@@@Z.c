/*
 * XREFs of ??0CManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x1800A6E08
 * Callers:
 *     ?Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800A8CC8 (-Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CMmcssTask@@QEAA@XZ @ 0x1800A4E04 (--0CMmcssTask@@QEAA@XZ.c)
 */

CManipulationManager *__fastcall CManipulationManager::CManipulationManager(
        CManipulationManager *this,
        struct CComposition *a2)
{
  __int64 v3; // rdx
  CManipulationManager *result; // rax
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = &CManipulationManager::`vftable';
  *((_DWORD *)this + 2) = 0;
  CMmcssTask::CMmcssTask((CManipulationManager *)((char *)this + 40));
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 56) = 0;
  *((_BYTE *)this + 228) = 0;
  *((_QWORD *)this + 27) = (char *)this + 208;
  *((_QWORD *)this + 26) = (char *)this + 208;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  *((_QWORD *)this + 34) = 0LL;
  QueryPerformanceFrequency(&Frequency);
  v3 = ((unsigned __int64)(2000 * Frequency.QuadPart) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  result = this;
  *((_QWORD *)this + 37) = (v3 + ((unsigned __int64)(2000 * Frequency.QuadPart - v3) >> 1)) >> 9;
  return result;
}
