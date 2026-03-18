/*
 * XREFs of ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00534D8
 * Callers:
 *     GreUpdateSprite @ 0x1C00503E0 (GreUpdateSprite.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C00518AC (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C025D0AC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C025D9EC (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 * Callees:
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0033E38 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00517F0 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C005180C (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C0052190 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0064E94 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C00662EC (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C00F0E78 (-hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     UserGetHwndProcess @ 0x1C012BEC4 (UserGetHwndProcess.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C025CFA0 (--0SFMLOGICALSURFACEREF@@QEAA@XZ.c)
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
  __int64 v16; // rsi
  __int64 v17; // rcx
  int v18; // edx
  int v19; // eax
  HLSURF HLSURFClone; // rax
  HDEV v21; // rdx
  HDEV v22; // rdx
  HSURF Surface; // rax
  __int64 v24; // rdx
  __int64 v25; // rbx
  unsigned __int64 HwndProcess; // rax
  _BYTE v28[32]; // [rsp+30h] [rbp-48h] BYREF
  struct SFMLOGICALSURFACE *v29; // [rsp+50h] [rbp-28h]

  v9 = 1;
  SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v28);
  v10 = 0;
  if ( a4 )
  {
    v17 = *((_QWORD *)a3 + 24);
    if ( v17 || (*((_DWORD *)a3 + 62) & 1) != 0 )
    {
      v18 = 0;
      v19 = 0;
      if ( v17 )
      {
        v19 = *(_DWORD *)(v17 + 32);
        v18 = *(_DWORD *)(v17 + 36);
      }
      if ( a4->cx == v19 && a4->cy == v18 )
        goto LABEL_22;
      *((_DWORD *)this + 16) = *((_DWORD *)this + 14);
      *((_DWORD *)this + 17) = *((_DWORD *)this + 15);
      if ( *a5 == a3 )
      {
        HLSURFClone = SFMLOGICALSURFACE::CreateHLSURFClone(a1, a3, 0, 1, 1);
        SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v28, HLSURFClone);
        a3 = v29;
        if ( !v29 )
          goto LABEL_23;
        DWMSPRITE::SetLogicalSurface(this, v21, 0LL);
        DWMSPRITE::SetLogicalSurface(this, v22, a3);
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
      LOBYTE(v24) = 5;
      v25 = HmgReferenceCheckLock(Surface, v24, 0LL);
      SFMLOGICALSURFACE::SetShape(a3, a1, (struct _SURFOBJ *)(v25 + 24));
      *((_DWORD *)a3 + 64) |= 0x20u;
      *((_DWORD *)this + 16) = a4->cx + *((_DWORD *)this + 14);
      *((_DWORD *)this + 17) = a4->cy + *((_DWORD *)this + 15);
      HwndProcess = UserGetHwndProcess(*((_QWORD *)this + 5));
      SURFACE::vAppContainerOwner((SURFACE *)v25, HwndProcess);
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
  SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v28, v11);
  v13 = v29;
  if ( v29 )
  {
    DWMSPRITE::SetLogicalSurface(this, v12, 0LL);
    DWMSPRITE::SetLogicalSurface(this, v14, v13);
    v15 = SURFOBJ_TO_SURFACE(*((_QWORD *)a3 + 24));
    v16 = v15;
    if ( v15 )
    {
      INC_SHARE_REF_CNT(v15);
      SFMLOGICALSURFACE::SetShape(a3, a1, 0LL);
      SFMLOGICALSURFACE::SetShape(v13, a1, (struct _SURFOBJ *)(v16 + 24));
      *((_DWORD *)v13 + 64) |= 0x20u;
      DEC_SHARE_REF_CNT(v16);
    }
    *a5 = v13;
    goto LABEL_22;
  }
LABEL_23:
  SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v28);
  return v10;
}
