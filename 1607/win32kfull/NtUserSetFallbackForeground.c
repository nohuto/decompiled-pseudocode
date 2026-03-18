/*
 * XREFs of NtUserSetFallbackForeground @ 0x1C0219A90
 * Callers:
 *     <none>
 * Callees:
 *     _IsTopLevelWindow @ 0x1C00725F0 (_IsTopLevelWindow.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     IAMThreadAccessGranted @ 0x1C00A6F0C (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _SetFallbackForeground @ 0x1C01CAC2C (_SetFallbackForeground.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetFallbackForeground(__int64 a1, int a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v11; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = 0;
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
  if ( IAMThreadAccessGranted(gptiCurrent) )
  {
    if ( a1 )
    {
      v6 = ValidateHwnd(a1);
      if ( !v6 || (*(_WORD *)(v6 + 66) & 0x3FFF) == 0x29D || !(unsigned int)IsTopLevelWindow(v6) )
        goto LABEL_8;
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      if ( !a2 )
      {
LABEL_8:
        v5 = 87LL;
        goto LABEL_3;
      }
    }
    else if ( a2 )
    {
      goto LABEL_8;
    }
    v4 = SetFallbackForeground(v7, a2);
    goto LABEL_15;
  }
  v5 = 5LL;
LABEL_3:
  UserSetLastError(v5);
LABEL_15:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
  UserSessionSwitchLeaveCrit(v9, v8);
  return v4;
}
