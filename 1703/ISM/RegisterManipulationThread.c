/*
 * XREFs of RegisterManipulationThread @ 0x1800055D0
 * Callers:
 *     <none>
 * Callees:
 *     IsGetInputHostForWindowHandlePresent @ 0x18009DEAC (IsGetInputHostForWindowHandlePresent.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RegisterManipulationThread(int (*a1)(struct tagMANIPULATIONINPUTINFO *))
{
  __int64 v2; // rcx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  InitOnceExecuteOnce(&gInitOnce, (PINIT_ONCE_FN)InitEditionOnceCallback, 0LL, 0LL);
  if ( (gdwMitConfig & 4) != 0 || ((1LL << gdwDeviceFamily) & 0x1DB5) == 0 )
    return MITRegisterManipulationThread(a1);
  GestureTargetingComponent::s_pfnMTCallback = a1;
  if ( (unsigned __int8)IsGetInputHostForWindowHandlePresent() )
  {
    v4 = 0LL;
    GetInputHostForWindowHandle(0LL, &v4);
    v2 = v4;
    v4 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return 1LL;
}
