/*
 * XREFs of NtUserSetFallbackForeground @ 0x1C021FE20
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C0056918 (_IsTopLevelWindow.c)
 *     IAMThreadAccessGranted @ 0x1C00789B0 (IAMThreadAccessGranted.c)
 *     _SetFallbackForeground @ 0x1C01D2FBC (_SetFallbackForeground.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetFallbackForeground(__int64 a1, int a2)
{
  unsigned int v4; // ebx
  int v5; // ecx
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
        v5 = 87;
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
  v5 = 5;
LABEL_3:
  UserSetLastError(v5);
LABEL_15:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
  UserSessionSwitchLeaveCrit(v9, v8);
  return v4;
}
