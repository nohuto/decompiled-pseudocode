/*
 * XREFs of ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C000A6E8
 * Callers:
 *     vSpDwmMigrateSpriteLSurfReferenceWrap @ 0x1C000A6E0 (vSpDwmMigrateSpriteLSurfReferenceWrap.c)
 * Callees:
 *     DwmAsyncUpdateSprite @ 0x1C000BE74 (DwmAsyncUpdateSprite.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C000F65C (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z @ 0x1C0010410 (--0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0010444 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C00118C0 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C0011A90 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C0011B08 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0290DF0 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

void __fastcall vSpDwmMigrateSpriteLSurfReference(
        HDEV a1,
        HSPRITE *a2,
        struct SURFACE *a3,
        struct SFMLOGICALSURFACE *a4)
{
  struct _SURFOBJ *v4; // rsi
  HDEV v8; // rdx
  DWMSPRITE *v9; // r15
  HDEV v10; // rdx
  int v11; // r9d
  void *v12; // rax
  unsigned __int64 v13; // r9
  DWMSPRITE *v14; // rax
  int v15; // [rsp+50h] [rbp-9h] BYREF
  __int64 v16; // [rsp+58h] [rbp-1h] BYREF
  _BYTE v17[32]; // [rsp+60h] [rbp+7h] BYREF
  DWMSPRITE *v18; // [rsp+80h] [rbp+27h]
  unsigned int v19; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned int v20; // [rsp+D0h] [rbp+77h] BYREF

  v4 = (struct _SURFOBJ *)((char *)a3 + 24);
  DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v17, a2[38]);
  v9 = v18;
  if ( v18 )
  {
    DWMSPRITE::SetLogicalSurface(v18, v8, 0LL);
    DWMSPRITE::SetLogicalSurface(v9, v10, a4);
    SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)a2, a1, 0LL);
    SFMLOGICALSURFACE::SetShape(a4, a1, v4);
    if ( *((_QWORD *)a4 + 17) )
    {
      v16 = *((_QWORD *)a4 + 17);
      RGNOBJ::vSet((RGNOBJ *)&v16);
      *((_DWORD *)a4 + 64) &= ~2u;
    }
    *((_DWORD *)a4 + 64) |= 0x20u;
    SFMLOGICALSURFACE::StartSfmStateTracking(a4, a1, gpSfmState, v11);
    SFMLOGICALSURFACE::GetRedirectionInfo(a4, (enum _HLSURF_REDIRECTIONSTYLE *)&v15, &v20, &v19, 0LL, 0LL);
    v12 = (void *)UserReferenceDwmApiPort();
    DwmAsyncUpdateSprite(v12, (__int64)v9 + 72, 0LL, v15, v20, v19);
    v13 = *((_QWORD *)a4 + 24);
    if ( v13 )
      v13 = *(_QWORD *)(v13 + 8);
    bSpDwmNotifyDirty(*(HSPRITE *)v9, a4, 6u, v13);
    v14 = v18;
    *((_DWORD *)a4 + 64) &= ~0x20u;
    if ( v14 )
      _InterlockedDecrement((volatile signed __int32 *)v14 + 3);
  }
  v18 = 0LL;
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v17);
}
