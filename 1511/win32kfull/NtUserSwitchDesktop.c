/*
 * XREFs of NtUserSwitchDesktop @ 0x1C00E3790
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0064370 (PopAndFreeW32ThreadLock.c)
 *     xxxSwitchDesktop @ 0x1C0093754 (xxxSwitchDesktop.c)
 *     xxxSwitchDesktopWithFade @ 0x1C00E3890 (xxxSwitchDesktopWithFade.c)
 */

__int64 __fastcall NtUserSwitchDesktop(__int64 a1, int a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID v11; // rcx
  int v12; // r8d
  __int64 v13; // rcx
  int v14; // eax
  _QWORD v16[5]; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = 0;
  v7 = gptiCurrent;
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x20000000) != 0 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 728LL);
    v8 = *(_DWORD *)(v7 + 24) & 0x40;
  }
  else
  {
    v8 = 0;
  }
  if ( v8 )
    goto LABEL_15;
  LOBYTE(v7) = 1;
  if ( (int)ValidateHdesk(a1, v7, 256LL, &Object) < 0 )
    goto LABEL_11;
  if ( (*(_DWORD *)(*((_QWORD *)Object + 3) + 32LL) & 4) != 0 )
  {
    ObfDereferenceObject(Object);
LABEL_15:
    UserSetLastError(5);
    goto LABEL_11;
  }
  PushW32ThreadLock((__int64)Object, v16, UserDereferenceObject);
  v11 = Object;
  if ( Object )
  {
    ObfReferenceObject(Object);
    v11 = Object;
  }
  ObfDereferenceObject(v11);
  v13 = *((_QWORD *)Object + 3);
  if ( a2 )
    v14 = xxxSwitchDesktopWithFade(v13, (_DWORD)Object, v12, a2, a3);
  else
    v14 = xxxSwitchDesktop(v13, (__int64)Object, 0);
  LOBYTE(v6) = v14 >= 0;
  PopAndFreeW32ThreadLock((__int64)v16);
LABEL_11:
  UserSessionSwitchLeaveCrit(v10, v9);
  return v6;
}
