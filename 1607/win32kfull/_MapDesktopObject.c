/*
 * XREFs of _MapDesktopObject @ 0x1C009A0C0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     GetDesktopView @ 0x1C009A590 (GetDesktopView.c)
 */

// write access to const memory has been detected, the output may be wrong!
char *__fastcall MapDesktopObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rax
  __int64 v5; // rdx
  _DWORD *v6; // rbx
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 DesktopView; // rax

  LOBYTE(a2) = -1;
  gbValidateHandleForIL = 0;
  v4 = (_DWORD *)HMValidateHandle(a1, a2, a3, a4);
  v6 = v4;
  if ( v4
    && (v7 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*v4,
        LOBYTE(v7) = *(_BYTE *)(v7 + gSharedInfo[1] + 17),
        (v7 & 0x40) == 0)
    && (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7, v5),
        (DesktopView = GetDesktopView(CurrentProcessWin32Process)) != 0) )
  {
    return (char *)v6 - *(_QWORD *)(DesktopView + 16);
  }
  else
  {
    return 0LL;
  }
}
