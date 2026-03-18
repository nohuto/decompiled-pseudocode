/*
 * XREFs of NtUserDispatchMessage @ 0x1C0078EF0
 * Callers:
 *     <none>
 * Callees:
 *     xxxDispatchMessage @ 0x1C0078FD0 (xxxDispatchMessage.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserDispatchMessage(_OWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rcx
  _OWORD v9[4]; // [rsp+38h] [rbp-40h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    a1 = (_OWORD *)W32UserProbeAddress;
  v9[0] = *a1;
  v9[1] = a1[1];
  v9[2] = a1[2];
  v2 = 0LL;
  if ( (DWORD2(v9[0]) & 0xFFFE0000) != 0 )
  {
    v8 = 87LL;
    goto LABEL_16;
  }
  if ( *(_QWORD *)&v9[0]
    && (v3 = ValidateHwnd(*(_QWORD *)&v9[0])) != 0
    && (*(_BYTE *)(v3 + 42) & 4) != 0
    && *(_QWORD *)(*(_QWORD *)(v3 + 16) + 376LL) != *(_QWORD *)(gptiCurrent + 376LL)
    || (DWORD2(v9[0]) >= 0x400 ? (v4 = 0) : (v4 = ((unsigned __int16)MessageTable[DWORD2(v9[0])] >> 13) & 1), v4) )
  {
    v8 = 5LL;
LABEL_16:
    UserSetLastError(v8);
    goto LABEL_11;
  }
  v2 = xxxDispatchMessage(v9);
LABEL_11:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v2;
}
