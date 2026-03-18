/*
 * XREFs of GreIsWindowResizeInProgress @ 0x1402036EC
 * Callers:
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x14027B320 (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x14001E104 (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14006BCF0 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14007347C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A6D10 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A8980 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

_BOOL8 __fastcall GreIsWindowResizeInProgress(Gre::Base *a1)
{
  BOOL v2; // ebx
  struct Gre::Base::SESSION_GLOBALS *v3; // rdi
  HSEMAPHORE v4; // rsi
  Gre::Base *v5; // rcx
  HSEMAPHORE v6; // rdi
  Gre::Base *v7; // rcx
  __int64 v8; // rbp
  Gre::Base *v9; // rcx
  struct Gre::Base::SESSION_GLOBALS *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  _OWORD v14[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  v2 = 0;
  v3 = Gre::Base::Globals(a1);
  v4 = (HSEMAPHORE)(*(_QWORD *)v3 + 1144LL);
  GreAcquireSemaphoreInternal(v4);
  GrepAcquireLockValidate<2>();
  if ( IsDwmActive(v5) )
  {
    v6 = (HSEMAPHORE)(*(_QWORD *)v3 + 520LL);
    GreAcquireSemaphoreInternal(v6);
    GrepAcquireLockValidate<7>();
    if ( IsDwmActive(v7) )
    {
      memset(v14, 0, sizeof(v14));
      PushThreadGuardedObject(
        v14,
        v14,
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic);
      v15 = 0LL;
      v8 = DWMSPRITEREF::hspLookupWindow(a1);
      v10 = Gre::Base::Globals(v9);
      if ( v8 )
      {
        LOBYTE(v11) = 15;
        v12 = HmgLock(v10, v8, v11, 0LL);
        v15 = v12;
      }
      else
      {
        v12 = v15;
      }
      if ( v12 )
      {
        v2 = 1;
        if ( *(int *)(v12 + 116) < 1 )
          v2 = *(_BYTE *)(v12 + 124) != 0;
        _InterlockedDecrement16((volatile signed __int16 *)(v12 + 12));
      }
      v15 = 0LL;
      PopThreadGuardedObject(v14);
    }
    if ( v6 )
      GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        (__int64)v6);
  }
  if ( v4 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      (__int64)v4);
  return v2;
}
