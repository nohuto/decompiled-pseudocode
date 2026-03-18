/*
 * XREFs of ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x14000912C
 * Callers:
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x14000886C (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
 *     _anonymous_namespace_::xxxReplaceMouseCursorsWithPenCursors @ 0x1400F86EC (_anonymous_namespace_--xxxReplaceMouseCursorsWithPenCursors.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x140152F8C (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?_LoadCursorsAndIcons@@YAHXZ @ 0x14023921C (-_LoadCursorsAndIcons@@YAHXZ.c)
 * Callees:
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002BB6C (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x14013F630 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?xxxEnsureDpiCursorsForSysCur@@YAXI@Z @ 0x140151F68 (-xxxEnsureDpiCursorsForSysCur@@YAXI@Z.c)
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x14015242C (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     ?LogSetNewSystemCursor@@YAXIPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1401C8F38 (-LogSetNewSystemCursor@@YAXIPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z.c)
 *     RtlInitUnicodeStringOrId @ 0x140220FB4 (RtlInitUnicodeStringOrId.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall zzzInternalSetSystemCursor(
        __int64 a1,
        unsigned int a2,
        const struct _UNICODE_STRING *a3,
        unsigned int a4)
{
  __int64 v6; // rsi
  __int64 UserSessionState; // rax
  struct _UNICODE_STRING *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  struct tagTHREADINFO *v15; // rax
  struct tagTHREADINFO *v16; // rax
  __int64 v18; // rbx
  _QWORD *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD v22[2]; // [rsp+20h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-38h] BYREF

  v6 = 552LL * a2;
  UserSessionState = W32GetUserSessionState();
  v10 = (struct _UNICODE_STRING *)(UserSessionState + v6 + 21920);
  if ( a3 )
  {
    if ( ((unsigned __int64)a3->Buffer & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v11 = W32GetUserSessionState();
      RtlInitUnicodeString(v10, (PCWSTR)(v11 + v6 + 21936));
      v10->MaximumLength = 520;
      RtlUnicodeStringCopy(v10, a3);
      v10->Buffer[259] = 0;
    }
    else
    {
      RtlInitUnicodeStringOrId(UserSessionState + v6 + 21920);
    }
  }
  else
  {
    RtlInitUnicodeString((PUNICODE_STRING)(UserSessionState + v6 + 21920), 0LL);
  }
  v12 = *(_QWORD *)(W32GetUserSessionState() + v6 + 21912);
  if ( (v12 == 0) != (a4 == 0) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1747LL);
  if ( v12 )
  {
    v13 = W32GetUserSessionState();
    zzzSetSystemImage((struct tagCURSOR *)a1, *(struct tagCURSOR **)(v13 + v6 + 21912));
  }
  else
  {
    v18 = *(_QWORD *)(W32GetUserGdiSessionState() + 40);
    if ( PsGetCurrentProcess() != v18
      || (v19 = (_QWORD *)(a1 + 64), (v20 = *(_QWORD *)(a1 + 64)) == 0)
      || (v20 & 0xFFFFFFFFFFFF0000uLL) != 0
      || (unsigned __int16)v20 - 100 != a2 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1758LL);
      v19 = (_QWORD *)(a1 + 64);
    }
    v21 = *(unsigned __int16 *)(W32GetUserSessionState() + v6 + 21904);
    *(_DWORD *)(a1 + 80) |= 0x200u;
    *v19 = v21;
    v22[1] = a1;
    v22[0] = W32GetUserSessionState() + v6 + 21912;
    HMAssignmentLock(v22, 0LL);
  }
  LogSetNewSystemCursor(a2, a3, a4);
  v14 = *(_QWORD *)(W32GetUserSessionState() + v6 + 21912);
  v15 = PtiCurrent();
  Win32HM_LockIntoThread<0>(v15, v14, BugCheckParameter3);
  xxxEnsureDpiCursorsForSysCur(a2);
  v16 = PtiCurrent();
  return Win32HM_UnlockFromThread<0>((ULONG_PTR)v16, (ULONG_PTR)BugCheckParameter3);
}
