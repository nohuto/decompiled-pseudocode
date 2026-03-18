/*
 * XREFs of GreSfmGetDirtyRgn @ 0x1C0052D14
 * Callers:
 *     NtGdiHLSurfGetInformation @ 0x1C0053250 (NtGdiHLSurfGetInformation.c)
 * Callees:
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C0052ADC (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     ??0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z @ 0x1C0052E68 (--0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreSfmGetDirtyRgn(
        HLSURF a1,
        __int64 a2,
        HRGN *a3,
        HRGN *a4,
        HRGN *a5,
        HRGN *a6,
        struct _POINTL *a7,
        int *a8,
        int *a9)
{
  struct SFMLOGICALSURFACE *v13; // rcx
  unsigned int DirtyRgn; // eax
  unsigned int v15; // ebx
  _BYTE v17[32]; // [rsp+50h] [rbp-38h] BYREF
  struct SFMLOGICALSURFACE *v18; // [rsp+70h] [rbp-18h]

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
      SFMALTLOGICALSURFACEREF::SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v17, a1);
      v13 = v18;
      if ( v18 )
      {
        DirtyRgn = GrepSfmGetDirtyRgn(v18, a2, a3, a4, a5, a6, a7, a8, a9);
        v13 = v18;
        v15 = DirtyRgn;
      }
      else
      {
        v15 = -1073741816;
      }
      if ( v13 )
        DEC_SHARE_REF_CNT(v13);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v17);
    }
    else
    {
      v15 = -1071775733;
    }
  }
  else
  {
    v15 = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  return v15;
}
