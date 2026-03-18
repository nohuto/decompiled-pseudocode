/*
 * XREFs of NtUserGetLayeredWindowAttributes @ 0x1402B3F60
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     _GetLayeredWindowAttributes @ 0x1400420F0 (_GetLayeredWindowAttributes.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     RtlWriteUCharToUser @ 0x1403E22DC (RtlWriteUCharToUser.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserGetLayeredWindowAttributes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  int LayeredWindowAttributes; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  BYTE v14[4]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+24h] [rbp-34h] BYREF
  unsigned int v16[6]; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v17[3]; // [rsp+40h] [rbp-18h] BYREF

  v15 = 0;
  v14[0] = 0;
  v16[0] = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(v17, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v17);
  v8 = ValidateHwnd(a1);
  v9 = v8;
  if ( !v8 )
    goto LABEL_2;
  if ( (unsigned int)IsWindowDesktopComposed(v8) && (*(_DWORD *)(*(_QWORD *)(v9 + 40) + 232LL) & 2) != 0 )
  {
    UserSetLastError(87);
LABEL_2:
    LayeredWindowAttributes = 0;
    goto LABEL_13;
  }
  LayeredWindowAttributes = GetLayeredWindowAttributes(v9, &v15, v14, v16);
  if ( LayeredWindowAttributes )
  {
    if ( a2 )
      RtlWriteULongToUser(a2, v15);
    if ( a3 )
    {
      LOBYTE(v11) = v14[0];
      RtlWriteUCharToUser(a3, v11);
    }
    if ( a4 )
      RtlWriteULongToUser(a4, v16[0] & 3);
  }
LABEL_13:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v17);
  UserSessionSwitchLeaveCrit(v12);
  return LayeredWindowAttributes;
}
