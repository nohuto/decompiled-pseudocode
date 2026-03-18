/*
 * XREFs of ??0CInputManager@@IEAA@PEAVCComposition@@@Z @ 0x180092B18
 * Callers:
 *     ?Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180092134 (-Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CMmcssTask@@QEAA@XZ @ 0x180093884 (--0CMmcssTask@@QEAA@XZ.c)
 */

CInputManager *__fastcall CInputManager::CInputManager(CInputManager *this, struct CComposition *a2)
{
  CInputManager *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CInputManager::`vftable';
  CMmcssTask::CMmcssTask((CInputManager *)((char *)this + 56));
  *((_QWORD *)this + 19) = a2;
  *((_QWORD *)this + 18) = &CHitTestContext::`vftable';
  result = this;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 54) = 0;
  *(_QWORD *)((char *)this + 188) = 0LL;
  *((_DWORD *)this + 41) = 0;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 72) = 0;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 80) = 0;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_DWORD *)this + 84) = 0;
  *((_DWORD *)this + 88) = 0;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_DWORD *)this + 92) = 0;
  *((_DWORD *)this + 96) = 0;
  CInputManager::s_pInputManager = this;
  return result;
}
