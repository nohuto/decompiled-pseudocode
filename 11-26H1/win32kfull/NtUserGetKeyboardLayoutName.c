/*
 * XREFs of NtUserGetKeyboardLayoutName @ 0x14021A480
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

__int64 __fastcall NtUserGetKeyboardLayoutName(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rsi
  int v5; // ebx
  LPWSTR String[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v8; // [rsp+50h] [rbp-18h]
  __int64 v9; // [rsp+78h] [rbp+10h] BYREF

  *(_OWORD *)String = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v9, 1LL);
  v4 = *((_QWORD *)PtiCurrent(v2) + 59);
  v5 = 0;
  if ( v4 )
  {
    DWORD1(v8) = 0;
    LODWORD(v8) = RtlReadULongFromUser(a1);
    *((_QWORD *)&v8 + 1) = RtlReadULong64FromUser(a1 + 8);
    *(_OWORD *)String = v8;
    ProbeForWrite(*((volatile void **)&v8 + 1), WORD1(v8), 2u);
    if ( (*(_WORD *)(v4 + 42) & 0xF000) == 0xE000 )
    {
      RtlIntegerToUnicodeString(*(_DWORD *)(v4 + 40), 0x10u, (PUNICODE_STRING)String);
    }
    else
    {
      if ( WORD1(String[0]) < 0x12u || RtlIntegerToUnicode(*(_DWORD *)(v4 + 112), 0x10u, 0xFFFFFFF8, String[1]) < 0 )
      {
        UserSetLastError(87);
        goto LABEL_9;
      }
      LOWORD(String[0]) = 16;
      String[1][8] = 0;
    }
    v5 = 1;
  }
LABEL_9:
  UserSessionSwitchLeaveCrit(v3);
  return v5;
}
