/*
 * XREFs of GreSfmGetDirtyRgn @ 0x1C0012580
 * Callers:
 *     NtGdiHLSurfGetInformation @ 0x1C0011F20 (NtGdiHLSurfGetInformation.c)
 * Callees:
 *     ??0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z @ 0x1C00126BC (--0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C0013D64 (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 */

__int64 __fastcall GreSfmGetDirtyRgn(
        HLSURF a1,
        unsigned __int64 a2,
        HRGN *a3,
        HRGN *a4,
        HRGN *a5,
        HRGN *a6,
        struct _POINTL *a7,
        int *a8,
        int *a9)
{
  unsigned int DirtyRgn; // ebx
  _BYTE v15[32]; // [rsp+50h] [rbp-38h] BYREF
  struct SFMLOGICALSURFACE *v16; // [rsp+70h] [rbp-18h]

  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  GreAcquireSemaphoreSharedInternal(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( g_pDwmState )
    {
      SFMALTLOGICALSURFACEREF::SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v15, a1);
      if ( v16 )
        DirtyRgn = GrepSfmGetDirtyRgn(v16, a2, a3, a4, a5, a6, a7, a8, a9);
      else
        DirtyRgn = -1073741816;
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v15);
    }
    else
    {
      DirtyRgn = -1071775733;
    }
  }
  else
  {
    DirtyRgn = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  return DirtyRgn;
}
