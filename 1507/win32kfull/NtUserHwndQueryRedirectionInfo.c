/*
 * XREFs of NtUserHwndQueryRedirectionInfo @ 0x1C0005B40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C0005C30 (UserSetLastStatus.c)
 *     GreGetDxSharedSurface @ 0x1C000A8D8 (GreGetDxSharedSurface.c)
 *     RecreateRedirectionBitmap @ 0x1C000B580 (RecreateRedirectionBitmap.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     GetStyleWindow @ 0x1C0066940 (GetStyleWindow.c)
 *     IsWindowGhosted @ 0x1C0088AC8 (IsWindowGhosted.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     GreGetDxRgn @ 0x1C0262720 (GreGetDxRgn.c)
 *     GreGetHwndUpdateIds @ 0x1C0262988 (GreGetHwndUpdateIds.c)
 */

__int64 __fastcall NtUserHwndQueryRedirectionInfo(__int64 a1, int a2, _OWORD *a3, unsigned int *a4)
{
  int DxSharedSurface; // esi
  unsigned int DxRgn; // edi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 StyleWindow; // rax
  __int64 v14; // r12
  NTSTATUS v15; // ecx
  unsigned int *v17; // rax
  unsigned int v18; // ebx
  __int64 CurrentProcess; // rax
  unsigned int v20; // r14d
  _OWORD *v21; // rax
  _OWORD *v22; // rax
  int v23; // r15d
  int v24; // r15d
  HDC DCEx; // rbx
  int HwndUpdateIds; // eax
  unsigned int *v27; // rax
  __int64 v28; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v29; // [rsp+38h] [rbp-D0h]
  __int128 v30; // [rsp+40h] [rbp-C8h]
  __int64 v31[2]; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int *v32; // [rsp+60h] [rbp-A8h]
  __int64 v33; // [rsp+68h] [rbp-A0h]
  __int64 v34; // [rsp+70h] [rbp-98h]
  _OWORD Src[2]; // [rsp+A0h] [rbp-68h] BYREF

  v32 = a4;
  DxSharedSurface = -1073741811;
  memset(Src, 0, sizeof(Src));
  v31[0] = 0LL;
  v30 = 0uLL;
  v29 = 0;
  v28 = 0LL;
  DxRgn = 0;
  EnterSharedCrit(1LL);
  v10 = ValidateHwnd(a1);
  v34 = v10;
  if ( !v10 )
    goto LABEL_6;
  if ( a2 >= 5 )
    goto LABEL_8;
  StyleWindow = GetStyleWindow(v10, 2568LL);
  v14 = StyleWindow;
  if ( !StyleWindow || (*(_WORD *)(StyleWindow + 66) & 0x3FFF) == 0x29D )
    goto LABEL_4;
  v17 = a4;
  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    v17 = (unsigned int *)W32UserProbeAddress;
  v18 = *v17;
  HIDWORD(v28) = *v17;
  if ( a2 )
  {
    v12 = (unsigned int)(a2 - 1);
    if ( a2 == 1 )
    {
      if ( !a3 )
        goto LABEL_23;
      v20 = 16;
    }
    else
    {
      v12 = (unsigned int)(a2 - 2);
      if ( a2 != 2 )
      {
        if ( a2 == 3 )
        {
          CurrentProcess = PsGetCurrentProcess();
          if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
          {
            DxRgn = 0;
            v15 = -1073741790;
            goto LABEL_5;
          }
          if ( !a3 )
            goto LABEL_23;
          v20 = 16;
          if ( v18 >= 0x10 )
          {
            HIDWORD(v28) = 16;
            v12 = W32UserProbeAddress;
            v21 = a3;
            if ( (unsigned __int64)a3 >= W32UserProbeAddress )
              v21 = (_OWORD *)W32UserProbeAddress;
            Src[0] = *v21;
            goto LABEL_36;
          }
LABEL_24:
          DxRgn = 0;
          v15 = -1073741306;
          goto LABEL_5;
        }
        DxRgn = 0;
LABEL_8:
        v15 = -1073741821;
        goto LABEL_5;
      }
      if ( !a3 )
        goto LABEL_23;
      v20 = 4;
    }
    if ( v18 >= v20 )
    {
      HIDWORD(v28) = v20;
      goto LABEL_36;
    }
    goto LABEL_24;
  }
  if ( !a3 )
    goto LABEL_23;
  if ( v18 < 0x20 )
    goto LABEL_24;
  v20 = 32;
  HIDWORD(v28) = 32;
  v12 = W32UserProbeAddress;
  v22 = a3;
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    v22 = (_OWORD *)W32UserProbeAddress;
  Src[0] = *v22;
  Src[1] = v22[1];
  LODWORD(v28) = DWORD1(Src[0]);
  if ( (DWORD1(Src[0]) & 0xFFFFFFFB) != 0 )
    goto LABEL_23;
LABEL_36:
  if ( !a2 )
  {
    *(_QWORD *)&v30 = *(_QWORD *)&Src[1];
    DxSharedSurface = GreGetDxSharedSurface(*(HWND *)v14, (__int64)&v28, (__int64)v31);
    if ( DxSharedSurface != -1071775484 )
      goto LABEL_58;
    GreLockVisRgn(*gpDispInfo);
    DxSharedSurface = RecreateRedirectionBitmap((struct tagWND *)v14, 1, 0LL);
    GreUnlockVisRgn(*gpDispInfo);
    if ( DxSharedSurface >= 0 )
    {
      DxSharedSurface = GreGetDxSharedSurface(*(HWND *)v14, (__int64)&v28, (__int64)v31);
LABEL_58:
      if ( DxSharedSurface >= 0 )
      {
        *(_QWORD *)&Src[0] = __PAIR64__(v28, v29);
        *((_QWORD *)&Src[0] + 1) = v31[0];
        Src[1] = v30;
        goto LABEL_60;
      }
    }
LABEL_23:
    DxRgn = 0;
LABEL_4:
    v15 = DxSharedSurface;
LABEL_5:
    UserSetLastStatus(v15);
    goto LABEL_6;
  }
  v23 = a2 - 1;
  if ( !v23 )
  {
    HwndUpdateIds = GreGetHwndUpdateIds(*(HWND *)v14);
    DxSharedSurface = HwndUpdateIds;
    if ( HwndUpdateIds >= 0 )
      goto LABEL_60;
    goto LABEL_51;
  }
  v24 = v23 - 1;
  if ( !v24 )
  {
    HwndUpdateIds = GreGetDxSharedSurface(*(HWND *)v14, (__int64)&v28, (__int64)v31);
    DxSharedSurface = HwndUpdateIds;
    if ( HwndUpdateIds == -1073741822 )
    {
      DxSharedSurface = 0;
LABEL_52:
      LODWORD(Src[0]) = v28;
      goto LABEL_60;
    }
    if ( HwndUpdateIds >= 0 )
      goto LABEL_52;
LABEL_51:
    DxRgn = 0;
    v15 = HwndUpdateIds;
    goto LABEL_5;
  }
  if ( v24 != 1 )
    goto LABEL_60;
  if ( (*(_BYTE *)(v14 + 55) & 0x20) == 0 && !(unsigned int)IsWindowGhosted(v14) )
  {
    DCEx = (HDC)_GetDCEx(v34, 0LL, 66560LL);
    DxRgn = GreGetDxRgn(*(HWND *)v14, DCEx);
    _ReleaseDC(DCEx);
    if ( DxRgn )
    {
      if ( v33 && v34 != v14 )
        DxRgn = GreOffsetRgn(
                  v33,
                  (unsigned int)(*(_DWORD *)(v14 + 112) - *(_DWORD *)(v34 + 112)),
                  (unsigned int)(*(_DWORD *)(v14 + 116) - *(_DWORD *)(v34 + 116)));
      if ( DxRgn )
      {
        *((_QWORD *)&Src[0] + 1) = v33;
        DxSharedSurface = 0;
      }
    }
LABEL_60:
    if ( DxSharedSurface < 0 )
      goto LABEL_6;
  }
  DxRgn = 1;
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    a3 = (_OWORD *)W32UserProbeAddress;
  memmove(a3, Src, v20);
  v12 = W32UserProbeAddress;
  v27 = v32;
  if ( (unsigned __int64)v32 >= W32UserProbeAddress )
    v27 = (unsigned int *)W32UserProbeAddress;
  *v27 = v20;
LABEL_6:
  UserSessionSwitchLeaveCrit(v12, v11);
  return DxRgn;
}
