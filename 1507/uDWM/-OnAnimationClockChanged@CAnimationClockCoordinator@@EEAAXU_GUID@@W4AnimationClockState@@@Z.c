/*
 * XREFs of ?OnAnimationClockChanged@CAnimationClockCoordinator@@EEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x18000B1D0
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18000AB14 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 * Callees:
 *     ?_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ @ 0x18000B27C (-_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ.c)
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x18000BB40 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAnimationClockCoordinator::OnAnimationClockChanged(__int64 a1, __int128 *a2, unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  __int64 (__fastcall ***v7)(_QWORD, _OWORD *, _QWORD); // r14
  __int128 v8; // xmm0
  __int64 (__fastcall *v9)(_QWORD, _OWORD *, _QWORD); // rbx
  __int64 result; // rax
  _OWORD v11[2]; // [rsp+20h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+50h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 8);
  v12 = (struct _RTL_CRITICAL_SECTION *)(a1 + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 8));
  v7 = *(__int64 (__fastcall ****)(_QWORD, _OWORD *, _QWORD))(a1 + 48);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  v8 = *a2;
  v9 = **v7;
  v11[0] = v8;
  if ( (char *)v9 == (char *)CAnimationScheduler::OnAnimationClockChanged )
    result = CAnimationScheduler::OnAnimationClockChanged(v7, v11, a3);
  else
    result = v9(v7, v11, a3);
  if ( a3 == 7 )
  {
    v12 = v3;
    EnterCriticalSection(v3);
    CAnimationClockCoordinator::_ClearExpiredAnimationClocks((CAnimationClockCoordinator *)a1);
    return CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  }
  return result;
}
