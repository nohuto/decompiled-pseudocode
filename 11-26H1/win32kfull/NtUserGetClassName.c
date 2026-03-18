/*
 * XREFs of NtUserGetClassName @ 0x1400202B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

__int64 __fastcall NtUserGetClassName(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned int AtomName; // edi
  volatile void *ULong64FromUser; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int16 v12; // si
  int v13; // ebx
  unsigned int v14; // ebx
  __int64 v15; // rbx
  int ULongFromUser; // [rsp+40h] [rbp-38h]
  int v18; // [rsp+98h] [rbp+20h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v18, 1LL);
  v7 = ValidateHwnd(a1);
  AtomName = 0;
  if ( v7 )
  {
    ULongFromUser = RtlReadULongFromUser(a3);
    ULong64FromUser = (volatile void *)RtlReadULong64FromUser(a3 + 8);
    ProbeForWrite(ULong64FromUser, HIWORD(ULongFromUser), 2u);
    v11 = *(_QWORD *)(*(_QWORD *)(v7 + 136) + 8LL);
    v12 = *(_WORD *)(v11 + 2);
    if ( a2 )
    {
      v13 = *(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x2FFF;
      if ( v13 )
      {
        if ( v13 == 672 )
        {
          v18 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10314LL);
        }
        if ( v13 == 694 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10315LL);
        v14 = v13 - 666;
        if ( v14 < 0x1F )
        {
          _mm_lfence();
          v15 = byte_14035DD70[v14];
          if ( (unsigned __int8)v15 > 0x19u || (v11 = 38797312LL, !_bittest((const int *)&v11, v15)) )
            v12 = *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v11, v10) + 19904) + 2 * v15 + 868);
        }
      }
    }
    AtomName = UserGetAtomName(v12, ULong64FromUser, HIWORD(ULongFromUser) >> 1);
  }
  UserSessionSwitchLeaveCrit(v6);
  return AtomName;
}
