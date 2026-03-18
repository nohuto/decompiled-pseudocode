/*
 * XREFs of NtUserDispatchMessage @ 0x1401D2590
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 */

__int64 __fastcall NtUserDispatchMessage(__int128 *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // ecx
  __int64 v6; // rcx
  int v8; // ecx
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h]
  __int128 v11; // [rsp+50h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (__int128 *)MmUserProbeAddress;
  v9 = *a1;
  v10 = a1[1];
  v11 = a1[2];
  v2 = 0LL;
  if ( (DWORD2(v9) & 0xFFFE0000) != 0 )
  {
    v8 = 87;
    goto LABEL_14;
  }
  if ( (_QWORD)v9
    && (v3 = ValidateHwnd(v9)) != 0
    && (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 18LL) & 4) != 0
    && *(_QWORD *)(*(_QWORD *)(v3 + 16) + 456LL) != *((_QWORD *)PtiCurrent(v4) + 57)
    || (DWORD2(v9) >= 0x400 ? (v5 = 0) : (v5 = ((unsigned __int16)MessageTable[DWORD2(v9)] >> 13) & 1), v5) )
  {
    v8 = 5;
LABEL_14:
    UserSetLastError(v8);
    goto LABEL_11;
  }
  v2 = xxxDispatchMessage((struct tagMSG *)&v9);
LABEL_11:
  UserSessionSwitchLeaveCrit(v6);
  return v2;
}
