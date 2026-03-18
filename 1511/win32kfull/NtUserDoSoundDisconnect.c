/*
 * XREFs of NtUserDoSoundDisconnect @ 0x1C0113710
 * Callers:
 *     <none>
 * Callees:
 *     PlaySoundDisconnect @ 0x1C0363318 (PlaySoundDisconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 NtUserDoSoundDisconnect()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v2; // ebx
  RPC_BINDING_HANDLE Binding; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 1LL);
  v1 = gPlaySoundRpcHandle;
  if ( gPlaySoundRpcHandle )
  {
    Binding = (RPC_BINDING_HANDLE)gPlaySoundRpcHandle;
    gPlaySoundRpcHandle = 0LL;
    UserSessionSwitchLeaveCrit(gPlaySoundRpcHandle, v0);
    v2 = PlaySoundDisconnect(&Binding);
    EnterCrit(0LL, 1LL);
  }
  else
  {
    v2 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v1, v0);
  return v2;
}
