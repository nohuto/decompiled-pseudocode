/*
 * XREFs of NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C0213560
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _MonitorFromPoint @ 0x1C00AEF70 (_MonitorFromPoint.c)
 *     _GetPointerDeviceRects @ 0x1C00E3B58 (_GetPointerDeviceRects.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     GetHimetricScaleForMonitor @ 0x1C01DBEC0 (GetHimetricScaleForMonitor.c)
 */

__int64 __fastcall NtUserGetHimetricScaleFactorFromPixelLocation(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int *a3,
        unsigned int *a4)
{
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r9
  unsigned int v27; // edx
  unsigned int v28; // r8d
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int v32; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v33; // [rsp+24h] [rbp-64h] BYREF
  int v34; // [rsp+28h] [rbp-60h]
  _BYTE v35[16]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v36; // [rsp+50h] [rbp-38h] BYREF

  v34 = 0;
  v8 = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v35);
  v33 = 0;
  v32 = 0;
  if ( a1 && a3 && a4 && (unsigned int)GetPointerDeviceRects(a1, 0LL, &v36) )
  {
    if ( *(_DWORD *)(gpDispInfo + 80LL) <= 1u )
      goto LABEL_23;
    if ( (W32GetCurrentThreadDpiAwarenessContext(gpDispInfo, v9, v10, v11) & 0xF) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v14, v15) + 408)
        ? (v13 = 0LL)
        : (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v12,
                                                       v14,
                                                       v15)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          !(_DWORD)v13) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v13, v12, v14, v15) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19) + 408)
          ? (v23 = 0)
          : (v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v20,
                                                         v21,
                                                         v22)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v23) )
      {
        v16 = (_QWORD *)(gpDispInfo + 136LL);
      }
      else
      {
        v16 = (_QWORD *)(gpDispInfo + 104LL);
      }
    }
    else
    {
      v16 = (_QWORD *)(gpDispInfo + 120LL);
    }
    v24 = v36 - *v16;
    if ( (_QWORD)v36 == *v16 )
      v24 = *((_QWORD *)&v36 + 1) - v16[1];
    if ( v24 )
    {
LABEL_23:
      v28 = 1;
      v32 = 1;
      v27 = 1;
      v33 = 1;
    }
    else
    {
      v25 = MonitorFromPoint(a2, 2u);
      GetHimetricScaleForMonitor(v25, &v33, &v32, v26);
      v27 = v33;
      v28 = v32;
    }
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      a3 = (unsigned int *)W32UserProbeAddress;
    *a3 = v27;
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      a4 = (unsigned int *)W32UserProbeAddress;
    *a4 = v28;
    v34 = 1;
  }
  else
  {
    v8 = 0;
    UserSetLastError(87LL);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v35);
  UserSessionSwitchLeaveCrit(v30, v29);
  return v8;
}
