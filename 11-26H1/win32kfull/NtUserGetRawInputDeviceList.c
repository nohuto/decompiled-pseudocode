/*
 * XREFs of NtUserGetRawInputDeviceList @ 0x1401DE4B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140071770 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140071870 (-W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserGetRawInputDeviceList(volatile void *a1, __int64 a2, int a3)
{
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  struct W32_PUSH_LOCK *Lock; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  struct DEVICEINFO *i; // rax
  unsigned int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  struct DEVICEINFO *j; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  _BYTE v22[8]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v23; // [rsp+50h] [rbp-28h]
  struct W32_PUSH_LOCK *v25; // [rsp+98h] [rbp+20h] BYREF

  v5 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(&v25, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v22);
  if ( a3 == 16 )
  {
    UserSessionState = W32GetUserSessionState(v7, v6);
    Lock = CBaseInput::TmpGetLock(*(CBaseInput **)(UserSessionState + 16832));
    v25 = Lock;
    W32AcquirePushLockSharedEx(Lock, 0);
    v12 = W32GetUserSessionState(v11, v10);
    for ( i = CBaseInput::TmpGetDeviceList(*(CBaseInput **)(v12 + 16832)); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
      ++v5;
    if ( a1 )
    {
      v14 = 0;
      if ( (unsigned int)RtlReadULongFromUser(a2) < v5 )
      {
        RtlWriteULongToUser(a2, v5);
        v14 = -1;
        UserSetLastError(122);
      }
      else
      {
        ProbeForWrite(a1, 16LL * v5, 8u);
        v17 = W32GetUserSessionState(v16, v15);
        for ( j = CBaseInput::TmpGetDeviceList(*(CBaseInput **)(v17 + 16832));
              j;
              j = (struct DEVICEINFO *)*((_QWORD *)j + 7) )
        {
          v19 = 2LL * v14;
          *((_QWORD *)a1 + v19) = *(_QWORD *)j;
          *((_DWORD *)a1 + 2 * v19 + 2) = *((_DWORD *)j + 12);
          if ( ++v14 >= v5 )
            break;
        }
      }
    }
    else
    {
      RtlWriteULongToUser(a2, v5);
      v14 = 0;
    }
    W32ReleasePushLockSharedEx(Lock, 0LL);
  }
  else
  {
    v14 = -1;
    UserSetLastError(87);
  }
  if ( v22[0] )
  {
    v20 = v23;
    --*(_DWORD *)(v23 + 28);
  }
  UserSessionSwitchLeaveCrit(v20);
  return v14;
}
