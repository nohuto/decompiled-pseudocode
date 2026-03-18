/*
 * XREFs of GreSetHwndPresentFlags @ 0x140345514
 * Callers:
 *     NtUserHwndSetRedirectionInfo @ 0x1402B6350 (NtUserHwndSetRedirectionInfo.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ??0?$SEMOBJSHARED@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140074A08 (--0-$SEMOBJSHARED@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A8980 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1401AE044 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GreSetHwndPresentFlags(Gre::Base *a1, int a2)
{
  unsigned int v4; // esi
  Gre::Base *v5; // rcx
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  Gre::Base *v7; // rcx
  Gre::Base *v8; // rcx
  __int64 v9; // rbx
  struct Gre::Base::SESSION_GLOBALS *v10; // rax
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v4 = -1071775733;
  if ( IsDwmActive(a1) )
  {
    v6 = Gre::Base::Globals(v5);
    SEMOBJSHARED<7>::SEMOBJSHARED<7>((HSEMAPHORE *)&v13, v6);
    if ( IsDwmActive(v7) )
    {
      DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v12, (HWND)a1, 0LL);
      v9 = v12;
      if ( v12 )
      {
        if ( v12 != -88 )
          GreAcquirePushLockShared((struct W32_PUSH_LOCK *)(v12 + 88));
        v4 = 0;
        *(_DWORD *)(*(_QWORD *)(v9 + 144) + 212LL) = a2;
        if ( v9 != -88 )
          GreReleasePushLockShared((struct W32_PUSH_LOCK *)(v9 + 88));
      }
      else
      {
        v4 = -1073741811;
      }
      if ( v9 )
      {
        v10 = Gre::Base::Globals(v8);
        DEC_SHARE_REF_CNT(v10, v9);
      }
    }
    GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v13);
  }
  return v4;
}
