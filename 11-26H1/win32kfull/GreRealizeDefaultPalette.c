/*
 * XREFs of GreRealizeDefaultPalette @ 0x14021B5C0
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1401FFD98 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxFlushPalette @ 0x14028AE60 (xxxFlushPalette.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C6B4 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x14006B768 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14006BE08 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14006FAEC (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x140071BDC (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007E1D8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepSetSystemPaletteUse@@YAIAEAVXDCOBJ@@I@Z @ 0x140331348 (-GrepSetSystemPaletteUse@@YAIAEAVXDCOBJ@@I@Z.c)
 */

__int64 __fastcall GreRealizeDefaultPalette(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rdi
  Gre::Base *v3; // rcx
  struct Gre::Base::SESSION_GLOBALS *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // r8d
  __int64 v10; // r9
  __int64 v11; // rdx
  HSEMAPHORE v12; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v13[8]; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v15[14]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v16[160]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v17; // [rsp+170h] [rbp+70h] BYREF
  __int64 v18; // [rsp+178h] [rbp+78h] BYREF

  v2 = Gre::Base::Globals(a1);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v15, (HDC)a1, v2);
  if ( v15[0] )
  {
    v18 = *(_QWORD *)(v15[0] + 48LL);
    v5 = Gre::Base::Globals(v3);
    SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v14, v5);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v13, (struct PDEVOBJ *)&v18);
    v6 = *(_QWORD *)(*(_QWORD *)(v15[0] + 48LL) + 56LL);
    if ( v6 )
    {
      GreAcquireSemaphoreInternal(*(HSEMAPHORE *)(*(_QWORD *)(v15[0] + 48LL) + 56LL));
      GrepAcquireLockValidate<4>();
    }
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v16, (struct PDEVOBJ *)&v18);
    if ( (*(_DWORD *)(v18 + 2156) & 0x100) != 0 )
    {
      v17 = *(_QWORD *)(v18 + 1792);
      SEMOBJ<13>::SEMOBJ<13>(&v12, v2);
      v7 = v17;
      if ( (*(_DWORD *)(v17 + 24) & 0x11000) != 0 )
      {
        GrepSetSystemPaletteUse((struct XDCOBJ *)v15, 1u);
        v7 = v17;
      }
      v8 = *(_DWORD *)(v7 + 60) >> 1;
      v9 = *(_DWORD *)(v7 + 28) - v8;
      if ( (unsigned int)v8 < v9 )
      {
        v10 = 4 * v8;
        v11 = v9 - (unsigned int)v8;
        while ( 1 )
        {
          v10 += 4LL;
          *(_BYTE *)(*(_QWORD *)(v7 + 112) + v10 - 1) &= ~0x20u;
          if ( !--v11 )
            break;
          v7 = v17;
        }
      }
      *((_QWORD *)v2 + 470) = 0LL;
      XEPALOBJ::vUpdateTime((XEPALOBJ *)&v17);
      *(_DWORD *)(*(_QWORD *)(v15[0] + 976LL) + 152LL) |= 0xFu;
      SEMOBJ<13>::vUnlock(&v12);
    }
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v16);
    if ( v6 )
      GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        v6);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v13);
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v14);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v15);
  return 0LL;
}
