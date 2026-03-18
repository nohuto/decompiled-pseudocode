/*
 * XREFs of ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0064E94
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00534D8 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreHintSpriteShape @ 0x1C0062450 (GreHintSpriteShape.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C0065268 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C0122858 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C025E1CC (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DWMSPRITE::SetLogicalSurface(DWMSPRITE *this, HDEV a2, struct SFMLOGICALSURFACE *a3)
{
  __int64 v3; // rax
  BOOL v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rdx

  v3 = *((_QWORD *)this + 16);
  v6 = !v3 && a3;
  if ( v3 && !a3 )
  {
    *(_DWORD *)(v3 + 248) &= ~4u;
    *(_QWORD *)(v3 + 304) = 0LL;
    DEC_SHARE_REF_CNT(*((_QWORD *)this + 16));
    EtwDwmSpriteLogicalSurfUnBindEvent(*(_QWORD *)this, **((_QWORD **)this + 16));
  }
  *((_QWORD *)this + 16) = a3;
  if ( v6 )
  {
    INC_SHARE_REF_CNT(a3);
    v7 = *(_QWORD *)this;
    *((_DWORD *)a3 + 62) |= 4u;
    v8 = *(_QWORD *)a3;
    *((_QWORD *)a3 + 38) = v7 & -(__int64)((*((_DWORD *)a3 + 62) & 4) != 0);
    EtwDwmSpriteLogicalSurfBindEvent(*(_QWORD *)this, v8);
  }
}
