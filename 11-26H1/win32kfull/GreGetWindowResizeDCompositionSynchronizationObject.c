/*
 * XREFs of GreGetWindowResizeDCompositionSynchronizationObject @ 0x1401F5C28
 * Callers:
 *     ?GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1401F5B28 (-GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x14001E104 (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14006BCF0 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14007347C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A6D10 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A8980 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GreGetWindowResizeDCompositionSynchronizationObject(Gre::Base *a1, _QWORD *a2)
{
  unsigned int v4; // edi
  struct Gre::Base::SESSION_GLOBALS *v5; // rbx
  HSEMAPHORE v6; // rsi
  Gre::Base *v7; // rcx
  HSEMAPHORE v8; // rbx
  Gre::Base *v9; // rcx
  __int64 v10; // rbp
  Gre::Base *v11; // rcx
  struct Gre::Base::SESSION_GLOBALS *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  _OWORD v18[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+40h] [rbp-18h]

  v4 = 0;
  v5 = Gre::Base::Globals(a1);
  v6 = (HSEMAPHORE)(*(_QWORD *)v5 + 1144LL);
  GreAcquireSemaphoreInternal(v6);
  GrepAcquireLockValidate<2>();
  if ( IsDwmActive(v7) )
  {
    v8 = (HSEMAPHORE)(*(_QWORD *)v5 + 520LL);
    GreAcquireSemaphoreInternal(v8);
    GrepAcquireLockValidate<7>();
    if ( IsDwmActive(v9) )
    {
      memset(v18, 0, sizeof(v18));
      PushThreadGuardedObject(
        v18,
        v18,
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic);
      v19 = 0LL;
      v10 = DWMSPRITEREF::hspLookupWindow(a1);
      v12 = Gre::Base::Globals(v11);
      if ( v10 )
      {
        LOBYTE(v13) = 15;
        v14 = HmgLock(v12, v10, v13, 0LL);
        v19 = v14;
      }
      else
      {
        v14 = v19;
      }
      if ( v14 )
      {
        v15 = v14;
        if ( *(_QWORD *)(v14 + 96) )
        {
          ObfReferenceObject(*(PVOID *)(v14 + 96));
          v14 = v19;
        }
        v16 = *(_QWORD *)(v15 + 96);
        v4 = 1;
        *a2 = v16;
        if ( v14 )
          _InterlockedDecrement16((volatile signed __int16 *)(v14 + 12));
      }
      v19 = 0LL;
      PopThreadGuardedObject(v18);
    }
    if ( v8 )
      GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        (__int64)v8);
  }
  if ( v6 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      (__int64)v6);
  return v4;
}
