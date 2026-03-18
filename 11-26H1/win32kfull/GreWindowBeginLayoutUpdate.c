/*
 * XREFs of GreWindowBeginLayoutUpdate @ 0x14021874C
 * Callers:
 *     NtUserBeginLayoutUpdate @ 0x140218660 (NtUserBeginLayoutUpdate.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x14001E104 (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14006BCF0 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14007347C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A6D10 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A8980 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GreWindowBeginLayoutUpdate(Gre::Base *a1)
{
  unsigned int v2; // ebx
  struct Gre::Base::SESSION_GLOBALS *v3; // rdi
  HSEMAPHORE v4; // rsi
  Gre::Base *v5; // rcx
  HSEMAPHORE v6; // rdi
  Gre::Base *v7; // rcx
  __int64 v8; // rbp
  Gre::Base *v9; // rcx
  struct Gre::Base::SESSION_GLOBALS *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  int v14; // eax
  _OWORD v15[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+40h] [rbp-18h]

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
      memset(v15, 0, sizeof(v15));
      PushThreadGuardedObject(
        v15,
        v15,
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic);
      v16 = 0LL;
      v8 = DWMSPRITEREF::hspLookupWindow(a1);
      v10 = Gre::Base::Globals(v9);
      if ( v8 )
      {
        LOBYTE(v11) = 15;
        v12 = HmgLock(v10, v8, v11, 0LL);
        v16 = v12;
      }
      else
      {
        v12 = v16;
      }
      if ( v12 )
      {
        v2 = 1;
        if ( *(int *)(v12 + 116) >= 1 )
        {
          v14 = *(_DWORD *)(v12 + 120);
          if ( v14 > 0 )
          {
            *(_DWORD *)(v12 + 120) = v14 + 1;
            v12 = v16;
          }
        }
        if ( v12 )
          _InterlockedDecrement16((volatile signed __int16 *)(v12 + 12));
      }
      v16 = 0LL;
      PopThreadGuardedObject(v15);
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
