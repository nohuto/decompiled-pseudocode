/*
 * XREFs of NtUserFindExistingCursorIcon @ 0x1C011DBB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C0007BB0 (UserSetLastStatus.c)
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C011DDB4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _FindExistingCursorIcon @ 0x1C011DE2C (_FindExistingCursorIcon.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserFindExistingCursorIcon(int *a1, int *a2, __int128 *a3)
{
  __int64 v6; // rbx
  int v7; // ecx
  const unsigned __int16 *v8; // r8
  unsigned __int64 v9; // r9
  int **v10; // rax
  int *v11; // rax
  int v12; // edx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r10
  __int64 v15; // rdx
  __int64 v16; // rcx
  NTSTATUS v17; // eax
  unsigned __int16 Atom; // ax
  __int64 *ExistingCursorIcon; // rax
  int v21; // [rsp+20h] [rbp-2A8h]
  int v22; // [rsp+20h] [rbp-2A8h]
  __int64 v23; // [rsp+48h] [rbp-280h]
  int v24; // [rsp+58h] [rbp-270h] BYREF
  unsigned __int64 v25; // [rsp+60h] [rbp-268h]
  int v26; // [rsp+70h] [rbp-258h]
  const unsigned __int16 *v27; // [rsp+78h] [rbp-250h]
  __int128 v28; // [rsp+80h] [rbp-248h] BYREF
  __int64 v29; // [rsp+90h] [rbp-238h]
  unsigned __int16 v30[256]; // [rsp+A0h] [rbp-228h] BYREF

  v6 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    a3 = (__int128 *)W32UserProbeAddress;
  v28 = *a3;
  v29 = *((_QWORD *)a3 + 2);
  if ( (_QWORD)v28 )
  {
    v23 = HMValidateHandle(v28, 3);
    if ( !v23 )
      goto LABEL_31;
  }
  else
  {
    v23 = 0LL;
  }
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    a1 = (int *)W32UserProbeAddress;
  v7 = *a1;
  v21 = *a1;
  v26 = *a1;
  v8 = (const unsigned __int16 *)*((_QWORD *)a1 + 1);
  v27 = v8;
  if ( ((unsigned __int8)v8 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v9 = (unsigned __int64)v8 + (unsigned __int16)v7 + 2;
  v10 = (int **)W32UserProbeAddress;
  if ( v9 >= W32UserProbeAddress || (unsigned __int16)v7 > HIWORD(v21) || v9 <= (unsigned __int64)v8 )
  {
    *W32UserProbeAddress = 0;
    v10 = (int **)W32UserProbeAddress;
  }
  v11 = *v10;
  if ( a2 >= v11 )
    a2 = v11;
  v12 = *a2;
  v22 = *a2;
  v24 = *a2;
  v13 = *((_QWORD *)a2 + 1);
  v25 = v13;
  if ( (v13 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (v13 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = v13 + (unsigned __int16)v12 + 2LL;
    if ( v14 >= W32UserProbeAddress || (unsigned __int16)v12 > HIWORD(v22) || v14 <= v13 )
      *W32UserProbeAddress = 0;
  }
  v17 = RtlStringCchCopyW(v30, 0x100uLL, v8);
  if ( v17 < 0 )
  {
    UserSetLastStatus(v17, 1);
  }
  else
  {
    Atom = UserFindAtom(v30);
    if ( Atom )
    {
      ExistingCursorIcon = (__int64 *)FindExistingCursorIcon(Atom, &v24, v23, &v28, v22, 0LL);
      if ( ExistingCursorIcon )
        v6 = *ExistingCursorIcon;
    }
  }
LABEL_31:
  UserSessionSwitchLeaveCrit(v16, v15);
  return v6;
}
