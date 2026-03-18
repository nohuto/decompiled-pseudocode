/*
 * XREFs of NtUserShutdownBlockReasonQuery @ 0x1402C0090
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14013EFD0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserShutdownBlockReasonQuery(__int64 a1, volatile void *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  int v8; // esi
  __int64 UserSessionState; // rax
  char *Prop; // r14
  unsigned int ULongFromUser; // eax
  __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 v17; // [rsp+98h] [rbp+20h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v17, 1LL);
  v7 = ValidateHwnd(a1);
  v8 = 0;
  if ( v7 )
  {
    UserSessionState = W32GetUserSessionState(v6, v5);
    Prop = (char *)GetProp(v7, *(unsigned __int16 *)(UserSessionState + 41392), 1u);
    if ( !Prop )
    {
LABEL_3:
      UserSetLastError(87);
      goto LABEL_12;
    }
    ULongFromUser = RtlReadULongFromUser(a3);
    v12 = ULongFromUser;
    if ( ULongFromUser > 0x101 )
      v12 = 257LL;
    if ( a2 )
    {
      if ( !(_DWORD)v12 )
        goto LABEL_3;
      v13 = v12;
      ProbeForWrite(a2, 2 * v12, 2u);
      RtlStringCchCopyW((char *)a2, v13, Prop);
    }
    v14 = -1LL;
    do
      ++v14;
    while ( *(_WORD *)&Prop[2 * v14] );
    RtlWriteULongToUser(a3, (unsigned int)(v14 + 1));
    v8 = 1;
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
