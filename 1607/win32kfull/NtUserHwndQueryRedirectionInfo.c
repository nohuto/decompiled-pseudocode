/*
 * XREFs of NtUserHwndQueryRedirectionInfo @ 0x1C0215C30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C000C524 (UserSetLastStatus.c)
 *     GetStyleWindow @ 0x1C007A490 (GetStyleWindow.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     IsWindowGhosted @ 0x1C00A738C (IsWindowGhosted.c)
 *     GreGetDxSharedSurface @ 0x1C00D6ACC (GreGetDxSharedSurface.c)
 *     RecreateRedirectionBitmap @ 0x1C00D7E4C (RecreateRedirectionBitmap.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     GreGetDxRgn @ 0x1C025E870 (GreGetDxRgn.c)
 *     GreGetHwndUpdateIds @ 0x1C025EAD8 (GreGetHwndUpdateIds.c)
 */

__int64 __fastcall NtUserHwndQueryRedirectionInfo(__int64 a1, int a2, _OWORD *a3, unsigned int *a4)
{
  int DxSharedSurface; // esi
  int DxRgn; // edi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  NTSTATUS v13; // ecx
  __int64 StyleWindow; // rax
  __int64 v15; // r15
  unsigned int *v16; // rax
  unsigned int v17; // ebx
  __int64 CurrentProcess; // rax
  unsigned int v19; // r14d
  _OWORD *v20; // rax
  _OWORD *v21; // rax
  int v22; // r12d
  int v23; // r12d
  HDC DCEx; // rbx
  int HwndUpdateIds; // eax
  unsigned int *v26; // rax
  __int64 v28; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v29; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v32[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+68h] [rbp-A0h]
  __int64 v34; // [rsp+70h] [rbp-98h]
  unsigned int *v35; // [rsp+78h] [rbp-90h]
  _OWORD Src[2]; // [rsp+A0h] [rbp-68h] BYREF

  v35 = a4;
  DxSharedSurface = -1073741811;
  memset(Src, 0, sizeof(Src));
  v31 = 0LL;
  v32[0] = 0LL;
  v30 = 0LL;
  v29 = 0;
  v28 = 0LL;
  DxRgn = 0;
  EnterSharedCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  v33 = v10;
  if ( !v10 )
    goto LABEL_66;
  if ( a2 >= 5 )
  {
LABEL_3:
    v13 = -1073741821;
LABEL_65:
    UserSetLastStatus(v13, 1);
    goto LABEL_66;
  }
  StyleWindow = GetStyleWindow(v10, 2568);
  v15 = StyleWindow;
  if ( !StyleWindow || (*(_WORD *)(StyleWindow + 66) & 0x3FFF) == 0x29D )
  {
LABEL_64:
    v13 = DxSharedSurface;
    goto LABEL_65;
  }
  v16 = a4;
  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    v16 = (unsigned int *)W32UserProbeAddress;
  v17 = *v16;
  HIDWORD(v28) = *v16;
  if ( a2 )
  {
    v12 = (unsigned int)(a2 - 1);
    if ( a2 == 1 )
    {
      if ( !a3 )
        goto LABEL_16;
      v19 = 16;
    }
    else
    {
      v12 = (unsigned int)(a2 - 2);
      if ( a2 != 2 )
      {
        if ( a2 != 3 )
        {
          DxRgn = 0;
          goto LABEL_3;
        }
        CurrentProcess = PsGetCurrentProcess(v12);
        if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
        {
          DxRgn = 0;
          v13 = -1073741790;
          goto LABEL_65;
        }
        if ( !a3 )
          goto LABEL_16;
        v19 = 16;
        if ( v17 < 0x10 )
        {
LABEL_18:
          DxRgn = 0;
          v13 = -1073741306;
          goto LABEL_65;
        }
        HIDWORD(v28) = 16;
        v12 = W32UserProbeAddress;
        v20 = a3;
        if ( (unsigned __int64)a3 >= W32UserProbeAddress )
          v20 = (_OWORD *)W32UserProbeAddress;
        Src[0] = *v20;
        goto LABEL_34;
      }
      if ( !a3 )
        goto LABEL_16;
      v19 = 4;
    }
    if ( v17 < v19 )
      goto LABEL_18;
    HIDWORD(v28) = v19;
    goto LABEL_34;
  }
  if ( !a3 )
    goto LABEL_16;
  if ( v17 < 0x20 )
    goto LABEL_18;
  v19 = 32;
  HIDWORD(v28) = 32;
  v12 = W32UserProbeAddress;
  v21 = a3;
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    v21 = (_OWORD *)W32UserProbeAddress;
  Src[0] = *v21;
  Src[1] = v21[1];
  LODWORD(v28) = DWORD1(Src[0]);
  if ( (DWORD1(Src[0]) & 0xFFFFFFFB) != 0 )
    goto LABEL_16;
LABEL_34:
  if ( !a2 )
  {
    v30 = *(_QWORD *)&Src[1];
    DxSharedSurface = GreGetDxSharedSurface(*(HWND *)v15, v32, &v30, &v29, &v28, &v31);
    if ( DxSharedSurface == -1071775484 )
    {
      GreLockVisRgn(*gpDispInfo);
      DxSharedSurface = RecreateRedirectionBitmap((struct tagWND *)v15, 0, 0, 0, 1, 0LL);
      GreUnlockVisRgn(*gpDispInfo);
      if ( DxSharedSurface < 0 )
        goto LABEL_16;
      DxSharedSurface = GreGetDxSharedSurface(*(HWND *)v15, v32, &v30, &v29, &v28, &v31);
    }
    if ( DxSharedSurface >= 0 )
    {
      *(_QWORD *)&Src[0] = __PAIR64__(v28, v29);
      *((_QWORD *)&Src[0] + 1) = v31;
      *(_QWORD *)&Src[1] = v30;
      *((_QWORD *)&Src[1] + 1) = v32[0];
      goto LABEL_58;
    }
LABEL_16:
    DxRgn = 0;
    goto LABEL_64;
  }
  v22 = a2 - 1;
  if ( !v22 )
  {
    HwndUpdateIds = GreGetHwndUpdateIds(*(HWND *)v15);
    DxSharedSurface = HwndUpdateIds;
    if ( HwndUpdateIds >= 0 )
      goto LABEL_58;
    goto LABEL_49;
  }
  v23 = v22 - 1;
  if ( !v23 )
  {
    HwndUpdateIds = GreGetDxSharedSurface(*(HWND *)v15, v32, &v30, &v29, &v28, &v31);
    DxSharedSurface = HwndUpdateIds;
    if ( HwndUpdateIds == -1073741822 )
    {
      DxSharedSurface = 0;
LABEL_50:
      LODWORD(Src[0]) = v28;
      goto LABEL_58;
    }
    if ( HwndUpdateIds >= 0 )
      goto LABEL_50;
LABEL_49:
    DxRgn = 0;
    v13 = HwndUpdateIds;
    goto LABEL_65;
  }
  if ( v23 != 1 )
    goto LABEL_58;
  if ( (*(_BYTE *)(v15 + 55) & 0x20) == 0 && !(unsigned int)IsWindowGhosted(v15) )
  {
    DCEx = (HDC)_GetDCEx(v33, 0LL, 66560LL);
    DxRgn = GreGetDxRgn(*(HWND *)v15, DCEx);
    _ReleaseDC(DCEx);
    if ( DxRgn )
    {
      if ( v34 && v33 != v15 )
        DxRgn = GreOffsetRgn(
                  v34,
                  (unsigned int)(*(_DWORD *)(v15 + 112) - *(_DWORD *)(v33 + 112)),
                  (unsigned int)(*(_DWORD *)(v15 + 116) - *(_DWORD *)(v33 + 116)));
      if ( DxRgn )
      {
        *((_QWORD *)&Src[0] + 1) = v34;
        DxSharedSurface = 0;
      }
    }
LABEL_58:
    if ( DxSharedSurface < 0 )
      goto LABEL_66;
  }
  DxRgn = 1;
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    a3 = (_OWORD *)W32UserProbeAddress;
  memmove(a3, Src, v19);
  v12 = W32UserProbeAddress;
  v26 = v35;
  if ( (unsigned __int64)v35 >= W32UserProbeAddress )
    v26 = (unsigned int *)W32UserProbeAddress;
  *v26 = v19;
LABEL_66:
  UserSessionSwitchLeaveCrit(v12, v11);
  return DxRgn;
}
