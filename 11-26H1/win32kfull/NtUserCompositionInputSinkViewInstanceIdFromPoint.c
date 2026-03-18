/*
 * XREFs of NtUserCompositionInputSinkViewInstanceIdFromPoint @ 0x1401A0CE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1401A20C0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     RequestInputSinkInfoFromPoint @ 0x1401F7E04 (RequestInputSinkInfoFromPoint.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserCompositionInputSinkViewInstanceIdFromPoint(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v11; // [rsp+40h] [rbp-78h] BYREF
  __int64 ULong64FromUser; // [rsp+44h] [rbp-74h]
  int v13; // [rsp+4Ch] [rbp-6Ch]
  unsigned int v14; // [rsp+A8h] [rbp-10h]

  UserSessionState = W32GetUserSessionState(a1, a2);
  ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(UserSessionState + 18840));
  EnterCrit(0LL, 0LL);
  memset_0(&v11, 0, 0x70uLL);
  if ( (unsigned int)IsCurrentProcessDwm() )
  {
    v5 = 0;
    UserSetLastError(5);
  }
  else
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    v11 = 8;
    v13 = 0;
    v5 = RequestInputSinkInfoFromPoint(&v11);
    if ( v5 )
      RtlWriteULongToUser(a2, v14);
  }
  UserSessionSwitchLeaveCrit(v6);
  v9 = W32GetUserSessionState(v8, v7);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v9 + 18840));
  return v5;
}
