/*
 * XREFs of ??0CAnimationClock@@QEAA@XZ @ 0x18003BCC0
 * Callers:
 *     ?Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x18003B300 (-Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 * Callees:
 *     <none>
 */

CAnimationClock *__fastcall CAnimationClock::CAnimationClock(CAnimationClock *this)
{
  CAnimationClock *result; // rax

  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CAnimationClock::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CAnimationClock::`vftable'{for `ITimerCallbackListener'};
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 32) = -1;
  *(_QWORD *)((char *)this + 132) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  result = this;
  *((GUID *)this + 7) = GUID_NULL;
  return result;
}
