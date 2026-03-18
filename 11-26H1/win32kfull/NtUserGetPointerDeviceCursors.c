/*
 * XREFs of NtUserGetPointerDeviceCursors @ 0x1402B43A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _GetPointerDeviceCursors @ 0x1402666E8 (_GetPointerDeviceCursors.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserGetPointerDeviceCursors(__int64 a1, __int64 a2, volatile void *a3)
{
  int PointerDeviceCursors; // edi
  int v7; // ecx
  __int64 v8; // rsi
  __int64 v9; // rcx
  _BYTE v11[48]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v12; // [rsp+80h] [rbp+8h] BYREF
  __int64 v13; // [rsp+98h] [rbp+20h] BYREF

  v12 = 0LL;
  PointerDeviceCursors = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(&v13, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v11);
  if ( !a1 || !a2 )
  {
    v7 = 87;
    goto LABEL_13;
  }
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, &v12, 0LL) )
  {
    v7 = 6;
LABEL_13:
    PointerDeviceCursors = 0;
    UserSetLastError(v7);
    goto LABEL_14;
  }
  v8 = *(unsigned int *)(v12 + 1044);
  if ( a3 )
  {
    if ( (unsigned int)RtlReadULongFromUser(a2) >= (unsigned int)v8 )
    {
      ProbeForWrite(a3, 8 * v8, 8u);
      PointerDeviceCursors = GetPointerDeviceCursors(v12, v8, (__int64)a3);
      if ( PointerDeviceCursors )
        RtlWriteULongToUser(a2, (unsigned int)v8);
    }
    else
    {
      RtlWriteULongToUser(a2, (unsigned int)v8);
      PointerDeviceCursors = 0;
      UserSetLastError(122);
    }
  }
  else
  {
    RtlWriteULongToUser(a2, (unsigned int)v8);
  }
LABEL_14:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v11);
  UserSessionSwitchLeaveCrit(v9);
  return PointerDeviceCursors;
}
