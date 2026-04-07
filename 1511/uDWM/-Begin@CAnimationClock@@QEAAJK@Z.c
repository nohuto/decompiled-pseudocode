/*
 * XREFs of ?Begin@CAnimationClock@@QEAAJK@Z @ 0x180004E44
 * Callers:
 *     ?OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180005A04 (-OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     Template_jqi @ 0x18009DE04 (Template_jqi.c)
 */

__int64 __fastcall CAnimationClock::Begin(CAnimationClock *this, unsigned int a2)
{
  unsigned int v4; // edi
  unsigned int v5; // ecx
  signed __int32 v6; // eax
  char *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = (char *)this + 24;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v4 = -2147019873;
  if ( *((_DWORD *)this + 20) == 1 )
  {
    if ( a2 > 0x2710 )
    {
      v4 = -2147024809;
    }
    else
    {
      v5 = a2;
      if ( *((_DWORD *)this + 33) > a2 )
        v5 = *((_DWORD *)this + 33);
      v4 = 0;
      *((_DWORD *)this + 33) = v5;
      v6 = _InterlockedIncrement((volatile signed __int32 *)this + 34);
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        Template_jqi(v6, 1, (_DWORD)this + 112, a2, v6);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return v4;
}
