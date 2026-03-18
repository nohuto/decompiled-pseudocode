/*
 * XREFs of ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C00118C0
 * Callers:
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C000A6E8 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     GreHintSpriteShape @ 0x1C000FAE4 (GreHintSpriteShape.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00111E4 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x1C0011D7C (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 *     vSpDwmMigrateLSurfShapeReferenceWrap @ 0x1C0100C30 (vSpDwmMigrateLSurfShapeReferenceWrap.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C012BAD0 (GreTransferDwmStateToSpriteState.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C014A1F0 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     ?SpNotifyLSurfaceRedirSurfAssoc@@YAJQEAUHDEV__@@PEAUHLSURF__@@PEAU_SURFOBJ@@H@Z @ 0x1C000DA44 (-SpNotifyLSurfaceRedirSurfAssoc@@YAJQEAUHDEV__@@PEAUHLSURF__@@PEAU_SURFOBJ@@H@Z.c)
 */

_BOOL8 __fastcall SFMLOGICALSURFACE::SetShape(SFMLOGICALSURFACE *this, _QWORD *a2, struct _SURFOBJ *a3)
{
  SURFOBJ *v3; // rbp
  BOOL v4; // edi
  BOOL v8; // r15d
  SURFACE *v9; // rax
  __int64 v10; // rax
  SURFOBJ *v11; // rax
  SURFACE *v12; // rax
  int v13; // ecx

  v3 = (SURFOBJ *)*((_QWORD *)this + 24);
  v4 = 0;
  v8 = !v3 && a3;
  if ( v3 && !a3 )
  {
    v9 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)this + 24));
    SURFACE::RemoveLSurf(v9, this);
    EngUnlockSurface(v3);
    if ( a2 )
      SpNotifyLSurfaceRedirSurfAssoc(a2, *(HLSURF *)this, *((struct _SURFOBJ **)this + 24), 0);
    v4 = 1;
    EtwLogicalSurfPhysSurfUnbindEvent(*(_QWORD *)this, *(_QWORD *)(*((_QWORD *)this + 24) + 8LL));
  }
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 62) &= ~2u;
  *((_QWORD *)this + 24) = a3;
  if ( v8 )
  {
    v10 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
    v11 = EngLockSurface(*(HSURF *)(v10 + 32));
    if ( v11 )
    {
      v12 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v11);
      SURFACE::AddLSurf(v12, this);
    }
    *((_DWORD *)this + 62) |= 1u;
    v4 = 1;
    if ( a2 )
    {
      v13 = SpNotifyLSurfaceRedirSurfAssoc(a2, *(HLSURF *)this, a3, 1);
      if ( (int)(v13 + 0x80000000) >= 0 && v13 != -1073741822 )
        v4 = 0;
    }
    EtwLogicalSurfPhysSurfBindEvent(*(_QWORD *)this, a3->hsurf);
  }
  return v4;
}
