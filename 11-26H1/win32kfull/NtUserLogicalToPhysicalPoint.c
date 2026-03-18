/*
 * XREFs of NtUserLogicalToPhysicalPoint @ 0x1401F1120
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z @ 0x1401F1248 (-DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x1403E2324 (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall NtUserLogicalToPhysicalPoint(__int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  bool v9; // r14
  struct tagPOINT ULong64FromUser; // [rsp+70h] [rbp+18h] BYREF
  struct tagPOINT v12; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  ULong64FromUser = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v12, 1LL);
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    ULong64FromUser = (struct tagPOINT)RtlReadULong64FromUser(a2);
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v7);
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v6, CurrentThreadDpiAwarenessContext) )
    {
      v12 = 0LL;
      TransformPointBetweenCoordinateSpaces(&v12, &ULong64FromUser, v6, 0LL);
      v9 = DCEPtInRect((const struct tagRECT *)(*(_QWORD *)(v6 + 40) + 88LL), v12);
    }
    else
    {
      v9 = DCEPtInRect((const struct tagRECT *)(*(_QWORD *)(v6 + 40) + 88LL), ULong64FromUser);
      TransformPointBetweenCoordinateSpaces(&ULong64FromUser, &ULong64FromUser, 0LL, v6);
    }
    if ( v9 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD))RtlWriteULong64ToUser)(a2, ULong64FromUser);
      v4 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
