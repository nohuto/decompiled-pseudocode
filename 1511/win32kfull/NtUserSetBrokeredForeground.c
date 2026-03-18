/*
 * XREFs of NtUserSetBrokeredForeground @ 0x1C00D58E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     _IsTopLevelWindow @ 0x1C0056918 (_IsTopLevelWindow.c)
 *     InternalSetProp @ 0x1C0079054 (InternalSetProp.c)
 *     GetMessageWindow @ 0x1C007AA6C (GetMessageWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C007E090 (IsWindowBeingDestroyed.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetBrokeredForeground(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v11; // ecx
  char v12; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = 0;
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
  if ( !a1 )
    goto LABEL_14;
  v3 = ValidateHwnd(a1);
  v4 = v3;
  if ( !v3
    || !(unsigned int)IsTopLevelWindow(v3)
    || *(_QWORD *)(v4 + 104)
    || (unsigned int)IsWindowBeingDestroyed(v4)
    || (*(_BYTE *)(v4 + 55) & 0x10) != 0
    || *(_QWORD *)(v4 + 88) == GetMessageWindow(v5)
    || GetProp(v6, (unsigned __int16)gatomBrokeredForeground, 1LL) )
  {
    goto LABEL_14;
  }
  v7 = *(_DWORD *)(v4 + 304);
  if ( v7 != 14 && v7 != 4 )
  {
    UserSetLastError(5);
LABEL_14:
    v11 = 87;
LABEL_15:
    UserSetLastError(v11);
    goto LABEL_13;
  }
  if ( !(unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 376LL)) || gptiCurrent != *(_QWORD *)(v4 + 16) )
  {
    v11 = 5;
    goto LABEL_15;
  }
  v2 = InternalSetProp(v4, (unsigned __int16)gatomBrokeredForeground, gptiCurrent, 5);
LABEL_13:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
  UserSessionSwitchLeaveCrit(v9, v8);
  return v2;
}
