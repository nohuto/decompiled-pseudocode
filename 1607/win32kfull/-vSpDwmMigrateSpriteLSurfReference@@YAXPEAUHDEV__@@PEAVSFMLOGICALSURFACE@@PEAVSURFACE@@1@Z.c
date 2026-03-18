/*
 * XREFs of ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C0122858
 * Callers:
 *     vSpDwmMigrateSpriteLSurfReferenceWrap @ 0x1C0122850 (vSpDwmMigrateSpriteLSurfReferenceWrap.c)
 * Callees:
 *     DwmAsyncUpdateSprite @ 0x1C0051ED0 (DwmAsyncUpdateSprite.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C0052190 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C0052360 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00523D8 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z @ 0x1C00630FC (--0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0063AB0 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0064E94 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

void __fastcall vSpDwmMigrateSpriteLSurfReference(
        HDEV a1,
        struct SFMLOGICALSURFACE *this,
        struct SURFACE *a3,
        UINT_PTR *a4)
{
  HSPRITE v4; // r12
  struct _SURFOBJ *v5; // rsi
  HDEV v9; // rdx
  DWMSPRITE *v10; // r15
  HDEV v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rcx
  int v14; // ebx
  void *v15; // rax
  UINT_PTR v16; // r9
  DWMSPRITE *v17; // rax
  int v18; // [rsp+50h] [rbp-9h] BYREF
  UINT_PTR v19; // [rsp+58h] [rbp-1h] BYREF
  _BYTE v20[32]; // [rsp+60h] [rbp+7h] BYREF
  DWMSPRITE *v21; // [rsp+80h] [rbp+27h]
  unsigned int v22; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned int v23; // [rsp+D0h] [rbp+77h] BYREF

  v4 = (HSPRITE)*((_QWORD *)this + 38);
  v5 = (struct _SURFOBJ *)((char *)a3 + 24);
  DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v20, v4);
  v10 = v21;
  if ( v21 )
  {
    DWMSPRITE::SetLogicalSurface(v21, v9, 0LL);
    DWMSPRITE::SetLogicalSurface(v10, v11, (struct SFMLOGICALSURFACE *)a4);
    SFMLOGICALSURFACE::SetShape(this, a1, 0LL);
    SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)a4, a1, v5);
    if ( a4[17] )
    {
      v19 = a4[17];
      RGNOBJ::vSet((RGNOBJ *)&v19);
      *((_DWORD *)a4 + 64) &= ~2u;
    }
    *((_DWORD *)a4 + 64) |= 0x20u;
    SFMLOGICALSURFACE::StartSfmStateTracking((SFMLOGICALSURFACE *)a4, a1, gpSfmState);
    SFMLOGICALSURFACE::GetRedirectionInfo(
      (SFMLOGICALSURFACE *)a4,
      (enum _HLSURF_REDIRECTIONSTYLE *)&v18,
      &v23,
      &v22,
      0LL,
      0LL);
    v12 = *a4;
    v13 = *((_DWORD *)v10 + 34) & 1;
    v14 = v13 | a4[32] & 4 | (*((_DWORD *)a4 + 64) >> 1) & 0x18 | (2 * (a4[32] & 1 | (8 * (*((_DWORD *)v10 + 34) & 0xE))));
    v15 = (void *)UserReferenceDwmApiPort(v13);
    DwmAsyncUpdateSprite(v15, (__int64)v4, v12, v14, (__int64 *)v10 + 9, 0LL, v18, v23, v22);
    v16 = a4[24];
    if ( v16 )
      v16 = *(_QWORD *)(v16 + 8);
    bSpDwmNotifyDirty(*(HSPRITE *)v10, (struct SFMLOGICALSURFACE *)a4, 6u, v16);
    v17 = v21;
    *((_DWORD *)a4 + 64) &= ~0x20u;
    if ( v17 )
      _InterlockedDecrement((volatile signed __int32 *)v17 + 3);
  }
  v21 = 0LL;
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v20);
}
