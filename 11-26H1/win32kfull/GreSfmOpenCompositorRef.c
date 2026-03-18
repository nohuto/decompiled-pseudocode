/*
 * XREFs of GreSfmOpenCompositorRef @ 0x1400A87F8
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x14009F480 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14007347C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     SFMLOGICALSURFACEREF_vDestructor @ 0x1400745F4 (SFMLOGICALSURFACEREF_vDestructor.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A8980 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GreSfmOpenCompositorRef(Gre::Base *a1, __int64 a2)
{
  HSEMAPHORE v3; // rsi
  Gre::Base *v4; // rcx
  Gre::Base *v5; // rcx
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdi
  struct W32_PUSH_LOCK *v10; // rbx
  int v11; // eax
  unsigned int v12; // edi
  _OWORD v14[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]
  int v16; // [rsp+48h] [rbp-10h]

  v3 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(a1) + 520LL);
  GreAcquireSemaphoreInternal(v3);
  GrepAcquireLockValidate<7>();
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( IsDwmActive(v4) )
    {
      memset(v14, 0, sizeof(v14));
      PushThreadGuardedObject(
        v14,
        v14,
        UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::OnUnexpectedThreadTerminationStatic);
      v15 = 0LL;
      v16 = 0;
      if ( a2 && (v6 = Gre::Base::Globals(v5), LOBYTE(v7) = 18, v8 = HmgLock(v6, a2, v7, 0LL), v15 = v8, (v9 = v8) != 0) )
      {
        v10 = (struct W32_PUSH_LOCK *)(v8 + 256);
        if ( v8 != -256 )
          GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v8 + 256));
        v11 = *(_DWORD *)(v9 + 244);
        if ( (v11 & 8) != 0 )
        {
          if ( (v11 & 0x10) != 0 )
            *(_DWORD *)(v9 + 244) = v11 & 0xFFFFFFEF;
          ++*(_DWORD *)(v9 + 248);
          v12 = 0;
        }
        else
        {
          v12 = -2147020579;
        }
        if ( v10 )
          GreReleasePushLockExclusive(v10);
      }
      else
      {
        v12 = -1073741816;
      }
      SFMLOGICALSURFACEREF_vDestructor((__int64)v14);
      PopThreadGuardedObject(v14);
    }
    else
    {
      v12 = -1071775733;
    }
  }
  else
  {
    v12 = -1073741790;
  }
  if ( v3 )
    GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v3);
  return v12;
}
