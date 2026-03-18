/*
 * XREFs of UserGetDesktopDC @ 0x1C0022378
 * Callers:
 *     NtGdiCreateCompatibleDC @ 0x1C0025AB0 (NtGdiCreateCompatibleDC.c)
 *     NtGdiOpenDCW @ 0x1C00424A0 (NtGdiOpenDCW.c)
 *     GreCreateCompatibleDC @ 0x1C006C030 (GreCreateCompatibleDC.c)
 *     NtGdiCreateMetafileDC @ 0x1C0083E30 (NtGdiCreateMetafileDC.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0022594 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     GreCreateDisplayDC @ 0x1C0025FD0 (GreCreateDisplayDC.c)
 *     _GetDCEx @ 0x1C002EFC0 (_GetDCEx.c)
 *     ValidateHwndEx @ 0x1C0043480 (ValidateHwndEx.c)
 */

__int64 __fastcall UserGetDesktopDC(unsigned int a1, unsigned int a2, int a3)
{
  __int64 v6; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  __int64 DisplayDC; // rax
  __int64 v9; // rbx
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  int v14; // [rsp+40h] [rbp+18h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v14);
  v6 = *(_QWORD *)gpDispInfo;
  if ( a3
    && a1 != 2
    && (*((_DWORD *)gptiCurrent + 110) & 0x20000000) != 0
    && *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 47) + 728LL) + 24LL) & 1 )
  {
    v13 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 51) + 8LL) + 16LL);
    if ( v13 )
      v13 = (_QWORD *)*v13;
    if ( !ValidateHwndEx(v13) )
      goto LABEL_17;
  }
  CurrentThread = KeGetCurrentThread();
  if ( a1 || PsIsSystemThread(CurrentThread) || PsGetThreadProcess(CurrentThread) == gpepCSRSS )
  {
    DisplayDC = GreCreateDisplayDC(v6, a1, a2);
LABEL_4:
    v9 = DisplayDC;
    goto LABEL_5;
  }
  v12 = *((_QWORD *)gptiCurrent + 51);
  if ( v12 )
  {
    DisplayDC = GetDCEx(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL), 0LL, 2155872259LL);
    goto LABEL_4;
  }
LABEL_17:
  v9 = 0LL;
LABEL_5:
  if ( !v14 )
    UserSessionSwitchLeaveCrit();
  return v9;
}
