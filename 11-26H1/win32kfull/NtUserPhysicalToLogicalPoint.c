/*
 * XREFs of NtUserPhysicalToLogicalPoint @ 0x1401F1000
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z @ 0x1401F1248 (-DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x1403E2324 (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall NtUserPhysicalToLogicalPoint(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  struct tagPOINT v9; // rsi
  unsigned int v11; // eax
  struct tagPOINT ULong64FromUser; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  ULong64FromUser = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v13, 1LL);
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    ULong64FromUser = (struct tagPOINT)RtlReadULong64FromUser(a2);
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v7);
    v9 = 0LL;
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v6, CurrentThreadDpiAwarenessContext) )
      v9 = ULong64FromUser;
    TransformPointBetweenCoordinateSpaces(&ULong64FromUser, &ULong64FromUser, v6, 0LL);
    if ( DCEPtInRect((const struct tagRECT *)(*(_QWORD *)(v6 + 40) + 88LL), ULong64FromUser) )
    {
      v11 = W32GetCurrentThreadDpiAwarenessContext(v5);
      if ( (unsigned __int8)ShouldVirtualizeWindowRect(v6, v11) )
        ULong64FromUser = v9;
      ((void (__fastcall *)(_QWORD, _QWORD))RtlWriteULong64ToUser)(a2, ULong64FromUser);
      v4 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
