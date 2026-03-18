/*
 * XREFs of GreSfmOpenCompositorRef @ 0x1C000C544
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C000C290 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0012848 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0012874 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0012894 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z @ 0x1C0012968 (--0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z.c)
 */

__int64 __fastcall GreSfmOpenCompositorRef(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  int v5; // eax
  _BYTE v7[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  v9 = a1;
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  v3 = 0;
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( g_pDwmState )
    {
      SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF(v7, a2);
      v4 = v8;
      if ( v8 )
      {
        CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v9, (struct _EX_PUSH_LOCK *)(v8 + 264));
        v5 = *(_DWORD *)(v4 + 248);
        if ( (v5 & 8) != 0 )
        {
          if ( (v5 & 0x10) != 0 )
            *(_DWORD *)(v4 + 248) = v5 & 0xFFFFFFEF;
          ++*(_DWORD *)(v4 + 252);
        }
        else
        {
          v3 = -2147020579;
        }
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v9);
      }
      else
      {
        v3 = -1073741816;
      }
      SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v7);
    }
    else
    {
      v3 = -1071775733;
    }
  }
  else
  {
    v3 = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  return v3;
}
