/*
 * XREFs of NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1402B8E30
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z @ 0x1401F1248 (-DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x1403E2324 (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall NtUserPerMonitorDPIPhysicalToLogicalPoint(__int64 a1, volatile void *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // esi
  struct tagPOINT v7; // r8
  struct tagPOINT ULong64FromUser; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v10, 1LL);
  if ( !a1 || (a1 = ValidateHwnd(a1)) != 0 )
  {
    ULong64FromUser = 0LL;
    ProbeForWrite(a2, 8uLL, 1u);
    ULong64FromUser = (struct tagPOINT)RtlReadULong64FromUser(a2);
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v5);
    if ( a1 )
    {
      ShouldVirtualizeWindowRect(a1, CurrentThreadDpiAwarenessContext);
      v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GuessMonitorOverrideForCoordinateConversions)(
              ULong64FromUser,
              *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL),
              1LL);
      PhysicalToLogicalDPIPoint(
        &ULong64FromUser,
        &ULong64FromUser,
        *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL),
        &v10);
      LODWORD(a1) = DCEPtInRect((const struct tagRECT *)(*(_QWORD *)(a1 + 40) + 88LL), ULong64FromUser);
    }
    else
    {
      v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GuessMonitorOverrideForCoordinateConversions)(
              ULong64FromUser,
              CurrentThreadDpiAwarenessContext,
              1LL);
      PhysicalToLogicalDPIPoint(&ULong64FromUser, &ULong64FromUser, CurrentThreadDpiAwarenessContext, &v10);
      LODWORD(a1) = 1;
      v7 = ULong64FromUser;
    }
    if ( (_DWORD)a1 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD))RtlWriteULong64ToUser)(a2, v7);
      LODWORD(a1) = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v4);
  return (int)a1;
}
