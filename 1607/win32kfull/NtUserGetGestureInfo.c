/*
 * XREFs of NtUserGetGestureInfo @ 0x1C02133D0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _FreeGestureInfo @ 0x1C01FB7F0 (_FreeGestureInfo.c)
 */

__int64 __fastcall NtUserGetGestureInfo(__int64 a1, unsigned __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  _DWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9

  v4 = 1;
  EnterCrit(0LL, 1LL);
  if ( !a2 )
  {
    v8 = 87LL;
LABEL_3:
    v4 = 0;
    UserSetLastError(v8);
    goto LABEL_17;
  }
  v11 = (_DWORD *)a2;
  if ( a2 >= W32UserProbeAddress )
    v11 = (_DWORD *)W32UserProbeAddress;
  if ( *v11 != 56 )
  {
    v4 = 0;
    UserSetLastError(87LL);
    goto LABEL_17;
  }
  LOBYTE(v5) = 21;
  v12 = HMValidateHandle(a1, v5, v6, v7);
  v9 = v12;
  if ( !v12 )
  {
    v4 = 0;
    goto LABEL_17;
  }
  if ( *(_QWORD *)(v12 + 16) != gptiCurrent )
  {
    v8 = 5LL;
    goto LABEL_3;
  }
  if ( a2 >= W32UserProbeAddress )
    a2 = W32UserProbeAddress;
  *(_OWORD *)a2 = *(_OWORD *)(v12 + 32);
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(v12 + 48);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(v12 + 64);
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(v12 + 80);
  v10 = *(_QWORD *)(gptiCurrent + 960LL);
  if ( v10 == a1 && !*(_DWORD *)(v12 + 80) )
  {
    FreeGestureInfo(v10, 1LL, v13, v14);
    *(_QWORD *)(gptiCurrent + 960LL) = 0LL;
  }
LABEL_17:
  UserSessionSwitchLeaveCrit(v10, v9);
  return v4;
}
