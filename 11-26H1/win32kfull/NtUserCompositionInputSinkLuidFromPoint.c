/*
 * XREFs of NtUserCompositionInputSinkLuidFromPoint @ 0x14025F020
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1401A20C0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     RequestInputSinkInfoFromPoint @ 0x1401F7E04 (RequestInputSinkInfoFromPoint.c)
 *     ??$Write@UtagINPUT_TRANSFORM@@@?$UserModePointer@UtagINPUT_TRANSFORM@@@@QEAAXAEBUtagINPUT_TRANSFORM@@@Z @ 0x1402AD908 (--$Write@UtagINPUT_TRANSFORM@@@-$UserModePointer@UtagINPUT_TRANSFORM@@@@QEAAXAEBUtagINPUT_TRANSF.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x1403E2324 (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall NtUserCompositionInputSinkLuidFromPoint(
        __int64 a1,
        __int64 a2,
        volatile void *a3,
        __int64 a4,
        __int64 a5)
{
  int v8; // r14d
  __int64 UserSessionState; // rax
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  char v20; // al
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v25; // [rsp+58h] [rbp-D0h]
  __int128 v26; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+74h] [rbp-B4h]
  __int64 v28; // [rsp+80h] [rbp-A8h]
  _BYTE v29[72]; // [rsp+88h] [rbp-A0h] BYREF
  _BYTE v30[64]; // [rsp+D0h] [rbp-58h] BYREF

  v8 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(UserSessionState + 18840));
  EnterCrit(0LL, 0LL);
  memset_0(&v26, 0, 0x70uLL);
  if ( v8 != 6 && v8 )
  {
    v11 = 87;
LABEL_4:
    v12 = 0;
    UserSetLastError(v11);
    goto LABEL_22;
  }
  if ( (unsigned int)IsCurrentProcessDwm(v10) )
  {
    v11 = 5;
    goto LABEL_4;
  }
  *(_QWORD *)((char *)&v26 + 4) = RtlReadULong64FromUser(a2);
  v25 = (-(__int64)(PsGetCurrentProcessWow64Process(v15, v14) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
  ProbeForWrite(a3, 8uLL, v25);
  LODWORD(v26) = v26 | 1;
  if ( a4 )
  {
    if ( (a4 & 7) != 0 )
      goto LABEL_15;
    RtlWriteULong64ToUser(a4, 0LL);
    LODWORD(v26) = v26 | 2;
  }
  v18 = a5;
  if ( a5 )
  {
    if ( PsGetCurrentProcessWow64Process(v17, v16) )
      v19 = 0LL;
    else
      v19 = 3LL;
    if ( (v19 & v18) != 0 )
LABEL_15:
      ExRaiseDatatypeMisalignment();
    memset_0(v30, 0, sizeof(v30));
    UserModePointer<tagINPUT_TRANSFORM>::Write<tagINPUT_TRANSFORM>(&a5, v30);
    LODWORD(v26) = v26 | 4;
  }
  HIDWORD(v26) = v8;
  v12 = RequestInputSinkInfoFromPoint(&v26, v16);
  if ( v12 )
  {
    RtlWriteULong64ToUser(a3, v27);
    v20 = v26;
    if ( (v26 & 2) != 0 )
    {
      RtlWriteULong64ToUser(a4, v28);
      v20 = v26;
    }
    if ( (v20 & 4) != 0 )
      UserModePointer<tagINPUT_TRANSFORM>::Write<tagINPUT_TRANSFORM>(&a5, v29);
  }
LABEL_22:
  UserSessionSwitchLeaveCrit(v13);
  v23 = W32GetUserSessionState(v22, v21);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v23 + 18840));
  return v12;
}
