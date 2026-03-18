/*
 * XREFs of NtUserHwndQueryRedirectionInfo @ 0x14001E5B0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetDxSharedSurface @ 0x14001D3F4 (GreGetDxSharedSurface.c)
 *     UserSetLastStatus @ 0x14001F7CC (UserSetLastStatus.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     RecreateRedirectionBitmap @ 0x140041830 (RecreateRedirectionBitmap.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1401A20C0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     GreGetHwndUpdateIds @ 0x1403450D8 (GreGetHwndUpdateIds.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserHwndQueryRedirectionInfo(__int64 a1, int a2, void *a3, __int64 a4)
{
  int DxSharedSurface; // r14d
  int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // r8
  NTSTATUS v14; // ecx
  unsigned int ULongFromUser; // r13d
  unsigned int v17; // r15d
  void *v18; // r13
  int v19; // r12d
  int HwndUpdateIds; // eax
  unsigned int v21; // [rsp+30h] [rbp-A8h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-A4h] BYREF
  __int64 v23; // [rsp+38h] [rbp-A0h] BYREF
  void *Src; // [rsp+40h] [rbp-98h]
  unsigned __int64 v25; // [rsp+48h] [rbp-90h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-88h] BYREF
  unsigned int v27; // [rsp+64h] [rbp-74h]
  __int64 v28; // [rsp+68h] [rbp-70h] BYREF
  __int128 v29; // [rsp+88h] [rbp-50h] BYREF
  __int128 v30; // [rsp+98h] [rbp-40h]

  Src = a3;
  DxSharedSurface = -1073741811;
  v29 = 0LL;
  v30 = 0LL;
  v9 = 0;
  v25 = 0LL;
  v26[0] = 0LL;
  v23 = 0LL;
  v22 = 0;
  v21 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(&v28, 1LL);
  v10 = ValidateHwnd(a1);
  if ( !v10 )
    goto LABEL_11;
  if ( a2 >= 5 )
  {
    v14 = -1073741821;
    goto LABEL_10;
  }
  v12 = v10;
  v13 = v10;
  do
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 26LL) & 8) != 0 )
      break;
    v12 = *(_QWORD *)(v12 + 104);
    v13 = v12;
  }
  while ( v12 );
  if ( !v12 )
    goto LABEL_9;
  if ( v12 != v10 && (*(_WORD *)(*(_QWORD *)(v13 + 40) + 42LL) & 0x2FFF) == 0x29D )
    v12 = 0LL;
  if ( !v12 || (*(_WORD *)(*(_QWORD *)(v12 + 40) + 42LL) & 0x2FFF) == 0x29D )
  {
LABEL_9:
    v14 = -1073741811;
LABEL_10:
    UserSetLastStatus(v14);
    goto LABEL_11;
  }
  ULongFromUser = RtlReadULongFromUser(a4);
  v27 = ULongFromUser;
  if ( a2 )
  {
    v11 = (unsigned int)(a2 - 1);
    if ( a2 == 1 )
    {
      if ( !a3 )
        goto LABEL_25;
      v17 = 16;
    }
    else
    {
      v11 = (unsigned int)(a2 - 2);
      if ( a2 != 2 )
      {
        if ( a2 != 3 )
        {
          v14 = -1073741821;
          goto LABEL_10;
        }
        if ( !(unsigned int)IsCurrentProcessDwm() )
        {
          v14 = -1073741790;
          goto LABEL_10;
        }
        if ( !a3 )
          goto LABEL_25;
        v17 = 16;
        if ( ULongFromUser >= 0x10 )
        {
          v18 = Src;
          RtlCopyFromUser(&v29, Src, 0x10uLL);
          goto LABEL_17;
        }
LABEL_42:
        v14 = -1073741306;
        goto LABEL_10;
      }
      if ( !a3 )
        goto LABEL_25;
      v17 = 4;
    }
    if ( ULongFromUser >= v17 )
    {
      v18 = Src;
      goto LABEL_17;
    }
    goto LABEL_42;
  }
  if ( !a3 )
    goto LABEL_25;
  if ( ULongFromUser < 0x20 )
    goto LABEL_42;
  v17 = 32;
  v18 = Src;
  RtlCopyFromUser(&v29, Src, 0x20uLL);
  v21 = DWORD1(v29);
  if ( (DWORD1(v29) & 0xFFFFFFFB) != 0 )
    goto LABEL_25;
LABEL_17:
  if ( !a2 )
  {
    v23 = v30;
    DxSharedSurface = GreGetDxSharedSurface(*(Gre::Base **)v12, v26, &v23, &v22, &v21, &v25);
    if ( DxSharedSurface != -1071775484 )
      goto LABEL_19;
    GreLockVisRgn();
    DxSharedSurface = RecreateRedirectionBitmap((struct tagWND *)v12, 1, 0LL);
    GreUnlockVisRgn();
    if ( DxSharedSurface >= 0 )
    {
      DxSharedSurface = GreGetDxSharedSurface(*(Gre::Base **)v12, v26, &v23, &v22, &v21, &v25);
LABEL_19:
      if ( DxSharedSurface >= 0 )
      {
        *(_QWORD *)&v29 = __PAIR64__(v21, v22);
        *((_QWORD *)&v29 + 1) = v25;
        *(_QWORD *)&v30 = v23;
        *((_QWORD *)&v30 + 1) = v26[0];
        goto LABEL_21;
      }
    }
LABEL_25:
    v14 = DxSharedSurface;
    goto LABEL_10;
  }
  v19 = a2 - 1;
  if ( v19 )
  {
    if ( v19 != 1 )
      goto LABEL_21;
    HwndUpdateIds = GreGetDxSharedSurface(*(Gre::Base **)v12, v26, &v23, &v22, &v21, &v25);
    DxSharedSurface = HwndUpdateIds;
    if ( HwndUpdateIds == -1073741822 )
    {
      DxSharedSurface = 0;
LABEL_47:
      LODWORD(v29) = v21;
      goto LABEL_21;
    }
    if ( HwndUpdateIds >= 0 )
      goto LABEL_47;
LABEL_49:
    v14 = HwndUpdateIds;
    goto LABEL_10;
  }
  HwndUpdateIds = GreGetHwndUpdateIds(*(HWND *)v12);
  DxSharedSurface = HwndUpdateIds;
  if ( HwndUpdateIds < 0 )
    goto LABEL_49;
LABEL_21:
  if ( DxSharedSurface >= 0 )
  {
    v9 = 1;
    RtlCopyToUser(v18, &v29, v17);
    RtlWriteULongToUser(a4, v17);
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v11);
  return v9;
}
