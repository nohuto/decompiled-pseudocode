/*
 * XREFs of NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C021AA10
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _MonitorFromPoint @ 0x1C0082CA0 (_MonitorFromPoint.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetPointerDeviceRects @ 0x1C00EF164 (_GetPointerDeviceRects.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     GetHimetricScaleForMonitor @ 0x1C01E5120 (GetHimetricScaleForMonitor.c)
 */

__int64 __fastcall NtUserGetHimetricScaleFactorFromPixelLocation(__int64 a1, __int64 a2, int *a3, unsigned int *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rcx
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // edx
  unsigned int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v20; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v21; // [rsp+24h] [rbp-64h] BYREF
  int v22; // [rsp+28h] [rbp-60h]
  _BYTE v23[24]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v24; // [rsp+50h] [rbp-38h] BYREF

  v22 = 0;
  v8 = 1;
  EnterCrit(1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v23);
  v20 = 0;
  v21 = 0;
  if ( a1 && a3 && a4 && (unsigned int)GetPointerDeviceRects(a1, 0LL, &v24) )
  {
    if ( *(_DWORD *)(gpDispInfo + 80LL) <= 1u )
      goto LABEL_24;
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(gpDispInfo) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v9 = 0LL)
        : (v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1),
          !(_DWORD)v9) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v12 = 0)
          : (v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v12) )
      {
        v11 = (_QWORD *)(gpDispInfo + 136LL);
      }
      else
      {
        v11 = (_QWORD *)(gpDispInfo + 104LL);
      }
    }
    else
    {
      v11 = (_QWORD *)(gpDispInfo + 120LL);
    }
    v13 = v24 - *v11;
    if ( (_QWORD)v24 == *v11 )
      v13 = *((_QWORD *)&v24 + 1) - v11[1];
    if ( v13 )
    {
LABEL_24:
      v16 = 1;
      v21 = 1;
      v15 = 1;
      v20 = 1;
    }
    else
    {
      v14 = MonitorFromPoint(a2, 2LL, v10);
      GetHimetricScaleForMonitor(v14, &v20, &v21);
      v15 = v20;
      v16 = v21;
    }
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      a3 = (int *)W32UserProbeAddress;
    *a3 = v15;
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      a4 = (unsigned int *)W32UserProbeAddress;
    *a4 = v16;
    v22 = 1;
  }
  else
  {
    v8 = 0;
    UserSetLastError(87);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v23);
  UserSessionSwitchLeaveCrit(v18, v17);
  return v8;
}
