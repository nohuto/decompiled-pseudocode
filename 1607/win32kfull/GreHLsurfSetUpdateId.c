/*
 * XREFs of GreHLsurfSetUpdateId @ 0x1C025ED3C
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C0066980 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C0052088 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z @ 0x1C0052E68 (--0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F54 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F90 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall GreHLsurfSetUpdateId(__int64 a1, HLSURF a2, __int64 a3)
{
  unsigned int v5; // edi
  SFMLOGICALSURFACE *v6; // rbx
  DYNAMICMODECHANGESHARELOCK *v7; // rcx
  _BYTE v9[32]; // [rsp+20h] [rbp-38h] BYREF
  SFMLOGICALSURFACE *v10; // [rsp+40h] [rbp-18h]
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v11 = a1;
  v5 = -1071775733;
  if ( g_pDwmState )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v11);
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    if ( (unsigned int)UserIsCurrentProcessDwm() )
    {
      v5 = -1073741811;
      SFMALTLOGICALSURFACEREF::SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v9, a2);
      v6 = v10;
      if ( v10 )
      {
        CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v11, (SFMLOGICALSURFACE *)((char *)v10 + 264));
        if ( *((_QWORD *)v6 + 24) && (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(v6) )
        {
          *((_QWORD *)v6 + 36) = a3;
          v5 = 0;
        }
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v11);
      }
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v9);
    }
    else
    {
      v5 = -1073741790;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v7);
  }
  return v5;
}
