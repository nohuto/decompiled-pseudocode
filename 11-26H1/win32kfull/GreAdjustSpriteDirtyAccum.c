/*
 * XREFs of GreAdjustSpriteDirtyAccum @ 0x140040DCC
 * Callers:
 *     RecreateRedirectionBitmap @ 0x140041830 (RecreateRedirectionBitmap.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x140041070 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14007347C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ?vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z @ 0x14009E12C (-vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A8980 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z @ 0x140312EA8 (-GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z.c)
 */

__int64 __fastcall GreAdjustSpriteDirtyAccum(
        Gre::Base *a1,
        HWND a2,
        struct _RECTL *a3,
        __int64 a4,
        struct _POINTL *a5,
        struct _POINTL *a6)
{
  unsigned int v6; // r15d
  struct _RECTL *v7; // rbx
  HDEV v9; // rdi
  int v10; // r12d
  Gre::Base *v11; // rcx
  struct _RECTL *v12; // r9
  __int64 v13; // rcx
  Gre::Base *v14; // rcx
  Gre::Base *v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // r14
  struct Gre::Base::SESSION_GLOBALS *v18; // rax
  __int64 v20; // [rsp+30h] [rbp-20h] BYREF
  struct REGION *v21; // [rsp+38h] [rbp-18h] BYREF
  HSEMAPHORE v22; // [rsp+40h] [rbp-10h]
  __int64 v25; // [rsp+A8h] [rbp+58h] BYREF

  v25 = a4;
  v6 = 0;
  v7 = a3;
  v9 = (HDEV)a1;
  v10 = 1;
  if ( !IsDwmActive(a1) )
    return (unsigned int)GdiAdjustSpriteDirtyAccum(v9, a2, v7, v12, a5, a6);
  v22 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(v11) + 520LL);
  GreAcquireSemaphoreSharedInternal(v22);
  GrepAcquireLockValidate<7>(v13);
  if ( IsDwmActive(v14) )
  {
    v10 = 0;
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v25, a2);
    v16 = v25;
    if ( v25 )
    {
      v17 = *(_QWORD *)(v25 + 144);
      if ( v25 != -88 )
        GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v25 + 88));
      if ( v17 != -256 )
        GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v17 + 256));
      if ( *(_QWORD *)(v17 + 80) )
      {
        v21 = *(struct REGION **)(v17 + 80);
        v20 = 0LL;
        RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v20, 0x70u);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v20);
        v25 = 0LL;
        RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v25, 0x70u);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v25);
        if ( v21 )
        {
          if ( v20 )
          {
            if ( v25 )
            {
              if ( RGNOBJ::bOffset((RGNOBJ *)&v21, a5) )
              {
                RGNOBJ::vSet((RGNOBJ *)&v20, a3);
                if ( RGNOBJ::bMerge((RGNOBJ *)&v25, (struct RGNOBJ *)&v21, (struct RGNOBJ *)&v20, 8u) )
                {
                  RGNOBJ::vSwap((RGNOBJ *)&v25, (struct RGNOBJ *)&v21);
                  SFMLOGICALSURFACE::vDirtyRegionAccum((SFMLOGICALSURFACE *)v17, v21);
                  v6 = 1;
                }
              }
            }
          }
        }
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v25);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v25);
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v20);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
      }
      if ( v17 != -256 )
        GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v17 + 256));
      if ( v16 != -88 )
        GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v16 + 88));
      v18 = Gre::Base::Globals(v15);
      DEC_SHARE_REF_CNT(v18, v16);
      v7 = a3;
      v9 = (HDEV)a1;
    }
  }
  GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v22);
  if ( v10 )
    return (unsigned int)GdiAdjustSpriteDirtyAccum(v9, a2, v7, v12, a5, a6);
  return v6;
}
