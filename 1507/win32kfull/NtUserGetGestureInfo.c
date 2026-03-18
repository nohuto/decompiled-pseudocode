/*
 * XREFs of NtUserGetGestureInfo @ 0x1C021A880
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 *     _FreeGestureInfo @ 0x1C0204130 (_FreeGestureInfo.c)
 */

__int64 __fastcall NtUserGetGestureInfo(__int64 a1, unsigned __int64 a2)
{
  unsigned int v4; // ebx
  int v5; // ecx
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  _DWORD *v8; // rax
  __int64 v9; // rax

  v4 = 1;
  EnterCrit(1LL);
  if ( !a2 )
  {
    v5 = 87;
LABEL_3:
    v4 = 0;
    UserSetLastError(v5);
    goto LABEL_17;
  }
  v8 = (_DWORD *)a2;
  if ( a2 >= W32UserProbeAddress )
    v8 = (_DWORD *)W32UserProbeAddress;
  if ( *v8 != 56 )
  {
    v4 = 0;
    UserSetLastError(87);
    goto LABEL_17;
  }
  v9 = HMValidateHandle(a1, 21);
  v6 = v9;
  if ( !v9 )
  {
    v4 = 0;
    goto LABEL_17;
  }
  if ( *(_QWORD *)(v9 + 16) != gptiCurrent )
  {
    v5 = 5;
    goto LABEL_3;
  }
  if ( a2 >= W32UserProbeAddress )
    a2 = W32UserProbeAddress;
  *(_OWORD *)a2 = *(_OWORD *)(v9 + 32);
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(v9 + 48);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(v9 + 64);
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(v9 + 80);
  v7 = *(_QWORD *)(gptiCurrent + 960LL);
  if ( v7 == a1 && !*(_DWORD *)(v9 + 80) )
  {
    FreeGestureInfo(v7);
    *(_QWORD *)(gptiCurrent + 960LL) = 0LL;
  }
LABEL_17:
  UserSessionSwitchLeaveCrit(v7, v6);
  return v4;
}
