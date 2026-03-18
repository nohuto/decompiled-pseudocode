/*
 * XREFs of NtUserRegisterPointerInputTarget @ 0x1C0218A40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _RegisterPointerInputTarget @ 0x1C01F3278 (_RegisterPointerInputTarget.c)
 */

__int64 __fastcall NtUserRegisterPointerInputTarget(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v9 = 0;
  if ( v6 )
  {
    if ( gbEnforceUIPI && *(int *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) >= 0 )
    {
      UserSetLastError(5LL);
      EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 376LL), 0LL, 12LL);
    }
    else
    {
      if ( gptiCurrent == *(_QWORD *)(v6 + 16) )
      {
        if ( (!a3 || *(char *)(v6 + 44) >= 0 && *(char *)(v6 + 43) >= 0) && (unsigned int)(a2 - 2) <= 1 )
        {
          v9 = RegisterPointerInputTarget(v6, a2, a3);
          goto LABEL_14;
        }
        v10 = 87LL;
      }
      else
      {
        v10 = 5LL;
      }
      UserSetLastError(v10);
    }
  }
LABEL_14:
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
