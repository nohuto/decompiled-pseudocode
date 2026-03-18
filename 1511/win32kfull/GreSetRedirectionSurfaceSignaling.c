/*
 * XREFs of GreSetRedirectionSurfaceSignaling @ 0x1C007FA78
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C007E9B0 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003C6C4 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C007B130 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD4C (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSetRedirectionSurfaceSignaling(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // edi
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // rsi
  DYNAMICMODECHANGESHARELOCK *v14; // rcx
  __int64 v16; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v18[16]; // [rsp+40h] [rbp-38h] BYREF

  v5 = 0;
  if ( g_pDwmState )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v16);
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    if ( (unsigned int)UserIsCurrentProcessDwm() )
    {
      if ( *(_QWORD *)(a1 + 3488) )
      {
        v17 = 0LL;
        if ( a2 && (LOBYTE(v9) = 18, v10 = HmgShareLockCheck(a2, v9), v17 = v10, (v11 = v10) != 0) )
        {
          CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v18, (struct _EX_PUSH_LOCK *)(v10 + 264));
          v12 = *(_QWORD *)(v11 + 192);
          if ( v12 && (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap((SFMLOGICALSURFACE *)v11) )
          {
            v13 = SURFOBJ_TO_SURFACE_NOT_NULL(v12);
            if ( (*(unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD))(a1 + 3488))(
                   v12,
                   a3,
                   a2,
                   *(_QWORD *)(v12 + 32)) )
            {
              *(_DWORD *)(v11 + 248) ^= (*(_DWORD *)(v11 + 248) ^ (2 * a5)) & 2;
              EtwLogicalSurfEnableDirtyNotificationEvent(a2, a3);
            }
            *(_QWORD *)(v11 + 200) = *(_QWORD *)(v13 + 496);
            *(_QWORD *)(v11 + 208) = *(_QWORD *)(v13 + 504);
            *(_DWORD *)(v11 + 216) = *(_DWORD *)(v13 + 512);
            if ( (*(_DWORD *)(v13 + 116) & 0x400) != 0 )
              *(_DWORD *)(v11 + 248) |= 0x100u;
          }
          else
          {
            *(_QWORD *)(v11 + 200) = a3;
            *(_QWORD *)(v11 + 208) = a4;
          }
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v18);
        }
        else
        {
          v5 = -1073741811;
        }
        EPALOBJ::~EPALOBJ((EPALOBJ *)&v17);
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
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v14);
  }
  else
  {
    return (unsigned int)-1071775733;
  }
  return v5;
}
