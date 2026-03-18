/*
 * XREFs of UserGetDesktopDC @ 0x1C0044A2C
 * Callers:
 *     GreCreateCompatibleDC @ 0x1C00165F0 (GreCreateCompatibleDC.c)
 *     NtGdiCreateCompatibleDC @ 0x1C0042910 (NtGdiCreateCompatibleDC.c)
 *     NtGdiOpenDCW @ 0x1C0053200 (NtGdiOpenDCW.c)
 *     NtGdiCreateMetafileDC @ 0x1C0069580 (NtGdiCreateMetafileDC.c)
 * Callees:
 *     ValidateHwndEx @ 0x1C0033450 (ValidateHwndEx.c)
 *     _GetDCEx @ 0x1C0036B60 (_GetDCEx.c)
 *     GreCreateDisplayDC @ 0x1C00422D0 (GreCreateDisplayDC.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0044C44 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 __fastcall UserGetDesktopDC(unsigned int a1, unsigned int a2, int a3)
{
  __int64 v6; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  __int64 DisplayDC; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  _QWORD *v16; // rcx
  int v17; // [rsp+40h] [rbp+18h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v17);
  v6 = *(_QWORD *)gpDispInfo;
  if ( a3
    && a1 != 2
    && (*((_DWORD *)gptiCurrent + 112) & 0x20000000) != 0
    && *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 48) + 728LL) + 24LL) & 1 )
  {
    v16 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 8LL) + 16LL);
    if ( v16 )
      v16 = (_QWORD *)*v16;
    if ( !ValidateHwndEx(v16, 1LL, 0) )
      goto LABEL_17;
  }
  CurrentThread = KeGetCurrentThread();
  if ( a1 || PsIsSystemThread(CurrentThread) || PsGetThreadProcess(CurrentThread) == gpepCSRSS )
  {
    DisplayDC = (__int64)GreCreateDisplayDC(v6, a1, a2);
LABEL_4:
    v13 = DisplayDC;
    goto LABEL_5;
  }
  v10 = *((_QWORD *)gptiCurrent + 52);
  if ( v10 )
  {
    DisplayDC = GetDCEx(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 16LL), 0LL, 2155872259LL);
    goto LABEL_4;
  }
LABEL_17:
  v13 = 0LL;
LABEL_5:
  if ( !v17 )
    UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v13;
}
