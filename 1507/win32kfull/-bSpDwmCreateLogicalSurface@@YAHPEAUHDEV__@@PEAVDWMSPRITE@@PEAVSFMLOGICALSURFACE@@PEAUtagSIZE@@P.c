/*
 * XREFs of ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00111E4
 * Callers:
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C0010F0C (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     GreUpdateSprite @ 0x1C001B070 (GreUpdateSprite.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C0260AEC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C026166C (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 * Callees:
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C000CD18 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C000F65C (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C00118C0 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0012894 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C0012900 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C009CE48 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C00F81D4 (-hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     UserGetHwndProcess @ 0x1C00FCD80 (UserGetHwndProcess.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0260008 (--0SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 */

__int64 __fastcall bSpDwmCreateLogicalSurface(
        HDEV a1,
        struct DWMSPRITE *this,
        struct SFMLOGICALSURFACE *a3,
        struct tagSIZE *a4,
        struct SFMLOGICALSURFACE **a5)
{
  int v9; // ebp
  unsigned int v10; // ebx
  HLSURF v11; // rax
  HDEV v12; // rdx
  struct SFMLOGICALSURFACE *v13; // r14
  HDEV v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rcx
  int v19; // eax
  int v20; // edx
  HLSURF HLSURFClone; // rax
  HDEV v22; // rdx
  HDEV v23; // rdx
  HSURF Surface; // rax
  __int64 v25; // rdx
  __int64 v26; // rbx
  struct _EPROCESS *HwndProcess; // rax
  _BYTE v29[32]; // [rsp+30h] [rbp-48h] BYREF
  struct SFMLOGICALSURFACE *v30; // [rsp+50h] [rbp-28h]

  v9 = 1;
  SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v29);
  v10 = 0;
  if ( a4 )
  {
    v18 = *((_QWORD *)a3 + 24);
    if ( v18 || (*((_DWORD *)a3 + 62) & 1) != 0 )
    {
      v19 = 0;
      v20 = 0;
      if ( v18 )
      {
        v19 = *(_DWORD *)(v18 + 32);
        v20 = *(_DWORD *)(v18 + 36);
      }
      if ( a4->cx == v19 && a4->cy == v20 )
        goto LABEL_22;
      *((_DWORD *)this + 16) = *((_DWORD *)this + 14);
      *((_DWORD *)this + 17) = *((_DWORD *)this + 15);
      if ( *a5 == a3 )
      {
        HLSURFClone = SFMLOGICALSURFACE::CreateHLSURFClone(a1, a3, 0, 1, 1);
        SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v29, HLSURFClone);
        a3 = v30;
        if ( !v30 )
          goto LABEL_23;
        DWMSPRITE::SetLogicalSurface(this, v22, 0LL);
        DWMSPRITE::SetLogicalSurface(this, v23, a3);
        *a5 = a3;
      }
      else
      {
        a3 = *a5;
      }
    }
    else if ( *a5 != a3 )
    {
      a3 = *a5;
    }
    Surface = hsurfSpCreateSurface(a1, a4);
    if ( Surface )
    {
      LOBYTE(v25) = 5;
      v26 = HmgReferenceCheckLock(Surface, v25, 0LL);
      SFMLOGICALSURFACE::SetShape(a3, a1, (struct _SURFOBJ *)(v26 + 24));
      *((_DWORD *)a3 + 64) |= 0x20u;
      *((_DWORD *)this + 16) = a4->cx + *((_DWORD *)this + 14);
      *((_DWORD *)this + 17) = a4->cy + *((_DWORD *)this + 15);
      HwndProcess = (struct _EPROCESS *)UserGetHwndProcess(*((_QWORD *)this + 5));
      SURFACE::vAppContainerOwner((SURFACE *)v26, HwndProcess);
    }
    else
    {
      v9 = 0;
    }
LABEL_22:
    v10 = v9;
    goto LABEL_23;
  }
  if ( *a5 != a3 )
    goto LABEL_22;
  v11 = SFMLOGICALSURFACE::CreateHLSURFClone(a1, a3, 0, 1, 1);
  SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v29, v11);
  v13 = v30;
  if ( v30 )
  {
    DWMSPRITE::SetLogicalSurface(this, v12, 0LL);
    DWMSPRITE::SetLogicalSurface(this, v14, v13);
    v15 = SURFOBJ_TO_SURFACE(*((_QWORD *)a3 + 24));
    v17 = v15;
    if ( v15 )
    {
      INC_SHARE_REF_CNT(v15, v16);
      SFMLOGICALSURFACE::SetShape(a3, a1, 0LL);
      SFMLOGICALSURFACE::SetShape(v13, a1, (struct _SURFOBJ *)(v17 + 24));
      *((_DWORD *)v13 + 64) |= 0x20u;
      DEC_SHARE_REF_CNT(v17);
    }
    *a5 = v13;
    goto LABEL_22;
  }
LABEL_23:
  SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v29);
  return v10;
}
