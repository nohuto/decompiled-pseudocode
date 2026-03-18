/*
 * XREFs of GreWindowLayoutComplete @ 0x1401F77A0
 * Callers:
 *     NtUserLayoutCompleted @ 0x1401F7530 (NtUserLayoutCompleted.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x14001E104 (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14006BCF0 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14007347C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1400A4304 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A6D10 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A8980 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GreWindowLayoutComplete(Gre::Base *a1, __int64 a2, __int64 a3, int *a4)
{
  int v4; // r15d
  unsigned int v7; // edi
  struct Gre::Base::SESSION_GLOBALS *v8; // rbx
  HSEMAPHORE v9; // rsi
  Gre::Base *v10; // rcx
  HSEMAPHORE v11; // rbx
  Gre::Base *v12; // rcx
  __int64 v13; // r14
  Gre::Base *v14; // rcx
  struct Gre::Base::SESSION_GLOBALS *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  int v19; // eax
  _OWORD v20[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v21; // [rsp+40h] [rbp-10h]
  int v22; // [rsp+90h] [rbp+40h] BYREF

  v4 = 0;
  v22 = 0;
  v7 = 0;
  v8 = Gre::Base::Globals(a1);
  v9 = (HSEMAPHORE)(*(_QWORD *)v8 + 1144LL);
  GreAcquireSemaphoreInternal(v9);
  GrepAcquireLockValidate<2>();
  if ( IsDwmActive(v10) )
  {
    v11 = (HSEMAPHORE)(*(_QWORD *)v8 + 520LL);
    GreAcquireSemaphoreInternal(v11);
    GrepAcquireLockValidate<7>();
    if ( IsDwmActive(v12) )
    {
      memset(v20, 0, sizeof(v20));
      PushThreadGuardedObject(
        v20,
        v20,
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic);
      v21 = 0LL;
      v13 = DWMSPRITEREF::hspLookupWindow(a1);
      v15 = Gre::Base::Globals(v14);
      if ( v13 )
      {
        LOBYTE(v16) = 15;
        v17 = HmgLock(v15, v13, v16, 0LL);
        v21 = v17;
      }
      else
      {
        v17 = v21;
      }
      if ( v17 )
      {
        v7 = 1;
        if ( *(int *)(v17 + 116) >= 1 )
        {
          v19 = *(_DWORD *)(v17 + 120);
          if ( v19 > 0 )
          {
            *(_DWORD *)(v17 + 120) = v19 - 1;
            CheckAndProcessWindowResizeComplete((struct DWMSPRITE *)v17, 0, &v22);
            v17 = v21;
            v4 = v22;
          }
        }
        if ( v17 )
          _InterlockedDecrement16((volatile signed __int16 *)(v17 + 12));
      }
      v21 = 0LL;
      PopThreadGuardedObject(v20);
    }
    if ( v11 )
      GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        (__int64)v11);
  }
  *a4 = v4;
  if ( v9 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      (__int64)v9);
  return v7;
}
