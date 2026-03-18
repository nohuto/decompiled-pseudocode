/*
 * XREFs of SFMLOGICALSURFACEREF_vDestructor @ 0x1400745F4
 * Callers:
 *     ?GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x140073700 (-GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE.c)
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1400749F0 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x140076840 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreSfmCloseCompositorRef @ 0x14009F798 (GreSfmCloseCompositorRef.c)
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x14009FE38 (GreSfmRegisterLogicalSurfaceForSignaling.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1400A16FC (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1400A211C (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1400A3968 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     GreHintSpriteShape @ 0x1400A5AB4 (GreHintSpriteShape.c)
 *     GreSfmOpenCompositorRef @ 0x1400A87F8 (GreSfmOpenCompositorRef.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1401EA0C0 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     CheckAndProcessSurfaceComplete @ 0x14023ABE0 (CheckAndProcessSurfaceComplete.c)
 * Callees:
 *     ?TryStopSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@@Z @ 0x14009E6D8 (-TryStopSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z @ 0x14009E81C (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x14009F3DC (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 */

struct Gre::Base::SESSION_GLOBALS *__fastcall SFMLOGICALSURFACEREF_vDestructor(__int64 a1)
{
  struct Gre::Base::SESSION_GLOBALS *result; // rax
  Gre::Base *v3; // rcx
  int v4; // eax
  SFMLOGICALSURFACE *v5; // rbx
  HLSURF v6; // rdi
  struct Gre::Base::SESSION_GLOBALS *v7; // rsi
  HDEV v8; // rdx
  struct Gre::Base::SESSION_GLOBALS *v9; // rax
  char v10; // [rsp+28h] [rbp-20h]

  result = *(struct Gre::Base::SESSION_GLOBALS **)(a1 + 32);
  if ( result )
  {
    _InterlockedDecrement16((volatile signed __int16 *)result + 6);
    if ( *(_DWORD *)(a1 + 40) == 1 )
    {
      v3 = *(Gre::Base **)(a1 + 32);
      v4 = *((_DWORD *)v3 + 61);
      if ( (v4 & 0x80u) != 0 && (v4 & 8) != 0 && (v4 & 0x10) != 0 )
      {
        *((_DWORD *)v3 + 61) = v4 & 0xFFFFFFEF;
        v9 = Gre::Base::Globals(v3);
        SFMLOGICALSURFACE::StopSfmStateTracking(*(SFMLOGICALSURFACE **)(a1 + 32), 0LL, *((struct SfmState **)v9 + 543));
      }
      v5 = *(SFMLOGICALSURFACE **)(a1 + 32);
      v6 = *(HLSURF *)v5;
      result = Gre::Base::Globals(v3);
      v7 = result;
      if ( v6 )
      {
        v10 = 18;
        result = (struct Gre::Base::SESSION_GLOBALS *)HmgRemoveObject(result, *(_QWORD *)v5, 0LL, 0LL, 1, v10, 0LL);
        v5 = result;
      }
      if ( v5 )
      {
        SFMLOGICALSURFACE::DeInitialize(v5, v6);
        SFMLOGICALSURFACE::TryStopSfmStateTracking(v5, v8, *((struct SfmState **)v7 + 543));
        FreeObject(v7, v5, 0x12u);
        return (struct Gre::Base::SESSION_GLOBALS *)EtwLogicalSurfDestroyEvent(v6, 0LL);
      }
    }
  }
  return result;
}
