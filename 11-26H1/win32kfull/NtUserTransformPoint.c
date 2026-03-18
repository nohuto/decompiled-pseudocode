/*
 * XREFs of NtUserTransformPoint @ 0x1401BC2B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1401BC5C0 (IsValidKernelDpiAwarenessContext.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x1403E2324 (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall NtUserTransformPoint(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  int v8; // edi
  __int64 ULong64FromUser; // rax
  __int64 v10; // rcx
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+48h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h] BYREF

  v8 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(&v14, 1LL);
  v12 = 0LL;
  v13 = 0LL;
  if ( (unsigned int)IsValidKernelDpiAwarenessContext(a2) && (unsigned int)IsValidKernelDpiAwarenessContext(a3) )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    v12 = ULong64FromUser;
    if ( a4 && (a2 & 0xF) == 2 )
    {
      v13 = ValidateHmonitor(a4);
      ULong64FromUser = v12;
    }
    if ( !v13 )
      v13 = GuessMonitorOverrideForCoordinateConversions(ULong64FromUser, a3, 0LL);
    LogicalToPhysicalDPIPoint(&v12, &v12, a3, &v13);
    PhysicalToLogicalDPIPoint(&v12, &v12, a2, &v13);
    RtlWriteULong64ToUser(a1, v12);
  }
  else
  {
    v8 = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v10);
  return v8;
}
