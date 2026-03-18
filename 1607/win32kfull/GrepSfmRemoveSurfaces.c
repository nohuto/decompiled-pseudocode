/*
 * XREFs of GrepSfmRemoveSurfaces @ 0x1C01336E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00517F0 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z @ 0x1C0051874 (--0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C00522F4 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C0065F8C (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 */

struct SfmState *GrepSfmRemoveSurfaces()
{
  struct SfmState *result; // rax
  char *v1; // rcx
  char *v2; // rbx
  char *v3; // rdi
  int v4; // eax
  HLSURF *v5; // rcx
  _BYTE v6[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  result = gpSfmState;
  v1 = (char *)gpSfmState + 40;
  v2 = (char *)*((_QWORD *)gpSfmState + 5);
  while ( v2 != v1 )
  {
    v3 = v2 - 32;
    v2 = *(char **)v2;
    SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((__int64)v6, *(HLSURF *)v3);
    if ( v7 )
    {
      v4 = *((_DWORD *)v3 + 62);
      if ( (v4 & 0x10) != 0 )
        *((_DWORD *)v3 + 62) = v4 & 0xFFFFFFEF;
      else
        *((_DWORD *)v3 + 63) = 0;
      SFMLOGICALSURFACE::StopSfmStateTracking((SFMLOGICALSURFACE *)v3, 0LL, gpSfmState);
      v5 = (HLSURF *)v7;
      if ( v7 )
        _InterlockedDecrement((volatile signed __int32 *)(v7 + 12));
      v7 = 0LL;
      bhLSurfDestroyLogicalSurfaceObject(v5, 1, 0);
    }
    SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v6);
    result = gpSfmState;
    v1 = (char *)gpSfmState + 40;
  }
  return result;
}
