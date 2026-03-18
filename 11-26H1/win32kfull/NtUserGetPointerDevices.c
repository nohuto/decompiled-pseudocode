/*
 * XREFs of NtUserGetPointerDevices @ 0x14025C900
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140071770 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140071870 (-W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     _GetPointerDeviceInfoProperties @ 0x1401D8D3C (_GetPointerDeviceInfoProperties.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserGetPointerDevices(__int64 a1, volatile void *a2)
{
  unsigned int v4; // r14d
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  struct W32_PUSH_LOCK *Lock; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  struct DEVICEINFO *i; // r15
  unsigned int ULongFromUser; // eax
  int v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  struct DEVICEINFO *j; // r15
  _BYTE v22[8]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v23; // [rsp+50h] [rbp-38h]
  struct W32_PUSH_LOCK *v24; // [rsp+A0h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(&v24, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v22);
  if ( !a1 )
  {
    v5 = 0;
    UserSetLastError(87);
    goto LABEL_24;
  }
  UserSessionState = W32GetUserSessionState(v7, v6);
  Lock = CBaseInput::TmpGetLock(*(CBaseInput **)(UserSessionState + 16832));
  v24 = Lock;
  W32AcquirePushLockSharedEx(Lock, 0);
  v13 = W32GetUserSessionState(v12, v11);
  for ( i = CBaseInput::TmpGetDeviceList(*(CBaseInput **)(v13 + 16832)); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    if ( (*((_DWORD *)i + 46) & 0x80u) != 0 && (unsigned int)IsPointerDeviceAccessible(*((_QWORD *)i + 57)) )
      ++v4;
  }
  if ( a2 )
  {
    ULongFromUser = RtlReadULongFromUser(a1);
    if ( ULongFromUser < v4 )
    {
      RtlWriteULongToUser(a1, v4);
      v5 = 0;
      UserSetLastError(122);
      goto LABEL_23;
    }
    if ( !ULongFromUser || !v4 )
    {
      v5 = 0;
      UserSetLastError(15299);
      goto LABEL_23;
    }
    ProbeForWrite(a2, 1080LL * v4, 8u);
    v16 = v4 - 1;
    v19 = W32GetUserSessionState(v18, v17);
    for ( j = CBaseInput::TmpGetDeviceList(*(CBaseInput **)(v19 + 16832));
          j && v16 >= 0;
          j = (struct DEVICEINFO *)*((_QWORD *)j + 7) )
    {
      if ( (*((_DWORD *)j + 46) & 0x80u) != 0 && (unsigned int)IsPointerDeviceAccessible(*((_QWORD *)j + 57)) )
        GetPointerDeviceInfoProperties((__int64)a2 + 1080 * v16--, *((_QWORD *)j + 57));
    }
  }
  RtlWriteULongToUser(a1, v4);
LABEL_23:
  W32ReleasePushLockSharedEx(Lock, 0LL);
LABEL_24:
  if ( v22[0] )
    --*(_DWORD *)(v23 + 28);
  UserSessionSwitchLeaveCrit(v8);
  return v5;
}
