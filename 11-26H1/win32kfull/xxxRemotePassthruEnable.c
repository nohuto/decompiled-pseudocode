/*
 * XREFs of xxxRemotePassthruEnable @ 0x1402D3744
 * Callers:
 *     NtUserRemotePassthruEnable @ 0x1402BA970 (NtUserRemotePassthruEnable.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     xxxRemoteStopScreenUpdates @ 0x1401B3EEC (xxxRemoteStopScreenUpdates.c)
 *     GreDrvDisconnect @ 0x140287F5C (GreDrvDisconnect.c)
 *     bDrvDisconnect @ 0x140336124 (bDrvDisconnect.c)
 */

__int64 xxxRemotePassthruEnable()
{
  Gre::Base *RemoteContext; // rbp
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 UserSessionState; // rsi
  bool v5; // bl
  bool v6; // di
  __int64 v7; // rax
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // rax
  void *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  void *OutputBuffer; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  ULONG InputBufferLength; // ebx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  IoStatusBlock = 0LL;
  RemoteContext = (Gre::Base *)GreGetRemoteContext();
  UserSessionState = W32GetUserSessionState(v2, v1);
  v5 = 0;
  if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control )
  {
    v3 = *((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( (v3 & 4) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      v5 = 1;
  }
  v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v7 = W32GetUserSessionState(v3, WPP_GLOBAL_Control);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(v7 + 69152),
      4,
      3,
      25,
      (__int64)&WPP_30f900ad07153b515057d0b02bb8d839_Traceguids);
  }
  v10 = *(_QWORD *)(W32GetUserGdiSessionState(v3) + 40);
  if ( PsGetCurrentProcess(v11) != v10 )
    return 3221225506LL;
  v15 = W32GetUserSessionState(v13, v12);
  v16 = *(void **)(UserSessionState + 68648);
  *(_DWORD *)(UserSessionState + 69044) = *(_QWORD *)(v15 + 13968) != gapulCvt_VK_84;
  ZwDeviceIoControlFile(v16, 0LL, 0LL, 0LL, &IoStatusBlock, 0x38080Fu, (PVOID)(UserSessionState + 69044), 4u, 0LL, 0);
  if ( *(_DWORD *)(W32GetUserSessionState(v18, v17) + 14208) )
  {
    OutputBuffer = *(void **)(W32GetUserSessionState(v20, v19) + 14056);
    InputBufferLength = *(_DWORD *)(W32GetUserSessionState(v23, v22) + 14208);
    v27 = W32GetUserSessionState(v26, v25);
    ZwDeviceIoControlFile(
      *(HANDLE *)(UserSessionState + 68648),
      0LL,
      0LL,
      0LL,
      &IoStatusBlock,
      0x380807u,
      *(PVOID *)(v27 + 14200),
      InputBufferLength,
      OutputBuffer,
      0);
  }
  xxxRemoteStopScreenUpdates(v20, v19);
  if ( *(_DWORD *)(UserSessionState + 68756) )
    bDrvDisconnect(
      *(_QWORD *)(UserSessionState + 68800),
      *(_QWORD *)(UserSessionState + 68792),
      *(_QWORD *)(UserSessionState + 68824));
  else
    GreDrvDisconnect(RemoteContext);
  return 0LL;
}
