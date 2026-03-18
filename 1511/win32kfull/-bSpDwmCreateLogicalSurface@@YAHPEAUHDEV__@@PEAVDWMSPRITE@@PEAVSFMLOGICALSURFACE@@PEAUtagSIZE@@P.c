/*
 * XREFs of ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C003C1DC
 * Callers:
 *     GreUpdateSprite @ 0x1C0032AF0 (GreUpdateSprite.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C003BF04 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C025F7D4 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C02600FC (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 * Callees:
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C0016A14 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0038DE8 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C003C420 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C003C710 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C007AF78 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C007B218 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C01009F4 (-hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     UserGetHwndProcess @ 0x1C010A298 (UserGetHwndProcess.c)
 */

__int64 __fastcall bSpDwmCreateLogicalSurface(
        HDEV a1,
        struct DWMSPRITE *this,
        struct SFMLOGICALSURFACE *a3,
        struct tagSIZE *a4,
        struct SFMLOGICALSURFACE **a5)
{
  unsigned int v5; // ebx
  struct SFMLOGICALSURFACE *v7; // rdi
  int v10; // ebp
  HLSURF v11; // rax
  HDEV v12; // rdx
  struct SFMLOGICALSURFACE *v13; // r14
  HDEV v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rcx
  int v18; // eax
  int v19; // edx
  HLSURF HLSURFClone; // rax
  HDEV v21; // rdx
  HDEV v22; // rdx
  HSURF Surface; // rax
  __int64 v24; // rdx
  __int64 v25; // rbx
  unsigned __int64 HwndProcess; // rax
  struct SFMLOGICALSURFACE *v28; // [rsp+30h] [rbp-28h] BYREF
  int v29; // [rsp+38h] [rbp-20h]

  v5 = 0;
  v28 = 0LL;
  v7 = a3;
  v29 = 0;
  v10 = 1;
  if ( a4 )
  {
    v17 = *((_QWORD *)a3 + 24);
    if ( v17 || (*((_DWORD *)a3 + 62) & 1) != 0 )
    {
      v18 = 0;
      v19 = 0;
      if ( v17 )
      {
        v18 = *(_DWORD *)(v17 + 32);
        v19 = *(_DWORD *)(v17 + 36);
      }
      if ( a4->cx == v18 && a4->cy == v19 )
        goto LABEL_22;
      *((_DWORD *)this + 16) = *((_DWORD *)this + 14);
      *((_DWORD *)this + 17) = *((_DWORD *)this + 15);
      if ( *a5 == a3 )
      {
        HLSURFClone = SFMLOGICALSURFACE::CreateHLSURFClone(a1, a3, 0, 1, 1);
        SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v28, HLSURFClone);
        v7 = v28;
        if ( !v28 )
          goto LABEL_23;
        DWMSPRITE::SetLogicalSurface(this, v21, 0LL);
        DWMSPRITE::SetLogicalSurface(this, v22, v7);
        *a5 = v7;
      }
      else
      {
        v7 = *a5;
      }
    }
    else if ( *a5 != a3 )
    {
      v7 = *a5;
    }
    Surface = hsurfSpCreateSurface(a1, a4);
    if ( Surface )
    {
      LOBYTE(v24) = 5;
      v25 = HmgReferenceCheckLock(Surface, v24, 0LL);
      SFMLOGICALSURFACE::SetShape(v7, a1, (struct _SURFOBJ *)(v25 + 24));
      *((_DWORD *)v7 + 64) |= 0x20u;
      *((_DWORD *)this + 16) = a4->cx + *((_DWORD *)this + 14);
      *((_DWORD *)this + 17) = a4->cy + *((_DWORD *)this + 15);
      HwndProcess = UserGetHwndProcess(*((_QWORD *)this + 5));
      SURFACE::vAppContainerOwner((SURFACE *)v25, HwndProcess);
    }
    else
    {
      v10 = 0;
    }
LABEL_22:
    v5 = v10;
    goto LABEL_23;
  }
  if ( *a5 != a3 )
    goto LABEL_22;
  v11 = SFMLOGICALSURFACE::CreateHLSURFClone(a1, a3, 0, 1, 1);
  SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v28, v11);
  v13 = v28;
  if ( v28 )
  {
    DWMSPRITE::SetLogicalSurface(this, v12, 0LL);
    DWMSPRITE::SetLogicalSurface(this, v14, v13);
    v15 = SURFOBJ_TO_SURFACE(*((_QWORD *)v7 + 24));
    v16 = v15;
    if ( v15 )
    {
      INC_SHARE_REF_CNT(v15);
      SFMLOGICALSURFACE::SetShape(v7, a1, 0LL);
      SFMLOGICALSURFACE::SetShape(v13, a1, (struct _SURFOBJ *)(v16 + 24));
      *((_DWORD *)v13 + 64) |= 0x20u;
      DEC_SHARE_REF_CNT(v16);
    }
    *a5 = v13;
    goto LABEL_22;
  }
LABEL_23:
  SFMLOGICALSURFACEREF_vDestructorWrap(&v28);
  return v5;
}
