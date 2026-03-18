/*
 * XREFs of GreGetHwndUpdateIds @ 0x1403450D8
 * Callers:
 *     NtUserHwndQueryRedirectionInfo @ 0x14001E5B0 (NtUserHwndQueryRedirectionInfo.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x14001C68C (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ?uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ @ 0x14001D8AC (-uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ.c)
 *     ??0?$SEMOBJSHARED@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140074A08 (--0-$SEMOBJSHARED@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A8980 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1401AE044 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GreGetHwndUpdateIds(Gre::Base *a1, unsigned __int64 *a2, _QWORD *a3)
{
  unsigned int v6; // ebp
  Gre::Base *v7; // rcx
  struct Gre::Base::SESSION_GLOBALS *v8; // rax
  Gre::Base *v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rbx
  SFMLOGICALSURFACE *v13; // rsi
  char v14; // al
  struct Gre::Base::SESSION_GLOBALS *v15; // rax
  __int64 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+68h] [rbp+20h] BYREF

  v6 = -1071775733;
  if ( IsDwmActive(a1) )
  {
    v8 = Gre::Base::Globals(v7);
    SEMOBJSHARED<7>::SEMOBJSHARED<7>((HSEMAPHORE *)&v17, v8);
    if ( IsDwmActive(v9) )
    {
      DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v18, (HWND)a1, 0LL);
      v12 = v18;
      if ( v18 )
      {
        v13 = *(SFMLOGICALSURFACE **)(v18 + 144);
        if ( v18 != -88 )
          GreAcquirePushLockShared((struct W32_PUSH_LOCK *)(v18 + 88));
        v11 = *(_QWORD *)(W32GetSessionState(v11, v10) + 96);
        if ( *(_DWORD *)(v11 + 92) && *((_QWORD *)v13 + 23) && (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(v13) )
        {
          v14 = SFMLOGICALSURFACE::uiDxPresentFlags(v13);
          v11 = *(unsigned int *)(*((_QWORD *)v13 + 23) + 68LL) | 0x8000000000000000uLL;
          if ( (v14 & 2) == 0 )
            v11 = *(unsigned int *)(*((_QWORD *)v13 + 23) + 68LL);
          v6 = 0;
          *a2 = v11;
          *a3 = *((_QWORD *)v13 + 35);
        }
        if ( v12 != -88 )
          GreReleasePushLockShared((struct W32_PUSH_LOCK *)(v12 + 88));
      }
      else
      {
        v6 = -1073741811;
      }
      if ( v12 )
      {
        v15 = Gre::Base::Globals((Gre::Base *)v11);
        DEC_SHARE_REF_CNT(v15, v12);
      }
    }
    GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v17);
  }
  return v6;
}
