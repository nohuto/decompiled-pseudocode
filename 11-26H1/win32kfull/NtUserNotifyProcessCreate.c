/*
 * XREFs of NtUserNotifyProcessCreate @ 0x1401A5C20
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?xxxUserNotifyProcessCreate@@YAJKW4_NotifyProcessCreateHints@@@Z @ 0x1401A5930 (-xxxUserNotifyProcessCreate@@YAJKW4_NotifyProcessCreateHints@@@Z.c)
 *     Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline @ 0x1401A5D0C (Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserNotifyProcessCreate(int a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (unsigned int)Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (a4 & 0xFFFFFFCF) != 0 )
      goto LABEL_3;
    return 0LL;
  }
  if ( !a4 )
    return 0LL;
LABEL_3:
  if ( !(unsigned int)Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline() )
  {
    EnterCrit(0LL, 0LL);
    v13 = *(_QWORD *)(W32GetUserGdiSessionState(v12) + 40);
    if ( PsGetCurrentProcess(v14) == v13 )
    {
      v10 = xxxUserNotifyProcessCreate(a1, a4);
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  EnterCrit(0LL, 0LL);
  v7 = *(_QWORD *)(W32GetUserGdiSessionState(v6) + 40);
  if ( PsGetCurrentProcess(v8) != v7 )
  {
LABEL_9:
    v10 = -1073741790;
    goto LABEL_11;
  }
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v15);
  v10 = xxxUserNotifyProcessCreate(a1, a4);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v15);
LABEL_11:
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
