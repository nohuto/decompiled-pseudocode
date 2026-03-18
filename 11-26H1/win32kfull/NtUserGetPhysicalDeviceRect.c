/*
 * XREFs of NtUserGetPhysicalDeviceRect @ 0x1402B42E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??$Write@UtagRECT@@@?$UserModePointer@UtagRECT@@@@QEAAXAEBUtagRECT@@@Z @ 0x1402574C8 (--$Write@UtagRECT@@@-$UserModePointer@UtagRECT@@@@QEAAXAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall NtUserGetPhysicalDeviceRect(__int64 a1, void *a2)
{
  int v4; // edi
  int v5; // ecx
  __int64 v6; // rcx
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  void *v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v10 = a2;
  v4 = 0;
  v9 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v11, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v8);
  if ( !a1 || !a2 )
  {
    v5 = 87;
    goto LABEL_7;
  }
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, &v9, 0LL) )
  {
    v5 = 6;
LABEL_7:
    UserSetLastError(v5);
    goto LABEL_8;
  }
  UserModePointer<tagRECT>::Write<tagRECT>(&v10, (void *)(v9 + 140));
  v4 = 1;
LABEL_8:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v8);
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
