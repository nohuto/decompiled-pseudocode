/*
 * XREFs of SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C0011780
 * Callers:
 *     <none>
 * Callees:
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C0011A24 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 */

__int64 __fastcall SFMLOGICALSURFACEREF_vDestructorWrap(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  int v4; // eax

  result = *(_QWORD *)(a1 + 32);
  if ( result )
  {
    _InterlockedDecrement((volatile signed __int32 *)(result + 12));
    if ( *(_DWORD *)(a1 + 40) == 1 )
    {
      v3 = *(_QWORD *)(a1 + 32);
      v4 = *(_DWORD *)(v3 + 248);
      if ( (v4 & 0x80u) != 0 && (v4 & 8) != 0 && (v4 & 0x10) != 0 )
      {
        *(_DWORD *)(v3 + 248) &= ~0x10u;
        SFMLOGICALSURFACE::StopSfmStateTracking(*(SFMLOGICALSURFACE **)(a1 + 32), 0LL, gpSfmState);
      }
      return bhLSurfDestroyLogicalSurfaceObject(*(__int64 **)(a1 + 32), 1, 0);
    }
  }
  return result;
}
