/*
 * XREFs of NtUserLogicalToPhysicalDpiPointForWindow @ 0x1402B7C20
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x14002BD18 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x1403E2324 (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall NtUserLogicalToPhysicalDpiPointForWindow(__int64 a1, volatile void *a2)
{
  __int64 v4; // rcx
  const struct tagWND *v5; // rsi
  int v6; // edi
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 ULong64FromUser; // [rsp+70h] [rbp+18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&ULong64FromUser, 1LL);
  v5 = (const struct tagWND *)ValidateHwnd(a1);
  v6 = 0;
  if ( v5 )
  {
    ProbeForWrite(a2, 8uLL, 1u);
    ULong64FromUser = RtlReadULong64FromUser(a2);
    v8[0] = ULong64FromUser;
    v8[1] = ULong64FromUser;
    v6 = LogicalToPhysicalInPlaceRectWithSubpixel(v5, (int *)v8, 0LL);
    if ( v6 == 1 )
    {
      ULong64FromUser = v8[0];
      RtlWriteULong64ToUser(a2, v8[0]);
    }
  }
  UserSessionSwitchLeaveCrit(v4);
  return v6;
}
