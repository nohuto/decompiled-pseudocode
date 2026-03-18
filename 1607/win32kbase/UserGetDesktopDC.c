/*
 * XREFs of UserGetDesktopDC @ 0x1C001CBFC
 * Callers:
 *     GreCreateCompatibleDC @ 0x1C001CB50 (GreCreateCompatibleDC.c)
 *     NtGdiOpenDCW @ 0x1C006E790 (NtGdiOpenDCW.c)
 *     NtGdiCreateMetafileDC @ 0x1C0085650 (NtGdiCreateMetafileDC.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001CD88 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ValidateHwndEx @ 0x1C0020B00 (ValidateHwndEx.c)
 *     _GetDCEx @ 0x1C00212B0 (_GetDCEx.c)
 *     GreCreateDisplayDC @ 0x1C002E9E0 (GreCreateDisplayDC.c)
 */

__int64 __fastcall UserGetDesktopDC(unsigned int a1, unsigned int a2, int a3)
{
  __int64 v6; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  __int64 DisplayDC; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  _QWORD *v13; // rcx
  int v14; // [rsp+40h] [rbp+18h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v14);
  v6 = *(_QWORD *)gpDispInfo;
  if ( a3
    && a1 != 2
    && (*((_DWORD *)gptiCurrent + 110) & 0x20000000) != 0
    && *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 47) + 720LL) + 24LL) & 1 )
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
    v10 = DisplayDC;
    goto LABEL_5;
  }
  v9 = *((_QWORD *)gptiCurrent + 51);
  if ( v9 )
  {
    DisplayDC = GetDCEx(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL), 0LL, 2155872259LL);
    goto LABEL_4;
  }
LABEL_17:
  v10 = 0LL;
LABEL_5:
  if ( !v14 )
    UserSessionSwitchLeaveCrit(v9);
  return v10;
}
