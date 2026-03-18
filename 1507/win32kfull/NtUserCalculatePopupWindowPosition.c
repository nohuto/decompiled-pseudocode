/*
 * XREFs of NtUserCalculatePopupWindowPosition @ 0x1C02181E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _MonitorFromPoint @ 0x1C0082CA0 (_MonitorFromPoint.c)
 *     FindBestPos @ 0x1C010869C (FindBestPos.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserCalculatePopupWindowPosition(__int64 *a1, __int64 *a2, int a3, struct tagRECT *a4, _DWORD *a5)
{
  unsigned int v9; // edi
  __int64 v10; // r8
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned __int64 v15; // rsi
  struct tagRECT *v16; // rcx
  int BestPos; // edx
  _OWORD *v18; // rax
  int v19; // ecx
  __int64 v21; // [rsp+50h] [rbp-88h]
  unsigned __int64 v22; // [rsp+60h] [rbp-78h]
  struct tagRECT v23; // [rsp+80h] [rbp-58h] BYREF

  v9 = 1;
  EnterCrit(1LL);
  if ( (a3 & 0xFFFE0200) != 0 )
  {
    v11 = 1004;
LABEL_3:
    UserSetLastError(v11);
    v9 = 0;
    goto LABEL_28;
  }
  if ( !a5 )
  {
    v11 = 87;
    goto LABEL_3;
  }
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      a4 = (struct tagRECT *)W32UserProbeAddress;
    v23 = *a4;
    a4 = &v23;
  }
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    a2 = (__int64 *)W32UserProbeAddress;
  v21 = *a2;
  if ( (int)*a2 < 0 || (HIDWORD(*a2) & 0x80000000) != 0 )
  {
    v9 = 0;
    UserSetLastError(87);
  }
  else
  {
    if ( (unsigned __int64)a1 >= W32UserProbeAddress )
      a1 = (__int64 *)W32UserProbeAddress;
    v14 = *a1;
    v22 = *a1;
    v15 = HIDWORD(*a1);
    v16 = (struct tagRECT *)MonitorFromPoint(v14, 2LL, v10);
    if ( (a3 & 4) != 0 )
    {
      LODWORD(v14) = v14 - (int)v21 / 2;
    }
    else if ( (a3 & 8) != 0 )
    {
      LODWORD(v14) = v14 - v21;
    }
    if ( (a3 & 0x10) != 0 )
    {
      LODWORD(v15) = SHIDWORD(v21) / -2 + v15;
    }
    else if ( (a3 & 0x20) != 0 )
    {
      LODWORD(v15) = v15 - HIDWORD(v21);
    }
    BestPos = FindBestPos(v14, v15, v21, SHIDWORD(v21), a4, a3 | 0x20000u, 0LL, v16, v22);
    v18 = a5;
    if ( (unsigned __int64)a5 >= W32UserProbeAddress )
      v18 = (_OWORD *)W32UserProbeAddress;
    *v18 = *v18;
    v19 = (__int16)BestPos;
    *a5 = (__int16)BestPos;
    v12 = (unsigned int)SHIWORD(BestPos);
    a5[1] = v12;
    a5[2] = v21 + v19;
    v13 = (unsigned int)(v12 + HIDWORD(v21));
    a5[3] = v13;
  }
LABEL_28:
  UserSessionSwitchLeaveCrit(v13, v12);
  return v9;
}
