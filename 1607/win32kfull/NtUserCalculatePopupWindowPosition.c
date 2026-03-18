/*
 * XREFs of NtUserCalculatePopupWindowPosition @ 0x1C013B310
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _MonitorFromPoint @ 0x1C00AEF70 (_MonitorFromPoint.c)
 *     FindBestPos @ 0x1C013BA14 (FindBestPos.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserCalculatePopupWindowPosition(
        unsigned __int64 *a1,
        __int64 *a2,
        int a3,
        __int128 *a4,
        _DWORD *a5)
{
  int v9; // edi
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  struct tagMONITOR *v14; // rax
  int BestPos; // eax
  _OWORD *v16; // rcx
  __int64 v18; // rcx
  __int64 v19; // [rsp+50h] [rbp-88h]
  __int64 v20; // [rsp+60h] [rbp-78h]
  __int128 v21; // [rsp+80h] [rbp-58h] BYREF

  v9 = 1;
  EnterCrit(0LL, 1LL);
  if ( (a3 & 0xFFFE0200) != 0 )
  {
    v18 = 1004LL;
LABEL_25:
    UserSetLastError(v18);
    v9 = 0;
    goto LABEL_22;
  }
  if ( !a5 )
  {
    v18 = 87LL;
    goto LABEL_25;
  }
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      a4 = (__int128 *)W32UserProbeAddress;
    v21 = *a4;
    a4 = &v21;
  }
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    a2 = (__int64 *)W32UserProbeAddress;
  v19 = *a2;
  if ( (int)*a2 < 0 || (HIDWORD(*a2) & 0x80000000) != 0 )
  {
    v9 = 0;
    UserSetLastError(87LL);
  }
  else
  {
    if ( (unsigned __int64)a1 >= W32UserProbeAddress )
      a1 = (unsigned __int64 *)W32UserProbeAddress;
    v10 = *a1;
    v20 = *a1;
    v13 = HIDWORD(*a1);
    v14 = (struct tagMONITOR *)MonitorFromPoint(v10, 2u);
    if ( (a3 & 4) != 0 )
    {
      LODWORD(v10) = v10 - (int)v19 / 2;
    }
    else if ( (a3 & 8) != 0 )
    {
      LODWORD(v10) = v10 - v19;
    }
    if ( (a3 & 0x10) != 0 )
    {
      LODWORD(v13) = SHIDWORD(v19) / -2 + v13;
    }
    else if ( (a3 & 0x20) != 0 )
    {
      LODWORD(v13) = v13 - HIDWORD(v19);
    }
    BestPos = FindBestPos(v10, v13, (__int64)a4, a3 | 0x20000u, 0LL, v14, v20);
    v16 = a5;
    if ( (unsigned __int64)a5 >= W32UserProbeAddress )
      v16 = (_OWORD *)W32UserProbeAddress;
    *v16 = *v16;
    *a5 = (__int16)BestPos;
    v11 = (unsigned int)SHIWORD(BestPos);
    a5[1] = v11;
    a5[2] = v19 + (__int16)BestPos;
    v12 = (unsigned int)(v11 + HIDWORD(v19));
    a5[3] = v12;
  }
LABEL_22:
  UserSessionSwitchLeaveCrit(v12, v11);
  return v9;
}
