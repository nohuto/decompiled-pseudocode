/*
 * XREFs of NtUserIsInterceptWindow @ 0x1402B7720
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserIsInterceptWindow(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  unsigned int v6; // edi
  _BYTE v8[32]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v9, 1LL);
  v5 = ValidateHwnd(a1);
  v6 = 0;
  if ( v5 )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v8);
    RtlWriteULongToUser(a2, (*(_DWORD *)(v5 + 384) >> 4) & 1);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v8);
    v6 = 1;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v6;
}
