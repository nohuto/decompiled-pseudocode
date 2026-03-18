/*
 * XREFs of GreWindowResizeComplete @ 0x1402259FC
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140250868 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x14001C68C (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x14001E104 (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14006BCF0 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14006BE08 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x140073358 (--0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1400A4304 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A6D10 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1400A6E04 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 *     ?AdapterLuid@SFMLOGICALSURFACE@@QEAA?AU_LUID@@XZ @ 0x1401D3B10 (-AdapterLuid@SFMLOGICALSURFACE@@QEAA-AU_LUID@@XZ.c)
 *     ?vDeviceBitmapAdapterHint@PDEVOBJ@@QEAAXPEAU_LUID@@@Z @ 0x14024E258 (-vDeviceBitmapAdapterHint@PDEVOBJ@@QEAAXPEAU_LUID@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreWindowResizeComplete(__int64 a1, Gre::Base *a2)
{
  unsigned int v4; // esi
  __int64 *v5; // rbx
  HSEMAPHORE v6; // r12
  Gre::Base *v7; // rcx
  Gre::Base *v8; // rcx
  __int64 v9; // rbx
  Gre::Base *v10; // rcx
  struct Gre::Base::SESSION_GLOBALS *v11; // rax
  __int64 v12; // r8
  __int64 v13; // rbx
  int v14; // eax
  int v15; // r15d
  SFMLOGICALSURFACE *v16; // r14
  _OWORD v18[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h]
  _BYTE v20[40]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v21[160]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v22; // [rsp+150h] [rbp+50h] BYREF
  struct _LUID v23; // [rsp+158h] [rbp+58h] BYREF

  v4 = 0;
  v5 = (__int64 *)Gre::Base::Globals((Gre::Base *)a1);
  v6 = (HSEMAPHORE)(*v5 + 1144);
  GreAcquireSemaphoreInternal(v6);
  GrepAcquireLockValidate<2>();
  if ( IsDwmActive(v7) )
  {
    ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON((__int64)v20, v5, a1, 0);
    if ( IsDwmActive(v8) )
    {
      memset(v18, 0, sizeof(v18));
      PushThreadGuardedObject(
        v18,
        v18,
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic);
      v19 = 0LL;
      v9 = DWMSPRITEREF::hspLookupWindow(a2);
      v11 = Gre::Base::Globals(v10);
      if ( v9 )
      {
        LOBYTE(v12) = 15;
        v13 = HmgLock(v11, v9, v12, 0LL);
        v19 = v13;
      }
      else
      {
        v13 = v19;
      }
      if ( v13 )
      {
        v14 = *(_DWORD *)(v13 + 116);
        v15 = 0;
        v16 = *(SFMLOGICALSURFACE **)(v13 + 144);
        if ( v14 >= 1 )
        {
          if ( v14 == 2 )
          {
            if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(*(SFMLOGICALSURFACE **)(v13 + 144)) )
            {
              v22 = a1;
              DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v21, (struct PDEVOBJ *)&v22);
              if ( a1 && *(_QWORD *)(a1 + 3504) )
              {
                if ( (*(_DWORD *)(a1 + 40) & 0x4000000) != 0 )
                {
                  SFMLOGICALSURFACE::AdapterLuid(v16, &v23);
                  PDEVOBJ::vDeviceBitmapAdapterHint((PDEVOBJ *)&v22, &v23);
                }
                v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 3504))(*(_QWORD *)(a1 + 1784), *(_QWORD *)v16);
              }
              DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v21);
            }
            if ( v15 )
            {
              *(_DWORD *)(v13 + 116) = 3;
            }
            else
            {
              *(_DWORD *)(v13 + 116) = 1;
              CheckAndProcessWindowResizeComplete((struct DWMSPRITE *)v13, 0, 0LL);
            }
            v13 = v19;
          }
          v4 = 1;
        }
        if ( v13 )
          _InterlockedDecrement16((volatile signed __int16 *)(v13 + 12));
      }
      v19 = 0LL;
      PopThreadGuardedObject(v18);
    }
    ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON((ENTER_DWM_CRIT_COMMON *)v20);
  }
  if ( v6 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      (__int64)v6);
  return v4;
}
