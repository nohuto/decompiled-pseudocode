/*
 * XREFs of ?SetTimerCallback@CTimer@@QEAAJPEAUITimerCallbackListener@@@Z @ 0x180007AB0
 * Callers:
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x180005324 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 *     ??1CAnimationClock@@UEAA@XZ @ 0x180005510 (--1CAnimationClock@@UEAA@XZ.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

__int64 __fastcall CTimer::SetTimerCallback(CTimer *this, struct ITimerCallbackListener *a2)
{
  unsigned int v4; // ebx
  char *v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = -2147019886;
  v6 = (char *)this + 16;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( !*((_QWORD *)this + 8) || !a2 )
  {
    *((_QWORD *)this + 8) = a2;
    v4 = 0;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v6);
  return v4;
}
