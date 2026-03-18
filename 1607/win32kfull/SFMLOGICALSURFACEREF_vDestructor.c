/*
 * XREFs of SFMLOGICALSURFACEREF_vDestructor @ 0x1C0050E44
 * Callers:
 *     GreUpdateSprite @ 0x1C00503E0 (GreUpdateSprite.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00517F0 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C00534D0 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 * Callees:
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C00522F4 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x1C005264C (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 */

int __fastcall SFMLOGICALSURFACEREF_vDestructor(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  __int64 *v4; // rbx
  __int64 v5; // rdi
  char v7; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v1 + 12));
    if ( *(_DWORD *)(a1 + 40) == 1 )
    {
      v3 = *(_QWORD *)(a1 + 32);
      LODWORD(v1) = *(_DWORD *)(v3 + 248);
      if ( (v1 & 0x80u) != 0LL && (v1 & 8) != 0 && (v1 & 0x10) != 0 )
      {
        *(_DWORD *)(v3 + 248) &= ~0x10u;
        LODWORD(v1) = SFMLOGICALSURFACE::StopSfmStateTracking(*(SFMLOGICALSURFACE **)(a1 + 32), 0LL, gpSfmState);
      }
      v4 = *(__int64 **)(a1 + 32);
      v5 = *v4;
      if ( *v4 )
      {
        v7 = 18;
        v1 = HmgRemoveObject(v5, 0LL, 0LL, 1LL, v7, 0LL);
        v4 = (__int64 *)v1;
      }
      if ( v4 )
      {
        SFMLOGICALSURFACE::DeInitialize(v4, v5, 0LL);
        FreeObject(v4, 18LL);
        LODWORD(v1) = EtwLogicalSurfDestroyEvent(v5, 0LL);
      }
    }
  }
  return v1;
}
