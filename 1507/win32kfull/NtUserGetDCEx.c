/*
 * XREFs of NtUserGetDCEx @ 0x1C00ED740
 * Callers:
 *     DxgkEngGetDCEx @ 0x1C0264C40 (DxgkEngGetDCEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDCEx(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rsi
  __int64 DCEx; // rdi
  int v10; // ecx
  __int64 v11; // rcx
  int v12; // ecx

  EnterSharedCrit(1LL);
  if ( a2 && !(unsigned int)GreIsValidRegion(a2) || a2 == ghrgnGDC || (a3 & 0xFFDAF800) != 0 )
  {
    v12 = 87;
    goto LABEL_22;
  }
  if ( !a1 )
  {
    v8 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL) + 16LL);
    if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448) & 0x20000000) != 0 )
      v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 384) + 728LL)
                      + 24LL) & 1;
    else
      v10 = 0;
    if ( !v10 )
      goto LABEL_17;
    v11 = v8 ? *v8 : 0LL;
    if ( ValidateHwnd(v11) )
      goto LABEL_17;
    v12 = 5;
LABEL_22:
    DCEx = 0LL;
    UserSetLastError(v12);
    goto LABEL_23;
  }
  v8 = (_QWORD *)ValidateHwnd(a1);
  if ( !v8 )
  {
    DCEx = 0LL;
    goto LABEL_23;
  }
LABEL_17:
  DCEx = 0LL;
  if ( !a2 || (unsigned int)GreLockRegion(a2) )
  {
    DCEx = _GetDCEx(v8, a2, a3);
    if ( a2 )
      GreUnlockRegion(a2);
  }
LABEL_23:
  UserSessionSwitchLeaveCrit(v7, v6);
  return DCEx;
}
