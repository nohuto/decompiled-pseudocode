/*
 * XREFs of GreZorderSprite @ 0x14001DFD4
 * Callers:
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x14012D688 (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 *     TrackLayeredZorder @ 0x14012E298 (TrackLayeredZorder.c)
 *     zzzComposeDesktop @ 0x140201D04 (zzzComposeDesktop.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x14001E104 (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14006BCF0 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14007347C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1400A6C24 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A6D10 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1400A6E04 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 *     ?GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z @ 0x140186004 (-GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z.c)
 *     ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x1401C82A8 (-vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z.c)
 */

void __fastcall GreZorderSprite(Gre::Base *a1, HWND a2, HWND a3, int a4)
{
  int v8; // ebp
  struct Gre::Base::SESSION_GLOBALS *v9; // r15
  HSEMAPHORE v10; // rdi
  Gre::Base *v11; // rcx
  struct PDEVOBJ *v12; // rdx
  HSEMAPHORE v13; // rcx
  __int64 v14; // rcx
  Gre::Base *v15; // rcx
  HSPRITE v16; // rbx
  HSPRITE v17; // r15
  Gre::Base *v18; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v19[8]; // [rsp+28h] [rbp-30h] BYREF
  HSEMAPHORE v20; // [rsp+30h] [rbp-28h]
  char v21; // [rsp+38h] [rbp-20h]

  v8 = 1;
  v9 = Gre::Base::Globals(a1);
  v10 = (HSEMAPHORE)(*(_QWORD *)v9 + 1144LL);
  GreAcquireSemaphoreInternal(v10);
  GrepAcquireLockValidate<2>();
  if ( !a4 || !IsDwmActive(v11) )
    goto LABEL_8;
  v18 = a1;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v19, v12, 0, 0);
  v13 = (HSEMAPHORE)(*(_QWORD *)v9 + 520LL);
  v21 = 0;
  v20 = v13;
  GreAcquireSemaphoreInternal(v13);
  GrepAcquireLockValidate<7>(v14);
  if ( IsDwmActive(v15) )
  {
    v8 = 0;
    v16 = 0LL;
    v17 = DWMSPRITEREF::hspLookupWindow(a2);
    if ( a3 )
      v16 = DWMSPRITEREF::hspLookupWindow(a3);
    vSpDwmZorderSprite(v17, v16);
  }
  ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON((ENTER_DWM_CRIT_COMMON *)&v18);
  if ( v8 )
LABEL_8:
    GdiZorderSprite((HDEV)a1, a2, a3);
  if ( v10 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v10);
}
