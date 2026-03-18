/*
 * XREFs of GreSetRedirectionSurfaceSignaling @ 0x1C000B994
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C000C290 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BA4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BE0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C0011EE8 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ??0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z @ 0x1C00126BC (--0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0012848 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0012874 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSetRedirectionSurfaceSignaling(__int64 a1, HLSURF a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // ebx
  SFMLOGICALSURFACE *v9; // rdi
  __int64 v10; // r15
  __int64 v11; // rsi
  DYNAMICMODECHANGESHARELOCK *v12; // rcx
  __int64 v14; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v15[8]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v16[32]; // [rsp+40h] [rbp-58h] BYREF
  SFMLOGICALSURFACE *v17; // [rsp+60h] [rbp-38h]

  v5 = 0;
  if ( g_pDwmState )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v14);
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    if ( (unsigned int)UserIsCurrentProcessDwm() )
    {
      if ( *(_QWORD *)(a1 + 3488) )
      {
        SFMALTLOGICALSURFACEREF::SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v16, a2);
        v9 = v17;
        if ( v17 )
        {
          CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v15, (SFMLOGICALSURFACE *)((char *)v17 + 264));
          v10 = *((_QWORD *)v9 + 24);
          if ( v10 && (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(v9) )
          {
            v11 = SURFOBJ_TO_SURFACE_NOT_NULL(v10);
            if ( (*(unsigned int (__fastcall **)(__int64, __int64, HLSURF, _QWORD))(a1 + 3488))(
                   v10,
                   a3,
                   a2,
                   *(_QWORD *)(v10 + 32)) )
            {
              *((_DWORD *)v9 + 62) ^= (*((_DWORD *)v9 + 62) ^ (2 * a5)) & 2;
              EtwLogicalSurfEnableDirtyNotificationEvent(a2, a3);
            }
            *((_QWORD *)v9 + 25) = *(_QWORD *)(v11 + 496);
            *((_QWORD *)v9 + 26) = *(_QWORD *)(v11 + 504);
            *((_DWORD *)v9 + 54) = *(_DWORD *)(v11 + 512);
            if ( (*(_DWORD *)(v11 + 116) & 0x400) != 0 )
              *((_DWORD *)v9 + 62) |= 0x100u;
          }
          else
          {
            *((_QWORD *)v9 + 25) = a3;
            *((_QWORD *)v9 + 26) = a4;
          }
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v15);
        }
        else
        {
          v5 = -1073741811;
        }
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v16);
      }
      else
      {
        v5 = -1073741822;
      }
    }
    else
    {
      v5 = -1073741790;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v12);
  }
  else
  {
    return (unsigned int)-1071775733;
  }
  return v5;
}
