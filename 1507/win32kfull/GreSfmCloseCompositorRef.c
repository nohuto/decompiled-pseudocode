/*
 * XREFs of GreSfmCloseCompositorRef @ 0x1C000C7BC
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C000C290 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C000C644 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C000C8EC (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C000E2B8 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C0011A24 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0012848 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0012874 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0012894 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z @ 0x1C0012968 (--0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z.c)
 */

__int64 __fastcall GreSfmCloseCompositorRef(HDEV a1, __int64 a2)
{
  unsigned int v4; // ebx
  SFMLOGICALSURFACE *v5; // rdi
  int v6; // eax
  SFMLOGICALSURFACE *v8; // rcx
  _BYTE v10[32]; // [rsp+20h] [rbp-48h] BYREF
  SFMLOGICALSURFACE *v11; // [rsp+40h] [rbp-28h]
  unsigned int v12; // [rsp+70h] [rbp+8h] BYREF
  __int64 v13; // [rsp+80h] [rbp+18h] BYREF

  ENTER_GRE_DWM_CRIT((__int64)a1, &v12);
  v4 = 0;
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( g_pDwmState )
    {
      SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF(v10, a2);
      v5 = v11;
      if ( v11 )
      {
        CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v13, (SFMLOGICALSURFACE *)((char *)v11 + 264));
        v6 = *((_DWORD *)v5 + 62);
        if ( (v6 & 8) == 0 || (v6 & 0x10) != 0 )
        {
          v4 = -2147020579;
        }
        else if ( (*((_DWORD *)v5 + 63))-- == 1 )
        {
          SFMLOGICALSURFACE::StopSfmStateTracking(v5, a1, gpSfmState);
          if ( *((_WORD *)v5 + 6) == 1 && !*((_DWORD *)v5 + 2) )
          {
            if ( v13 )
            {
              GreReleasePushLockExclusive();
              KeLeaveCriticalRegion();
              v13 = 0LL;
            }
            v8 = v11;
            if ( v11 )
              _InterlockedDecrement((volatile signed __int32 *)v11 + 3);
            v11 = 0LL;
            if ( !(unsigned int)bhLSurfDestroyLogicalSurfaceObject(v8, 1LL, 0LL) )
              v4 = -1073741823;
          }
        }
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v13);
      }
      else
      {
        v4 = -1073741816;
      }
      SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v10);
    }
    else
    {
      v4 = -1071775733;
    }
  }
  else
  {
    v4 = -1073741790;
  }
  LEAVE_GRE_DWM_CRIT(a1, v12);
  return v4;
}
