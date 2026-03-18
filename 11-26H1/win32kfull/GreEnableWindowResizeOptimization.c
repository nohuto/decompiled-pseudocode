/*
 * XREFs of GreEnableWindowResizeOptimization @ 0x140231D1C
 * Callers:
 *     NtUserEnableWindowResizeOptimization @ 0x140231CC0 (NtUserEnableWindowResizeOptimization.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14006BCF0 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14007347C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A6D10 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A8980 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GreEnableWindowResizeOptimization(Gre::Base *a1, int a2, int a3)
{
  int v5; // r14d
  struct Gre::Base::SESSION_GLOBALS *v6; // rbx
  HSEMAPHORE v7; // rdi
  HSEMAPHORE v8; // rbx
  __int64 v9; // rdx
  int v10; // ecx
  _DWORD *v11; // rcx

  v5 = (int)a1;
  v6 = Gre::Base::Globals(a1);
  v7 = (HSEMAPHORE)(*(_QWORD *)v6 + 1144LL);
  GreAcquireSemaphoreInternal(v7);
  GrepAcquireLockValidate<2>();
  v8 = (HSEMAPHORE)(*(_QWORD *)v6 + 520LL);
  GreAcquireSemaphoreInternal(v8);
  GrepAcquireLockValidate<7>();
  v11 = *(_DWORD **)(W32GetSessionState(v10, v9) + 96);
  if ( !v11[26] )
  {
    v11[27] = v5;
    v11[28] = a2;
    v11[29] = a3;
  }
  if ( v8 )
    GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      (__int64)v8);
  if ( v7 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      (__int64)v7);
  return 1LL;
}
