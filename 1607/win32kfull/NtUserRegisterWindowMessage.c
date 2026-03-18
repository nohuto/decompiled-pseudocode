/*
 * XREFs of NtUserRegisterWindowMessage @ 0x1C00F9B30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C000C524 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserRegisterWindowMessage(int *a1)
{
  int *v1; // r9
  unsigned int v2; // ebx
  int v3; // ecx
  _WORD *v4; // r9
  unsigned __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // r10
  _WORD *v8; // rax
  NTSTATUS v9; // ecx
  __int64 v10; // r8
  int v12; // [rsp+24h] [rbp-274h]
  __int64 v13; // [rsp+78h] [rbp-220h]
  _BYTE v14[512]; // [rsp+80h] [rbp-218h] BYREF

  v1 = a1;
  v2 = 0;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v1 = (int *)W32UserProbeAddress;
  v3 = *v1;
  v12 = *v1;
  v4 = (_WORD *)*((_QWORD *)v1 + 1);
  HIWORD(v13) = HIWORD(v4);
  if ( ((unsigned __int8)v4 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v5 = (unsigned __int64)v4 + (unsigned __int16)v3 + 2;
  if ( v5 >= W32UserProbeAddress || (unsigned __int16)v3 > HIWORD(v12) || (v3 & 1) != 0 || v5 <= (unsigned __int64)v4 )
    *W32UserProbeAddress = 0;
  v6 = 2147483646LL;
  v7 = 256LL;
  v8 = v14;
  v9 = 0;
  v10 = 0LL;
  while ( v7 )
  {
    if ( !v6 || !*v4 )
      goto LABEL_17;
    *v8++ = *v4++;
    --v7;
    --v6;
    ++v10;
  }
  --v8;
  v9 = -2147483643;
LABEL_17:
  *v8 = 0;
  if ( v9 >= 0 )
    return (unsigned __int16)UserAddAtomEx(v14, 0LL, 2LL);
  else
    UserSetLastStatus(v9, 1);
  return v2;
}
