/*
 * XREFs of NtUserFindExistingCursorIcon @ 0x1C005E210
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C0005C30 (UserSetLastStatus.c)
 *     _FindExistingCursorIcon @ 0x1C005E520 (_FindExistingCursorIcon.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserFindExistingCursorIcon(int *a1, int *a2, __int128 *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ecx
  _WORD *v11; // rdx
  unsigned __int64 v12; // r8
  int **v13; // rax
  int *v14; // rax
  int v15; // r8d
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r10
  __int64 v18; // r9
  __int64 v19; // r8
  _WORD *v20; // rax
  NTSTATUS v21; // r10d
  __int64 v22; // rcx
  unsigned __int16 Atom; // ax
  __int64 *ExistingCursorIcon; // rax
  int v26; // [rsp+20h] [rbp-2E8h]
  int v27; // [rsp+20h] [rbp-2E8h]
  __int64 v28; // [rsp+48h] [rbp-2C0h]
  int v29; // [rsp+90h] [rbp-278h] BYREF
  unsigned __int64 v30; // [rsp+98h] [rbp-270h]
  int v31; // [rsp+A8h] [rbp-260h]
  _WORD *v32; // [rsp+B0h] [rbp-258h]
  __int128 v33; // [rsp+B8h] [rbp-250h] BYREF
  __int64 v34; // [rsp+C8h] [rbp-240h]
  _BYTE v35[512]; // [rsp+E0h] [rbp-228h] BYREF

  v6 = 0LL;
  EnterSharedCrit(1LL);
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    a3 = (__int128 *)W32UserProbeAddress;
  v33 = *a3;
  v34 = *((_QWORD *)a3 + 2);
  if ( (_QWORD)v33 )
  {
    LOBYTE(v7) = 3;
    v28 = HMValidateHandle(v33, v7);
    if ( !v28 )
      goto LABEL_38;
  }
  else
  {
    v28 = 0LL;
  }
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    a1 = (int *)W32UserProbeAddress;
  v10 = *a1;
  v26 = *a1;
  v31 = *a1;
  v11 = (_WORD *)*((_QWORD *)a1 + 1);
  v32 = v11;
  if ( ((unsigned __int8)v11 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v12 = (unsigned __int64)v11 + (unsigned __int16)v10 + 2;
  v13 = (int **)W32UserProbeAddress;
  if ( v12 >= W32UserProbeAddress
    || (unsigned __int16)v10 > HIWORD(v26)
    || (v10 & 1) != 0
    || v12 <= (unsigned __int64)v11 )
  {
    *W32UserProbeAddress = 0;
    v13 = (int **)W32UserProbeAddress;
  }
  v14 = *v13;
  if ( a2 >= v14 )
    a2 = v14;
  v15 = *a2;
  v27 = *a2;
  v29 = *a2;
  v16 = *((_QWORD *)a2 + 1);
  v30 = v16;
  if ( (v16 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (v16 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = v16 + (unsigned __int16)v15 + 2LL;
    if ( v17 >= W32UserProbeAddress || (unsigned __int16)v15 > HIWORD(v27) || (v15 & 1) != 0 || v17 <= v16 )
      *W32UserProbeAddress = 0;
  }
  v18 = 2147483646LL;
  v19 = 256LL;
  v20 = v35;
  v21 = 0;
  v22 = 0LL;
  while ( v19 )
  {
    if ( !v18 || !*v11 )
      goto LABEL_33;
    *v20++ = *v11++;
    --v19;
    --v18;
    ++v22;
  }
  --v20;
  v21 = -2147483643;
LABEL_33:
  *v20 = 0;
  if ( v21 < 0 )
  {
    UserSetLastStatus(v21, 1);
  }
  else
  {
    Atom = UserFindAtom(v35);
    if ( Atom )
    {
      ExistingCursorIcon = (__int64 *)FindExistingCursorIcon(Atom, &v29, v28, &v33, v27, 0LL);
      if ( ExistingCursorIcon )
        v6 = *ExistingCursorIcon;
    }
  }
LABEL_38:
  UserSessionSwitchLeaveCrit(v9, v8);
  return v6;
}
