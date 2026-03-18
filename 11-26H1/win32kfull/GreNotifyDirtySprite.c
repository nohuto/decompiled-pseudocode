/*
 * XREFs of GreNotifyDirtySprite @ 0x140041694
 * Callers:
 *     RecreateRedirectionBitmap @ 0x140041830 (RecreateRedirectionBitmap.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x140041070 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14007347C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1400A153C (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ @ 0x1400A19CC (-uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A8980 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GreNotifyDirtySprite(Gre::Base *a1)
{
  __int64 result; // rax
  Gre::Base *v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rcx
  Gre::Base *v6; // rcx
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  struct SFMLOGICALSURFACE *v9; // rcx
  Gre::Base *v10; // rcx
  struct Gre::Base::SESSION_GLOBALS *v11; // rax
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  result = IsDwmActive(a1);
  if ( (_DWORD)result )
  {
    v4 = *(_QWORD *)Gre::Base::Globals(v3);
    GreAcquireSemaphoreSharedInternal((HSEMAPHORE)(v4 + 520));
    GrepAcquireLockValidate<7>(v5);
    if ( IsDwmActive(v6) )
    {
      DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v12, (HWND)a1);
      v7 = v12;
      if ( v12 )
      {
        if ( v12 != -88 )
          GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v12 + 88));
        v8 = SFMLOGICALSURFACE::uiCookie(*(SFMLOGICALSURFACE **)(v7 + 144));
        bSpDwmNotifyDirty(*(HSPRITE *)v7, v9, 1u, v8);
        if ( v7 != -88 )
          GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v7 + 88));
        v11 = Gre::Base::Globals(v10);
        DEC_SHARE_REF_CNT(v11, v7);
      }
    }
    return GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v4 + 520);
  }
  return result;
}
