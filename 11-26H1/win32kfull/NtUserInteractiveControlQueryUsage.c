/*
 * XREFs of NtUserInteractiveControlQueryUsage @ 0x1402B7510
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14013DB10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z @ 0x1402F15D0 (-GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserInteractiveControlQueryUsage(
        unsigned int a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        volatile void *Address)
{
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  InteractiveControlManager *v12; // rax
  __int64 v13; // rcx
  int v15[6]; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v16[3]; // [rsp+58h] [rbp-20h] BYREF

  v15[0] = 0;
  v9 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(v16, 1LL);
  ProbeForWrite(Address, 4uLL, 4u);
  v12 = InteractiveControlManager::Instance(v11, v10);
  if ( (int)InteractiveControlManager::GetReportExtendedUsage(v12, (unsigned __int16)a1, HIWORD(a1), a3, a2, a4, v15) < 0 )
    v9 = 0;
  else
    RtlWriteULongToUser(Address, (unsigned int)v15[0]);
  UserSessionSwitchLeaveCrit(v13);
  return v9;
}
