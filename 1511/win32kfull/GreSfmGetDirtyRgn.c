/*
 * XREFs of GreSfmGetDirtyRgn @ 0x1C007E4A0
 * Callers:
 *     NtGdiHLSurfGetInformation @ 0x1C007E240 (NtGdiHLSurfGetInformation.c)
 * Callees:
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C0036538 (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSfmGetDirtyRgn(
        __int64 a1,
        __int64 a2,
        HRGN *a3,
        HRGN *a4,
        HRGN *a5,
        HRGN *a6,
        struct _POINTL *a7,
        int *a8,
        int *a9)
{
  __int64 v13; // rdx
  struct SFMLOGICALSURFACE *v14; // rax
  unsigned int DirtyRgn; // ebx
  struct SFMLOGICALSURFACE *v17; // [rsp+70h] [rbp+18h] BYREF

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
      v17 = 0LL;
      if ( a1 && (LOBYTE(v13) = 18, v14 = (struct SFMLOGICALSURFACE *)HmgShareLockCheck(a1, v13), (v17 = v14) != 0LL) )
        DirtyRgn = GrepSfmGetDirtyRgn(v14, a2, a3, a4, a5, a6, a7, a8, a9);
      else
        DirtyRgn = -1073741816;
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v17);
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
