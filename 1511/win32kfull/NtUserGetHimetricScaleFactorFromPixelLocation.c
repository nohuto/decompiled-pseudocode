/*
 * XREFs of NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C021A790
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     _MonitorFromPoint @ 0x1C0077F10 (_MonitorFromPoint.c)
 *     _GetPointerDeviceRects @ 0x1C0117E98 (_GetPointerDeviceRects.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     GetHimetricScaleForMonitor @ 0x1C01E55B0 (GetHimetricScaleForMonitor.c)
 */

__int64 __fastcall NtUserGetHimetricScaleFactorFromPixelLocation(
        __int64 a1,
        unsigned __int64 a2,
        int *a3,
        unsigned int *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // edx
  unsigned int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v19; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v20; // [rsp+24h] [rbp-64h] BYREF
  int v21; // [rsp+28h] [rbp-60h]
  _BYTE v22[24]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v23; // [rsp+50h] [rbp-38h] BYREF

  v21 = 0;
  v8 = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v22);
  v19 = 0;
  v20 = 0;
  if ( a1 && a3 && a4 && (unsigned int)GetPointerDeviceRects(a1, 0LL, &v23) )
  {
    if ( *(_DWORD *)(gpDispInfo + 80LL) <= 1u )
      goto LABEL_24;
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(gpDispInfo) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v9 = 0LL)
        : (v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 244LL) & 1),
          !(_DWORD)v9) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v11 = 0)
          : (v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v11) )
      {
        v10 = (_QWORD *)(gpDispInfo + 136LL);
      }
      else
      {
        v10 = (_QWORD *)(gpDispInfo + 104LL);
      }
    }
    else
    {
      v10 = (_QWORD *)(gpDispInfo + 120LL);
    }
    v12 = v23 - *v10;
    if ( (_QWORD)v23 == *v10 )
      v12 = *((_QWORD *)&v23 + 1) - v10[1];
    if ( v12 )
    {
LABEL_24:
      v15 = 1;
      v20 = 1;
      v14 = 1;
      v19 = 1;
    }
    else
    {
      v13 = MonitorFromPoint(a2, 2u);
      GetHimetricScaleForMonitor(v13, &v19, &v20);
      v14 = v19;
      v15 = v20;
    }
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      a3 = (int *)W32UserProbeAddress;
    *a3 = v14;
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      a4 = (unsigned int *)W32UserProbeAddress;
    *a4 = v15;
    v21 = 1;
  }
  else
  {
    v8 = 0;
    UserSetLastError(87);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v22);
  UserSessionSwitchLeaveCrit(v17, v16);
  return v8;
}
