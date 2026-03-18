/*
 * XREFs of NtUserFindExistingCursorIcon @ 0x1C00A07D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C000C524 (UserSetLastStatus.c)
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     _FindExistingCursorIcon @ 0x1C00A0AE0 (_FindExistingCursorIcon.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserFindExistingCursorIcon(int *a1, int *a2, __int128 *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ecx
  _WORD *v13; // rdx
  unsigned __int64 v14; // r8
  int **v15; // rax
  int *v16; // rax
  int v17; // r8d
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r10
  __int64 v20; // r9
  __int64 v21; // r8
  _WORD *v22; // rax
  NTSTATUS v23; // r10d
  __int64 v24; // rcx
  unsigned __int16 Atom; // ax
  __int64 *ExistingCursorIcon; // rax
  int v28; // [rsp+20h] [rbp-2D8h]
  int v29; // [rsp+20h] [rbp-2D8h]
  __int64 v30; // [rsp+58h] [rbp-2A0h]
  int v31; // [rsp+88h] [rbp-270h] BYREF
  unsigned __int64 v32; // [rsp+90h] [rbp-268h]
  int v33; // [rsp+A8h] [rbp-250h]
  _WORD *v34; // [rsp+B0h] [rbp-248h]
  __int128 v35; // [rsp+B8h] [rbp-240h] BYREF
  __int64 v36; // [rsp+C8h] [rbp-230h]
  _BYTE v37[512]; // [rsp+D0h] [rbp-228h] BYREF

  v6 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    a3 = (__int128 *)W32UserProbeAddress;
  v35 = *a3;
  v36 = *((_QWORD *)a3 + 2);
  if ( (_QWORD)v35 )
  {
    LOBYTE(v7) = 3;
    v30 = HMValidateHandle(v35, v7, v8, v9);
    if ( !v30 )
      goto LABEL_38;
  }
  else
  {
    v30 = 0LL;
  }
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    a1 = (int *)W32UserProbeAddress;
  v12 = *a1;
  v28 = *a1;
  v33 = *a1;
  v13 = (_WORD *)*((_QWORD *)a1 + 1);
  v34 = v13;
  if ( ((unsigned __int8)v13 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = (unsigned __int64)v13 + (unsigned __int16)v12 + 2;
  v15 = (int **)W32UserProbeAddress;
  if ( v14 >= W32UserProbeAddress
    || (unsigned __int16)v12 > HIWORD(v28)
    || (v12 & 1) != 0
    || v14 <= (unsigned __int64)v13 )
  {
    *W32UserProbeAddress = 0;
    v15 = (int **)W32UserProbeAddress;
  }
  v16 = *v15;
  if ( a2 >= v16 )
    a2 = v16;
  v17 = *a2;
  v29 = *a2;
  v31 = *a2;
  v18 = *((_QWORD *)a2 + 1);
  v32 = v18;
  if ( (v18 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (v18 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v19 = v18 + (unsigned __int16)v17 + 2LL;
    if ( v19 >= W32UserProbeAddress || (unsigned __int16)v17 > HIWORD(v29) || (v17 & 1) != 0 || v19 <= v18 )
      *W32UserProbeAddress = 0;
  }
  v20 = 2147483646LL;
  v21 = 256LL;
  v22 = v37;
  v23 = 0;
  v24 = 0LL;
  while ( v21 )
  {
    if ( !v20 || !*v13 )
      goto LABEL_33;
    *v22++ = *v13++;
    --v21;
    --v20;
    ++v24;
  }
  --v22;
  v23 = -2147483643;
LABEL_33:
  *v22 = 0;
  if ( v23 < 0 )
  {
    UserSetLastStatus(v23, 1);
  }
  else
  {
    Atom = UserFindAtom(v37);
    if ( Atom )
    {
      ExistingCursorIcon = (__int64 *)FindExistingCursorIcon(Atom, &v31, v30, &v35, v29, 0LL, Atom);
      if ( ExistingCursorIcon )
        v6 = *ExistingCursorIcon;
    }
  }
LABEL_38:
  UserSessionSwitchLeaveCrit(v11, v10);
  return v6;
}
