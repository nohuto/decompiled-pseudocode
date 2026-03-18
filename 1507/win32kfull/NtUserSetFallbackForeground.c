/*
 * XREFs of NtUserSetFallbackForeground @ 0x1C0220000
 * Callers:
 *     <none>
 * Callees:
 *     GetMessageWindow @ 0x1C005CD50 (GetMessageWindow.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0082890 (IAMThreadAccessGranted.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _SetFallbackForeground @ 0x1C01D1344 (_SetFallbackForeground.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetFallbackForeground(__int64 a1, int a2)
{
  unsigned int v4; // ebx
  int v5; // ecx
  __int64 v6; // rax
  __int64 MessageWindow; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  char v13; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(1LL);
  v4 = 0;
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
  if ( IAMThreadAccessGranted(gptiCurrent) )
  {
    if ( a1 )
    {
      v6 = ValidateHwnd(a1);
      if ( !v6 )
        goto LABEL_8;
      if ( (*(_WORD *)(v6 + 66) & 0x3FFF) == 0x29D )
        goto LABEL_8;
      MessageWindow = GetMessageWindow(v6);
      if ( *(_QWORD *)(v9 + 88) == MessageWindow )
        goto LABEL_8;
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 )
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
    v4 = SetFallbackForeground(v8, a2);
    goto LABEL_15;
  }
  v5 = 5;
LABEL_3:
  UserSetLastError(v5);
LABEL_15:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v13);
  UserSessionSwitchLeaveCrit(v11, v10);
  return v4;
}
