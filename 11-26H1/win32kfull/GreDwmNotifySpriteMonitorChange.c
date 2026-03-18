/*
 * XREFs of GreDwmNotifySpriteMonitorChange @ 0x1400A67DC
 * Callers:
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x14009AEF8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     UpdateWindowSpriteMonitor @ 0x1400A6748 (UpdateWindowSpriteMonitor.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x14001E104 (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14006BCF0 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14007347C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1400A6C24 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A6D10 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1400A6E04 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 *     DwmAsyncNotifySpriteMonitorChange @ 0x1400A844C (DwmAsyncNotifySpriteMonitorChange.c)
 */

__int64 __fastcall GreDwmNotifySpriteMonitorChange(Gre::Base *a1, Gre::Base *a2, __int64 a3)
{
  unsigned int v6; // r12d
  struct Gre::Base::SESSION_GLOBALS *v7; // rbx
  HSEMAPHORE v8; // r14
  struct PDEVOBJ *v9; // rdx
  HSEMAPHORE v10; // rcx
  Gre::Base *v11; // rcx
  Gre::Base *v12; // rcx
  __int64 v13; // rax
  struct Gre::Base::SESSION_GLOBALS *v14; // rax
  __int64 v15; // r8
  void *v16; // rax
  Gre::Base *v18; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v19[8]; // [rsp+28h] [rbp-48h] BYREF
  HSEMAPHORE v20; // [rsp+30h] [rbp-40h]
  char v21; // [rsp+38h] [rbp-38h]
  _OWORD v22[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v23; // [rsp+60h] [rbp-10h]

  v6 = 0;
  v7 = Gre::Base::Globals(a1);
  v8 = (HSEMAPHORE)(*(_QWORD *)v7 + 1144LL);
  GreAcquireSemaphoreInternal(v8);
  GrepAcquireLockValidate<2>();
  v18 = a1;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v19, v9, 0, 0);
  v10 = (HSEMAPHORE)(*(_QWORD *)v7 + 520LL);
  v21 = 0;
  v20 = v10;
  GreAcquireSemaphoreInternal(v10);
  GrepAcquireLockValidate<7>();
  if ( IsDwmActive(v11) )
  {
    memset(v22, 0, sizeof(v22));
    PushThreadGuardedObject(
      v22,
      v22,
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic);
    v13 = 0LL;
    v23 = 0LL;
    if ( a2 )
    {
      a3 = DWMSPRITEREF::hspLookupWindow(a2);
      v13 = v23;
    }
    if ( a3 )
    {
      v14 = Gre::Base::Globals(v12);
      LOBYTE(v15) = 15;
      v13 = HmgLock(v14, a3, v15, 0LL);
      v23 = v13;
    }
    if ( v13 )
    {
      v16 = (void *)UserReferenceDwmApiPort(v12);
      v6 = DwmAsyncNotifySpriteMonitorChange(v16);
      if ( v23 )
        _InterlockedDecrement16((volatile signed __int16 *)(v23 + 12));
    }
    v23 = 0LL;
    PopThreadGuardedObject(v22);
  }
  ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON((ENTER_DWM_CRIT_COMMON *)&v18);
  if ( v8 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v8);
  return v6;
}
