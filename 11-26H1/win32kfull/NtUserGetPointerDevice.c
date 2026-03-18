/*
 * XREFs of NtUserGetPointerDevice @ 0x1401D8C60
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     _GetPointerDeviceInfoProperties @ 0x1401D8D3C (_GetPointerDeviceInfoProperties.c)
 */

__int64 __fastcall NtUserGetPointerDevice(__int64 a1, volatile void *a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  int v7; // ecx
  _BYTE v8[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0LL;
  v4 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(&v11, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v8);
  if ( a1 && a2 )
  {
    if ( (unsigned int)ResolveMouseOrPointerDevice(a1, &v10, 0LL) )
    {
      ProbeForWrite(a2, 0x438uLL, 4u);
      GetPointerDeviceInfoProperties(a2, v10);
      goto LABEL_5;
    }
    v7 = 6;
  }
  else
  {
    v7 = 87;
  }
  v4 = 0;
  UserSetLastError(v7);
LABEL_5:
  if ( v8[0] )
    --*(_DWORD *)(v9 + 28);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
