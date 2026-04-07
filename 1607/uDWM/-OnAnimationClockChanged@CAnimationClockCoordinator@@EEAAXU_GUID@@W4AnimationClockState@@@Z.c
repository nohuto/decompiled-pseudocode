/*
 * XREFs of ?OnAnimationClockChanged@CAnimationClockCoordinator@@EEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x18003C090
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18003B748 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 * Callees:
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x1800100A0 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ @ 0x18003C140 (-_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnimationClockCoordinator::OnAnimationClockChanged(__int64 a1, struct _GUID *a2, unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  __int64 (__fastcall ***v7)(__int64, struct _GUID *, int); // r14
  __int64 (__fastcall *v8)(__int64, struct _GUID *, int); // rax
  struct _GUID v9[2]; // [rsp+20h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+50h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 8);
  v10 = (struct _RTL_CRITICAL_SECTION *)(a1 + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 8));
  v7 = *(__int64 (__fastcall ****)(__int64, struct _GUID *, int))(a1 + 48);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  v8 = **v7;
  v9[0] = *a2;
  if ( v8 == CAnimationScheduler::OnAnimationClockChanged )
    CAnimationScheduler::OnAnimationClockChanged((__int64)v7, v9, a3);
  else
    v8((__int64)v7, v9, a3);
  if ( a3 == 7 )
  {
    v10 = v3;
    EnterCriticalSection(v3);
    CAnimationClockCoordinator::_ClearExpiredAnimationClocks((CAnimationClockCoordinator *)a1);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  }
}
