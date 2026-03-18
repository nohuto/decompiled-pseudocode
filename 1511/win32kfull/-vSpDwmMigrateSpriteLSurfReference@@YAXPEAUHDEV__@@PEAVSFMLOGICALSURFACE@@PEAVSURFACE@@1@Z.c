/*
 * XREFs of ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C00E9318
 * Callers:
 *     vSpDwmMigrateSpriteLSurfReferenceWrap @ 0x1C00E9310 (vSpDwmMigrateSpriteLSurfReferenceWrap.c)
 * Callees:
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C007AF78 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C007B03C (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C007B218 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C007B3E8 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C007B460 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C007C164 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C00E94AC (DwmAsyncUpdateSprite.c)
 */

void __fastcall vSpDwmMigrateSpriteLSurfReference(
        HDEV a1,
        struct SFMLOGICALSURFACE *this,
        struct SURFACE *a3,
        struct SFMLOGICALSURFACE *a4)
{
  struct _SURFOBJ *v4; // rbp
  UINT_PTR v7; // r15
  HSPRITE v8; // rdx
  HDEV v10; // rdx
  DWMSPRITE *v11; // rdi
  HDEV v12; // rdx
  void *v13; // rax
  __int64 v14; // rax
  int v15; // [rsp+50h] [rbp-48h] BYREF
  DWMSPRITE *v16; // [rsp+58h] [rbp-40h] BYREF
  __int64 v17; // [rsp+60h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v19; // [rsp+B0h] [rbp+18h] BYREF

  v4 = (struct _SURFOBJ *)((char *)a3 + 24);
  v7 = 0LL;
  v8 = (HSPRITE)*((_QWORD *)this + 38);
  v16 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v16, v8);
  v11 = v16;
  if ( v16 )
  {
    DWMSPRITE::SetLogicalSurface(v16, v10, 0LL);
    DWMSPRITE::SetLogicalSurface(v11, v12, a4);
    SFMLOGICALSURFACE::SetShape(this, a1, 0LL);
    SFMLOGICALSURFACE::SetShape(a4, a1, v4);
    if ( *((_QWORD *)a4 + 17) )
    {
      v17 = *((_QWORD *)a4 + 17);
      RGNOBJ::vSet((RGNOBJ *)&v17);
      *((_DWORD *)a4 + 64) &= ~2u;
    }
    *((_DWORD *)a4 + 64) |= 0x20u;
    SFMLOGICALSURFACE::StartSfmStateTracking(a4, a1, gpSfmState);
    SFMLOGICALSURFACE::GetRedirectionInfo(a4, (enum _HLSURF_REDIRECTIONSTYLE *)&v15, &v19, &v18, 0LL, 0LL);
    v13 = (void *)UserReferenceDwmApiPort(*((_DWORD *)v11 + 34) & 1);
    DwmAsyncUpdateSprite(v13, (__int64)v11 + 72, 0LL, v15, v19, v18);
    v14 = *((_QWORD *)a4 + 24);
    if ( v14 )
      v7 = *(_QWORD *)(v14 + 8);
    bSpDwmNotifyDirty(*(HSPRITE *)v11, a4, 6u, v7);
    *((_DWORD *)a4 + 64) &= ~0x20u;
    _InterlockedDecrement((volatile signed __int32 *)v11 + 3);
  }
}
