/*
 * XREFs of NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x140266CC0
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

__int64 __fastcall NtUserLogicalToPerMonitorDPIPhysicalPoint(__int64 a1, volatile void *a2)
{
  int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // r14d
  struct tagPOINT v9; // rdx
  __int64 v10; // r9
  __int64 v11; // r8
  struct tagPOINT ULong64FromUser; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v14, 1LL);
  v4 = 0;
  if ( a1 )
  {
    v6 = ValidateHwnd(a1);
    if ( !v6 )
      goto LABEL_15;
  }
  else
  {
    v6 = 0LL;
  }
  ULong64FromUser = 0LL;
  ProbeForWrite(a2, 8uLL, 1u);
  ULong64FromUser = (struct tagPOINT)RtlReadULong64FromUser(a2);
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v7);
  if ( v6 )
  {
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v6, CurrentThreadDpiAwarenessContext) )
    {
      v14 = 0LL;
      TransformPointBetweenCoordinateSpaces(&v14, &ULong64FromUser, v6, 0LL);
      v9 = (struct tagPOINT)v14;
    }
    else
    {
      v9 = ULong64FromUser;
    }
    if ( !DCEPtInRect((const struct tagRECT *)(*(_QWORD *)(v6 + 40) + 88LL), v9) )
      goto LABEL_13;
    v14 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GuessMonitorOverrideForCoordinateConversions)(
            ULong64FromUser,
            *(unsigned int *)(v10 + 288),
            0LL);
    v11 = *(unsigned int *)(*(_QWORD *)(v6 + 40) + 288LL);
  }
  else
  {
    v14 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GuessMonitorOverrideForCoordinateConversions)(
            ULong64FromUser,
            CurrentThreadDpiAwarenessContext,
            0LL);
    v11 = CurrentThreadDpiAwarenessContext;
  }
  LogicalToPhysicalDPIPoint(&ULong64FromUser, &ULong64FromUser, v11, &v14);
  v4 = 1;
LABEL_13:
  if ( v4 == 1 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD))RtlWriteULong64ToUser)(a2, ULong64FromUser);
    v4 = 1;
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
