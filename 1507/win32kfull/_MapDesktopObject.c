/*
 * XREFs of _MapDesktopObject @ 0x1C007EC20
 * Callers:
 *     <none>
 * Callees:
 *     GetDesktopView @ 0x1C007F0F0 (GetDesktopView.c)
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 */

// write access to const memory has been detected, the output may be wrong!
char *__fastcall MapDesktopObject(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 DesktopView; // rax

  LOBYTE(a2) = -1;
  gbValidateHandleForIL = 0;
  v2 = (_DWORD *)HMValidateHandle(a1, a2);
  v3 = v2;
  if ( v2
    && (v4 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*v2,
        LOBYTE(v4) = *(_BYTE *)(v4 + gSharedInfo[1] + 17),
        (v4 & 0x40) == 0)
    && (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4),
        (DesktopView = GetDesktopView(CurrentProcessWin32Process, *((_QWORD *)v3 + 3))) != 0) )
  {
    return (char *)v3 - *(_QWORD *)(DesktopView + 16);
  }
  else
  {
    return 0LL;
  }
}
