/*
 * XREFs of GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C000B4CC
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C000C290 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ?SignalOnDirty@SFMLOGICALSURFACE@@QEAAJH@Z @ 0x1C0011BCC (-SignalOnDirty@SFMLOGICALSURFACE@@QEAAJH@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0012894 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z @ 0x1C0012968 (--0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z.c)
 */

__int64 __fastcall GreSfmRegisterLogicalSurfaceForSignaling(__int64 a1, int a2)
{
  unsigned int v4; // ebx
  _BYTE v6[32]; // [rsp+20h] [rbp-38h] BYREF
  SFMLOGICALSURFACE *v7; // [rsp+40h] [rbp-18h]

  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF(v6, a1);
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
