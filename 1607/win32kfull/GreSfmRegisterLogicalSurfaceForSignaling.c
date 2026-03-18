/*
 * XREFs of GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C0122B44
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C0066980 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00517F0 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z @ 0x1C0051874 (--0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z.c)
 *     ?SignalOnDirty@SFMLOGICALSURFACE@@QEAAJH@Z @ 0x1C005249C (-SignalOnDirty@SFMLOGICALSURFACE@@QEAAJH@Z.c)
 */

__int64 __fastcall GreSfmRegisterLogicalSurfaceForSignaling(HLSURF a1, int a2)
{
  unsigned int v4; // ebx
  _BYTE v6[32]; // [rsp+20h] [rbp-38h] BYREF
  SFMLOGICALSURFACE *v7; // [rsp+40h] [rbp-18h]

  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((__int64)v6, a1);
    if ( v7 )
      v4 = SFMLOGICALSURFACE::SignalOnDirty(v7, a2);
    else
      v4 = -1073741816;
    SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v6);
  }
  else
  {
    v4 = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  return v4;
}
