/*
 * XREFs of NtUserCalculatePopupWindowPosition @ 0x1C0217FB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _MonitorFromPoint @ 0x1C0077F10 (_MonitorFromPoint.c)
 *     FindBestPos @ 0x1C0134B7C (FindBestPos.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserCalculatePopupWindowPosition(
        unsigned __int64 *a1,
        __int64 *a2,
        int a3,
        struct tagRECT *a4,
        _DWORD *a5)
{
  unsigned int v9; // edi
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rsi
  struct tagRECT *v15; // rcx
  int BestPos; // edx
  _OWORD *v17; // rax
  int v18; // ecx
  __int64 v20; // [rsp+50h] [rbp-88h]
  unsigned __int64 v21; // [rsp+60h] [rbp-78h]
  struct tagRECT v22; // [rsp+80h] [rbp-58h] BYREF

  v9 = 1;
  EnterCrit(0LL, 1LL);
  if ( (a3 & 0xFFFE0200) != 0 )
  {
    v10 = 1004;
LABEL_3:
    UserSetLastError(v10);
    v9 = 0;
    goto LABEL_28;
  }
  if ( !a5 )
  {
    v10 = 87;
    goto LABEL_3;
  }
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      a4 = (struct tagRECT *)W32UserProbeAddress;
    v22 = *a4;
    a4 = &v22;
  }
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    a2 = (__int64 *)W32UserProbeAddress;
  v20 = *a2;
  if ( (int)*a2 < 0 || (HIDWORD(*a2) & 0x80000000) != 0 )
  {
    v9 = 0;
    UserSetLastError(87);
  }
  else
  {
    if ( (unsigned __int64)a1 >= W32UserProbeAddress )
      a1 = (unsigned __int64 *)W32UserProbeAddress;
    v13 = *a1;
    v21 = *a1;
    v14 = HIDWORD(*a1);
    v15 = (struct tagRECT *)MonitorFromPoint(v13, 2u);
    if ( (a3 & 4) != 0 )
    {
      LODWORD(v13) = v13 - (int)v20 / 2;
    }
    else if ( (a3 & 8) != 0 )
    {
      LODWORD(v13) = v13 - v20;
    }
    if ( (a3 & 0x10) != 0 )
    {
      LODWORD(v14) = SHIDWORD(v20) / -2 + v14;
    }
    else if ( (a3 & 0x20) != 0 )
    {
      LODWORD(v14) = v14 - HIDWORD(v20);
    }
    BestPos = FindBestPos(v13, v14, v20, SHIDWORD(v20), a4, a3 | 0x20000u, 0LL, v15, v21);
    v17 = a5;
    if ( (unsigned __int64)a5 >= W32UserProbeAddress )
      v17 = (_OWORD *)W32UserProbeAddress;
    *v17 = *v17;
    v18 = (__int16)BestPos;
    *a5 = (__int16)BestPos;
    v11 = (unsigned int)SHIWORD(BestPos);
    a5[1] = v11;
    a5[2] = v20 + v18;
    v12 = (unsigned int)(v11 + HIDWORD(v20));
    a5[3] = v12;
  }
LABEL_28:
  UserSessionSwitchLeaveCrit(v12, v11);
  return v9;
}
