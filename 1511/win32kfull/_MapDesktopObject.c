/*
 * XREFs of _MapDesktopObject @ 0x1C00CF460
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     GetDesktopView @ 0x1C00CF930 (GetDesktopView.c)
 */

// write access to const memory has been detected, the output may be wrong!
char *__fastcall MapDesktopObject(__int64 a1)
{
  _DWORD *v1; // rax
  _DWORD *v2; // rbx
  __int64 v3; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 DesktopView; // rax

  gbValidateHandleForIL = 0;
  v1 = (_DWORD *)HMValidateHandle(a1, 255);
  v2 = v1;
  if ( v1
    && (v3 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*v1,
        LOBYTE(v3) = *(_BYTE *)(v3 + gSharedInfo[1] + 17),
        (v3 & 0x40) == 0)
    && (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3),
        (DesktopView = GetDesktopView(CurrentProcessWin32Process)) != 0) )
  {
    return (char *)v2 - *(_QWORD *)(DesktopView + 16);
  }
  else
  {
    return 0LL;
  }
}
