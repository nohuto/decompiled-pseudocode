/*
 * XREFs of NtUserDispatchMessage @ 0x1C007C900
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     xxxDispatchMessage @ 0x1C007C9DC (xxxDispatchMessage.c)
 */

__int64 __fastcall NtUserDispatchMessage(_OWORD *a1)
{
  __int64 v2; // rbx
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  _OWORD v9[4]; // [rsp+38h] [rbp-40h] BYREF

  EnterCrit(1LL);
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    a1 = (_OWORD *)W32UserProbeAddress;
  v9[0] = *a1;
  v9[1] = a1[1];
  v9[2] = a1[2];
  v2 = 0LL;
  if ( (DWORD2(v9[0]) & 0xFFFE0000) != 0 )
  {
    v3 = 87;
  }
  else
  {
    if ( (!*(_QWORD *)&v9[0]
       || (v6 = ValidateHwnd(*(_QWORD *)&v9[0])) == 0
       || (*(_BYTE *)(v6 + 42) & 4) == 0
       || *(_QWORD *)(*(_QWORD *)(v6 + 16) + 384LL) == *(_QWORD *)(gptiCurrent + 384LL))
      && (DWORD2(v9[0]) >= 0x400 || !(((unsigned __int16)MessageTable[DWORD2(v9[0])] >> 13) & 1)) )
    {
      v2 = xxxDispatchMessage(v9);
      goto LABEL_16;
    }
    v3 = 5;
  }
  UserSetLastError(v3);
LABEL_16:
  UserSessionSwitchLeaveCrit(v5, v4);
  return v2;
}
